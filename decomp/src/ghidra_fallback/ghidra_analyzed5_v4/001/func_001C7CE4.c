#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern undefined4 DAT_001c7da8;
extern undefined4 DAT_001c7dac;

// USA 001C7CE4 <- EU 001C7CE4 (Ghidra, non-matching)
// GLOBAL DAT_001c7da8 undefined4
// GLOBAL DAT_001c7dac undefined4

undefined4 func_001C7CE4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x42c) + 0x14);
  if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
    *(float *)(iVar1 + 8) = *(float *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x42c) + 0xc);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x42c) + 0x14) + 0x10) = DAT_001c7da8;
  func_00169A80(*(int **)(param_1 + 0x42c),uVar2,param_3,param_4);
  uVar2 = 0;
  func_00168E9C(*(int **)(param_1 + 0x42c),*(int *)(param_1 + 0x428),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x428));
  iVar1 = *(int *)(*(int *)(param_1 + 0x42c) + 0x14);
  if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
    *(float *)(iVar1 + 8) = *(float *)(iVar1 + 0x14);
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x42c) + 0xc);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x42c) + 0x14) + 0x10) = DAT_001c7dac;
  func_00169A80(*(int **)(param_1 + 0x42c),uVar3,uVar2,param_4);
  func_00168E9C(*(int **)(param_1 + 0x42c),*(int *)(param_1 + 0x428),(int *)0x0);
  return func_004CEAF0(*(int *)(param_1 + 0x428));
}

