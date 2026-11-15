#include "mainwindow.h"
#include "controllersdialog.h"
#include "dialogs.h"
#include "fe_gl.h"
#include "screenview.h"
#include "state.h"
#include <QActionGroup>
#include <QApplication>
#include <QCloseEvent>
#include <QDateTime>
#include <QDir>
#include <QFileDialog>
#include <QFileInfo>
#include <QKeyEvent>
#include <QMenuBar>
#include <QSettings>
#include <QScreen>
#include <QStandardPaths>
#include <QTimer>

MainWindow::MainWindow(ScreenView *view) : view_(view) {
    setCentralWidget(view_);
    buildMenus();
    menuBar()->hide();  // hidden during play; Esc shows it
    qApp->installEventFilter(this);
    syncActions();
}

QAction *MainWindow::act(QMenu *m, const QString &text, const QKeySequence &key, std::function<void()> fn,
                         bool checkable) {
    QAction *a = m->addAction(text);
    a->setCheckable(checkable);
    if (!key.isEmpty()) {
        a->setShortcut(key);
        a->setShortcutContext(Qt::WindowShortcut);
        addAction(a);  // shortcuts keep working while the menu bar is hidden
    }
    connect(a, &QAction::triggered, this, [fn] { fn(); });
    return a;
}

void MainWindow::buildMenus() {
    // ---- File
    QMenu *file = menuBar()->addMenu(QStringLiteral("&File"));
    act(file, QStringLiteral("&Open ROM..."), QKeySequence(Qt::CTRL | Qt::Key_O), [this] { openRom(); });
    recentMenu_ = file->addMenu(QStringLiteral("Open &Recent"));
    rebuildRecent();
    file->addSeparator();
    act(file, QStringLiteral("&Quit"), QKeySequence(Qt::CTRL | Qt::Key_Q), [this] { close(); });

    // ---- Game
    QMenu *game = menuBar()->addMenu(QStringLiteral("&Game"));
    pauseAct_ = act(game, QStringLiteral("&Pause"), QKeySequence(Qt::CTRL | Qt::Key_P),
                    [this] { setPaused(!fe().paused); }, true);
    act(game, QStringLiteral("&Reset"), QKeySequence(Qt::CTRL | Qt::Key_R), [] { feRequestReset(); });
    game->addSeparator();
    act(game, QStringLiteral("Take &Screenshot"), QKeySequence(Qt::Key_F12), [this] {
        QString f = takeScreenshot();
        feToast(f.isEmpty() ? QStringLiteral("Screenshot failed") : QStringLiteral("Saved %1").arg(f));
    });

    // ---- View
    viewMenu_ = menuBar()->addMenu(QStringLiteral("&View"));
    layoutMenu_ = viewMenu_->addMenu(QStringLiteral("Screen &Layout"));
    presetGroup_ = new QActionGroup(this);
    for (int p = 0; p < LAYOUT_PRESET_COUNT; p++) {
        QAction *a = layoutMenu_->addAction(QString::fromUtf8(layout_preset_name(p)));
        a->setCheckable(true);
        a->setActionGroup(presetGroup_);
        connect(a, &QAction::triggered, this, [this, p] { setPreset(p); });
        presetActs_.push_back(a);
        if (p == LAYOUT_CUSTOM - 1) layoutMenu_->addSeparator();
    }
    QAction *next = new QAction(QStringLiteral("Next layout"), this);
    next->setShortcut(Qt::Key_F2);
    connect(next, &QAction::triggered, this, [this] { stepPreset(1); });
    addAction(next);
    QAction *prev = new QAction(QStringLiteral("Previous layout"), this);
    prev->setShortcut(Qt::SHIFT | Qt::Key_F2);
    connect(prev, &QAction::triggered, this, [this] { stepPreset(-1); });
    addAction(prev);
    layoutMenu_->addSeparator();
    // separate: the top screen in this window, the bottom screen in its own; the presets above
    // arrange the joined window (separate: top/bottom only hide the other window)
    separateAct_ = act(layoutMenu_, QStringLiteral("Separate &Windows"), QKeySequence(Qt::Key_F5),
                       [this] { setSeparate(!fe().separate, true); }, true);
    layoutMenu_->addAction(next);
    swapAct_ = act(layoutMenu_, QStringLiteral("&Swap Screens"), QKeySequence(Qt::Key_F4), [] {
        if (fe().separate) {
            feToast(QStringLiteral("Swap applies to the joined window (F5 joins)"));
            return;
        }
        if (fe().layout.preset == LAYOUT_CUSTOM) fe().layout.custom_front ^= 1;
        else fe().layout.swap ^= 1;
        feLayoutChanged();
    }, true);
    layoutMenu_->addSeparator();
    editAct_ = act(layoutMenu_, QStringLiteral("&Edit Custom Layout"), QKeySequence(Qt::Key_F3),
                   [this] { setEditing(!fe().editing); }, true);
    keepAspectAct_ = act(layoutMenu_, QStringLiteral("Keep &Aspect Ratio (custom)"), {}, [] {
        fe().layout.keep_aspect ^= 1;
        feLayoutChanged();
    }, true);
    snapAct_ = act(layoutMenu_, QStringLiteral("S&nap While Editing"), {}, [] {
        fe().layout.snap ^= 1;
        feLayoutChanged();
    }, true);
    act(layoutMenu_, QStringLiteral("Reset Custom Layout"), {}, [] {
        LayoutConfig d;
        layout_defaults(&d);
        LayoutConfig &c = fe().layout;
        for (int s = 0; s < 2; s++) c.custom[s] = d.custom[s], c.custom_visible[s] = 1;
        c.custom_front = d.custom_front;
        feLayoutChanged();
    });

    QMenu *scale = viewMenu_->addMenu(QStringLiteral("Window &Size"));
    for (int n = 1; n <= 5; n++)
        act(scale, QStringLiteral("%1x").arg(n), QKeySequence(Qt::ALT | (Qt::Key_0 + n)), [this, n] { setWindowScale(n); });
    integerAct_ = act(viewMenu_, QStringLiteral("&Integer Scaling"), {}, [] {
        fe().layout.integer_scale ^= 1;
        feLayoutChanged();
    }, true);
    QMenu *filter = viewMenu_->addMenu(QStringLiteral("Screen &Filtering"));
    auto *fg = new QActionGroup(this);
    nearestAct_ = act(filter, QStringLiteral("&Nearest (sharp pixels)"), {}, [] {
        fe().layout.linear_filter = 0;
        feLayoutChanged();
    }, true);
    linearAct_ = act(filter, QStringLiteral("&Linear (smooth)"), {}, [] {
        fe().layout.linear_filter = 1;
        feLayoutChanged();
    }, true);
    nearestAct_->setActionGroup(fg);
    linearAct_->setActionGroup(fg);
    QMenu *rs = viewMenu_->addMenu(QStringLiteral("Internal &Resolution"));
    auto *rg = new QActionGroup(this);
    for (int n = 1; n <= 4; n++) {
        QAction *a = act(rs, QStringLiteral("%1x (%2 x %3 top)").arg(n).arg(400 * n).arg(240 * n), {},
                         [this, n] { setRenderScale(n); }, true);
        a->setActionGroup(rg);
        renderScaleActs_.push_back(a);
    }
    viewMenu_->addSeparator();
    fullscreenAct_ = act(viewMenu_, QStringLiteral("&Fullscreen"), QKeySequence(Qt::Key_F11),
                         [this] { setFullscreen(!isFullScreen()); }, true);
    menuBarAct_ = viewMenu_->addAction(QStringLiteral("Show &Menu Bar\tEsc"));
    menuBarAct_->setCheckable(true);
    connect(menuBarAct_, &QAction::triggered, this, [this] { toggleMenuBar(); });
    fpsAct_ = act(viewMenu_, QStringLiteral("Show FPS in &Title"), {}, [this] {
        fe().showFps = !fe().showFps;
        updateTitle();
    }, true);

    // ---- Options
    QMenu *opt = menuBar()->addMenu(QStringLiteral("&Options"));
    act(opt, QStringLiteral("&Controllers..."), {}, [this] {
        ControllersDialog d(this);
        d.exec();
    });
    act(opt, QStringLiteral("&Graphics..."), {}, [this] {
        GraphicsDialog d(this);
        d.exec();
    });
    act(opt, QStringLiteral("&Audio..."), {}, [this] {
        AudioDialog d(this);
        d.exec();
    });
    act(opt, QStringLiteral("&Paths..."), {}, [this] {
        PathsDialog d(this);
        d.exec();
    });
    opt->addSeparator();
    focusPauseAct_ = act(opt, QStringLiteral("Pause When &Inactive"), {}, [] {
        fe().pauseOnFocusLoss = !fe().pauseOnFocusLoss;
    }, true);

    // ---- Help
    QMenu *help = menuBar()->addMenu(QStringLiteral("&Help"));
    act(help, QStringLiteral("&Controls"), {}, [this] { showControlsHelp(this); });
    act(help, QStringLiteral("&About"), {}, [this] { showAbout(this); });
}

void MainWindow::addLayoutActions(QMenu *m) {
    m->addSection(QStringLiteral("Screen layout"));
    for (QAction *a : presetActs_) m->addAction(a);
    m->addSeparator();
    m->addAction(separateAct_);
    m->addAction(swapAct_);
    m->addAction(editAct_);
    m->addAction(keepAspectAct_);
    m->addAction(snapAct_);
    m->addSeparator();
    m->addAction(menuBarAct_);
}

void MainWindow::syncActions() {
    const LayoutConfig &c = fe().layout;
    for (int p = 0; p < presetActs_.size(); p++) presetActs_[p]->setChecked(p == c.preset);
    swapAct_->setText(c.preset == LAYOUT_CUSTOM ? QStringLiteral("&Swap Front Screen") : QStringLiteral("&Swap Screens"));
    swapAct_->setChecked(c.preset == LAYOUT_CUSTOM ? c.custom_front == LAYOUT_SCREEN_TOP : c.swap);
    editAct_->setChecked(fe().editing);
    separateAct_->setChecked(fe().separate);
    keepAspectAct_->setChecked(c.keep_aspect);
    snapAct_->setChecked(c.snap);
    integerAct_->setChecked(c.integer_scale);
    nearestAct_->setChecked(!c.linear_filter);
    linearAct_->setChecked(c.linear_filter);
    for (int i = 0; i < renderScaleActs_.size(); i++) renderScaleActs_[i]->setChecked(i + 1 == fe().renderScale);
    fullscreenAct_->setChecked(isFullScreen());
    menuBarAct_->setChecked(menuBar()->isVisible());
    pauseAct_->setChecked(fe().paused);
    pauseAct_->setText(fe().paused ? QStringLiteral("&Resume") : QStringLiteral("&Pause"));
    focusPauseAct_->setChecked(fe().pauseOnFocusLoss);
    fpsAct_->setChecked(fe().showFps);
}

void MainWindow::updateTitle() {
    QString f;
    if (fe().paused) f += QStringLiteral("  [Paused]");
    if (fe().editing) f += QStringLiteral("  [Layout editor]");
    if (fe().showFps) f += QStringLiteral("  %1 fps").arg(fe().fps, 0, 'f', 1);
    QString t = fe().title + (fe().separate ? QStringLiteral(" - Top") : QString()) + f;
    if (windowTitle() != t) setWindowTitle(t);
    if (ScreenView *b = fe().bottomView) {
        QString bt = fe().title + QStringLiteral(" - Bottom") + f;
        if (b->windowTitle() != bt) b->setWindowTitle(bt);
    }
}

void MainWindow::setMenuBarShown(bool on) {
    menuBar()->setVisible(on);
    menuBarAct_->setChecked(on);
    if (!on) view_->setFocus();
}

void MainWindow::toggleMenuBar() {
    ScreenView *b = fe().bottomView;
    if (!isVisible() && b) {   // separate, bottom screen only: this window (and its menu bar) is hidden
        showMenuPopup();
        return;
    }
    bool show = !menuBar()->isVisible();
    setMenuBarShown(show);
    if (show && b && b->isActiveWindow()) {  // Esc in the bottom window: the menus are up here
        raise();
        activateWindow();
    }
}

// the menu bar's menus as a popup over the bottom-screen window
void MainWindow::showMenuPopup() {
    ScreenView *b = fe().bottomView;
    if (!b) return;
    QMenu m(b);
    for (QAction *a : menuBar()->actions()) m.addAction(a);
    m.exec(b->mapToGlobal(QPoint(8, 8)));
}

void MainWindow::setPreset(int p) {
    FeState &s = fe();
    s.layout.preset = p;
    if (p != LAYOUT_TOP_ONLY && p != LAYOUT_BOTTOM_ONLY) s.lastTwoPreset = p;
    if (p != LAYOUT_CUSTOM && s.editing) s.editing = false;
    if (s.separate) applySeparateVisibility();
    feLayoutChanged();
    feToast(QStringLiteral("Layout: %1").arg(QString::fromUtf8(layout_preset_name(p))));
}

void MainWindow::stepPreset(int dir) {
    FeState &s = fe();
    if (!s.separate) {
        setPreset((s.layout.preset + dir + LAYOUT_PRESET_COUNT) % LAYOUT_PRESET_COUNT);
        return;
    }
    // separate: both windows -> top only -> bottom only; "both" restores the joined preset
    int p = s.layout.preset, idx = p == LAYOUT_TOP_ONLY ? 1 : p == LAYOUT_BOTTOM_ONLY ? 2 : 0;
    idx = (idx + (dir < 0 ? 2 : 1)) % 3;
    setPreset(idx == 1 ? LAYOUT_TOP_ONLY : idx == 2 ? LAYOUT_BOTTOM_ONLY : s.lastTwoPreset);
}

void MainWindow::applySeparateVisibility() {
    FeState &s = fe();
    ScreenView *b = s.bottomView;
    if (!s.separate || !b) {
        if (!isVisible()) show();
        return;
    }
    bool top = layout_separate_visible(&s.layout, LAYOUT_SCREEN_TOP);
    bool bot = layout_separate_visible(&s.layout, LAYOUT_SCREEN_BOTTOM);
    bool wasTop = isActiveWindow(), wasBot = b->isActiveWindow();
    if (top) show();
    if (bot) b->show();
    if (!top) hide();
    if (!bot) b->hide();
    // keep the keyboard in one of the two windows
    if (wasTop && !top) {
        b->raise();
        b->activateWindow();
    } else if (wasBot && !bot) {
        raise();
        activateWindow();
    }
}

void MainWindow::setSeparate(bool on, bool save) {
    FeState &s = fe();
    QSettings &st = *s.settings;
    bool wasSeparate = s.separate;
    if (on && !s.bottomView) {
        if (s.editing) {
            s.editing = false;
            layout_edit_end(&s.edit);
            view_->unsetCursor();
        }
        if (!wasSeparate && isVisible()) {   // runtime split: keep the joined window's geometry
            st.setValue(QStringLiteral("window/geometry"), saveGeometry());
            if (isFullScreen()) setFullscreen(false);
        }
        s.separate = true;
        view_->setScreen(LAYOUT_SCREEN_TOP);
        qreal d = view_->devicePixelRatioF();
        if (!wasSeparate && !restoreGeometry(st.value(QStringLiteral("window/topGeometry")).toByteArray())) {
            if (isMaximized()) showNormal();
            resize(size() - view_->size() + QSize(qRound(LAYOUT_TOP_W * s.defScale / d), qRound(LAYOUT_SCREEN_H * s.defScale / d)));
        }
        auto *b = new ScreenView;   // top-level: the bottom screen's window
        b->setScreen(LAYOUT_SCREEN_BOTTOM);
        b->addActions(actions());   // the F-key / Ctrl shortcuts work in that window too
        s.bottomView = b;
        if (!b->restoreGeometry(st.value(QStringLiteral("window/bottomGeometry")).toByteArray())) {
            b->resize(qRound(LAYOUT_BOTTOM_W * s.defScale / d), qRound(LAYOUT_SCREEN_H * s.defScale / d));
            // under this window, centred (or to its right if the screen has no room below);
            // ignored where the windowing system places windows itself (Wayland). The frame may
            // not be known yet (window manager still placing this window): assume a title bar.
            QRect g = geometry(), f = frameGeometry(), avail = screen() ? screen()->availableGeometry() : QRect();
            int titleH = g.top() - f.top() > 0 ? g.top() - f.top() : 32, below = f.bottom() - g.bottom();
            // (a window not shown yet is placed by its client area: leave room for its title bar)
            QPoint p(g.x() + (g.width() - b->width()) / 2, g.bottom() + 1 + below + titleH);
            if (avail.isValid() && p.y() + b->height() > avail.bottom() + 1) p = QPoint(f.right() + 1 + (g.left() - f.left()), g.top());
            b->move(p);
        }
    } else if (!on && wasSeparate) {
        if (s.bottomView) {
            st.setValue(QStringLiteral("window/topGeometry"), saveGeometry());
            st.setValue(QStringLiteral("window/bottomGeometry"), s.bottomView->saveGeometry());
            delete s.bottomView;    // its own GL context goes with it; fe_poll makes the game's current again
            s.bottomView = nullptr;
        }
        s.separate = false;
        view_->setScreen(-1);
        if (!restoreGeometry(st.value(QStringLiteral("window/geometry")).toByteArray())) {
            int cw, ch;
            layout_canvas_size(&s.layout, &cw, &ch);
            qreal d = view_->devicePixelRatioF();
            resize(size() - view_->size() + QSize(qRound(cw * s.defScale / d), qRound(ch * s.defScale / d)));
        }
    }
    applySeparateVisibility();
    if (save) s.layout.separate = s.separate;
    feLayoutChanged();
    if (save) feToast(s.separate ? QStringLiteral("Separate windows (F5 joins them)") : QStringLiteral("Joined window (F5 separates)"));
}

void MainWindow::activationChanged() {
    // deferred: while focus moves between our two windows, one is already inactive and the other
    // not yet active
    QTimer::singleShot(0, this, [this] {
        FeState &s = fe();
        bool active = isActiveWindow() || (s.bottomView && s.bottomView->isActiveWindow());
        if (!active && s.pauseOnFocusLoss && !s.paused && !QApplication::activeModalWidget()) {
            s.paused = s.pausedByFocus = true;
            syncActions();
            updateTitle();
            view_->refreshOverlay();
            if (s.bottomView) s.bottomView->refreshOverlay();
        } else if (active && s.pausedByFocus) {
            setPaused(false);
        }
    });
}

void MainWindow::setEditing(bool on) {
    FeState &s = fe();
    if (on && s.separate) setSeparate(false, true);   // the editor arranges the joined window
    s.editing = on;
    layout_edit_end(&s.edit);
    if (on) {
        Layout l = view_->currentLayout();
        layout_make_custom(&s.layout, &l);
    } else {
        view_->unsetCursor();
    }
    feLayoutChanged();
}

void MainWindow::setWindowScale(int n) {
    if (isFullScreen()) setFullscreen(false);
    if (isMaximized()) showNormal();
    if (ScreenView *b = fe().bottomView) {   // separate: each window n x its screen
        qreal d = view_->devicePixelRatioF();
        resize(size() - view_->size() + QSize(qRound(LAYOUT_TOP_W * n / d), qRound(LAYOUT_SCREEN_H * n / d)));
        if (b->isMaximized() || b->isFullScreen()) b->showNormal();
        b->resize(qRound(LAYOUT_BOTTOM_W * n / d), qRound(LAYOUT_SCREEN_H * n / d));
        return;
    }
    int cw, ch;
    layout_canvas_size(&fe().layout, &cw, &ch);
    qreal d = view_->devicePixelRatioF();
    QSize target(qRound(cw * n / d), qRound(ch * n / d));
    resize(size() - view_->size() + target);
}

void MainWindow::setFullscreen(bool on) {
    if (on) showFullScreen();
    else showNormal();
    fullscreenAct_->setChecked(on);
}

void MainWindow::setPaused(bool on) {
    fe().paused = on;
    fe().pausedByFocus = false;
    syncActions();
    updateTitle();
    view_->refreshOverlay();
    if (fe().bottomView) fe().bottomView->refreshOverlay();
}

void MainWindow::setRenderScale(int n) {
    fe().renderScale = n;
    view_->makeCurrent();
    fegl_set_render_scale(n);
    view_->update();
    syncActions();
    fe().settings->setValue(QStringLiteral("graphics/renderScale"), n);
    feToast(QStringLiteral("Internal resolution %1x").arg(n));
}

QString MainWindow::takeScreenshot() {
    QSettings &st = *fe().settings;
    QString dir = st.value(QStringLiteral("paths/screenshots"),
                           QStandardPaths::writableLocation(QStandardPaths::PicturesLocation) + QStringLiteral("/albw-port"))
                      .toString();
    QDir().mkpath(dir);
    QString f = dir + QStringLiteral("/albw_%1.png").arg(QDateTime::currentDateTime().toString(QStringLiteral("yyyyMMdd-HHmmss-zzz")));
    QImage img = view_->grabComposite();
    return !img.isNull() && img.save(f) ? f : QString();
}

void MainWindow::rebuildRecent() {
    recentMenu_->clear();
    QStringList recent = fe().settings->value(QStringLiteral("rom/recent")).toStringList();
    for (const QString &r : recent)
        recentMenu_->addAction(QFileInfo(r).fileName(), this, [this, r] { openRomPath(r); })->setToolTip(r);
    if (recent.isEmpty()) recentMenu_->addAction(QStringLiteral("(none)"))->setEnabled(false);
    recentMenu_->addSeparator();
    recentMenu_->addAction(QStringLiteral("Clear List"), this, [this] {
        fe().settings->remove(QStringLiteral("rom/recent"));
        rebuildRecent();
    });
    recentMenu_->setToolTipsVisible(true);
}

void MainWindow::openRom() {
    QString start = QFileInfo(QString::fromLocal8Bit(qgetenv("ALBW_ROM"))).absolutePath();
    QString f = QFileDialog::getOpenFileName(this, QStringLiteral("Open ROM (decrypted 3DS image)"), start,
                                             QStringLiteral("3DS images (*.3ds *.cci *.cxi);;All files (*)"));
    if (!f.isEmpty()) openRomPath(f);
}

void MainWindow::openRomPath(const QString &path) {
    QSettings &st = *fe().settings;
    QStringList recent = st.value(QStringLiteral("rom/recent")).toStringList();
    recent.removeAll(path);
    recent.prepend(path);
    while (recent.size() > 8) recent.removeLast();
    st.setValue(QStringLiteral("rom/recent"), recent);
    st.setValue(QStringLiteral("rom/path"), path);
    rebuildRecent();
    qputenv("ALBW_ROM", path.toLocal8Bit());
    // the game reads its ROM at start-up: restart the process with the new one
    FeResetFn fn = fe().resetFn;
    fe().resetFn = nullptr;
    feRequestReset();
    fe().resetFn = fn;
}

void MainWindow::saveSettings() {
    QSettings &st = *fe().settings;
    // joined and separate keep their own geometry (the top screen's window is this window)
    st.setValue(fe().separate ? QStringLiteral("window/topGeometry") : QStringLiteral("window/geometry"), saveGeometry());
    if (fe().bottomView) st.setValue(QStringLiteral("window/bottomGeometry"), fe().bottomView->saveGeometry());
    st.setValue(QStringLiteral("window/fullscreen"), isFullScreen());
    st.setValue(QStringLiteral("window/showFps"), fe().showFps);
    st.setValue(QStringLiteral("game/pauseOnFocusLoss"), fe().pauseOnFocusLoss);
    st.setValue(QStringLiteral("graphics/renderScale"), fe().renderScale);
    st.sync();
    feSaveLayout();
}

void MainWindow::restoreGeometryFromSettings(int defaultScale) {
    QSettings &st = *fe().settings;
    fe().showFps = st.value(QStringLiteral("window/showFps"), false).toBool();
    fe().pauseOnFocusLoss = st.value(QStringLiteral("game/pauseOnFocusLoss"), false).toBool();
    fe().defScale = defaultScale;
    bool sep = fe().separate;
    if (!restoreGeometry(st.value(sep ? QStringLiteral("window/topGeometry") : QStringLiteral("window/geometry")).toByteArray())) {
        int cw, ch;
        layout_canvas_size(&fe().layout, &cw, &ch);
        if (sep) cw = LAYOUT_TOP_W, ch = LAYOUT_SCREEN_H;
        resize(cw * defaultScale, ch * defaultScale);
        QRect avail = screen() ? screen()->availableGeometry() : QRect();
        int pairH = (2 * LAYOUT_SCREEN_H) * defaultScale + 2 * 32;   // two windows + typical title bars
        if (sep && avail.isValid() && pairH <= avail.height())   // first separate run: centre the pair
            move(avail.x() + (avail.width() - width()) / 2, avail.y() + (avail.height() - pairH) / 2);
    }
    syncActions();
}

bool MainWindow::eventFilter(QObject *o, QEvent *e) {
    if (e->type() == QEvent::KeyPress || e->type() == QEvent::KeyRelease) {
        auto *k = static_cast<QKeyEvent *>(e);
        bool ours = isActiveWindow() || (fe().bottomView && fe().bottomView->isActiveWindow());
        if (k->key() == Qt::Key_Escape && !QApplication::activePopupWidget() && !QApplication::activeModalWidget() &&
            ours) {
            // Esc toggles the menu bar and is never passed on to the game
            if (e->type() == QEvent::KeyPress && !k->isAutoRepeat()) toggleMenuBar();
            return true;
        }
    }
    return QMainWindow::eventFilter(o, e);
}

void MainWindow::closeEvent(QCloseEvent *e) {
    saveSettings();
    fe().quit = true;
    e->accept();
}

void MainWindow::changeEvent(QEvent *e) {
    QMainWindow::changeEvent(e);
    if (e->type() == QEvent::ActivationChange) {
        activationChanged();
    } else if (e->type() == QEvent::WindowStateChange) {
        if (fullscreenAct_) fullscreenAct_->setChecked(isFullScreen());
    }
}
