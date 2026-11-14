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
#include <QStandardPaths>

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
    connect(next, &QAction::triggered, this, [this] { setPreset((fe().layout.preset + 1) % LAYOUT_PRESET_COUNT); });
    addAction(next);
    QAction *prev = new QAction(QStringLiteral("Previous layout"), this);
    prev->setShortcut(Qt::SHIFT | Qt::Key_F2);
    connect(prev, &QAction::triggered, this,
            [this] { setPreset((fe().layout.preset + LAYOUT_PRESET_COUNT - 1) % LAYOUT_PRESET_COUNT); });
    addAction(prev);
    layoutMenu_->addSeparator();
    layoutMenu_->addAction(next);
    swapAct_ = act(layoutMenu_, QStringLiteral("&Swap Screens"), QKeySequence(Qt::Key_F4), [] {
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
    QString t = fe().title;
    if (fe().paused) t += QStringLiteral("  [Paused]");
    if (fe().editing) t += QStringLiteral("  [Layout editor]");
    if (fe().showFps) t += QStringLiteral("  %1 fps").arg(fe().fps, 0, 'f', 1);
    if (windowTitle() != t) setWindowTitle(t);
}

void MainWindow::setMenuBarShown(bool on) {
    menuBar()->setVisible(on);
    menuBarAct_->setChecked(on);
    if (!on) view_->setFocus();
}

void MainWindow::toggleMenuBar() { setMenuBarShown(!menuBar()->isVisible()); }

void MainWindow::setPreset(int p) {
    fe().layout.preset = p;
    if (p != LAYOUT_CUSTOM && fe().editing) fe().editing = false;
    feLayoutChanged();
    feToast(QStringLiteral("Layout: %1").arg(QString::fromUtf8(layout_preset_name(p))));
}

void MainWindow::setEditing(bool on) {
    FeState &s = fe();
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
    st.setValue(QStringLiteral("window/geometry"), saveGeometry());
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
    if (!restoreGeometry(st.value(QStringLiteral("window/geometry")).toByteArray())) {
        int cw, ch;
        layout_canvas_size(&fe().layout, &cw, &ch);
        resize(cw * defaultScale, ch * defaultScale);
    }
    syncActions();
}

bool MainWindow::eventFilter(QObject *o, QEvent *e) {
    if (e->type() == QEvent::KeyPress || e->type() == QEvent::KeyRelease) {
        auto *k = static_cast<QKeyEvent *>(e);
        if (k->key() == Qt::Key_Escape && !QApplication::activePopupWidget() && !QApplication::activeModalWidget() &&
            isActiveWindow()) {
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
        FeState &s = fe();
        if (!isActiveWindow() && s.pauseOnFocusLoss && !s.paused && !QApplication::activeModalWidget()) {
            s.paused = s.pausedByFocus = true;
            syncActions();
            updateTitle();
            view_->refreshOverlay();
        } else if (isActiveWindow() && s.pausedByFocus) {
            setPaused(false);
        }
    } else if (e->type() == QEvent::WindowStateChange) {
        if (fullscreenAct_) fullscreenAct_->setChecked(isFullScreen());
    }
}
