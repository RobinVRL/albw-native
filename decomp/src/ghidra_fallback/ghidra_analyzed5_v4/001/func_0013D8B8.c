#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004EB418(int param_1,int *param_2,int param_3);
extern float fRam0013d9c4;
extern float fRam0013d9c8;
extern undefined4 uRam0013d9bc;
extern undefined4 uRam0013d9c0;
extern int *piRam0013d9cc;
extern int *piRam0013d9d0;

// USA 0013D8B8 <- EU 0013D8B8 (Ghidra, non-matching)
// GLOBAL UNK_0013d9bc undefined4
// GLOBAL UNK_0013d9c0 undefined4
// GLOBAL UNK_0013d9c4 float
// GLOBAL UNK_0013d9c8 float
// GLOBAL UNK_0013d9cc int *
// GLOBAL UNK_0013d9d0 int *

void func_0013D8B8(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  func_004CF478(*(int *)(param_1 + 0x4f4),1);
  func_00151148(*(int *)(param_1 + 0x54c),1);
  *(undefined1 *)(param_1 + 0x605) = 1;
  uVar5 = uRam0013d9bc;
  *(undefined4 *)(param_1 + 0x520) = 0x11;
  *(undefined4 *)(param_1 + 0x524) = uVar5;
  uVar5 = uRam0013d9c0;
  *(undefined4 *)(param_1 + 0x51c) = 0;
  *(undefined4 *)(param_1 + 0x544) = 0x1e;
  *(undefined4 *)(param_1 + 0x548) = uVar5;
  fVar1 = fRam0013d9c4;
  *(undefined4 *)(param_1 + 0x540) = 0;
  uVar5 = *(undefined4 *)(param_1 + 0x3e0);
  *(float *)(param_1 + 0x3e0) = fVar1;
  fVar6 = *(float *)(param_1 + 0x3dc);
  fVar3 = *(float *)(param_1 + 0x3e4);
  fVar4 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar3 * fVar3);
  if (fVar1 < fVar4) {
    fVar4 = fRam0013d9c8 / fVar4;
    *(float *)(param_1 + 0x3dc) = fVar6 * fVar4;
    *(float *)(param_1 + 0x3e0) = fVar1 * fVar4;
    *(float *)(param_1 + 0x3e4) = fVar3 * fVar4;
  }
  piVar2 = piRam0013d9cc;
  *(undefined4 *)(param_1 + 0x3e0) = uVar5;
  *(undefined4 *)(param_1 + 0x594) = *(undefined4 *)(*(int *)(*piVar2 + 0x1c) + 4);
  piVar2 = piRam0013d9d0;
  *(undefined1 *)(param_1 + 0x62c) = 0;
  func_004EB418(*piVar2,(int *)param_1,1);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x588) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x58c) = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined1 *)(param_1 + 0x4f2) = 0;
  return;
}

