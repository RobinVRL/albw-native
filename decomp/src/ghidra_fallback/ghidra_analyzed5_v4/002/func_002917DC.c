#include "ghidra_types.h"

extern int func_0031EDC4(int param_1,float *param_2,undefined1 param_3,float fparam_0);
extern int DAT_00291830;

// USA 002917DC <- EU 00291804 (Ghidra, non-matching)
// GLOBAL DAT_00291830 int

undefined4 func_002917DC(int param_1,undefined1 param_2,float fparam_0)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_00291830 + *(short *)(param_1 + 0x42) * 0x10) == '\x02') {
    uVar1 = func_0031EDC4(*(int *)(param_1 + 0x48),(float *)0x0,param_2,fparam_0);
    return uVar1;
  }
  return 0;
}

