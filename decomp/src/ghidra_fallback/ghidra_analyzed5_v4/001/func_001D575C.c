#include "ghidra_types.h"

extern int func_001D47B4(int param_1,uint param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_00588F08(int param_1);
extern int *DAT_001d5860;
extern float DAT_001d5864;
extern undefined4 DAT_001d5868;

// USA 001D575C <- EU 001D575C (Ghidra, non-matching)
// GLOBAL DAT_001d5860 int *
// GLOBAL DAT_001d5864 float
// GLOBAL DAT_001d5868 undefined4

void func_001D575C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  float fparam_1;
  float fVar5;
  float fparam_2;
  float fVar6;
  float fparam_1_00;
  
  piVar1 = DAT_001d5860;
  fparam_1 = *(float *)(param_1 + 0x46c);
  pfVar3 = (float *)func_00588F08(*DAT_001d5860);
  fVar5 = *pfVar3;
  pfVar3 = (float *)func_00588F08(*piVar1);
  fparam_2 = *(float *)(param_1 + 0x3d8);
  if (*pfVar3 < *(float *)(param_1 + 0x3d0)) {
    fVar5 = fVar5 + DAT_001d5864;
  }
  else {
    fVar5 = fVar5 - DAT_001d5864;
  }
  fVar6 = DAT_001d5864;
  fparam_1_00 = fparam_1;
  iVar4 = func_001D47B4(param_1,extraout_r1,fVar5,fparam_1,fparam_2);
  if (iVar4 != 0) {
    pfVar3 = (float *)func_00588F08(*piVar1);
    fVar5 = *pfVar3;
    pfVar3 = (float *)func_00588F08(*piVar1);
    if (*pfVar3 < *(float *)(param_1 + 0x3d0)) {
      fVar5 = fVar5 - fVar6;
    }
    else {
      fVar5 = fVar5 + fVar6;
    }
    iVar4 = func_001D47B4(param_1,extraout_r1_00,fVar5,fparam_1_00,fparam_2);
    if (iVar4 != 0) {
      *(undefined1 *)(param_1 + 0x4c6) = 1;
    }
  }
  *(float *)(param_1 + 0x468) = fVar5;
  *(float *)(param_1 + 0x46c) = fparam_1;
  *(float *)(param_1 + 0x470) = fparam_2;
  uVar2 = DAT_001d5868;
  *(undefined1 *)(param_1 + 0x4c2) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0x23;
  *(undefined4 *)(param_1 + 0x4b0) = uVar2;
  *(undefined4 *)(param_1 + 0x4a8) = 0;
  *(undefined2 *)(param_1 + 0x4b6) = 0;
  *(undefined1 *)(param_1 + 0x4c1) = 2;
  return;
}

