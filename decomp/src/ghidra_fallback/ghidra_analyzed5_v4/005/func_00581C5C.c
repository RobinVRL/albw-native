#include "ghidra_types.h"

extern int DAT_00581c6c;
extern int DAT_00581c70;

// USA 00581C5C <- EU 00581C34 (Ghidra, non-matching)
// GLOBAL DAT_00581c6c int
// GLOBAL DAT_00581c70 int

int func_00581C5C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = 0;
  if (iVar1 != 0) {
    if (*(short *)(DAT_00581c6c + iVar1) < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar1 + *(short *)(DAT_00581c6c + iVar1) * DAT_00581c70 * 4 + 0x183c;
    }
  }
  return iVar2;
}

