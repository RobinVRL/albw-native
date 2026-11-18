#include "ghidra_types.h"

extern undefined4 *DAT_0059f978;
extern undefined4 DAT_0059f97c;
extern undefined4 *DAT_0059f980;
extern undefined4 DAT_0059f984;
extern undefined4 *DAT_0059f988;

// USA 0059F934 <- EU 0059F90C (Ghidra, non-matching)
// GLOBAL DAT_0059f978 undefined4 *
// GLOBAL DAT_0059f97c undefined4
// GLOBAL DAT_0059f980 undefined4 *
// GLOBAL DAT_0059f984 undefined4
// GLOBAL DAT_0059f988 undefined4 *

void func_0059F934(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = DAT_0059f978;
  DAT_0059f978[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  uVar4 = DAT_0059f97c;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar3 = DAT_0059f988;
  uVar5 = DAT_0059f984;
  puVar2 = DAT_0059f980;
  *DAT_0059f980 = uVar4;
  puVar2[1] = uVar4;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar5;
  puVar2[5] = uVar5;
  *puVar1 = uVar4;
  puVar1[1] = uVar4;
  puVar1[2] = uVar4;
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  puVar2[6] = *puVar3;
  puVar2[7] = uVar4;
  puVar2[8] = uVar5;
  return;
}

