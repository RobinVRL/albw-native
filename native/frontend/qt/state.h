// Qt frontend: process-wide state shared by the C ABI (frontend.cpp), the main window and the view.
#pragma once
#include <QString>
#include <cstdint>
#include "../../platform/layout.h"
#include "frontend.h"

class QApplication;
class QSettings;
class MainWindow;
class ScreenView;

struct FeState {
    QApplication *app = nullptr;
    QSettings *settings = nullptr;
    MainWindow *win = nullptr;
    ScreenView *view = nullptr;
    QString title;

    LayoutConfig layout{};       // layout.cfg (shared with the SDL backend)
    bool editing = false;        // custom layout editor active
    LayoutEdit edit{};           // drag in progress

    bool paused = false, quit = false, glReady = false, pauseOnFocusLoss = false, showFps = false;
    bool pausedByFocus = false;
    uint64_t nextFrameNs = 0;
    int frame = 0;
    double fps = 0;
    QString status;
    FeResetFn resetFn = nullptr;
    void *resetUser = nullptr;
    int renderScale = 1;
    int vsync = 1;
    int argc = 0;
    char **argv = nullptr;
};

FeState &fe();
void feSaveLayout();            // write layout.cfg
void feLayoutChanged();         // save + refresh view, menus, title
void feToast(const QString &text);
void feRequestReset();
uint64_t feNowNs();
