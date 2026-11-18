#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern float func_00521298(int param_1);
extern int func_00659F64(undefined4 *param_1,undefined1 param_2);

// USA 0019BD14 <- EU 0019BD14 (Ghidra, non-matching)

void func_0019BD14(int param_1)

{
  float fVar1;
  
  if (*(uint *)(param_1 + 0x440) < *(uint *)(param_1 + 0x444)) {
    *(uint *)(param_1 + 0x440) = *(uint *)(param_1 + 0x440) + 1;
  }
  else {
    fVar1 = func_00521298(param_1);
    if (0x3f800000 < (int)ALBW_AS_U32(fVar1)) {
      func_00659F64((undefined4 *)(param_1 + 0x41c),4);
    }
    if (*(char *)(param_1 + 0x44f) == '\0') {
      func_00165E28(*(int *)(param_1 + 0x418),*(undefined2 *)(param_1 + 0x480));
      *(undefined1 *)(param_1 + 0x44f) = 1;
    }
  }
  return;
}

