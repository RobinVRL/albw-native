#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_0027f438;
extern uint *DAT_0027f43c;
extern undefined4 *DAT_0027f440;
extern undefined4 DAT_0027f444;
extern float DAT_0027f448;
extern undefined4 DAT_0027f44c;
extern float DAT_0027f450;
extern float DAT_0027f454;
extern undefined4 DAT_0027f458;

// USA 0027F1E0 <- EU 0027F208 (Ghidra, non-matching)
// GLOBAL DAT_0027f438 int *
// GLOBAL DAT_0027f43c uint *
// GLOBAL DAT_0027f440 undefined4 *
// GLOBAL DAT_0027f444 undefined4
// GLOBAL DAT_0027f448 float
// GLOBAL DAT_0027f44c undefined4
// GLOBAL DAT_0027f450 float
// GLOBAL DAT_0027f454 float
// GLOBAL DAT_0027f458 undefined4

void func_0027F1E0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x5c) != '\0') {
    puVar1 = (undefined4 *)func_0052FBDC(*DAT_0027f438 + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),0);
    if (((*DAT_0027f43c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0027f43c), iVar2 != 0)) {
      *DAT_0027f440 = DAT_0027f444;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_0027f440), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      iVar2 = (int)*(short *)(puVar1 + 0x124);
      *(int *)(param_1 + 0x4ec) = iVar2;
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else if (2 < iVar2) {
        iVar2 = 2;
      }
      *(int *)(param_1 + 0x4ec) = iVar2;
    }
  }
  fVar5 = DAT_0027f448;
  iVar2 = *(int *)(param_1 + 0x4ec);
  iVar3 = iVar2 - *(int *)(param_1 + 0x4f0);
  if (iVar3 != 1) {
    if (iVar3 != -1) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0x4f8);
    if (uVar4 < *(uint *)(param_1 + 0x4fc)) {
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0x4f8) = uVar4;
    }
    if (uVar4 < *(uint *)(param_1 + 0x4fc)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    if (iVar2 == 1) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x4b8) + 0x14);
      fVar5 = DAT_0027f454;
      if (*(float *)(iVar2 + 8) == DAT_0027f454) goto LAB_0027f3f8;
    }
    else if ((iVar2 != 0) ||
            (iVar2 = *(int *)(*(int *)(param_1 + 0x4b8) + 0x14), *(float *)(iVar2 + 8) == fVar5))
    goto LAB_0027f3f8;
    *(float *)(iVar2 + 8) = fVar5;
    *(undefined1 *)(iVar2 + 0x26) = 1;
LAB_0027f3f8:
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4b8) + 0x14) + 0x10) = DAT_0027f458;
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4ec);
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x4f8);
  if (uVar4 < *(uint *)(param_1 + 0x4fc)) {
    uVar4 = uVar4 + 1;
    *(uint *)(param_1 + 0x4f8) = uVar4;
  }
  if (uVar4 < *(uint *)(param_1 + 0x4fc)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (iVar2 == 2) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x4b8) + 0x14);
    if (*(float *)(iVar2 + 8) == fVar5) goto LAB_0027f38c;
  }
  else if ((iVar2 != 1) ||
          (iVar2 = *(int *)(*(int *)(param_1 + 0x4b8) + 0x14), fVar5 = DAT_0027f450,
          *(float *)(iVar2 + 8) == DAT_0027f450)) goto LAB_0027f38c;
  *(float *)(iVar2 + 8) = fVar5;
  *(undefined1 *)(iVar2 + 0x26) = 1;
LAB_0027f38c:
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4b8) + 0x14) + 0x10) = DAT_0027f44c;
  *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_1 + 0x4ec);
  return;
}

