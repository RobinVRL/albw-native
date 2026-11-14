#pragma once
#include <QDialog>

class QCheckBox;
class QComboBox;
class QDoubleSpinBox;
class QLineEdit;
class QSlider;
class QSpinBox;

class GraphicsDialog : public QDialog {
    Q_OBJECT
public:
    explicit GraphicsDialog(QWidget *parent);
    void accept() override;
private:
    QComboBox *renderScale_, *filter_;
    QCheckBox *integer_, *vsync_, *fps_;
    QDoubleSpinBox *ratio_;
};

class AudioDialog : public QDialog {
    Q_OBJECT
public:
    explicit AudioDialog(QWidget *parent);
    void accept() override;
private:
    QSlider *volume_;
    QCheckBox *mute_;
    QComboBox *latency_;
};

class PathsDialog : public QDialog {
    Q_OBJECT
public:
    explicit PathsDialog(QWidget *parent);
    void accept() override;
private:
    QLineEdit *rom_, *save_, *shots_;
};

void showControlsHelp(QWidget *parent);
void showAbout(QWidget *parent);
