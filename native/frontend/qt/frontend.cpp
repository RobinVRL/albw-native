// Qt frontend: the C ABI of frontend.h (fe_*), the pumped main loop and frame pacing.
#include "frontend.h"
#include "fe_gl.h"
#include "controllersdialog.h"
#include "dialogs.h"
#include "fe_input.h"
#include "mainwindow.h"
#include "screenview.h"
#include "state.h"
#include <QApplication>
#include <QDir>
#include <QElapsedTimer>
#include <QFile>
#include <QKeyEvent>
#include <QMenu>
#include <QMenuBar>
#include <QOpenGLContext>
#include <QPainter>
#include <QSettings>
#include <QSurfaceFormat>
#include <QThread>
#include <clocale>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

static FeState g_state;
FeState &fe() { return g_state; }

uint64_t feNowNs() {
    timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (uint64_t)ts.tv_sec * 1000000000ull + (uint64_t)ts.tv_nsec;
}

void feSaveLayout() {
    if (layout_save(&g_state.layout, nullptr))
        std::fprintf(stderr, "frontend: cannot save %s\n", layout_default_path());
}

void feLayoutChanged() {
    FeState &s = g_state;
    feSaveLayout();
    if (s.view) {
        s.view->update();
        s.view->refreshOverlay();
    }
    if (s.bottomView) {
        s.bottomView->update();
        s.bottomView->refreshOverlay();
    }
    if (s.win) {
        s.win->syncActions();
        s.win->updateTitle();
    }
}

void feToast(const QString &t) {
    if (g_state.view) g_state.view->showToast(t);
}

void feRequestReset() {
    FeState &s = g_state;
    if (s.resetFn) {
        s.resetFn(s.resetUser);
        return;
    }
    // default: restart the process with the same command line (and the current environment)
    if (s.win) s.win->saveSettings();
    QFile f(QStringLiteral("/proc/self/cmdline"));
    QList<QByteArray> args;
    if (f.open(QIODevice::ReadOnly)) args = f.readAll().split('\0');
    while (!args.isEmpty() && args.last().isEmpty()) args.removeLast();
    std::vector<char *> argv;
    for (QByteArray &a : args) argv.push_back(a.data());
    argv.push_back(nullptr);
    std::fflush(nullptr);
    std::fprintf(stderr, "frontend: restarting (ALBW_ROM=%s)\n", qgetenv("ALBW_ROM").constData());
    execv("/proc/self/exe", argv.data());
    std::perror("frontend: execv");
}

// ------------------------------------------------------------------ scripted screenshots
// ALBW_FE_AUTOTEST=<dir>: drives the real UI (menus, layout editor with synthetic mouse drags,
// touch mapping, every preset), saves window grabs into <dir> and quits.
static void saveGrab(const QImage &img, const QString &name) {
    QString dir = QString::fromLocal8Bit(qgetenv("ALBW_FE_AUTOTEST"));
    QDir().mkpath(dir);
    QString f = dir + QLatin1Char('/') + name;
    std::fprintf(stderr, "autotest: %s %s (%dx%d)\n", img.save(f) ? "wrote" : "FAILED", qPrintable(f), img.width(),
                 img.height());
}

static QImage grabWindowWithMenus(MainWindow *w) {
    // popups are separate (Wayland: xdg_popup) windows a window grab does not contain: paint the
    // View menu and its Screen Layout submenu where Qt anchors them (menu bar item / menu item)
    QImage img = w->grab().toImage().convertToFormat(QImage::Format_ARGB32);
    QPainter p(&img);
    QMenu *vm = w->viewMenu(), *lm = w->layoutMenu();
    QPoint vpos = w->menuBar()->mapTo(w, w->menuBar()->actionGeometry(vm->menuAction()).bottomLeft());
    QPixmap vpix = vm->grab();
    p.drawPixmap(vpos, vpix);
    QPoint lpos = vpos + vm->actionGeometry(lm->menuAction()).topRight() + QPoint(-2, -4);
    p.drawPixmap(lpos, lm->grab());
    return img;
}

static void autotestStep(int f) {
    FeState &s = g_state;
    MainWindow *w = s.win;
    ScreenView *v = s.view;
    auto layoutNow = [v] { return v->currentLayout(); };
    auto centre = [v](const Layout &l, int sc) {
        return QPointF((l.r[sc].x + l.r[sc].w / 2) / v->dpr(), (l.r[sc].y + l.r[sc].h / 2) / v->dpr());
    };
    auto corner = [v](const Layout &l, int sc, int c) {
        return QPointF((c & 1 ? l.r[sc].x + l.r[sc].w - 2 : l.r[sc].x + 2) / v->dpr(),
                       (c & 2 ? l.r[sc].y + l.r[sc].h - 2 : l.r[sc].y + 2) / v->dpr());
    };
    static QPointF p0, p1;
    // drag helper: frames [a, a+n] move from p0 to p1, press at a, release at a+n+1 (unless hold)
    auto drag = [&](int a, int n, Qt::MouseButton b, bool hold) {
        if (f == a) v->simulateMouse(QEvent::MouseButtonPress, p0, b);
        if (f > a && f <= a + n) v->simulateMouse(QEvent::MouseMove, p0 + (p1 - p0) * ((f - a) / double(n)), b);
        if (!hold && f == a + n + 1) v->simulateMouse(QEvent::MouseButtonRelease, p1, b);
    };
    switch (f) {
    case 3:
        w->setSeparate(false, false);   // the steps below test the joined window's layouts
        break;
    case 5:
        s.layout.preset = LAYOUT_DEFAULT;
        s.layout.swap = 0;
        feLayoutChanged();
        w->setWindowScale(2);
        break;
    case 40: {  // menu bar + View menu + Screen Layout submenu
        w->setMenuBarShown(true);
        QMenuBar *mb = w->menuBar();
        mb->setActiveAction(w->viewMenu()->menuAction());
        break;
    }
    case 50: {
        QMenu *vm = w->viewMenu(), *lm = w->layoutMenu();
        if (!vm->isVisible())
            vm->popup(w->menuBar()->mapToGlobal(w->menuBar()->actionGeometry(vm->menuAction()).bottomLeft()));
        vm->setActiveAction(lm->menuAction());
        if (!lm->isVisible()) lm->popup(vm->mapToGlobal(vm->actionGeometry(lm->menuAction()).topRight()));
        lm->setActiveAction(lm->actions().value(LAYOUT_PIP));
        break;
    }
    case 70:
        saveGrab(grabWindowWithMenus(w), QStringLiteral("01_menu_view_layout.png"));
        break;
    case 75:
        w->layoutMenu()->hide();
        w->viewMenu()->hide();
        w->menuBar()->setActiveAction(nullptr);
        break;
    case 80:
        saveGrab(w->grab().toImage(), QStringLiteral("02_menubar_shown.png"));
        w->setMenuBarShown(false);
        break;
    case 90:
        w->setEditing(true);
        break;
    default:
        break;
    }
    // A: shrink the top screen from its bottom-right corner to 70% width (frames 95..116)
    if (f == 95) {
        Layout l = layoutNow();
        p0 = corner(l, LAYOUT_SCREEN_TOP, 3);
        p1 = p0 - QPointF(l.r[0].w * 0.30 / v->dpr(), 0);
    }
    if (f >= 95 && f <= 116) drag(95, 20, Qt::LeftButton, false);
    // B: right-drag resize of the bottom screen to 240 px wide (frames 120..141)
    if (f == 120) {
        Layout l = layoutNow();
        p0 = corner(l, LAYOUT_SCREEN_BOTTOM, 3) - QPointF(6, 6);
        p1 = QPointF((l.r[1].x + (l.ww - l.r[0].w)) / v->dpr(), (l.r[1].y + (l.ww - l.r[0].w) * 0.75f) / v->dpr());
    }
    if (f >= 120 && f <= 141) drag(120, 20, Qt::RightButton, false);
    // C: move the bottom screen next to the top screen; held mid-drag (snapped, guides shown)
    if (f == 145) {
        Layout l = layoutNow();
        p0 = centre(l, LAYOUT_SCREEN_BOTTOM);
        p1 = p0 + QPointF((l.r[0].x + l.r[0].w + 4 - l.r[1].x) / v->dpr(), (l.r[0].y + 5 - l.r[1].y) / v->dpr());
    }
    if (f >= 145 && f <= 166) drag(145, 20, Qt::LeftButton, true);
    if (f == 172) saveGrab(w->grab().toImage(), QStringLiteral("03_layout_editor_dragging.png"));
    if (f == 175) v->simulateMouse(QEvent::MouseButtonRelease, p1, Qt::LeftButton);
    if (f == 182) saveGrab(w->grab().toImage(), QStringLiteral("04_layout_editor_idle.png"));
    if (f == 186) w->setEditing(false);
    // D: touch on the moved bottom screen: native centre must map to (160, 120)
    if (f == 190) {
        Layout l = layoutNow();
        p0 = centre(l, LAYOUT_SCREEN_BOTTOM);
        v->simulateMouse(QEvent::MouseButtonPress, p0, Qt::LeftButton);
    }
    if (f == 192) {
        int t, tx, ty;
        fein_touch_state(&t, &tx, &ty);
        std::fprintf(stderr, "autotest: touch at bottom-screen centre -> touch=%d (%d, %d) [expect 1 (160, 120)]\n",
                     t, tx, ty);
        v->simulateMouse(QEvent::MouseButtonRelease, p0, Qt::LeftButton);
        saveGrab(w->grab().toImage(), QStringLiteral("05_custom_layout_result.png"));
    }
    // Esc: toggles the menu bar and never reaches the game (input.cfg's default QUIT is Escape:
    // if the game saw it, the program would quit here)
    if (f == 20 || f == 24) {
        QKeyEvent press(QEvent::KeyPress, Qt::Key_Escape, Qt::NoModifier, 9, 0, 0);
        QKeyEvent release(QEvent::KeyRelease, Qt::Key_Escape, Qt::NoModifier, 9, 0, 0);
        QCoreApplication::sendEvent(v, &press);
        QCoreApplication::sendEvent(v, &release);
    }
    if (f == 22 || f == 26)
        std::fprintf(stderr, "autotest: Esc -> menu bar %s [expect %s], quit=%d [expect 0]\n",
                     w->menuBar()->isVisible() ? "shown" : "hidden", f == 22 ? "shown" : "hidden", (int)s.quit);
    // dialogs (shown modeless for the grab)
    static QDialog *dlg;
    const int D = 215 + LAYOUT_CUSTOM * 12 + 20;
    for (int k = 0; k < 4; k++) {
        if (f == D + k * 12) {
            dlg = k == 0 ? (QDialog *)new ControllersDialog(w) : k == 1 ? (QDialog *)new GraphicsDialog(w)
                : k == 2 ? (QDialog *)new AudioDialog(w) : (QDialog *)new PathsDialog(w);
            dlg->show();
        }
        if (f == D + k * 12 + 8) {
            static const char *const names[] = {"06_dialog_controllers.png", "07_dialog_graphics.png",
                                                "08_dialog_audio.png", "09_dialog_paths.png"};
            saveGrab(dlg->grab().toImage(), QString::fromUtf8(names[k]));
            dlg->reject();
            dlg->deleteLater();
            dlg = nullptr;
        }
    }
    // F: every preset
    for (int p = 0; p < LAYOUT_CUSTOM; p++) {
        if (f == 215 + p * 12) w->setPreset(p);
        if (f == 215 + p * 12 + 8)
            saveGrab(v->grabComposite(), QStringLiteral("10_preset_%1.png").arg(QString::fromUtf8(layout_preset_key(p))));
    }
    if (f == 215 + LAYOUT_CUSTOM * 12) {
        s.layout.preset = LAYOUT_LARGE_TOP;
        s.layout.swap = 1;
        feLayoutChanged();
    }
    if (f == 215 + LAYOUT_CUSTOM * 12 + 8) saveGrab(v->grabComposite(), QStringLiteral("11_preset_large_swapped.png"));
    // G: separate windows: each window grabbed, touch at the bottom window's centre -> (160, 120)
    if (f == D + 50) {
        s.layout.swap = 0;
        s.layout.preset = LAYOUT_DEFAULT;
        w->setSeparate(true, false);
    }
    if (f == D + 60) {
        saveGrab(v->grabComposite(), QStringLiteral("12_separate_top.png"));
        if (s.bottomView) saveGrab(s.bottomView->grabComposite(), QStringLiteral("13_separate_bottom.png"));
    }
    if (f == D + 62 && s.bottomView) {
        ScreenView *b = s.bottomView;
        b->simulateMouse(QEvent::MouseButtonPress, QPointF(b->width() / 2.0, b->height() / 2.0), Qt::LeftButton);
    }
    if (f == D + 64 && s.bottomView) {
        int t, tx, ty;
        fein_touch_state(&t, &tx, &ty);
        std::fprintf(stderr, "autotest: separate: touch at bottom-window centre -> touch=%d (%d, %d) [expect 1 (160, 120)]\n",
                     t, tx, ty);
        ScreenView *b = s.bottomView;
        b->simulateMouse(QEvent::MouseButtonRelease, QPointF(b->width() / 2.0, b->height() / 2.0), Qt::LeftButton);
        v->simulateMouse(QEvent::MouseButtonPress, QPointF(v->width() / 2.0, v->height() / 2.0), Qt::LeftButton);
    }
    if (f == D + 66) {
        int t, tx, ty;
        fein_touch_state(&t, &tx, &ty);
        std::fprintf(stderr, "autotest: separate: press in the top window -> touch=%d [expect 0]\n", t);
        v->simulateMouse(QEvent::MouseButtonRelease, QPointF(v->width() / 2.0, v->height() / 2.0), Qt::LeftButton);
        w->setSeparate(false, false);
    }
    if (f == D + 72) {
        s.layout.swap = 0;
        s.layout.preset = LAYOUT_CUSTOM;
        feLayoutChanged();
        std::fprintf(stderr, "autotest: done\n");
        s.quit = true;
    }
}

// ------------------------------------------------------------------ C ABI
static QSettings *openSettings() {
    // ~/.config/albw-port/qt-frontend.conf (follows XDG_CONFIG_HOME)
    return new QSettings(QSettings::IniFormat, QSettings::UserScope, QStringLiteral("albw-port"),
                         QStringLiteral("qt-frontend"));
}

extern "C" void fe_prepare(int *argc, char **argv) {
    FeState &s = g_state;
    if (s.app) return;
    static int s_argc = 1;
    static char s_name[] = "albw";
    static char *s_argv[] = {s_name, nullptr};
    if (argc && argv) {
        s_argc = *argc;
        s.argv = argv;
    } else {
        s.argv = s_argv;
    }
    s.argc = s_argc;
    s.settings = openSettings();
    s.vsync = s.settings->value(QStringLiteral("graphics/vsync"), true).toBool();

    QSurfaceFormat fmt;
    fmt.setRenderableType(QSurfaceFormat::OpenGL);
    fmt.setVersion(3, 3);
    fmt.setProfile(QSurfaceFormat::CoreProfile);
    fmt.setSwapInterval(s.vsync ? 1 : 0);
    if (qEnvironmentVariableIsSet("ALBW_GL_DEBUG")) fmt.setOption(QSurfaceFormat::DebugContext);
    QSurfaceFormat::setDefaultFormat(fmt);
    // separate windows: the bottom screen's view (its own QOpenGLWidget context) samples the
    // screen textures the game renders in the main view's context
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
    QCoreApplication::setOrganizationName(QStringLiteral("albw-port"));
    QCoreApplication::setApplicationName(QStringLiteral("qt-frontend"));
    s.app = new QApplication(s_argc, s.argv);
    std::setlocale(LC_NUMERIC, "C");  // C code formats numbers; Qt set the user locale

    // saved paths -> environment, unless the environment already says otherwise
    QString rom = s.settings->value(QStringLiteral("rom/path")).toString();
    if (qEnvironmentVariableIsEmpty("ALBW_ROM") && !rom.isEmpty()) qputenv("ALBW_ROM", rom.toLocal8Bit());
    QString saves = s.settings->value(QStringLiteral("paths/saves")).toString();
    if (qEnvironmentVariableIsEmpty("ALBW_SAVE_DIR") && !saves.isEmpty()) qputenv("ALBW_SAVE_DIR", saves.toLocal8Bit());
    layout_load(&s.layout, nullptr);
    s.separate = s.layout.separate;
    QByteArray wm = qgetenv("ALBW_WINDOWS");   // for this run only (layout.cfg keeps its choice)
    if (!wm.isEmpty()) {
        int v = layout_windows_from_key(wm.constData());
        if (v >= 0) s.separate = v;
        else std::fprintf(stderr, "ALBW_WINDOWS=%s: expected separate or joined\n", wm.constData());
    }
    if (s.layout.preset != LAYOUT_TOP_ONLY && s.layout.preset != LAYOUT_BOTTOM_ONLY) s.lastTwoPreset = s.layout.preset;
}

extern "C" int fe_init(const char *title, const FeConfig *cfg) {
    FeState &s = g_state;
    fe_prepare(nullptr, nullptr);
    if (s.win) return 0;
    s.title = QString::fromUtf8(title ? title : "ALBW");
    int defScale = cfg && cfg->scale > 0 ? cfg->scale : 2;
    int defRs = cfg && cfg->render_scale > 0 ? cfg->render_scale : 1;
    s.renderScale = qBound(1, s.settings->value(QStringLiteral("graphics/renderScale"), defRs).toInt(), 4);
    fein_init();

    s.view = new ScreenView;
    if (s.separate) s.view->setScreen(LAYOUT_SCREEN_TOP);
    s.win = new MainWindow(s.view);
    s.win->restoreGeometryFromSettings(defScale);
    s.win->updateTitle();
    if (s.settings->value(QStringLiteral("window/fullscreen"), false).toBool()) s.win->showFullScreen();
    else s.win->show();
    QElapsedTimer t;
    t.start();
    while (!s.glReady && t.elapsed() < 4000) s.app->processEvents(QEventLoop::AllEvents, 20);
    if (!s.glReady) s.view->grabFramebuffer();  // forces initializeGL if the window was not exposed yet
    if (!s.glReady) {
        std::fprintf(stderr, "frontend: OpenGL initialisation failed\n");
        return -1;
    }
    if (s.separate) s.win->setSeparate(true, false);   // the bottom screen's window
    s.view->makeCurrent();
    s.view->setFocus();
    s.win->syncActions();
    feToast(QStringLiteral("Esc: menu    F2: layouts    F3: edit layout    F5: join/separate windows    F11: fullscreen"));
    s.nextFrameNs = feNowNs();
    return 0;
}

extern "C" void fe_shutdown(void) {
    FeState &s = g_state;
    if (!s.app) return;
    if (s.win) {
        s.win->saveSettings();
        delete s.bottomView;  // separate windows: a top-level window of its own
        s.bottomView = nullptr;
        delete s.win;  // deletes the view and its GL context
        s.win = nullptr;
        s.view = nullptr;
    }
    fein_shutdown();
    s.settings->sync();
    delete s.settings;
    s.settings = nullptr;
    delete s.app;
    s.app = nullptr;
}

static void makeCurrentAndRebind() {
    FeState &s = g_state;
    if (!s.view) return;
    if (QOpenGLContext::currentContext() != s.view->context()) s.view->makeCurrent();
    fegl_rebind();
}

static int handleInputFlags() {
    FeState &s = g_state;
    int f = fein_update();
    if (f & 1) s.quit = true;
    if ((f & 2) && s.win) s.win->toggleMenuBar();
    return f;
}

extern "C" int fe_poll(void) {
    FeState &s = g_state;
    if (!s.app) return 0;
    s.app->processEvents(QEventLoop::AllEvents);
    fein_pump();
    handleInputFlags();
    if (s.paused && !s.quit) {
        while (s.paused && !s.quit) {
            s.app->processEvents(QEventLoop::AllEvents, 10);
            fein_pump();
            handleInputFlags();
            QThread::msleep(8);
        }
        s.nextFrameNs = feNowNs();
    }
    makeCurrentAndRebind();
    return !s.quit;
}

extern "C" const struct PlatInput *fe_input(void) { return fein_state(); }

extern "C" void fe_begin_screen(int screen) {
    makeCurrentAndRebind();
    fegl_begin_screen(screen < 0 ? 0 : screen > 1 ? 1 : screen);
}

extern "C" void fe_screen_size(int screen, int *w, int *h) { fegl_screen_size(screen < 0 ? 0 : screen > 1 ? 1 : screen, w, h); }

extern "C" void fe_end_frame(void) {
    FeState &s = g_state;
    if (!s.view) return;
    s.frame++;
    static uint64_t fpsT0;
    static int fpsN;
    uint64_t now = feNowNs();
    if (!fpsT0) fpsT0 = now;
    if (++fpsN == 30) {
        s.fps = 30e9 / double(now - fpsT0 ? now - fpsT0 : 1);
        fpsT0 = now;
        fpsN = 0;
        if (s.showFps) s.win->updateTitle();
    }
    // composite now (paintGL), then Qt presents the window(s); the bottom screen's window first
    if (s.bottomView && s.bottomView->isVisible()) s.bottomView->repaint();
    s.view->repaint();
    if (qEnvironmentVariableIsSet("ALBW_FE_AUTOTEST")) autotestStep(s.frame);
    makeCurrentAndRebind();

    // 60 Hz pacing (on top of vsync, which may run at a different refresh rate)
    s.nextFrameNs += 16666667ull;
    now = feNowNs();
    if (s.nextFrameNs > now) {
        uint64_t d = s.nextFrameNs - now;
        timespec ts = {(time_t)(d / 1000000000ull), (long)(d % 1000000000ull)};
        nanosleep(&ts, nullptr);
    } else if (now - s.nextFrameNs > 100000000ull) {
        s.nextFrameNs = now;
    }
}

extern "C" uint64_t fe_ticks_ns(void) { return feNowNs(); }

extern "C" void *fe_gl_get_proc(const char *name) {
    QOpenGLContext *c = QOpenGLContext::currentContext();
    if (!c && g_state.view) c = g_state.view->context();
    return c ? reinterpret_cast<void *>(c->getProcAddress(name)) : nullptr;
}

extern "C" int fe_paused(void) { return g_state.paused; }
extern "C" void fe_set_paused(int p) {
    if (g_state.win) g_state.win->setPaused(p != 0);
    else g_state.paused = p != 0;
}

extern "C" const char *fe_rom_path(void) {
    static QByteArray rom;
    rom = qgetenv("ALBW_ROM");
    return rom.constData();
}

extern "C" void fe_set_status(const char *text) {
    g_state.status = QString::fromUtf8(text ? text : "");
    if (g_state.view) g_state.view->refreshOverlay();
}

extern "C" void fe_audio_settings(int *volume, int *muted, int *latency) {
    QSettings *st = g_state.settings;
    if (volume) *volume = st ? st->value(QStringLiteral("audio/volume"), 100).toInt() : 100;
    if (muted) *muted = st ? st->value(QStringLiteral("audio/muted"), false).toBool() : 0;
    if (latency) *latency = st ? st->value(QStringLiteral("audio/latency"), 48).toInt() : 48;
}

extern "C" void fe_set_reset_handler(FeResetFn fn, void *user) {
    g_state.resetFn = fn;
    g_state.resetUser = user;
}
