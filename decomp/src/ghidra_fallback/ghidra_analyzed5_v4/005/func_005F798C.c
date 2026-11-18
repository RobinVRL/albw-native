#include "ghidra_types.h"

extern undefined4 *DAT_005f7988;
extern undefined4 *DAT_005f798c;

// USA 005F798C <- EU 005F7964 (Ghidra, non-matching)
// GLOBAL DAT_005f7988 undefined4 *
// GLOBAL DAT_005f798c undefined4 *

void func_005F798C(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005f7988;
  *DAT_005f7988 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005f798c;
  *DAT_005f798c = 0;
  puVar1[1] = 0;
  return;
}

