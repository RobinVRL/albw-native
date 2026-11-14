#pragma once
#include <QString>
class QKeyEvent;
int qtKeyToSdlScancode(const QKeyEvent *e);   // 0 = unknown
QString sdlScancodeName(int scancode);         // input.cfg element name ("X", "Right Shift", "Comma")
