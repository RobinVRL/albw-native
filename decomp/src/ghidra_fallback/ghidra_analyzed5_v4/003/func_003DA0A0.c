#include "ghidra_types.h"

extern int DAT_003da0d4;
extern int DAT_003da0d8;

// USA 003DA0A0 <- EU 003DA080 (Ghidra, non-matching)
// GLOBAL DAT_003da0d4 int
// GLOBAL DAT_003da0d8 int

int func_003DA0A0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = 0;
  iVar3 = DAT_003da0d4;
  while( true ) {
    iVar2 = iVar1 + (iVar3 - iVar1) / 2;
    uVar4 = (uint)*(ushort *)(DAT_003da0d8 + iVar2 * 8);
    if (uVar4 >= param_1 && uVar4 != param_1) {
      iVar3 = iVar2 + -1;
    }
    if (uVar4 < param_1) {
      iVar1 = iVar2 + 1;
    }
    if (uVar4 == param_1) break;
    if (iVar3 < iVar1) {
      return 0;
    }
  }
  return DAT_003da0d8 + iVar2 * 8;
}

