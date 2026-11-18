#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int *DAT_003b6ed0;
extern int DAT_003b6ed4;

// USA 003B6ECC <- EU 003B6EA8 (Ghidra, non-matching)
// GLOBAL DAT_003b6ed0 int *
// GLOBAL DAT_003b6ed4 int

undefined1 func_003B6ECC(void)

{
  uint uVar1;
  
  uVar1 = func_00111A64((uint *)(*DAT_003b6ed0 + 0x660));
  return *(undefined1 *)(DAT_003b6ed4 + (int)((ulonglong)uVar1 * 8 >> 0x20));
}

