#include "ghidra_types.h"

extern int func_00382E10(int param_1,int param_2);

// USA 003A36FC <- EU 003A36D8 (Ghidra, function missing from the decomp table)

undefined4 func_003A36FC(void)

{
  int unaff_r4;
  
  return func_00382E10(unaff_r4 + 0x2cc,1);
}

