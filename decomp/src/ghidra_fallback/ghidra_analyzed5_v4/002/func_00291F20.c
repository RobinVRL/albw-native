#include "ghidra_types.h"

extern int func_0031EFF0(int param_1);
extern int DAT_00291f7c;

// USA 00291F20 <- EU 00291F48 (Ghidra, non-matching)
// GLOBAL DAT_00291f7c int

undefined4 func_00291F20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(DAT_00291f7c + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) == '\x02') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 0x48), iVar1 != 0)) {
    uVar2 = func_0031EFF0(iVar1);
    return uVar2;
  }
  return 0;
}

