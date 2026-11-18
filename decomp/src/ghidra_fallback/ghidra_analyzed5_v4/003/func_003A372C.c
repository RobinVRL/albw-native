#include "ghidra_types.h"

extern int func_00398D70(int param_1,int param_2);

// USA 003A372C <- EU 003A3708 (Ghidra, function missing from the decomp table)

undefined4 func_003A372C(void)

{
  int unaff_r4;
  
  return func_00398D70(unaff_r4 + 0x394,1);
}

