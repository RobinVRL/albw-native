#include "ghidra_types.h"

extern undefined4 *DAT_0059f21c;
extern undefined4 *DAT_0059f220;

// USA 0059F220 <- EU 0059F1F8 (Ghidra, non-matching)
// GLOBAL DAT_0059f21c undefined4 *
// GLOBAL DAT_0059f220 undefined4 *

void func_0059F220(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0059f21c;
  *DAT_0059f21c = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_0059f220;
  *DAT_0059f220 = 0;
  puVar1[1] = 0;
  return;
}

