#include "ghidra_types.h"

extern int func_003BCD74(int param_1,int param_2);

// USA 003A37B0 <- EU 003A378C (Ghidra, function missing from the decomp table)

undefined4 func_003A37B0(void)

{
  int unaff_r4;
  
  return func_003BCD74(unaff_r4 + 0x834,1);
}

