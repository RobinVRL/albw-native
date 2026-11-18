#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_0065C088(undefined4 *param_1,undefined1 param_2);
extern float DAT_001c7c48;

// USA 001C7BB4 <- EU 001C7BB4 (Ghidra, non-matching)
// GLOBAL DAT_001c7c48 float

void func_001C7BB4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  func_00169A80(*(int **)(param_1 + 0x42c),param_2,param_3,param_4);
  func_00168E9C(*(int **)(param_1 + 0x42c),*(int *)(param_1 + 0x428),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x428));
  iVar1 = *(int *)(*(int *)(param_1 + 0x42c) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_001c7c48) {
      if (DAT_001c7c48 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_0065C088((undefined4 *)(param_1 + 0x430),3);
  }
  return;
}

