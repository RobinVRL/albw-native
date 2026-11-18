#include "ghidra_types.h"

extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0065D8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00213df4;

// USA 00213D94 <- EU 00213D94 (Ghidra, non-matching)
// GLOBAL DAT_00213df4 float

void func_00213D94(int param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x95c) < *(uint *)(param_1 + 0x960)) {
    *(uint *)(param_1 + 0x95c) = *(uint *)(param_1 + 0x95c) + 1;
  }
  else {
    iVar1 = func_005211F4(param_1,DAT_00213df4,*(float *)(param_1 + 0x938));
    if ((iVar1 != 0) && (*(char *)(param_1 + 0x950) == '\0')) {
      func_0065D8B8((undefined4 *)(param_1 + 0x8bc),2);
    }
  }
  return;
}

