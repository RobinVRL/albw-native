// Options > Controllers...: edits input.cfg through the native/platform/input.h API
// (input_get_config / input_check_binding / input_set_config / input_save), with "press a key /
// button" capture, per-controller overrides and the list of connected controllers.
#pragma once
#include <QDialog>
#include <QSet>
#include "../../platform/input.h"

class QCheckBox;
class QComboBox;
class QLabel;
class QLineEdit;
class QSpinBox;
class QTableWidget;
class QTimer;
class QTreeWidget;

class ControllersDialog : public QDialog {
    Q_OBJECT
public:
    explicit ControllersDialog(QWidget *parent);
    ~ControllersDialog() override;
    void accept() override;
    void reject() override;

protected:
    bool eventFilter(QObject *o, QEvent *e) override;

private:
    QWidget *buildKeyboardTab();
    QWidget *buildGamepadTab();
    QWidget *buildGeneralTab();
    QTableWidget *makeTable(bool keyboard);
    void loadAll();                      // cfg_ -> widgets
    void loadProfile();                  // current pad profile -> widgets
    void storeProfile();                 // widgets -> current pad profile
    void validateRow(QTableWidget *t, int row);
    void startCapture(QTableWidget *t, int row, bool append);
    void finishCapture(const QString &element);
    void cancelCapture();
    void poll();                         // SDL events, gamepad capture, controller list
    void refreshControllers();
    void refreshProfiles();
    bool apply();
    InputPadProfile *profile();

    InputConfig cfg_{};
    int profileIndex_ = -1;              // -1 = [gamepad], else overrides[i]
    bool loading_ = false;

    QTableWidget *keys_ = nullptr, *pads_ = nullptr;
    QComboBox *profileBox_ = nullptr, *layout_ = nullptr, *cpad_ = nullptr, *cstick_ = nullptr;
    QSpinBox *dz_ = nullptr, *cdz_ = nullptr, *outer_ = nullptr, *trig_ = nullptr;
    QComboBox *multi_ = nullptr;
    QCheckBox *motion_ = nullptr, *fallback_ = nullptr;
    QLineEdit *fallbackMap_ = nullptr;
    QTreeWidget *devices_ = nullptr;
    QLabel *status_ = nullptr;
    QTimer *timer_ = nullptr;

    QTableWidget *capTable_ = nullptr;
    int capRow_ = -1;
    bool capAppend_ = false;
    QSet<int> capHeld_;                  // scancodes held during keyboard capture
    int capModifierOnly_ = 0;
};
