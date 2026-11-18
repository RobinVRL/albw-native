#include "ghidra_types.h"

extern int func_00386C40(int param_1,int param_2);
extern int func_0039A33C(int param_1,int param_2);

// USA 003A36E0 <- EU 003A36BC (Ghidra, function missing from the decomp table)

undefined4 func_003A36E0(void)

{
  int unaff_r4;
  
  func_00386C40(unaff_r4 + 0xc,1);
  return func_0039A33C(unaff_r4 + 0x1f0,1);
}

