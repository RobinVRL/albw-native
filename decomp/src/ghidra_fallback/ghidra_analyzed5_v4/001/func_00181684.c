#include "ghidra_types.h"

extern int DAT_001816dc;
extern int DAT_001816e0;
extern int DAT_001816e4;

// USA 00181684 <- EU 00181684 (Ghidra, non-matching)
// GLOBAL DAT_001816dc int
// GLOBAL DAT_001816e0 int
// GLOBAL DAT_001816e4 int

void func_00181684(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001816dc;
  param_1[0xf7] = DAT_001816dc;
  param_1[0xf9] = iVar1;
  param_1[0xf8] = DAT_001816e0;
  (**(code **)(*param_1 + 0xac))(param_1,7,0xffffffff);
  iVar1 = DAT_001816e4;
  param_1[0x26a] = 5;
  param_1[0x26b] = iVar1;
  param_1[0x269] = 0;
  return;
}

