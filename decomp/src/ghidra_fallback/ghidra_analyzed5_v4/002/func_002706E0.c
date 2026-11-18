#include "ghidra_types.h"

extern undefined4 DAT_002707a4;
extern float DAT_002707a8;

// USA 002706E0 <- EU 00270708 (Ghidra, non-matching)
// GLOBAL DAT_002707a4 undefined4
// GLOBAL DAT_002707a8 float

void func_002706E0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if ((*(char *)(iVar2 + 0x35) == '\0') ||
       ((*(uint *)(iVar2 + 0x18) < *(uint *)(iVar2 + 0x1c) && (*(char *)(iVar2 + 0x13) == '\0')))) {
      if (param_2 < 0) {
        param_2 = 0x1e;
      }
      *(int *)(iVar1 + 0x1c) = param_2;
      if (param_2 == 0) {
        in_s0 = DAT_002707a4;
      }
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar1 + 0x14);
      if (param_2 == 0) {
        *(undefined4 *)(iVar1 + 0x20) = in_s0;
      }
      else {
        fVar3 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(iVar1 + 0x20) = DAT_002707a8 / fVar3;
      }
      *(undefined4 *)(iVar1 + 0x18) = 0;
      *(undefined1 *)(iVar1 + 0x34) = 1;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

