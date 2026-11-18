#include "ghidra_types.h"

extern int func_0031EFF0(int param_1);
extern int DAT_00291f7c;

// USA 00291F28 <- EU 00291F50 (Ghidra, non-matching)
// GLOBAL DAT_00291f7c int

undefined4 func_00291F28(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(DAT_00291f7c + *(short *)(param_1 + 0x42) * 0x10) == '\x02') &&
     (*(int *)(param_1 + 0x48) != 0)) {
    uVar1 = func_0031EFF0(*(int *)(param_1 + 0x48));
    return uVar1;
  }
  return 0;
}

