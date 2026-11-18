#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014F510(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_004356B4(int *param_1);
extern uint *DAT_0013d094;
extern undefined4 *DAT_0013d098;
extern undefined4 DAT_0013d09c;
extern float DAT_0013d0a0;

// USA 0013CF3C <- EU 0013CF3C (Ghidra, non-matching)
// GLOBAL DAT_0013d094 uint *
// GLOBAL DAT_0013d098 undefined4 *
// GLOBAL DAT_0013d09c undefined4
// GLOBAL DAT_0013d0a0 float

void func_0013CF3C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  piVar2 = *(int **)(param_1 + 0x40c);
  if (((*DAT_0013d094 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0013d094), iVar1 != 0)) {
    *DAT_0013d098 = DAT_0013d09c;
  }
  if ((piVar2 == (int *)0x0) || (iVar1 = (**(code **)*piVar2)(piVar2,DAT_0013d098), iVar1 == 0)) {
    piVar2 = (int *)0x0;
  }
  if (piVar2 != (int *)0x0) {
    fVar4 = *(float *)(param_1 + 0x3d4);
    iVar1 = *(int *)(param_1 + 0x3d8);
    piVar2[1] = *(int *)(param_1 + 0x3d0);
    piVar2[2] = (int)ALBW_AS_U32((fVar4 + ALBW_AS_F32(piVar2[0x16])));
    piVar2[3] = iVar1;
    func_004356B4(piVar2);
  }
  piVar2 = *(int **)(param_1 + 0x5b4);
  if (piVar2 != (int *)0x0) {
    fVar5 = *(float *)(param_1 + 0x598);
    fVar4 = *(float *)(param_1 + 0x3d4);
    iVar1 = *(int *)(param_1 + 0x3d8);
    piVar2[1] = *(int *)(param_1 + 0x3d0);
    piVar2[2] = (int)ALBW_AS_U32((fVar4 + fVar5));
    piVar2[3] = iVar1;
    func_004356B4(piVar2);
  }
  iVar1 = *(int *)(param_1 + 0x5a0);
  if (iVar1 != 0) {
    fVar5 = *(float *)(param_1 + 0x3d4);
    uVar3 = *(undefined4 *)(param_1 + 0x3d8);
    fVar4 = *(float *)(iVar1 + 0x5c) * DAT_0013d0a0;
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(float *)(iVar1 + 8) = fVar5 + fVar4;
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    func_004356B4(*(int **)(param_1 + 0x5a0));
    if (*(char *)(param_1 + 0x4fc) == '\0') {
      func_0014F510(param_1,*(undefined4 *)(param_1 + 0x5a0),param_1 + 0x618,0x1000,0,0);
    }
  }
  return;
}

