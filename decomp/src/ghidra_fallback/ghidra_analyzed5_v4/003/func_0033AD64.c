#include "ghidra_types.h"

extern int func_00255484(int param_1,int param_2,undefined4 param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern float fRam0033ade8;
extern undefined4 uRam0033ade0;
extern int *piRam0033ade4;
extern int *DAT_0033addc;

// USA 0033AD64 <- EU 0033AD40 (Ghidra, non-matching)
// GLOBAL DAT_0033addc int *
// GLOBAL UNK_0033ade0 undefined4
// GLOBAL UNK_0033ade4 int *
// GLOBAL UNK_0033ade8 float

void func_0033AD64(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  func_00255484(*DAT_0033addc,(int)*(short *)(param_1 + 0x2c),0);
  func_004CF478(*(int *)(param_1 + 0x40c),1);
  piVar2 = piRam0033ade4;
  uVar1 = uRam0033ade0;
  *(undefined4 *)(param_1 + 0x3dc) = uRam0033ade0;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  iVar3 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + 0x478));
  fVar4 = fRam0033ade8;
  if (iVar3 != 0) {
    fVar5 = *(float *)(param_1 + 0x3d0) - *(float *)(iVar3 + 0x3d0);
    fVar6 = *(float *)(param_1 + 0x3d4) - *(float *)(iVar3 + 0x3d4);
    fVar4 = *(float *)(param_1 + 0x3d8) - *(float *)(iVar3 + 0x3d8);
    fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
  }
  *(float *)(param_1 + 0x448) = fVar4;
  return;
}

