#include "ghidra_types.h"

extern int func_003AF63C(int param_1,int param_2);

// USA 003A370C <- EU 003A36E8 (Ghidra, function missing from the decomp table)

undefined4 func_003A370C(void)

{
  int unaff_r4;
  
  return func_003AF63C(unaff_r4 + 0x30c,1);
}

