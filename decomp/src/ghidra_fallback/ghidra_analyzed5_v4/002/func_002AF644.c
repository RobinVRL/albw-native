#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);

// USA 002AF644 <- EU 002AF620 (Ghidra, non-matching)

undefined4 func_002AF644(int param_1,uint param_2)

{
  func_002ADE0C(param_1,param_2);
  *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x655) =
       *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x654);
  return func_002AD658(param_1,1,param_2 & 0xff,0x1f,0,1);
}

