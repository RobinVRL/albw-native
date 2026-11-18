#include "ghidra_types.h"

extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00660F70(undefined4 *param_1,undefined1 param_2);
extern float DAT_0027ff4c;

// USA 0027FE60 <- EU 0027FE88 (Ghidra, non-matching)
// GLOBAL DAT_0027ff4c float

void func_0027FE60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4bc) == 6) {
    if (*(short *)(param_1 + 0x36) != 0) {
      func_00588C14(param_1,0,0);
    }
    if (*(short *)(param_1 + 0x38) != 0) {
      func_00588C14(param_1,1,0);
    }
  }
  if ((5 < *(int *)(param_1 + 0x4bc)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x4b4) + 0x14), *(char *)(iVar1 + 0x1c) == '\0')) {
    if (*(float *)(iVar1 + 0x10) < DAT_0027ff4c) {
      if (DAT_0027ff4c < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_00660F70((undefined4 *)(param_1 + 0x4bc),3);
  }
  return;
}

