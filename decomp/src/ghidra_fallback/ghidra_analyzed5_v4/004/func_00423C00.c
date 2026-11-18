#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0054C850(int param_1);
extern float DAT_00423c50;

// USA 00423C00 <- EU 00423BE0 (Ghidra, non-matching)
// GLOBAL DAT_00423c50 float

void func_00423C00(int param_1)

{
  byte bVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar2 = *puVar2 | 0x40;
  bVar1 = func_0054C850(param_1 + 0x60);
  if (bVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb2) = 7;
    *(undefined2 *)(param_1 + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb2) = 6;
    *(undefined2 *)(param_1 + 0xb0) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0xb0),DAT_00423c50);
  return;
}

