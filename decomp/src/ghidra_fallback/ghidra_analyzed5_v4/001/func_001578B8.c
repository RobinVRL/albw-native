#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0058A8F0(int param_1);
extern int func_00657FA0(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0015793c;

// USA 001578B8 <- EU 001578BC (Ghidra, non-matching)
// GLOBAL DAT_0015793c undefined4

void func_001578B8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  
  fVar4 = *(float *)(*(int *)(param_1 + 0xa24) + 0x10);
  *(float *)(param_1 + 0xa40) = fVar4;
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),fVar4);
  pfVar3 = *(float **)(param_1 + 0xa24);
  fVar4 = func_0051CF68(pfVar3 + 3,*pfVar3,pfVar3[1],pfVar3[2]);
  pfVar3[4] = fVar4;
  if ((*(int *)(*(int *)(param_1 + 0xa24) + 0xc) == 0x3f800000) ||
     (iVar2 = func_0058A8F0(param_1), iVar2 != 0)) {
    uVar1 = DAT_0015793c;
    *(undefined4 *)(param_1 + 0x3dc) = DAT_0015793c;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
    func_00657FA0((undefined4 *)(param_1 + 0x8bc),6);
  }
  return;
}

