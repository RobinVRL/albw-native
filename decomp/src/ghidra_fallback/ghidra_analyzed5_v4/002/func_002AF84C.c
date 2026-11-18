#include "ghidra_types.h"

extern int func_002AD658(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined1 param_5,int param_6);
extern int func_002ADE0C(int param_1,int param_2);
extern int func_004FBCC0(int *param_1);

// USA 002AF84C <- EU 002AF828 (Ghidra, non-matching)

undefined4 func_002AF84C(int param_1,uint param_2)

{
  func_002ADE0C(param_1,param_2);
  func_004FBCC0(*(int **)(param_1 + 0x34));
  return func_002AD658(param_1,5,param_2 & 0xff,(int)*(char *)(param_1 + 0x110),
                *(undefined1 *)(param_1 + 0x111),1);
}

