#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00252578(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00520FA4(void *param_1);
extern int *DAT_00252b88;
extern undefined4 *DAT_00252b8c;
extern undefined4 DAT_00252b90;

// USA 00252A14 <- EU 00252A3C (Ghidra, non-matching)
// GLOBAL DAT_00252b88 int *
// GLOBAL DAT_00252b8c undefined4 *
// GLOBAL DAT_00252b90 undefined4

int * func_00252A14(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  
  piVar6 = (int *)(*(char *)(param_1 + 0x500) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x518) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x518) + *(char *)(param_1 + 0x500) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x510) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x510)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x50c);
  iVar2 = *(int *)(param_1 + 0x4fc) + 1;
  *(int *)(param_1 + 0x4fc) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fVar8);
    uVar4 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x4f8),uVar4,iVar5,piVar6);
  func_00168E9C(*(int **)(param_1 + 0x4f8),*(int *)(param_1 + 0x4f4),(int *)0x0);
  func_00252578(param_1);
  piVar7 = *(int **)(param_1 + 0x40c);
  piVar6 = (int *)*DAT_00252b88;
  if ((((uint)*DAT_00252b88 & 1) == 0) &&
     (iVar2 = func_00100174(DAT_00252b88), piVar6 = (int *)0x0, iVar2 != 0)) {
    *DAT_00252b8c = DAT_00252b90;
    piVar6 = DAT_00252b88;
  }
  if ((piVar7 == (int *)0x0) ||
     (piVar6 = (int *)(**(code **)*piVar7)(piVar7,DAT_00252b8c), piVar6 == (int *)0x0)) {
    piVar7 = (int *)0x0;
  }
  if (piVar7 != (int *)0x0) {
    fVar8 = *(float *)(param_1 + 0x3d4);
    iVar2 = *(int *)(param_1 + 0x3d8);
    piVar7[1] = *(int *)(param_1 + 0x3d0);
    piVar7[2] = (int)ALBW_AS_U32((fVar8 + ALBW_AS_F32(piVar7[0x16])));
    piVar7[3] = iVar2;
    func_004356B4(piVar7);
    piVar6 = func_00520FA4(param_1);
    return piVar6;
  }
  return piVar6;
}

