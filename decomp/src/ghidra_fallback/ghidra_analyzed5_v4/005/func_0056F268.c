#include "ghidra_types.h"

extern uint DAT_0056f2a4;

// USA 0056F268 <- EU 0056F240 (Ghidra, non-matching)
// GLOBAL DAT_0056f2a4 uint

int func_0056F268(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(ushort *)(param_1 + 0x10) != 0) {
    do {
      if (*(ushort *)(param_1 + 0x14 + iVar1 * 0xc) == DAT_0056f2a4) {
        iVar2 = param_1 + 0x14 + iVar1 * 0xc;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (iVar2 == 0 || iVar1 == 0) {
          return 0;
        }
        return iVar1 + param_1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x10));
  }
  return 0;
}

