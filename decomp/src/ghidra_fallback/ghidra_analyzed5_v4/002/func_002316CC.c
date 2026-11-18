#include "ghidra_types.h"

extern int func_001672F8(int param_1,uint param_2,float fparam_0,float fparam_1);
extern float DAT_00231770;

// USA 002316CC <- EU 002316CC (Ghidra, non-matching)
// GLOBAL DAT_00231770 float

undefined4 func_002316CC(int param_1,float fparam_0)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_r12;
  float fVar4;
  float fVar5;
  
  if ((*(int *)(param_1 + 8) != 0) && (-1 < *(short *)(param_1 + 2))) {
    fVar4 = fparam_0;
    fparam_0 = DAT_00231770;
    func_001672F8(*(int *)(param_1 + 8),(int)*(short *)(param_1 + 2),DAT_00231770,DAT_00231770);
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = (uint)*(short *)(param_1 + 2);
    uVar3 = *(uint *)(iVar2 + 8);
    if (uVar1 < uVar3) {
      in_r12 = *(int *)(iVar2 + 0xc);
    }
    if (uVar1 < uVar3) {
      in_r12 = in_r12 + uVar1 * 0x38;
    }
    else {
      in_r12 = *(int *)(iVar2 + 0xc);
    }
    fVar5 = fVar4;
    if (fparam_0 > fVar4) {
      fVar5 = fparam_0;
    }
    if ((fparam_0 <= fVar4) && (*(float *)(in_r12 + 0x20) < fVar5)) {
      fVar5 = *(float *)(in_r12 + 0x20);
    }
    if (uVar1 < uVar3) {
      iVar2 = *(int *)(iVar2 + 0xc) + uVar1 * 0x38;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    *(float *)(iVar2 + 0x14) = fVar5;
    *(float *)(*(int *)(iVar2 + 0x10) + 0x10) = fVar5;
  }
  return ALBW_AS_U32(fparam_0);
}

