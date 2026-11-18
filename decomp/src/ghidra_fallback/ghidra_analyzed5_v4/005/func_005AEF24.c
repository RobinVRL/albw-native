#include "ghidra_types.h"

extern undefined4 *DAT_005aef20;
extern undefined4 *DAT_005aef24;

// USA 005AEF24 <- EU 005AEEFC (Ghidra, non-matching)
// GLOBAL DAT_005aef20 undefined4 *
// GLOBAL DAT_005aef24 undefined4 *

void func_005AEF24(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_005aef20;
  *DAT_005aef20 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005aef24;
  *DAT_005aef24 = 0;
  puVar1[1] = 0;
  return;
}

