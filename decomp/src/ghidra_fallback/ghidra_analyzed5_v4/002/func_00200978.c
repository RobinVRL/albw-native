#include "ghidra_types.h"

extern int func_0058A8F0(int param_1);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);

// USA 00200978 <- EU 00200978 (Ghidra, non-matching)

void func_00200978(int param_1)

{
  int iVar1;
  float in_s0;
  
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065D120((undefined4 *)(param_1 + 0x8dc),4,in_s0);
  }
  return;
}

