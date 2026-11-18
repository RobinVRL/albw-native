#include "ghidra_types.h"

extern int DAT_005ff734;

// USA 005FF6E4 <- EU 005FF6BC (Ghidra, non-matching)
// GLOBAL DAT_005ff734 int

int func_005FF6E4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(DAT_005ff734 + 0x154);
  iVar1 = iVar2;
  if (param_1 != 0x400) {
    iVar3 = *(int *)(DAT_005ff734 + 0x158);
    if (param_1 == 0x401) {
      return iVar3;
    }
    iVar1 = 0;
    if ((param_1 == 0x402) && (iVar1 = iVar2, iVar2 != iVar3)) {
      if ((iVar2 == 0x7ffffffe && iVar3 == 0) || (iVar3 == 0x7ffffffe && iVar2 == 0)) {
        return 0x7ffffffe;
      }
      if (iVar3 <= iVar2) {
        return iVar3;
      }
    }
  }
  return iVar1;
}

