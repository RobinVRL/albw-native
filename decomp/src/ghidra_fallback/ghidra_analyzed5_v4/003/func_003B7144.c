#include "ghidra_types.h"

extern int DAT_003b716c;

// USA 003B7144 <- EU 003B7120 (Ghidra, non-matching)
// GLOBAL DAT_003b716c int

undefined1 func_003B7144(uint param_1)

{
  int iVar1;
  
  if (param_1 < 0x80) {
    iVar1 = 0;
    do {
      if (*(uint *)(DAT_003b716c + iVar1 * 0x10) == param_1) {
        return *(undefined1 *)(DAT_003b716c + iVar1 * 0x10 + 0xc);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x1d);
  }
  return 0;
}

