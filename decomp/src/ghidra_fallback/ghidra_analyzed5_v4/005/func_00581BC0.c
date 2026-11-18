#include "ghidra_types.h"

extern int DAT_00581c28;
extern int DAT_00581c2c;
extern int DAT_00581c30;

// USA 00581BC0 <- EU 00581B98 (Ghidra, non-matching)
// GLOBAL DAT_00581c28 int
// GLOBAL DAT_00581c2c int
// GLOBAL DAT_00581c30 int

undefined4 func_00581BC0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(DAT_00581c28 + iVar1) != 0) {
      if (*(short *)(DAT_00581c2c + iVar1) < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar1 + *(short *)(DAT_00581c2c + iVar1) * DAT_00581c30 * 4 + 0x183c;
      }
      iVar1 = iVar1 + 0x183c + param_2 * DAT_00581c30 * 4;
      if ((*(int *)(iVar2 + 0x3c0) != *(int *)(iVar1 + 0x3c0)) &&
         (*(char *)(iVar1 + 0x2e4) < '\x01')) {
        return 0;
      }
    }
  }
  return 1;
}

