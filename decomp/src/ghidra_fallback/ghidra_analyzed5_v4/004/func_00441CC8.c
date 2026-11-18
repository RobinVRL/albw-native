#include "ghidra_types.h"

extern int func_001B6D40(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00532C78(int param_1);
extern float DAT_00441dd4;

// USA 00441CC8 <- EU 00441CA8 (Ghidra, non-matching)
// GLOBAL DAT_00441dd4 float

void func_00441CC8(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  float fparam_0;
  
  func_001B6D40(param_1);
  fparam_0 = DAT_00441dd4;
  bVar1 = *(byte *)(param_1 + 0x9c);
  if ((bVar1 < 2) || (bVar1 == 2 || bVar1 == 7)) {
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x76) = 3;
    *(undefined2 *)(param_1 + 0x74) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x74),fparam_0);
    if ((*(short *)(param_1 + 0x8e) != 7) || (bVar3 = func_00532C78(param_1 + 0x8c), !bVar3)) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x8e) = 7;
      *(undefined2 *)(param_1 + 0x8c) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
    }
  }
  cVar2 = *(char *)(param_1 + 0x9c);
  if ((cVar2 == '\x03' || cVar2 == '\x04') || (cVar2 == '\x05' || cVar2 == '\x06')) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 5;
    *(undefined2 *)(param_1 + 0x80) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x80),fparam_0);
    if ((*(short *)(param_1 + 0x8e) != 9) || (bVar3 = func_00532C78(param_1 + 0x8c), !bVar3)) {
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x8e) = 9;
      *(undefined2 *)(param_1 + 0x8c) = 0;
      func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
      return;
    }
  }
  return;
}

