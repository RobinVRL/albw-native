#include "ghidra_types.h"

extern int func_0030A0A4(int param_1,int *param_2,undefined4 param_3,uint param_4);

// USA 003A4C38 <- EU 003A4C14 (Ghidra, non-matching)

undefined4 func_003A4C38(int param_1,int *param_2)

{
  uint in_r3;
  
  *(undefined1 *)(param_1 + 0x145) = 0xff;
  return func_0030A0A4(param_1,param_2,0xff,in_r3);
}

