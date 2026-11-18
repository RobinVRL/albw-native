#include "ghidra_types.h"

extern undefined4 *DAT_005f6930;
extern undefined4 *DAT_005f6934;

// USA 005F6934 <- EU 005F690C (Ghidra, non-matching)
// GLOBAL DAT_005f6930 undefined4 *
// GLOBAL DAT_005f6934 undefined4 *

void func_005F6934(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f6930;
  *DAT_005f6930 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f6934;
  *DAT_005f6934 = 0;
  puVar1[1] = 0;
  return;
}

