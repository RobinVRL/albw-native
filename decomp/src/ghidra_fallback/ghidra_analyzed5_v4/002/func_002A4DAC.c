#include "ghidra_types.h"

extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662128(undefined4 *param_1,undefined1 param_2);

// USA 002A4DAC <- EU 002A4D88 (Ghidra, non-matching)

undefined4 func_002A4DAC(int param_1)

{
  float fparam_0;
  longlong lVar1;
  
  fparam_0 = func_0058AC38(param_1);
  lVar1 = func_0058ACC8(param_1,fparam_0);
  if ((int)lVar1 != 0) {
    if (2 < *(byte *)(param_1 + 0xb92)) {
      return func_00662128((undefined4 *)(param_1 + 0x9e0),1);
    }
    func_00662128((undefined4 *)(param_1 + 0x9e0),5);
  }
  return 0;
}

