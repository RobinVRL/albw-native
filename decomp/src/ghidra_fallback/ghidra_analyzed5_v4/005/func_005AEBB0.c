#include "ghidra_types.h"

extern undefined4 *DAT_005aebac;
extern undefined4 *DAT_005aebb0;

// USA 005AEBB0 <- EU 005AEB88 (Ghidra, non-matching)
// GLOBAL DAT_005aebac undefined4 *
// GLOBAL DAT_005aebb0 undefined4 *

void func_005AEBB0(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aebac;
  *DAT_005aebac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aebb0;
  *DAT_005aebb0 = 0;
  puVar1[1] = 0;
  return;
}

