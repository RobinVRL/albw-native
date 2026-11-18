#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);

// USA 002AE0E8 <- EU 002AE0C4 (Ghidra, non-matching)

undefined4 func_002AE0E8(int param_1,uint param_2)

{
  func_002ADE0C(param_1,param_2);
  if ((param_2 == 0) && (*(short *)(*(int *)(param_1 + 0x34) + 0x508) < 1)) {
    *(ushort *)(param_1 + 0x38) = *(ushort *)(param_1 + 0x38) | 1;
  }
  return func_002AD658(param_1,0x20,param_2 & 0xff,8,0,1);
}

