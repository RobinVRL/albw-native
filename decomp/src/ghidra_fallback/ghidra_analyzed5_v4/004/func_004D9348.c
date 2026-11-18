#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0066A50C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004d93a8;

// USA 004D9348 <- EU 004D9320 (Ghidra, non-matching)
// GLOBAL DAT_004d93a8 float

void func_004D9348(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  func_00169A80(*(int **)(param_1 + 0x7b4),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x7b4),*(int *)(param_1 + 0x7b0),(int *)0x0);
  iVar1 = *(int *)(*(int *)(param_1 + 0x7b4) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_004d93a8) {
      if (DAT_004d93a8 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_0066A50C((undefined4 *)(param_1 + 0x788),0);
  }
  return;
}

