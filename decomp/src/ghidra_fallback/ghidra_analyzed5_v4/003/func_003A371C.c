#include "ghidra_types.h"

extern int func_003A270C(int param_1,int param_2);

// USA 003A371C <- EU 003A36F8 (Ghidra, function missing from the decomp table)

undefined4 func_003A371C(void)

{
  int unaff_r4;
  
  return func_003A270C(unaff_r4 + 0x358,1);
}

