#include "ghidra_types.h"

extern float func_002B0D7C(int param_1,int param_2,uint param_3,int param_4,float fparam_0);
extern float DAT_002b1718;

// USA 002B1710 <- EU 002B16EC (Ghidra, non-matching)
// GLOBAL DAT_002b1718 float

void func_002B1710(int param_1)

{
  func_002B0D7C(param_1,7,8,0,DAT_002b1718);
  *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 8;
  return;
}

