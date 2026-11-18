#include "ghidra_types.h"

extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058A8F0(int param_1);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00210db0;
extern float DAT_00210db4;

// USA 00210D54 <- EU 00210D54 (Ghidra, non-matching)
// GLOBAL DAT_00210db0 float
// GLOBAL DAT_00210db4 float

undefined4 func_00210D54(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    iVar1 = func_005211F4(param_1,DAT_00210db4,DAT_00210db0);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x95c) == '\x01') {
        return func_0065D774((undefined4 *)(param_1 + 0x8bc),6);
      }
      uVar2 = 1;
    }
    func_0065D774((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return 0;
}

