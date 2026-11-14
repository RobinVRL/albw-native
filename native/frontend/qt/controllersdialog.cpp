#include "controllersdialog.h"
#include "fe_input.h"
#include "keymap.h"
#include <QApplication>
#include <QCheckBox>
#include <QComboBox>
#include <QDialogButtonBox>
#include <QFormLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QKeyEvent>
#include <QLabel>
#include <QLineEdit>
#include <QMenu>
#include <QMessageBox>
#include <QPushButton>
#include <QSpinBox>
#include <QTabWidget>
#include <QTableWidget>
#include <QTimer>
#include <QToolButton>
#include <QTreeWidget>
#include <QVBoxLayout>
#include <SDL3/SDL_scancode.h>
#include <cstring>

static const char *const PAD_ELEMENTS[] = {
    "auto", "south", "east", "west", "north", "label_a", "label_b", "label_x", "label_y",
    "leftshoulder", "rightshoulder", "lefttrigger", "righttrigger", "back", "start", "guide",
    "leftstick", "rightstick", "dpup", "dpdown", "dpleft", "dpright",
    "+leftx", "-leftx", "+lefty", "-lefty", "+rightx", "-rightx", "+righty", "-righty",
    "misc1", "paddle1", "paddle2", "paddle3", "paddle4", "touchpad", "none"};

static const char *actionLabel(int a) {
    static const char *const L[IN_ACTION_COUNT] = {
        "A", "B", "X", "Y", "L", "R", "ZL", "ZR", "START", "SELECT",
        "D-pad up", "D-pad down", "D-pad left", "D-pad right",
        "Circle pad up", "Circle pad down", "Circle pad left", "Circle pad right",
        "C-stick up", "C-stick down", "C-stick left", "C-stick right",
        "Frontend menu", "Quit"};
    return L[a];
}

static bool isModifier(int sc) {
    return sc == SDL_SCANCODE_LCTRL || sc == SDL_SCANCODE_RCTRL || sc == SDL_SCANCODE_LSHIFT ||
           sc == SDL_SCANCODE_RSHIFT || sc == SDL_SCANCODE_LALT || sc == SDL_SCANCODE_RALT ||
           sc == SDL_SCANCODE_LGUI || sc == SDL_SCANCODE_RGUI;
}

static void copyStr(char *dst, size_t n, const QString &s) {
    QByteArray b = s.toUtf8();
    std::snprintf(dst, n, "%s", b.constData());
}

ControllersDialog::ControllersDialog(QWidget *parent) : QDialog(parent) {
    setWindowTitle(QStringLiteral("Controllers"));
    resize(760, 680);
    input_get_config(&cfg_);
    auto *tabs = new QTabWidget;
    tabs->addTab(buildKeyboardTab(), QStringLiteral("Keyboard"));
    tabs->addTab(buildGamepadTab(), QStringLiteral("Gamepads"));
    tabs->addTab(buildGeneralTab(), QStringLiteral("General / Devices"));
    status_ = new QLabel;
    status_->setWordWrap(true);
    auto *buttons = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Apply | QDialogButtonBox::Cancel);
    auto *defaults = buttons->addButton(QStringLiteral("Restore Defaults"), QDialogButtonBox::ResetRole);
    auto *reload = buttons->addButton(QStringLiteral("Reload File"), QDialogButtonBox::ResetRole);
    connect(buttons, &QDialogButtonBox::accepted, this, &QDialog::accept);
    connect(buttons, &QDialogButtonBox::rejected, this, &QDialog::reject);
    connect(buttons->button(QDialogButtonBox::Apply), &QPushButton::clicked, this, [this] { apply(); });
    connect(defaults, &QPushButton::clicked, this, [this] {
        input_defaults(&cfg_);
        profileIndex_ = -1;
        loadAll();
        status_->setText(QStringLiteral("Defaults restored (not saved yet: OK or Apply saves them)."));
    });
    connect(reload, &QPushButton::clicked, this, [this] {
        input_reload();
        input_get_config(&cfg_);
        profileIndex_ = -1;
        loadAll();
        status_->setText(QStringLiteral("Reloaded %1").arg(QString::fromUtf8(input_config_path())));
    });
    auto *v = new QVBoxLayout(this);
    v->addWidget(tabs, 1);
    v->addWidget(status_);
    v->addWidget(buttons);
    loadAll();
    timer_ = new QTimer(this);
    connect(timer_, &QTimer::timeout, this, [this] { poll(); });
    timer_->start(30);
    refreshControllers();
    status_->setText(QStringLiteral("File: %1").arg(QString::fromUtf8(input_config_path())));
}

ControllersDialog::~ControllersDialog() { qApp->removeEventFilter(this); }

// ------------------------------------------------------------------ tabs
QTableWidget *ControllersDialog::makeTable(bool keyboard) {
    auto *t = new QTableWidget(IN_ACTION_COUNT, 3);
    t->setHorizontalHeaderLabels({QStringLiteral("3DS input"), QStringLiteral("Binding"), QString()});
    t->verticalHeader()->hide();
    t->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);
    t->horizontalHeader()->setSectionResizeMode(1, QHeaderView::Stretch);
    t->horizontalHeader()->setSectionResizeMode(2, QHeaderView::ResizeToContents);
    t->setSelectionMode(QAbstractItemView::SingleSelection);
    for (int a = 0; a < IN_ACTION_COUNT; a++) {
        QString label = QString::fromUtf8(actionLabel(a)), key = QString::fromUtf8(input_action_name((InAction)a));
        auto *name = new QTableWidgetItem(label == key ? label : QStringLiteral("%1  (%2)").arg(label, key));
        name->setFlags(name->flags() & ~Qt::ItemIsEditable);
        t->setItem(a, 0, name);
        t->setItem(a, 1, new QTableWidgetItem);
        auto *w = new QWidget;
        auto *h = new QHBoxLayout(w);
        h->setContentsMargins(2, 0, 2, 0);
        h->setSpacing(2);
        auto *set = new QPushButton(QStringLiteral("Set"));
        auto *add = new QPushButton(QStringLiteral("Add"));
        auto *clr = new QPushButton(QStringLiteral("Clear"));
        set->setToolTip(keyboard ? QStringLiteral("Press a key (or a modifier + key combination)")
                                 : QStringLiteral("Press a button, pull a trigger or move a stick"));
        add->setToolTip(QStringLiteral("Add an alternative binding"));
        for (auto *b : {set, add, clr}) {
            b->setAutoDefault(false);
            b->setFocusPolicy(Qt::NoFocus);
            h->addWidget(b);
        }
        connect(set, &QPushButton::clicked, this, [this, t, a] { startCapture(t, a, false); });
        connect(add, &QPushButton::clicked, this, [this, t, a] { startCapture(t, a, true); });
        connect(clr, &QPushButton::clicked, this, [t, a] { t->item(a, 1)->setText(QStringLiteral("none")); });
        if (!keyboard) {
            auto *more = new QToolButton;
            more->setText(QStringLiteral("..."));
            more->setToolTip(QStringLiteral("Insert a gamepad element"));
            more->setPopupMode(QToolButton::InstantPopup);
            auto *menu = new QMenu(more);
            for (const char *el : PAD_ELEMENTS) {
                if (!std::strcmp(el, "auto") && a > IN_Y) continue;
                menu->addAction(QString::fromUtf8(el), this, [t, a, el] {
                    QString cur = t->item(a, 1)->text().trimmed();
                    QString e = QString::fromUtf8(el);
                    t->item(a, 1)->setText(cur.isEmpty() || cur == QStringLiteral("none") || e == QStringLiteral("none")
                                               ? e : cur + QStringLiteral(", ") + e);
                });
            }
            more->setMenu(menu);
            h->addWidget(more);
        }
        t->setCellWidget(a, 2, w);
    }
    connect(t, &QTableWidget::itemChanged, this, [this, t, keyboard](QTableWidgetItem *it) {
        if (loading_ || it->column() != 1) return;
        int a = it->row();
        if (keyboard) copyStr(cfg_.key[a], IN_BIND_LEN, it->text().trimmed());
        else copyStr(profile()->bind[a], IN_BIND_LEN, it->text().trimmed());
        validateRow(t, a);
    });
    return t;
}

QWidget *ControllersDialog::buildKeyboardTab() {
    auto *w = new QWidget;
    auto *v = new QVBoxLayout(w);
    keys_ = makeTable(true);
    v->addWidget(keys_);
    auto *n = new QLabel(QStringLiteral(
        "Bindings are keys by position (SDL scancode names). Several alternatives: separate with \",\"; a "
        "combination: join with \"&\" (e.g. \"Left Ctrl&Q\"). In this Qt frontend Esc always toggles the menu bar, "
        "so a QUIT binding on Escape only applies to the SDL backend."));
    n->setWordWrap(true);
    v->addWidget(n);
    return w;
}

QWidget *ControllersDialog::buildGamepadTab() {
    auto *w = new QWidget;
    auto *v = new QVBoxLayout(w);
    auto *top = new QHBoxLayout;
    top->addWidget(new QLabel(QStringLiteral("Profile:")));
    profileBox_ = new QComboBox;
    top->addWidget(profileBox_, 1);
    auto *remove = new QPushButton(QStringLiteral("Remove Override"));
    remove->setAutoDefault(false);
    top->addWidget(remove);
    v->addLayout(top);
    connect(profileBox_, &QComboBox::activated, this, [this](int idx) {
        QVariant d = profileBox_->itemData(idx);
        storeProfile();
        if (d.toString().startsWith(QStringLiteral("new:"))) {  // create an override for a connected controller
            if (cfg_.n_overrides >= IN_MAX_OVERRIDES) {
                QMessageBox::warning(this, windowTitle(), QStringLiteral("Too many controller overrides."));
                refreshProfiles();
                return;
            }
            QStringList parts = d.toString().mid(4).split(QLatin1Char('|'));
            InputPadProfile &p = cfg_.overrides[cfg_.n_overrides];
            std::memset(&p, 0, sizeof p);
            copyStr(p.guid, sizeof p.guid, parts.value(0));
            copyStr(p.name, sizeof p.name, parts.value(1));
            p.layout = p.circle_pad = p.c_stick = IN_UNSET;
            p.stick_deadzone = p.cstick_deadzone = p.stick_outer = p.trigger_threshold = IN_UNSET;
            profileIndex_ = cfg_.n_overrides++;
        } else {
            profileIndex_ = d.toInt();
        }
        refreshProfiles();
        loadProfile();
    });
    connect(remove, &QPushButton::clicked, this, [this] {
        if (profileIndex_ < 0) return;
        for (int i = profileIndex_; i + 1 < cfg_.n_overrides; i++) cfg_.overrides[i] = cfg_.overrides[i + 1];
        cfg_.n_overrides--;
        profileIndex_ = -1;
        refreshProfiles();
        loadProfile();
    });

    auto *form = new QFormLayout;
    layout_ = new QComboBox;
    cpad_ = new QComboBox;
    cstick_ = new QComboBox;
    auto spin = [](int lo, int hi) {
        auto *s = new QSpinBox;
        s->setRange(lo, hi);
        s->setSuffix(QStringLiteral(" %"));
        return s;
    };
    dz_ = spin(0, 99);
    cdz_ = spin(0, 99);
    outer_ = spin(1, 100);
    trig_ = spin(1, 100);
    form->addRow(QStringLiteral("A/B/X/Y layout (\"auto\"):"), layout_);
    form->addRow(QStringLiteral("Circle pad stick:"), cpad_);
    form->addRow(QStringLiteral("C-stick:"), cstick_);
    auto *row = new QHBoxLayout;
    row->addWidget(new QLabel(QStringLiteral("Deadzone")));
    row->addWidget(dz_);
    row->addWidget(new QLabel(QStringLiteral("C-stick deadzone")));
    row->addWidget(cdz_);
    row->addWidget(new QLabel(QStringLiteral("Full at")));
    row->addWidget(outer_);
    row->addWidget(new QLabel(QStringLiteral("Trigger threshold")));
    row->addWidget(trig_);
    row->addStretch();
    form->addRow(QStringLiteral("Sticks:"), row);
    v->addLayout(form);
    pads_ = makeTable(false);
    v->addWidget(pads_, 1);
    auto *n = new QLabel(QStringLiteral(
        "\"auto\" follows the layout setting: positional = Nintendo positions (east = A) on every controller; "
        "labels = the button printed A is A. In a per-controller override, empty fields / \"inherit\" use the "
        "default profile."));
    n->setWordWrap(true);
    v->addWidget(n);
    return w;
}

QWidget *ControllersDialog::buildGeneralTab() {
    auto *w = new QWidget;
    auto *v = new QVBoxLayout(w);
    auto *form = new QFormLayout;
    multi_ = new QComboBox;
    multi_->addItem(QStringLiteral("The last used controller drives the game"), IN_MULTI_ACTIVE);
    multi_->addItem(QStringLiteral("All controllers at once (merged)"), IN_MULTI_ANY);
    form->addRow(QStringLiteral("Several controllers:"), multi_);
    motion_ = new QCheckBox(QStringLiteral("Use controller motion sensors (gyro / accelerometer)"));
    form->addRow(QString(), motion_);
    fallback_ = new QCheckBox(QStringLiteral("Generic mapping for joysticks SDL does not know"));
    form->addRow(QString(), fallback_);
    fallbackMap_ = new QLineEdit;
    fallbackMap_->setPlaceholderText(QStringLiteral("SDL mapping, e.g. a:b2,b:b1,x:b3,y:b0,leftx:a0,lefty:a1 (empty = guess)"));
    form->addRow(QStringLiteral("Fallback mapping:"), fallbackMap_);
    v->addLayout(form);
    v->addWidget(new QLabel(QStringLiteral("Connected controllers:")));
    devices_ = new QTreeWidget;
    devices_->setHeaderLabels({QStringLiteral("Name"), QStringLiteral("Type"), QStringLiteral("VID:PID"),
                               QStringLiteral("Sensors"), QStringLiteral("State"), QStringLiteral("GUID")});
    devices_->setRootIsDecorated(false);
    v->addWidget(devices_, 1);
    if (!fein_have_gamepads())
        v->addWidget(new QLabel(QStringLiteral("SDL gamepad support could not be initialised: keyboard only.")));
    return w;
}

// ------------------------------------------------------------------ model <-> widgets
InputPadProfile *ControllersDialog::profile() {
    return profileIndex_ >= 0 && profileIndex_ < cfg_.n_overrides ? &cfg_.overrides[profileIndex_] : &cfg_.pad;
}

void ControllersDialog::loadAll() {
    loading_ = true;
    for (int a = 0; a < IN_ACTION_COUNT; a++) keys_->item(a, 1)->setText(QString::fromUtf8(cfg_.key[a]));
    multi_->setCurrentIndex(cfg_.multi == IN_MULTI_ANY ? 1 : 0);
    motion_->setChecked(cfg_.motion);
    fallback_->setChecked(cfg_.fallback);
    fallbackMap_->setText(QString::fromUtf8(cfg_.fallback_mapping));
    loading_ = false;
    for (int a = 0; a < IN_ACTION_COUNT; a++) validateRow(keys_, a);
    refreshProfiles();
    loadProfile();
}

void ControllersDialog::refreshProfiles() {
    InputControllerInfo info[16];
    int n = fein_have_gamepads() ? input_controllers(info, 16) : 0;
    if (n > 16) n = 16;
    profileBox_->clear();
    profileBox_->addItem(QStringLiteral("All controllers (default profile)"), -1);
    for (int i = 0; i < cfg_.n_overrides; i++) {
        bool connected = false;
        for (int k = 0; k < n; k++) connected |= !std::strcmp(info[k].guid, cfg_.overrides[i].guid);
        profileBox_->addItem(QStringLiteral("Override: %1 [%2]%3")
                                 .arg(QString::fromUtf8(cfg_.overrides[i].name), QString::fromUtf8(cfg_.overrides[i].guid),
                                      connected ? QStringLiteral(" (connected)") : QString()), i);
    }
    for (int k = 0; k < n; k++) {
        bool has = false;
        for (int i = 0; i < cfg_.n_overrides; i++) has |= !std::strcmp(info[k].guid, cfg_.overrides[i].guid);
        if (!has)
            profileBox_->addItem(QStringLiteral("Add override for: %1").arg(QString::fromUtf8(info[k].name)),
                                 QStringLiteral("new:%1|%2").arg(QString::fromUtf8(info[k].guid), QString::fromUtf8(info[k].name)));
    }
    profileBox_->setCurrentIndex(qMax(0, profileBox_->findData(profileIndex_)));
}

static void fillCombo(QComboBox *c, bool inherit, std::initializer_list<std::pair<const char *, int>> items, int value) {
    c->clear();
    if (inherit) c->addItem(QStringLiteral("inherit"), IN_UNSET);
    for (auto &it : items) c->addItem(QString::fromUtf8(it.first), it.second);
    c->setCurrentIndex(qMax(0, c->findData(value)));
}

static void setSpin(QSpinBox *s, bool inherit, int lo, int v) {
    s->setMinimum(inherit ? lo - 1 : lo);
    s->setSpecialValueText(inherit ? QStringLiteral("inherit") : QString());
    s->setValue(v == IN_UNSET ? s->minimum() : v);
}

void ControllersDialog::loadProfile() {
    loading_ = true;
    InputPadProfile *p = profile();
    bool ov = profileIndex_ >= 0;
    fillCombo(layout_, ov, {{"positional (Nintendo positions: east = A)", IN_LAYOUT_POSITIONAL},
                            {"labels (the button printed A is A)", IN_LAYOUT_LABELS}}, p->layout);
    fillCombo(cpad_, ov, {{"left stick", IN_STICK_LEFT}, {"right stick", IN_STICK_RIGHT}, {"none", IN_STICK_NONE}},
              p->circle_pad);
    fillCombo(cstick_, ov, {{"right stick", IN_STICK_RIGHT}, {"left stick", IN_STICK_LEFT}, {"none", IN_STICK_NONE}},
              p->c_stick);
    setSpin(dz_, ov, 0, p->stick_deadzone);
    setSpin(cdz_, ov, 0, p->cstick_deadzone);
    setSpin(outer_, ov, 1, p->stick_outer);
    setSpin(trig_, ov, 1, p->trigger_threshold);
    for (int a = 0; a < IN_ACTION_COUNT; a++) {
        QTableWidgetItem *it = pads_->item(a, 1);
        it->setText(QString::fromUtf8(p->bind[a]));
        it->setToolTip(ov ? QStringLiteral("empty = inherit \"%1\"").arg(QString::fromUtf8(cfg_.pad.bind[a])) : QString());
    }
    loading_ = false;
    for (int a = 0; a < IN_ACTION_COUNT; a++) validateRow(pads_, a);
}

void ControllersDialog::storeProfile() {
    InputPadProfile *p = profile();
    bool ov = profileIndex_ >= 0;
    auto spinVal = [ov](QSpinBox *s) { return ov && s->value() == s->minimum() ? (int)IN_UNSET : s->value(); };
    p->layout = layout_->currentData().toInt();
    p->circle_pad = cpad_->currentData().toInt();
    p->c_stick = cstick_->currentData().toInt();
    p->stick_deadzone = spinVal(dz_);
    p->cstick_deadzone = spinVal(cdz_);
    p->stick_outer = spinVal(outer_);
    p->trigger_threshold = spinVal(trig_);
}

void ControllersDialog::validateRow(QTableWidget *t, int row) {
    QTableWidgetItem *it = t->item(row, 1);
    QString text = it->text().trimmed();
    char err[160] = "";
    bool ok = text.isEmpty() || input_check_binding(text.toUtf8().constData(), t == keys_, (InAction)row, err, sizeof err) == 0;
    it->setBackground(ok ? QBrush() : QBrush(QColor(255, 120, 120, 120)));
    if (!ok) it->setToolTip(QString::fromUtf8(err));
    else if (t == keys_) it->setToolTip(QString());
}

// ------------------------------------------------------------------ capture
void ControllersDialog::startCapture(QTableWidget *t, int row, bool append) {
    cancelCapture();
    capTable_ = t;
    capRow_ = row;
    capAppend_ = append;
    capHeld_.clear();
    capModifierOnly_ = 0;
    t->selectRow(row);
    if (t == keys_) {
        status_->setText(QStringLiteral("<b>Press a key for %1</b> (a modifier + key makes a combination; Esc cancels)")
                             .arg(actionLabel(row)));
    } else {
        input_capture_reset();
        status_->setText(QStringLiteral("<b>Press a button, pull a trigger or move a stick for %1</b> on any controller "
                                        "(Esc cancels)").arg(actionLabel(row)));
    }
    qApp->installEventFilter(this);
}

void ControllersDialog::finishCapture(const QString &el) {
    if (!capTable_) return;
    QTableWidgetItem *it = capTable_->item(capRow_, 1);
    QString cur = it->text().trimmed();
    it->setText(capAppend_ && !cur.isEmpty() && cur != QStringLiteral("none") ? cur + QStringLiteral(", ") + el : el);
    status_->setText(QStringLiteral("%1 = %2").arg(actionLabel(capRow_), it->text()));
    capTable_ = nullptr;
    qApp->removeEventFilter(this);
}

void ControllersDialog::cancelCapture() {
    if (!capTable_) return;
    capTable_ = nullptr;
    qApp->removeEventFilter(this);
    status_->setText(QStringLiteral("Cancelled."));
}

bool ControllersDialog::eventFilter(QObject *o, QEvent *e) {
    if (!capTable_ || (e->type() != QEvent::KeyPress && e->type() != QEvent::KeyRelease &&
                       e->type() != QEvent::ShortcutOverride))
        return QDialog::eventFilter(o, e);
    auto *k = static_cast<QKeyEvent *>(e);
    if (e->type() == QEvent::ShortcutOverride) {  // keep keys away from shortcuts while capturing
        e->accept();
        return true;
    }
    if (k->isAutoRepeat()) return true;
    int sc = qtKeyToSdlScancode(k);
    if (e->type() == QEvent::KeyPress) {
        if (k->key() == Qt::Key_Escape) {
            cancelCapture();
            return true;
        }
        if (capTable_ != keys_ || sc == SDL_SCANCODE_UNKNOWN) return true;
        if (isModifier(sc)) {
            capHeld_.insert(sc);
            capModifierOnly_ = sc;
            return true;
        }
        QStringList parts;
        for (int m : capHeld_)
            if (parts.size() < 2) parts << sdlScancodeName(m);
        parts << sdlScancodeName(sc);
        finishCapture(parts.join(QLatin1Char('&')));
        return true;
    }
    // release: a modifier pressed and released alone binds the modifier itself
    if (capTable_ == keys_ && isModifier(sc)) {
        if (capModifierOnly_ == sc && capHeld_.size() == 1) {
            finishCapture(sdlScancodeName(sc));
            return true;
        }
        capHeld_.remove(sc);
    }
    return true;
}

// ------------------------------------------------------------------ polling, devices
void ControllersDialog::poll() {
    fein_pump();  // the game loop is blocked while this modal dialog runs
    if (capTable_ == pads_) {
        char name[64];
        uint32_t id = 0;
        if (input_capture(name, sizeof name, &id) && id != 0) finishCapture(QString::fromUtf8(name));
    }
    static int tick;
    if (++tick % 16 == 0) refreshControllers();
}

void ControllersDialog::refreshControllers() {
    if (!fein_have_gamepads()) return;
    InputControllerInfo info[16];
    int n = input_controllers(info, 16);
    if (n > 16) n = 16;
    QStringList now;
    for (int i = 0; i < n; i++) now << QString::fromUtf8(info[i].guid) + QString::number(info[i].active);
    static QStringList last;
    if (now == last && devices_->topLevelItemCount() == n) return;
    bool changedSet = now.size() != last.size();
    last = now;
    devices_->clear();
    for (int i = 0; i < n; i++) {
        const InputControllerInfo &c = info[i];
        QString sensors = c.has_accel || c.has_gyro
                              ? QStringLiteral("%1%2").arg(c.has_accel ? "accel " : "", c.has_gyro ? "gyro" : "")
                              : QStringLiteral("-");
        QStringList st;
        if (c.active) st << QStringLiteral("active");
        if (c.fallback) st << QStringLiteral("generic mapping");
        if (c.has_override) st << QStringLiteral("override");
        devices_->addTopLevelItem(new QTreeWidgetItem(
            {QString::fromUtf8(c.name), QString::fromUtf8(c.type),
             QStringLiteral("%1:%2").arg(c.vendor, 4, 16, QLatin1Char('0')).arg(c.product, 4, 16, QLatin1Char('0')),
             sensors, st.join(QStringLiteral(", ")), QString::fromUtf8(c.guid)}));
    }
    for (int i = 0; i < devices_->columnCount(); i++) devices_->resizeColumnToContents(i);
    if (changedSet) {
        storeProfile();
        refreshProfiles();
    }
}

// ------------------------------------------------------------------ apply
bool ControllersDialog::apply() {
    storeProfile();
    cfg_.multi = multi_->currentData().toInt();
    cfg_.motion = motion_->isChecked();
    cfg_.fallback = fallback_->isChecked();
    copyStr(cfg_.fallback_mapping, sizeof cfg_.fallback_mapping, fallbackMap_->text().trimmed());
    if (input_set_config(&cfg_)) {
        QMessageBox::warning(this, windowTitle(),
                             QStringLiteral("Not applied:\n%1").arg(QString::fromUtf8(input_last_error())));
        return false;
    }
    if (input_save(nullptr)) {
        QMessageBox::warning(this, windowTitle(),
                             QStringLiteral("Could not write %1").arg(QString::fromUtf8(input_config_path())));
        return false;
    }
    fein_config_changed();
    status_->setText(QStringLiteral("Saved %1").arg(QString::fromUtf8(input_config_path())));
    return true;
}

void ControllersDialog::accept() {
    cancelCapture();
    if (apply()) QDialog::accept();
}

void ControllersDialog::reject() {
    cancelCapture();
    QDialog::reject();
}
