// The game view: a QOpenGLWidget whose context is the game's GL context. It composites the two
// screen render targets with the layout engine, turns mouse input into bottom-screen touch, and
// hosts the custom layout editor (drag/resize the screens directly in the view).
// With separate windows there are two views: the main window's shows only the top screen, and a
// second, top-level view shows only the bottom screen. That one has its own context, shared with
// the game's (Qt::AA_ShareOpenGLContexts): it samples the screen textures and draws with its own
// vertex array (container objects are not shared).
#pragma once
#include <QElapsedTimer>
#include <QOpenGLWidget>
#include <QPointer>
#include "../../platform/layout.h"

class QMenu;

class LayoutOverlay : public QWidget {
    Q_OBJECT
public:
    explicit LayoutOverlay(QWidget *parent);
protected:
    void paintEvent(QPaintEvent *) override;
};

class ScreenView : public QOpenGLWidget {
    Q_OBJECT
public:
    explicit ScreenView(QWidget *parent = nullptr);
    // -1 = both screens (joined layout), LAYOUT_SCREEN_TOP / _BOTTOM = that screen only (separate)
    int screen() const { return screen_; }
    void setScreen(int s);
    Layout currentLayout() const;        // in framebuffer pixels
    qreal dpr() const { return devicePixelRatioF(); }
    void showToast(const QString &t);
    QString toast() const;
    void refreshOverlay();
    QImage grabComposite();              // what the window shows (no overlay)
    void populateLayoutMenu(QMenu *m, int screenUnderMouse);
    // testing / scripting: mouse in widget (logical) coordinates
    void simulateMouse(int type, QPointF pos, Qt::MouseButton b, Qt::KeyboardModifiers mods = Qt::NoModifier);

signals:
    void glInitialized();

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeEvent(QResizeEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseMoveEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
    void wheelEvent(QWheelEvent *e) override;
    void keyPressEvent(QKeyEvent *e) override;
    void keyReleaseEvent(QKeyEvent *e) override;
    void focusOutEvent(QFocusEvent *e) override;
    void leaveEvent(QEvent *e) override;
    void closeEvent(QCloseEvent *e) override;
    void changeEvent(QEvent *e) override;

private:
    void updateCursor(QPointF devPos);
    void contextMenu(QPointF logicalPos, QPointF devPos);
    LayoutOverlay *overlay_;
    QString toast_;
    QElapsedTimer toastTimer_;
    int screen_ = -1;
    unsigned vao_ = 0;            // vertex array of this view's context (0 = the game context's)
    bool touching_ = false;
    bool rightPending_ = false;   // right press in the editor: resize on drag, context menu on click
    QPointF rightPressPos_;
};
