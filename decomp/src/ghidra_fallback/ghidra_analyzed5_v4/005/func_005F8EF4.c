#include "ghidra_types.h"

extern undefined4 *DAT_005f8ee8;
extern undefined4 DAT_005f8eec;

// USA 005F8EF4 <- EU 005F8ECC (Ghidra, non-matching)
// GLOBAL DAT_005f8ee8 undefined4 *
// GLOBAL DAT_005f8eec undefined4

void func_005F8EF4(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f8ee8;
  *DAT_005f8ee8 = DAT_005f8eec;
  puVar1[1] = DAT_005f8eec;
  return;
}

