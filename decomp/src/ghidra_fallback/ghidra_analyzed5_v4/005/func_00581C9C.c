#include "ghidra_types.h"

extern int DAT_00581d14;
extern int DAT_00581d18;
extern int DAT_00581d1c;

// USA 00581C9C <- EU 00581C74 (Ghidra, non-matching)
// GLOBAL DAT_00581d14 int
// GLOBAL DAT_00581d18 int
// GLOBAL DAT_00581d1c int

undefined4 func_00581C9C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(DAT_00581d14 + iVar1) != 0) {
      if (*(short *)(DAT_00581d18 + iVar1) < 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar1 + *(short *)(DAT_00581d18 + iVar1) * DAT_00581d1c * 4 + 0x183c;
      }
      iVar1 = iVar1 + 0x183c + param_2 * DAT_00581d1c * 4;
      if (((*(int *)(iVar2 + 0x3c0) != *(int *)(iVar1 + 0x3c0)) &&
          (*(short *)(iVar2 + 0x46) != *(short *)(iVar1 + 0x46))) &&
         (*(char *)(iVar1 + 0x2e4) < '\x01')) {
        return 0;
      }
    }
  }
  return 1;
}

