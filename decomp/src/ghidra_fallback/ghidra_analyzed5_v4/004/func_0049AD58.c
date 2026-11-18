#include "ghidra_types.h"

extern int func_005FF6E4(int param_1);
extern int DAT_0049ad64;

// USA 0049AD58 <- EU 0049AD30 (Ghidra, non-matching)
// GLOBAL DAT_0049ad64 int

void func_0049AD58(int *param_1)

{
  int iVar1;
  int extraout_r1;
  
  iVar1 = func_005FF6E4(DAT_0049ad64);
  param_1[0x28] = iVar1;
  software_interrupt(0x28);
  param_1[0x2c] = iVar1;
  param_1[0x2d] = extraout_r1;
  software_interrupt(0x28);
  param_1[0x2e] = iVar1;
  param_1[0x2f] = extraout_r1;
  do {
    (**(code **)(*param_1 + 100))(param_1);
  } while( true );
}

