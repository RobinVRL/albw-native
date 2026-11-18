#include "ghidra_types.h"

extern int func_00111EF0(int *param_1,int *param_2);
extern int func_003E68D8(int param_1,uint param_2);
extern int *DAT_003e6948;

// USA 003E6930 <- EU 003E6910 (Ghidra, non-matching)
// GLOBAL DAT_003e6948 int *

void func_003E6930(uint param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = DAT_003e6948;
  piVar1 = func_003E68D8((int)DAT_003e6948,param_1);
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1 + 6;
  }
  func_00111EF0(piVar2,(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

