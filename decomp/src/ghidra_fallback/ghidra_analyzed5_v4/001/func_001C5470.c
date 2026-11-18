#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern float DAT_001c5528;

// USA 001C5470 <- EU 001C5470 (Ghidra, non-matching)
// GLOBAL DAT_001c5528 float

undefined4 func_001C5470(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  func_00169A80(*(int **)(param_1 + 0x7b4),param_2,param_3,param_4);
  uVar2 = 0;
  func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7b0),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x7b8),extraout_r1,uVar2,param_4);
  func_00168E9C(*(int **)(param_1 + 0x7b8),*(int *)(param_1 + 0x7b0),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x7b0));
  iVar1 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_001c5528) {
      if (*(float *)(iVar1 + 8) <= DAT_001c5528) {
        return 1;
      }
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
      return 1;
    }
  }
  return 0;
}

