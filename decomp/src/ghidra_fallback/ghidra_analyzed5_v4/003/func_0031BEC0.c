#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231448(int param_1);
extern int func_00231524(int param_1);

// USA 0031BEC0 <- EU 0031BE9C (Ghidra, non-matching)

void func_0031BEC0(int param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 == 0) {
    func_002313DC(param_1 + 0x3c);
  }
  else {
    func_00231524(param_1 + 0x3c);
  }
  (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  func_00231448(param_1 + 0x3c);
  pbVar1 = (byte *)(*(int *)(param_1 + 0x2c) + 0x70);
  *pbVar1 = *pbVar1 | 8;
  return;
}

