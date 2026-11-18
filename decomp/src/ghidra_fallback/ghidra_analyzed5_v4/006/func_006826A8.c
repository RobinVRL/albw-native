#include "ghidra_types.h"


// USA 006826A8 <- EU 00682680 (Ghidra, function missing from the decomp table)

/* WARNING: Removing unreachable block (ram,0x0068269c) */
/* WARNING: Unknown calling convention */

undefined4 func_006826A8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (NAN(*(float *)(param_1 + 0x7c)) || NAN(*(float *)(param_2 + 0x7c))) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

