#include "dialogs.h"
#include "../../platform/input.h"
#include "fe_gl.h"
#include "mainwindow.h"
#include "state.h"
#include <QCheckBox>
#include <QComboBox>
#include <QDesktopServices>
#include <QDialogButtonBox>
#include <QDoubleSpinBox>
#include <QFileDialog>
#include <QFileInfo>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QPushButton>
#include <QSettings>
#include <QSlider>
#include <QStandardPaths>
#include <QTextBrowser>
#include <QUrl>
#include <QVBoxLayout>

static QDialogButtonBox *okCancel(QDialog *d) {
    auto *b = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel, d);
    QObject::connect(b, &QDialogButtonBox::accepted, d, &QDialog::accept);
    QObject::connect(b, &QDialogButtonBox::rejected, d, &QDialog::reject);
    return b;
}

static QLabel *note(const QString &t) {
    auto *l = new QLabel(t);
    l->setWordWrap(true);
    QFont f = l->font();
    f.setPointSizeF(f.pointSizeF() * 0.9);
    l->setFont(f);
    l->setStyleSheet(QStringLiteral("color: palette(mid);"));
    return l;
}

// ------------------------------------------------------------------ graphics
GraphicsDialog::GraphicsDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle(QStringLiteral("Graphics"));
    auto *form = new QFormLayout;
    renderScale_ = new QComboBox;
    for (int n = 1; n <= 4; n++) renderScale_->addItem(QStringLiteral("%1x  (top %2 x %3)").arg(n).arg(400 * n).arg(240 * n), n);
    renderScale_->setCurrentIndex(fe().renderScale - 1);
    form->addRow(QStringLiteral("Internal resolution:"), renderScale_);
    filter_ = new QComboBox;
    filter_->addItem(QStringLiteral("Nearest (sharp pixels)"));
    filter_->addItem(QStringLiteral("Linear (smooth)"));
    filter_->setCurrentIndex(fe().layout.linear_filter ? 1 : 0);
    form->addRow(QStringLiteral("Screen filtering:"), filter_);
    integer_ = new QCheckBox(QStringLiteral("Scale screens by whole multiples only (presets)"));
    integer_->setChecked(fe().layout.integer_scale);
    form->addRow(QString(), integer_);
    ratio_ = new QDoubleSpinBox;
    ratio_->setRange(1.5, 6.0);
    ratio_->setSingleStep(0.25);
    ratio_->setValue(fe().layout.large_ratio);
    ratio_->setSuffix(QStringLiteral(" x"));
    form->addRow(QStringLiteral("Large screen ratio:"), ratio_);
    vsync_ = new QCheckBox(QStringLiteral("Vertical sync (applies after restart)"));
    vsync_->setChecked(fe().settings->value(QStringLiteral("graphics/vsync"), true).toBool());
    form->addRow(QString(), vsync_);
    fps_ = new QCheckBox(QStringLiteral("Show frame rate in the window title"));
    fps_->setChecked(fe().showFps);
    form->addRow(QString(), fps_);
    auto *v = new QVBoxLayout(this);
    v->addLayout(form);
    v->addWidget(note(QStringLiteral("Renderer: %1\nThe large screen ratio sets the size of the big screen relative to the "
                                     "small one in the \"Large top + small bottom\" and \"Picture in picture\" layouts.")
                          .arg(QString::fromUtf8(fegl_renderer_string()))));
    v->addWidget(okCancel(this));
}

void GraphicsDialog::accept() {
    LayoutConfig &c = fe().layout;
    c.linear_filter = filter_->currentIndex() == 1;
    c.integer_scale = integer_->isChecked();
    c.large_ratio = (float)ratio_->value();
    fe().settings->setValue(QStringLiteral("graphics/vsync"), vsync_->isChecked());
    fe().showFps = fps_->isChecked();
    int rs = renderScale_->currentData().toInt();
    if (rs != fe().renderScale) fe().win->setRenderScale(rs);
    feLayoutChanged();
    QDialog::accept();
}

// ------------------------------------------------------------------ audio
AudioDialog::AudioDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle(QStringLiteral("Audio"));
    QSettings &st = *fe().settings;
    auto *form = new QFormLayout;
    auto *row = new QHBoxLayout;
    volume_ = new QSlider(Qt::Horizontal);
    volume_->setRange(0, 100);
    volume_->setValue(st.value(QStringLiteral("audio/volume"), 100).toInt());
    auto *val = new QLabel(QStringLiteral("%1%").arg(volume_->value()));
    val->setMinimumWidth(40);
    connect(volume_, &QSlider::valueChanged, val, [val](int v) { val->setText(QStringLiteral("%1%").arg(v)); });
    row->addWidget(volume_);
    row->addWidget(val);
    form->addRow(QStringLiteral("Volume:"), row);
    mute_ = new QCheckBox(QStringLiteral("Mute"));
    mute_->setChecked(st.value(QStringLiteral("audio/muted"), false).toBool());
    form->addRow(QString(), mute_);
    latency_ = new QComboBox;
    for (int ms : {16, 32, 48, 64, 96, 128}) latency_->addItem(QStringLiteral("%1 ms").arg(ms), ms);
    latency_->setCurrentIndex(qMax(0, latency_->findData(st.value(QStringLiteral("audio/latency"), 48).toInt())));
    form->addRow(QStringLiteral("Output latency:"), latency_);
    auto *v = new QVBoxLayout(this);
    v->addLayout(form);
    v->addWidget(note(QStringLiteral("The port has no audio output yet. These settings are stored and handed to the "
                                     "audio backend through fe_audio_settings() once it exists.")));
    v->addWidget(okCancel(this));
}

void AudioDialog::accept() {
    QSettings &st = *fe().settings;
    st.setValue(QStringLiteral("audio/volume"), volume_->value());
    st.setValue(QStringLiteral("audio/muted"), mute_->isChecked());
    st.setValue(QStringLiteral("audio/latency"), latency_->currentData().toInt());
    QDialog::accept();
}

// ------------------------------------------------------------------ paths
static QWidget *pathRow(QLineEdit *e, bool dir, QWidget *parent) {
    auto *w = new QWidget;
    auto *h = new QHBoxLayout(w);
    h->setContentsMargins(0, 0, 0, 0);
    h->addWidget(e, 1);
    auto *b = new QPushButton(QStringLiteral("Browse..."));
    QObject::connect(b, &QPushButton::clicked, parent, [e, dir, parent] {
        QString r = dir ? QFileDialog::getExistingDirectory(parent, QString(), e->text())
                        : QFileDialog::getOpenFileName(parent, QString(), QFileInfo(e->text()).absolutePath(),
                                                       QStringLiteral("3DS images (*.3ds *.cci *.cxi);;All files (*)"));
        if (!r.isEmpty()) e->setText(r);
    });
    h->addWidget(b);
    return w;
}

PathsDialog::PathsDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle(QStringLiteral("Paths"));
    setMinimumWidth(620);
    QSettings &st = *fe().settings;
    rom_ = new QLineEdit(st.value(QStringLiteral("rom/path"), QString::fromLocal8Bit(qgetenv("ALBW_ROM"))).toString());
    save_ = new QLineEdit(st.value(QStringLiteral("paths/saves")).toString());
    save_->setPlaceholderText(QStringLiteral("default: $ALBW_SAVE_DIR or ~/.local/share/albw-port/save"));
    shots_ = new QLineEdit(st.value(QStringLiteral("paths/screenshots"),
                                    QStandardPaths::writableLocation(QStandardPaths::PicturesLocation) +
                                        QStringLiteral("/albw-port")).toString());
    auto *form = new QFormLayout;
    form->addRow(QStringLiteral("ROM (decrypted .3ds):"), pathRow(rom_, false, this));
    form->addRow(QStringLiteral("Save folder:"), pathRow(save_, true, this));
    form->addRow(QStringLiteral("Screenshots:"), pathRow(shots_, true, this));
    QString cfgDir = QFileInfo(QString::fromUtf8(layout_default_path())).absolutePath();
    auto *open = new QPushButton(QStringLiteral("Open configuration folder"));
    connect(open, &QPushButton::clicked, this, [cfgDir] { QDesktopServices::openUrl(QUrl::fromLocalFile(cfgDir)); });
    auto *v = new QVBoxLayout(this);
    v->addLayout(form);
    v->addWidget(note(QStringLiteral("Configuration files:\n  screen layout: %1\n  controls: %2\n  frontend: %3\n"
                                     "  extra controller mappings: %4/gamecontrollerdb.txt\n"
                                     "ROM and save folder changes apply when the game restarts (Game > Reset). "
                                     "ALBW_ROM / ALBW_SAVE_DIR set in the environment take precedence.")
                          .arg(QString::fromUtf8(layout_default_path()), QString::fromUtf8(input_config_path()),
                               fe().settings->fileName(), cfgDir)));
    v->addWidget(open, 0, Qt::AlignLeft);
    v->addWidget(okCancel(this));
}

void PathsDialog::accept() {
    QSettings &st = *fe().settings;
    st.setValue(QStringLiteral("paths/saves"), save_->text().trimmed());
    st.setValue(QStringLiteral("paths/screenshots"), shots_->text().trimmed());
    QString rom = rom_->text().trimmed();
    QString old = st.value(QStringLiteral("rom/path")).toString();
    st.setValue(QStringLiteral("rom/path"), rom);
    QDialog::accept();
    if (rom != old && !rom.isEmpty() &&
        QMessageBox::question(parentWidget(), QStringLiteral("ROM changed"),
                              QStringLiteral("Restart with the new ROM now?")) == QMessageBox::Yes)
        fe().win->openRomPath(rom);
}

// ------------------------------------------------------------------ help
void showControlsHelp(QWidget *parent) {
    InputConfig *c = new InputConfig;
    input_get_config(c);
    QString rows;
    for (int a = 0; a < IN_ACTION_COUNT; a++)
        rows += QStringLiteral("<tr><td><b>%1</b></td><td>%2</td><td>%3</td></tr>")
                    .arg(QString::fromUtf8(input_action_name((InAction)a)),
                         QString::fromUtf8(c->key[a]).toHtmlEscaped(), QString::fromUtf8(c->pad.bind[a]).toHtmlEscaped());
    delete c;
    QString html = QStringLiteral(
        "<h3>Game controls</h3><p>Edit them in Options &gt; Controllers... (file: %1)</p>"
        "<table cellspacing=6><tr><th align=left>3DS</th><th align=left>Keyboard</th><th align=left>Gamepad</th></tr>%2</table>"
        "<p>Touch screen: left mouse button on the bottom screen, wherever it is placed.</p>"
        "<h3>Frontend</h3><table cellspacing=6>"
        "<tr><td><b>Esc</b></td><td>show / hide the menu bar (never reaches the game)</td></tr>"
        "<tr><td><b>F2 / Shift+F2</b></td><td>next / previous screen layout (separate windows: both / top only / "
        "bottom only)</td></tr>"
        "<tr><td><b>F5</b></td><td>separate windows (default: top and bottom screen each in its own window) / one "
        "joined window; the layouts and the editor arrange the joined window</td></tr>"
        "<tr><td><b>F3</b></td><td>custom layout editor: drag screens to move, drag corners or right-drag to resize, "
        "wheel to scale; Shift = free aspect, Alt = no snapping; right-click for options</td></tr>"
        "<tr><td><b>Ctrl + drag</b></td><td>move (left) / resize (right) a screen without opening the editor</td></tr>"
        "<tr><td><b>F4</b></td><td>swap the screens</td></tr>"
        "<tr><td><b>F11</b></td><td>fullscreen</td></tr><tr><td><b>F12</b></td><td>screenshot</td></tr>"
        "<tr><td><b>Ctrl+P / Ctrl+R</b></td><td>pause / reset</td></tr>"
        "<tr><td><b>Alt+1..5</b></td><td>window size 1x..5x</td></tr>"
        "<tr><td><b>Ctrl+O / Ctrl+Q</b></td><td>open ROM / quit</td></tr></table>")
                       .arg(QString::fromUtf8(input_config_path()).toHtmlEscaped(), rows);
    QDialog d(parent);
    d.setWindowTitle(QStringLiteral("Controls"));
    d.resize(640, 640);
    auto *v = new QVBoxLayout(&d);
    auto *t = new QTextBrowser;
    t->setHtml(html);
    v->addWidget(t);
    auto *b = new QDialogButtonBox(QDialogButtonBox::Close);
    QObject::connect(b, &QDialogButtonBox::rejected, &d, &QDialog::reject);
    v->addWidget(b);
    d.exec();
}

void showAbout(QWidget *parent) {
    QMessageBox::about(parent, QStringLiteral("About"),
                       QStringLiteral("<h3>The Legend of Zelda: A Link Between Worlds - native port</h3>"
                                      "<p>A native Linux build made only from the decompiled game code: no emulation. "
                                      "The game data comes from your own ROM and is never distributed.</p>"
                                      "<p>Qt %1 frontend, OpenGL 3.3 core.<br>%2</p>")
                           .arg(QString::fromUtf8(qVersion()), QString::fromUtf8(fegl_renderer_string()).toHtmlEscaped()));
}
