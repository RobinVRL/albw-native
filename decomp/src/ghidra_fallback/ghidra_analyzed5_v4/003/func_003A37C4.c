#include "ghidra_types.h"

extern int func_00383540(int param_1,int param_2);

// USA 003A37C4 <- EU 003A37A0 (Ghidra, function missing from the decomp table)

undefined4 func_003A37C4(void)

{
  int unaff_r4;
  
  return func_00383540(unaff_r4 + 0x870,1);
}

