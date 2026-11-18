#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float DAT_001c7e88;
extern undefined4 DAT_001c7e8c;

// USA 001C7DB0 <- EU 001C7DB0 (Ghidra, non-matching)
// GLOBAL DAT_001c7e88 float
// GLOBAL DAT_001c7e8c undefined4

undefined4 func_001C7DB0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = DAT_001c7e88;
  iVar1 = *(int *)(*(int *)(param_1 + 0x42c) + 0x14);
  if (*(float *)(iVar1 + 8) != DAT_001c7e88) {
    *(float *)(iVar1 + 8) = DAT_001c7e88;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x42c) + 0xc);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x42c) + 0x14) + 0x10) = DAT_001c7e8c;
  func_00169A80(*(int **)(param_1 + 0x42c),uVar2,param_3,param_4);
  uVar2 = 0;
  func_00168E9C(*(int **)(param_1 + 0x42c),*(int *)(param_1 + 0x428),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x428));
  iVar1 = *(int *)(*(int *)(param_1 + 0x42c) + 0x14);
  if (*(float *)(iVar1 + 8) != fVar4) {
    *(float *)(iVar1 + 8) = fVar4;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x42c) + 0xc);
  *(float *)(*(int *)(*(int *)(param_1 + 0x42c) + 0x14) + 0x10) = fVar4;
  func_00169A80(*(int **)(param_1 + 0x42c),uVar3,uVar2,param_4);
  func_00168E9C(*(int **)(param_1 + 0x42c),*(int *)(param_1 + 0x428),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x428));
}

