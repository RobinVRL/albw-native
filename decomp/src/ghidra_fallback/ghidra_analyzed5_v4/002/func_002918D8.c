#include "ghidra_types.h"

extern int func_00255370(int param_1);
extern int DAT_00291934;

// USA 002918D8 <- EU 00291900 (Ghidra, non-matching)
// GLOBAL DAT_00291934 int

bool func_002918D8(int param_1)

{
  bool bVar1;
  
  if (*(char *)(DAT_00291934 + *(short *)(*(int *)(param_1 + 0x14) + 0x42) * 0x10) != '\x03') {
    bVar1 = func_00255370(*(int *)(*(int *)(param_1 + 0x14) + 0x10) + 0x40c);
    return bVar1;
  }
  return false;
}

