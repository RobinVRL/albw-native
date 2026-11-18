#include "ghidra_types.h"

extern int DAT_00581d7c;
extern int DAT_00581d80;

// USA 00581D60 <- EU 00581D38 (Ghidra, non-matching)
// GLOBAL DAT_00581d7c int
// GLOBAL DAT_00581d80 int

undefined4 func_00581D60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (((iVar1 == 0) || (*(short *)(DAT_00581d7c + iVar1) < 0)) ||
     (iVar1 = iVar1 + *(short *)(DAT_00581d7c + iVar1) * DAT_00581d80 * 4, iVar1 == -0x183c)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x1bfc);
  }
  return uVar2;
}

