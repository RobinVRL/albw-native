#include "ghidra_types.h"

extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00212144;
extern float DAT_00212148;

// USA 00212108 <- EU 00212108 (Ghidra, non-matching)
// GLOBAL DAT_00212144 float
// GLOBAL DAT_00212148 float

void func_00212108(int param_1)

{
  int iVar1;
  
  if ((0x78 < *(int *)(param_1 + 0x8bc)) &&
     (iVar1 = func_005211F4(param_1,DAT_00212148,DAT_00212144), iVar1 != 0)) {
    func_0065D774((undefined4 *)(param_1 + 0x8bc),4);
  }
  return;
}

