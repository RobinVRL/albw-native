#include "ghidra_types.h"

extern int func_002EC1B8(int param_1,int param_2);
extern int func_002F5CD4(int param_1,int param_2);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);

// USA 002E8AA4 <- EU 002E8A80 (Ghidra, non-matching)

void func_002E8AA4(int param_1)

{
  float in_s0;
  undefined8 uVar1;
  
  func_002F5CD4(param_1,0);
  func_002EC1B8(param_1,1);
  uVar1 = func_0058AB74(param_1);
  if ((int)uVar1 == 0x1c || (int)uVar1 == 0x1d) {
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
    }
    else {
      func_006640EC((undefined4 *)(param_1 + 0x8c8),0xf,in_s0);
    }
  }
  return;
}

