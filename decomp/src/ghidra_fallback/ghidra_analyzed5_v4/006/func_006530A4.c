#include "ghidra_types.h"

extern int func_00255B48(int param_1,int param_2,int param_3);
extern int *DAT_0065309c;

// USA 006530A4 <- EU 0065307C (Ghidra, non-matching)
// GLOBAL DAT_0065309c int *

undefined4 func_006530A4(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x9cc);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x9ce);
  }
  return func_00255B48(*DAT_0065309c,-(uint)uVar1,param_3);
}

