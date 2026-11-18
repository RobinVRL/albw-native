#include "ghidra_types.h"

extern int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4);

// USA 001007A2 <- EU 001007A2 (Ghidra, function missing from the decomp table)

int func_001007A2(byte *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = func_001007C0((short *)0x0,param_1,param_2,param_3);
  return iVar1;
}

