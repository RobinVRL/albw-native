#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern float DAT_004c86b4;
extern float DAT_004c86b8;
extern float DAT_004c86bc;

// USA 004C8510 <- EU 004C84E8 (Ghidra, non-matching)
// GLOBAL DAT_004c86b4 float
// GLOBAL DAT_004c86b8 float
// GLOBAL DAT_004c86bc float

void func_004C8510(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  switch(param_2) {
  case 0:
    fVar3 = DAT_004c86b4;
    if ((param_3 != 1) && (fVar3 = DAT_004c86bc, param_3 == 2)) {
      fVar3 = DAT_004c86b8;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x13c) + 0x14);
    fVar2 = *(float *)(iVar1 + 8);
    if (fVar2 != fVar3) {
      *(float *)(iVar1 + 8) = fVar3;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_00168E9C(*(int **)(param_1 + 0x13c),*(int *)(param_1 + 8),(int *)0x0);
    return;
  case 1:
    fVar3 = DAT_004c86bc;
    if ((1 < param_3) && (param_3 == 2)) {
      fVar3 = DAT_004c86b4;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x140) + 0x14);
    fVar2 = *(float *)(iVar1 + 8);
    if (fVar2 != fVar3) {
      *(float *)(iVar1 + 8) = fVar3;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_004CEA18(*(int *)(param_1 + 8),(uint)(param_3 != 0),8);
    func_00168E9C(*(int **)(param_1 + 0x140),*(int *)(param_1 + 8),(int *)0x0);
    return;
  case 2:
    fVar3 = DAT_004c86bc;
    if ((1 < param_3) && (param_3 == 2)) {
      fVar3 = DAT_004c86b4;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x144) + 0x14);
    fVar2 = *(float *)(iVar1 + 8);
    if (fVar2 != fVar3) {
      *(float *)(iVar1 + 8) = fVar3;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_004CEA18(*(int *)(param_1 + 8),(uint)(param_3 != 0),6);
    func_00168E9C(*(int **)(param_1 + 0x144),*(int *)(param_1 + 8),(int *)0x0);
    return;
  case 3:
    break;
  case 4:
    fVar3 = DAT_004c86bc;
    if ((param_3 != 0) && (param_3 == 1)) {
      fVar3 = DAT_004c86b4;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x14c) + 0x14);
    fVar2 = *(float *)(iVar1 + 8);
    if (fVar2 != fVar3) {
      *(float *)(iVar1 + 8) = fVar3;
      *(undefined1 *)(iVar1 + 0x26) = 1;
    }
    func_00168E9C(*(int **)(param_1 + 0x14c),*(int *)(param_1 + 8),(int *)0x0);
    return;
  default:
    return;
  }
  fVar3 = DAT_004c86bc;
  if (((param_3 != 0) && (fVar3 = DAT_004c86b4, param_3 != 1)) &&
     (fVar3 = DAT_004c86bc, param_3 == 2)) {
    fVar3 = DAT_004c86b8;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x148) + 0x14);
  fVar2 = *(float *)(iVar1 + 8);
  if (fVar2 != fVar3) {
    *(float *)(iVar1 + 8) = fVar3;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  func_00168E9C(*(int **)(param_1 + 0x148),*(int *)(param_1 + 8),(int *)0x0);
  return;
}

