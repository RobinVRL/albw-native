#include "ghidra_types.h"

extern undefined4 *DAT_005cb694;
extern undefined4 *DAT_005cb698;

// USA 005CB698 <- EU 005CB670 (Ghidra, non-matching)
// GLOBAL DAT_005cb694 undefined4 *
// GLOBAL DAT_005cb698 undefined4 *

void func_005CB698(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb694;
  *DAT_005cb694 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb698;
  *DAT_005cb698 = 0;
  puVar1[1] = 0;
  return;
}

