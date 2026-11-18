#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E4124(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);

// USA 00303420 <- EU 003033FC (Ghidra, non-matching)

undefined4 func_00303420(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int *piVar1;
  
  func_001E4124(param_1,param_2,param_3,param_4);
  func_00169A80(*(int **)(param_1 + 0x4bc),extraout_r1,param_3,param_4);
  func_00169A80(*(int **)(param_1 + 0x4c0),extraout_r1_00,param_3,param_4);
  func_00169A80(*(int **)(param_1 + 0x4c4),extraout_r1_01,param_3,param_4);
  func_00169A80(*(int **)(param_1 + 0x4c8),extraout_r1_02,param_3,param_4);
  piVar1 = (int *)(param_1 + 0x47c);
  func_00168E9C(*(int **)(param_1 + 0x4bc),*(int *)(param_1 + 0x47c),(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x4c0),*piVar1,(int *)0x0);
  func_00168E9C(*(int **)(param_1 + 0x4c4),*piVar1,(int *)0x0);
  return func_00168E9C(*(int **)(param_1 + 0x4c8),*piVar1,(int *)0x0);
}

