#include "ghidra_types.h"

extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_00583B1C(int param_1);
extern int func_0060C57C(int param_1,int param_2,undefined1 param_3);
extern float DAT_0013bcdc;
extern float DAT_0013bce0;

// USA 0013BC70 <- EU 0013BC70 (Ghidra, non-matching)
// GLOBAL DAT_0013bcdc float
// GLOBAL DAT_0013bce0 float

undefined4 func_0013BC70(int param_1)

{
  int iVar1;
  
  iVar1 = func_00583B1C(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_005211F4(param_1,DAT_0013bce0,DAT_0013bcdc);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | 1;
    *(undefined4 *)(param_1 + 0x984) = 0;
    return func_0060C57C(param_1,0,0);
  }
  return func_0060C57C(param_1,7,0);
}

