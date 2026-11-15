#pragma once
#include <QMainWindow>
#include <QVector>
#include <functional>

class QAction;
class QActionGroup;
class QMenu;
class ScreenView;

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    explicit MainWindow(ScreenView *view);
    void addLayoutActions(QMenu *m);      // presets + layout toggles (view context menu)
    void syncActions();                   // reflect FeState / layout config in the menus
    void updateTitle();
    void toggleMenuBar();
    void setMenuBarShown(bool on);
    void setPreset(int preset);
    void stepPreset(int dir);             // F2 / Shift+F2 (separate: both -> top only -> bottom only)
    // Separate windows (top screen here, bottom screen in its own window) or one joined window.
    // save: also make it the saved choice in layout.cfg (F5 / menu); start-up and tests pass false.
    void setSeparate(bool on, bool save);
    void activationChanged();             // this window or the bottom-screen window (de)activated
    void setEditing(bool on);
    void setWindowScale(int n);
    void setFullscreen(bool on);
    void setPaused(bool on);
    void setRenderScale(int n);
    QString takeScreenshot();             // returns the file written ("" on failure)
    void openRomPath(const QString &path);
    void saveSettings();
    void restoreGeometryFromSettings(int defaultScale);
    QMenu *viewMenu() const { return viewMenu_; }
    QMenu *layoutMenu() const { return layoutMenu_; }

protected:
    bool eventFilter(QObject *o, QEvent *e) override;
    void closeEvent(QCloseEvent *e) override;
    void changeEvent(QEvent *e) override;

private:
    void buildMenus();
    void rebuildRecent();
    void openRom();
    void applySeparateVisibility();
    void showMenuPopup();
    QAction *act(QMenu *m, const QString &text, const QKeySequence &key, std::function<void()> fn,
                 bool checkable = false);

    ScreenView *view_;
    QMenu *viewMenu_ = nullptr, *layoutMenu_ = nullptr, *recentMenu_ = nullptr;
    QVector<QAction *> presetActs_, renderScaleActs_;
    QActionGroup *presetGroup_ = nullptr;
    QAction *pauseAct_ = nullptr, *swapAct_ = nullptr, *editAct_ = nullptr, *keepAspectAct_ = nullptr,
            *snapAct_ = nullptr, *integerAct_ = nullptr, *nearestAct_ = nullptr, *linearAct_ = nullptr,
            *fullscreenAct_ = nullptr, *menuBarAct_ = nullptr, *focusPauseAct_ = nullptr, *fpsAct_ = nullptr,
            *separateAct_ = nullptr;
};
