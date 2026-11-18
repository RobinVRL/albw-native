#include "ghidra_types.h"

extern int func_002FFFC4(int param_1);

// USA 00100078 <- EU 00100078 (Ghidra, function missing from the decomp table)

void func_00100078(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)func_002FFFC4(0x88);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  return;
}

