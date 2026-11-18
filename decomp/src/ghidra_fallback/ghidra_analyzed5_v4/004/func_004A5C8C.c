#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004a5cf4;
extern float DAT_004a5cf8;

// USA 004A5C8C <- EU 004A5C64 (Ghidra, non-matching)
// GLOBAL DAT_004a5cf4 float
// GLOBAL DAT_004a5cf8 float

void func_004A5C8C(int param_1)

{
  float fparam_0;
  ushort *puVar1;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x62) = 0;
    fparam_0 = DAT_004a5cf8;
    *(undefined2 *)(param_1 + 0x60) = 2;
    func_002317C0((undefined2 *)(param_1 + 0x60),fparam_0);
  }
  else {
    if (*(int *)(param_1 + 0x48) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x48) + 0x45) = 0;
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x45) = 0;
    }
    *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x70) | 2;
  }
  func_002317C0((undefined2 *)(param_1 + 0x6c),DAT_004a5cf4);
  puVar1 = (ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  *puVar1 = *puVar1 & 0xfffd;
  return;
}

