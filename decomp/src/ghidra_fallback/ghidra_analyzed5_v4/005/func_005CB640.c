#include "ghidra_types.h"

extern undefined4 *DAT_005cb63c;
extern undefined4 *DAT_005cb640;

// USA 005CB640 <- EU 005CB618 (Ghidra, non-matching)
// GLOBAL DAT_005cb63c undefined4 *
// GLOBAL DAT_005cb640 undefined4 *

void func_005CB640(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005cb63c;
  *DAT_005cb63c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005cb640;
  *DAT_005cb640 = 0;
  puVar1[1] = 0;
  return;
}

