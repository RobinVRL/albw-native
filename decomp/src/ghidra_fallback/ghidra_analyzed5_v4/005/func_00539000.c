#include "ghidra_types.h"

extern int func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4);
extern int *DAT_00538ff8;

// USA 00539000 <- EU 00538FD8 (Ghidra, non-matching)
// GLOBAL DAT_00538ff8 int *

undefined4 func_00539000(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = func_005382AC(*(undefined4 *)(param_1 + 0x50),param_2,(char *)(*DAT_00538ff8 + 0x18),1);
  return uVar1;
}

