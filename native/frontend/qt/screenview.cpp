#include "screenview.h"
#include "fe_gl.h"
#include "fe_input.h"
#include "keymap.h"
#include "mainwindow.h"
#include "state.h"
#include <QApplication>
#include <QCloseEvent>
#include <QMenu>
#include <QMessageBox>
#include <QMouseEvent>
#include <QOpenGLContext>
#include <QPainter>
#include <QPainterPath>
#include <QTimer>
#include <cmath>

static const qreal HANDLE = 9.0;  // corner handle half-size, logical pixels

static void *getProc(const char *name) {
    QOpenGLContext *c = QOpenGLContext::currentContext();
    return c ? reinterpret_cast<void *>(c->getProcAddress(name)) : nullptr;
}

// ------------------------------------------------------------------ overlay (editor, messages)
LayoutOverlay::LayoutOverlay(QWidget *parent) : QWidget(parent) {
    setAttribute(Qt::WA_TransparentForMouseEvents);
    setAttribute(Qt::WA_NoSystemBackground);
    setFocusPolicy(Qt::NoFocus);
}

static void drawLabel(QPainter &p, const QRectF &anchor, const QString &text, int align, const QColor &bg) {
    QFontMetricsF fm(p.font());
    QRectF r = fm.boundingRect(text).adjusted(-8, -4, 8, 4);
    r.setSize(QSizeF(fm.horizontalAdvance(text) + 16, fm.height() + 8));
    if (align & Qt::AlignHCenter) r.moveLeft(anchor.center().x() - r.width() / 2);
    else if (align & Qt::AlignRight) r.moveRight(anchor.right() - 6);
    else r.moveLeft(anchor.left() + 6);
    if (align & Qt::AlignVCenter) r.moveTop(anchor.center().y() - r.height() / 2);
    else if (align & Qt::AlignBottom) r.moveBottom(anchor.bottom() - 6);
    else r.moveTop(anchor.top() + 6);
    p.setPen(Qt::NoPen);
    p.setBrush(bg);
    p.drawRoundedRect(r, 5, 5);
    p.setPen(Qt::white);
    p.drawText(r, Qt::AlignCenter, text);
}

void LayoutOverlay::paintEvent(QPaintEvent *) {
    auto *view = static_cast<ScreenView *>(parentWidget());
    FeState &s = fe();
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);
    const qreal d = view->dpr();
    if (s.editing || s.edit.mode != LAYOUT_EDIT_NONE) {
        Layout l = view->currentLayout();
        p.fillRect(rect(), QColor(0, 0, 0, 40));
        for (int k = 0; k < 2; k++) {
            int sc = l.order[k];
            if (!l.visible[sc]) continue;
            QRectF r(l.r[sc].x / d, l.r[sc].y / d, l.r[sc].w / d, l.r[sc].h / d);
            QColor c = sc == LAYOUT_SCREEN_TOP ? QColor(255, 190, 40) : QColor(70, 190, 255);
            bool active = s.edit.mode != LAYOUT_EDIT_NONE && s.edit.screen == sc;
            p.setBrush(Qt::NoBrush);
            p.setPen(QPen(c, active ? 3 : 2));
            p.drawRect(r.adjusted(1, 1, -1, -1));
            p.setPen(QPen(QColor(20, 20, 20), 1.5));
            p.setBrush(Qt::white);
            for (QPointF pt : {r.topLeft(), r.topRight(), r.bottomLeft(), r.bottomRight()})
                p.drawRect(QRectF(pt.x() - HANDLE / 1.6, pt.y() - HANDLE / 1.6, HANDLE * 1.25, HANDLE * 1.25));
            int nw, nh;
            layout_native_size(sc, &nw, &nh);
            QString t = QStringLiteral("%1  %2 x %3  (%4x)")
                            .arg(sc == LAYOUT_SCREEN_TOP ? "Top screen" : "Bottom screen")
                            .arg(int(l.r[sc].w)).arg(int(l.r[sc].h))
                            .arg(l.r[sc].w / nw, 0, 'f', 2);
            QColor bg = c.darker(260);
            bg.setAlpha(215);
            drawLabel(p, r, t, Qt::AlignLeft | Qt::AlignTop, bg);
        }
        p.setPen(QPen(QColor(255, 60, 200), 1.5, Qt::DashLine));
        if (s.edit.guide_x >= 0) p.drawLine(QLineF(s.edit.guide_x / d, 0, s.edit.guide_x / d, height()));
        if (s.edit.guide_y >= 0) p.drawLine(QLineF(0, s.edit.guide_y / d, width(), s.edit.guide_y / d));
        if (s.editing) {
            QFont f = p.font();
            f.setPointSizeF(f.pointSizeF() * 0.92);
            p.setFont(f);
            QString hint = QStringLiteral(
                "Layout editor: drag a screen to move it, drag a corner (or right-drag) to resize, wheel to scale.  "
                "Shift = free aspect, Alt = no snapping, right-click = options, F3 = done");
            QFontMetricsF fm(f);
            QRectF tr = fm.boundingRect(QRectF(8, 0, width() - 16, 1000), Qt::TextWordWrap | Qt::AlignHCenter, hint);
            QRectF band(0, height() - tr.height() - 10, width(), tr.height() + 10);  // bottom: labels sit at the top
            p.fillRect(band, QColor(10, 10, 10, 200));
            p.setPen(Qt::white);
            p.drawText(band.adjusted(8, 5, -8, -5), Qt::TextWordWrap | Qt::AlignHCenter, hint);
        }
    }
    if (s.paused) drawLabel(p, rect(), QStringLiteral("Paused  (Ctrl+P to resume)"), Qt::AlignRight | Qt::AlignBottom,
                            QColor(160, 30, 30, 220));
    if (!s.status.isEmpty()) {
        QFont f = p.font();
        f.setPointSizeF(f.pointSizeF() * 1.15);
        p.setFont(f);
        drawLabel(p, rect(), s.status, Qt::AlignCenter, QColor(0, 0, 0, 200));
        p.setFont(font());
    }
    QString t = view->toast();
    if (!t.isEmpty()) {
        QRectF r = rect();
        r.setBottom(r.bottom() - 24);
        drawLabel(p, r, t, Qt::AlignHCenter | Qt::AlignBottom, QColor(30, 30, 30, 220));
    }
}

// ------------------------------------------------------------------ view
ScreenView::ScreenView(QWidget *parent) : QOpenGLWidget(parent) {
    setFocusPolicy(Qt::StrongFocus);
    setMouseTracking(true);
    setMinimumSize(160, 120);
    overlay_ = new LayoutOverlay(this);
    overlay_->setGeometry(rect());
    overlay_->show();
}

void ScreenView::initializeGL() {
    if (fegl_ready()) {
        // the main view: same context (it is never reparented); a separate bottom-screen view:
        // its own context, sharing the game's textures and programs
        if (fe().view != this) vao_ = fegl_new_vao();
        return;
    }
    if (fegl_init(getProc, fe().renderScale, qEnvironmentVariableIsSet("ALBW_GL_DEBUG"))) {
        QMessageBox::critical(this, QStringLiteral("OpenGL"),
                              QStringLiteral("Could not initialise OpenGL 3.3 core.\n"
                                             "This port needs OpenGL 3.3: Intel HD 2000+, AMD HD 5000+ or "
                                             "NVIDIA GeForce 400+, with Mesa or the vendor driver."));
        std::exit(1);
    }
    fe().glReady = true;
    emit glInitialized();
}

void ScreenView::setScreen(int s) {
    screen_ = s;
    if (s >= 0) unsetCursor();
    update();
    overlay_->update();
}

Layout ScreenView::currentLayout() const {
    Layout l;
    int ww = qRound(width() * devicePixelRatioF()), wh = qRound(height() * devicePixelRatioF());
    if (screen_ >= 0) layout_compute_single(&fe().layout, screen_, ww, wh, &l);
    else layout_compute(&fe().layout, ww, wh, &l);
    return l;
}

void ScreenView::paintGL() {
    if (!fegl_ready()) return;
    Layout l = currentLayout();
    if (vao_) fegl_composite_vao(defaultFramebufferObject(), vao_, &l, fe().layout.linear_filter);
    else fegl_composite(defaultFramebufferObject(), &l, fe().layout.linear_filter);
}

void ScreenView::resizeEvent(QResizeEvent *e) {
    QOpenGLWidget::resizeEvent(e);
    overlay_->setGeometry(rect());
}

void ScreenView::refreshOverlay() { overlay_->update(); }

void ScreenView::showToast(const QString &t) {
    toast_ = t;
    toastTimer_.start();
    overlay_->update();
    QTimer::singleShot(2600, overlay_, [this] { overlay_->update(); });
}

QString ScreenView::toast() const {
    return toastTimer_.isValid() && toastTimer_.elapsed() < 2500 ? toast_ : QString();
}

QImage ScreenView::grabComposite() { return grabFramebuffer(); }

void ScreenView::updateCursor(QPointF dev) {
    if (!fe().editing || screen_ >= 0) {
        unsetCursor();
        return;
    }
    Layout l = currentLayout();
    int s, c;
    int m = layout_edit_hit(&l, dev.x(), dev.y(), HANDLE * dpr(), &s, &c);
    if (m == LAYOUT_EDIT_RESIZE) setCursor(c == 0 || c == 3 ? Qt::SizeFDiagCursor : Qt::SizeBDiagCursor);
    else if (m == LAYOUT_EDIT_MOVE) setCursor(Qt::SizeAllCursor);
    else unsetCursor();
}

void ScreenView::mousePressEvent(QMouseEvent *e) {
    FeState &s = fe();
    QPointF dev = e->position() * dpr();
    Layout l = currentLayout();
    bool ctrl = (e->modifiers() & Qt::ControlModifier) && screen_ < 0;  // editing: joined view only
    if ((s.editing && screen_ < 0) || ctrl) {
        if (e->button() == Qt::RightButton && s.editing && !ctrl) {
            rightPending_ = true;   // drag = resize, click = context menu
            rightPressPos_ = e->position();
            return;
        }
        if (e->button() == Qt::LeftButton || e->button() == Qt::RightButton) {
            if (layout_edit_begin(&s.edit, &s.layout, &l, dev.x(), dev.y(), HANDLE * dpr(),
                                  e->button() == Qt::RightButton)) {
                update();
                overlay_->update();
                return;
            }
        }
        if (s.editing) return;
    }
    if (e->button() == Qt::LeftButton) {
        int sx, sy;
        if (layout_to_screen(&l, LAYOUT_SCREEN_BOTTOM, dev.x(), dev.y(), &sx, &sy)) {
            touching_ = true;
            fein_touch(1, sx, sy);
        }
    } else if (e->button() == Qt::RightButton) {
        contextMenu(e->position(), dev);
    }
}

void ScreenView::mouseMoveEvent(QMouseEvent *e) {
    FeState &s = fe();
    QPointF dev = e->position() * dpr();
    if (rightPending_ && (e->position() - rightPressPos_).manhattanLength() > 4) {
        rightPending_ = false;
        Layout l = currentLayout();
        QPointF p0 = rightPressPos_ * dpr();
        layout_edit_begin(&s.edit, &s.layout, &l, p0.x(), p0.y(), HANDLE * dpr(), 1);
    }
    if (s.edit.mode != LAYOUT_EDIT_NONE) {
        Layout l = currentLayout();
        layout_edit_update(&s.edit, &s.layout, &l, dev.x(), dev.y(), e->modifiers() & Qt::ShiftModifier,
                           e->modifiers() & Qt::AltModifier);
        update();
        overlay_->update();
        return;
    }
    if (touching_) {
        Layout l = currentLayout();
        int sx, sy;
        layout_to_screen(&l, LAYOUT_SCREEN_BOTTOM, dev.x(), dev.y(), &sx, &sy);  // clamped while held
        fein_touch(1, sx, sy);
    }
    updateCursor(dev);
}

void ScreenView::mouseReleaseEvent(QMouseEvent *e) {
    FeState &s = fe();
    if (rightPending_ && e->button() == Qt::RightButton) {
        rightPending_ = false;
        contextMenu(e->position(), e->position() * dpr());
        return;
    }
    if (s.edit.mode != LAYOUT_EDIT_NONE) {
        layout_edit_end(&s.edit);
        feLayoutChanged();
        return;
    }
    if (touching_ && e->button() == Qt::LeftButton) {
        touching_ = false;
        fein_touch(0, 0, 0);
    }
}

void ScreenView::wheelEvent(QWheelEvent *e) {
    if (!fe().editing || screen_ >= 0 || e->angleDelta().y() == 0) return;
    Layout l = currentLayout();
    QPointF dev = e->position() * dpr();
    int sc = layout_hit(&l, dev.x(), dev.y());
    if (sc < 0) return;
    layout_edit_scale(&fe().layout, &l, sc, e->angleDelta().y() > 0 ? 1.1f : 1 / 1.1f);
    feLayoutChanged();
}

void ScreenView::keyPressEvent(QKeyEvent *e) {
    if (e->isAutoRepeat()) return;
    fein_key(qtKeyToSdlScancode(e), 1);
}

void ScreenView::keyReleaseEvent(QKeyEvent *e) {
    if (e->isAutoRepeat()) return;
    fein_key(qtKeyToSdlScancode(e), 0);
}

void ScreenView::focusOutEvent(QFocusEvent *e) {
    QOpenGLWidget::focusOutEvent(e);
    fein_clear_keys();
}

void ScreenView::leaveEvent(QEvent *e) {
    QOpenGLWidget::leaveEvent(e);
    if (fe().editing) unsetCursor();
}

void ScreenView::closeEvent(QCloseEvent *e) {
    // the separate bottom-screen window: closing it quits, like closing the main window
    QOpenGLWidget::closeEvent(e);
    if (isWindow() && fe().win && fe().win != window()) fe().win->close();
}

void ScreenView::changeEvent(QEvent *e) {
    QOpenGLWidget::changeEvent(e);
    if (e->type() == QEvent::ActivationChange && isWindow() && fe().win) fe().win->activationChanged();
}

void ScreenView::populateLayoutMenu(QMenu *m, int sc) {
    FeState &s = fe();
    if (s.editing && sc >= 0 && screen_ < 0) {
        QString name = sc == LAYOUT_SCREEN_TOP ? QStringLiteral("Top screen") : QStringLiteral("Bottom screen");
        m->addSection(name);
        for (int n = 1; n <= 4; n++)
            m->addAction(QStringLiteral("Size %1x (native)").arg(n), this, [this, sc, n] {
                Layout l = currentLayout();
                layout_edit_set_size(&fe().layout, &l, sc, (float)n);
                feLayoutChanged();
            });
        m->addAction(QStringLiteral("Fit to window"), this, [this, sc] {
            Layout l = currentLayout();
            layout_edit_set_size(&fe().layout, &l, sc, 0);
            feLayoutChanged();
        });
        m->addAction(QStringLiteral("Centre horizontally"), this, [this, sc] {
            Layout l = currentLayout();
            layout_make_custom(&fe().layout, &l);
            LayoutRect &r = fe().layout.custom[sc];
            r.x = (1.0f - r.w) / 2;
            feLayoutChanged();
        });
        m->addAction(QStringLiteral("Bring to front"), this, [sc] {
            fe().layout.custom_front = sc;
            feLayoutChanged();
        });
        m->addAction(QStringLiteral("Hide this screen"), this, [this, sc] {
            Layout l = currentLayout();
            layout_make_custom(&fe().layout, &l);
            fe().layout.custom_visible[sc] = 0;
            fe().layout.custom_visible[1 - sc] = 1;
            feLayoutChanged();
        });
    }
    if (s.layout.preset == LAYOUT_CUSTOM && (!s.layout.custom_visible[0] || !s.layout.custom_visible[1]))
        m->addAction(QStringLiteral("Show both screens"), this, [] {
            fe().layout.custom_visible[0] = fe().layout.custom_visible[1] = 1;
            feLayoutChanged();
        });
    if (fe().win) fe().win->addLayoutActions(m);
}

void ScreenView::contextMenu(QPointF logical, QPointF dev) {
    Layout l = currentLayout();
    QMenu m(this);
    populateLayoutMenu(&m, layout_hit(&l, dev.x(), dev.y()));
    m.exec(mapToGlobal(logical.toPoint()));
}

void ScreenView::simulateMouse(int type, QPointF pos, Qt::MouseButton b, Qt::KeyboardModifiers mods) {
    QEvent::Type t = QEvent::Type(type);
    Qt::MouseButtons buttons = t == QEvent::MouseButtonRelease ? Qt::NoButton : Qt::MouseButtons(b);
    QMouseEvent ev(t, pos, mapToGlobal(pos), t == QEvent::MouseMove ? Qt::NoButton : b, buttons, mods);
    QCoreApplication::sendEvent(this, &ev);
}
