#include "ghidra_types.h"

extern undefined4 *DAT_0059f6fc;
extern undefined4 *DAT_0059f700;
extern undefined4 *DAT_0059f704;
extern undefined4 DAT_0059f708;
extern undefined4 DAT_0059f70c;

// USA 0059F6D0 <- EU 0059F6A8 (Ghidra, non-matching)
// GLOBAL DAT_0059f6fc undefined4 *
// GLOBAL DAT_0059f700 undefined4 *
// GLOBAL DAT_0059f704 undefined4 *
// GLOBAL DAT_0059f708 undefined4
// GLOBAL DAT_0059f70c undefined4

void func_0059F6D0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar2 = DAT_0059f708;
  puVar1 = DAT_0059f6fc;
  *DAT_0059f6fc = 0xffffffff;
  puVar1[1] = 0xffffffff;
  uVar3 = DAT_0059f70c;
  puVar1 = DAT_0059f700;
  *DAT_0059f700 = 0;
  puVar1[1] = 0;
  puVar1 = DAT_0059f704;
  puVar4 = DAT_0059f704 + 3;
  *DAT_0059f704 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar3;
  *puVar4 = uVar3;
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar3;
  puVar1[7] = uVar3;
  puVar1[8] = uVar2;
  return;
}

