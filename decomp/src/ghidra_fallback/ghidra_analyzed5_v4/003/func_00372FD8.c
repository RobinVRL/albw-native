#include "ghidra_types.h"

extern int func_004ECDE8(undefined4 *param_1,int param_2,uint param_3);
extern int *DAT_00372fd4;

// USA 00372FD8 <- EU 00372FB4 (Ghidra, non-matching)
// GLOBAL DAT_00372fd4 int *

void func_00372FD8(undefined4 *param_1,int param_2,uint param_3)

{
  func_004ECDE8(param_1,param_2,param_3);
  *(uint *)(*DAT_00372fd4 + 0x2b4) = *(uint *)(*DAT_00372fd4 + 0x2b4) & 0xfffffff7;
  return;
}

