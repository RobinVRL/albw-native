#include "ghidra_types.h"

extern int func_00346C4C(int param_1,float *param_2,float fparam_0);
extern int DAT_00291a5c;

// USA 00291A0C <- EU 00291A34 (Ghidra, non-matching)
// GLOBAL DAT_00291a5c int

undefined4 func_00291A0C(int param_1,float fparam_0)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00291a5c + *(short *)(param_1 + 0x42) * 0x10) == '\x06') {
    uVar1 = func_00346C4C(*(int *)(param_1 + 0x48),(float *)0x0,fparam_0);
    return uVar1;
  }
  return 0;
}

