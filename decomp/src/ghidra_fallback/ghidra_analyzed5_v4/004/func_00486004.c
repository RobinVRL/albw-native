#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00486244(int param_1);
extern int func_00532C78(int param_1);
extern float DAT_004860c8;
extern float DAT_004860cc;

// USA 00486004 <- EU 00485FDC (Ghidra, non-matching)
// GLOBAL DAT_004860c8 float
// GLOBAL DAT_004860cc float

undefined4 func_00486004(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0xe2) == '\0') {
    if (*(char *)(param_1 + 0xe0) != *(char *)(param_1 + 0xe1)) {
      func_002317C0((undefined2 *)(param_1 + 0xc4),DAT_004860cc);
      uVar2 = 1;
      goto LAB_004860c0;
    }
  }
  else {
    bVar1 = func_00532C78(param_1 + 0xc4);
    uVar2 = 0;
    if (!bVar1) {
LAB_004860c0:
      *(undefined1 *)(param_1 + 0xe2) = uVar2;
      return 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
    if ((uint)(int)*(short *)(param_1 + 0xc6) < *(uint *)(*(int *)(param_1 + 0x1c) + 8)) {
      iVar3 = iVar3 + *(short *)(param_1 + 0xc6) * 0x38;
    }
    fVar4 = *(float *)(iVar3 + 0x18);
    if (*(float *)(iVar3 + 0x14) < fVar4) {
      if (((fVar4 < *(float *)(iVar3 + 0x20)) && (fVar4 < DAT_004860c8)) &&
         (DAT_004860c8 <= *(float *)(iVar3 + 0x20))) goto LAB_00486094;
    }
    else if (DAT_004860c8 <= fVar4) {
      return 0;
    }
    if (DAT_004860c8 <= *(float *)(iVar3 + 0x14)) {
LAB_00486094:
      return func_00486244(param_1);
    }
  }
  return 0;
}

