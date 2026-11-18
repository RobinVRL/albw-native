#include "ghidra_types.h"

extern int func_002B1644(int param_1,undefined4 param_2,int param_3);

// USA 002AED7C <- EU 002AED58 (Ghidra, non-matching)

void func_002AED7C(int param_1,uint param_2)

{
  func_002B1644(param_1,0x14,param_2 & 0xff);
  if ((param_2 == 0) && (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1)) {
    *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 1;
  }
  return;
}

