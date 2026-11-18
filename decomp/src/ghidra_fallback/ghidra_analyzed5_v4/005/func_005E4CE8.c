#include "ghidra_types.h"

extern undefined4 *DAT_005e4d08;
extern undefined4 *DAT_005e4d0c;
extern undefined2 *DAT_005e4d10;
extern undefined4 *DAT_005e4d14;

// USA 005E4CE8 <- EU 005E4CC0 (Ghidra, non-matching)
// GLOBAL DAT_005e4d08 undefined4 *
// GLOBAL DAT_005e4d0c undefined4 *
// GLOBAL DAT_005e4d10 undefined2 *
// GLOBAL DAT_005e4d14 undefined4 *

void func_005E4CE8(void)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = DAT_005e4d08;
  *DAT_005e4d08 = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1 = DAT_005e4d0c;
  *DAT_005e4d0c = 0;
  puVar1[1] = 0;
  puVar2 = DAT_005e4d10;
  *DAT_005e4d10 = 6;
  puVar2[1] = 0;
  uVar3 = *DAT_005e4d14;
  uVar4 = DAT_005e4d14[1];
  *(undefined4 *)(puVar2 + 6) = DAT_005e4d14[2];
  *(undefined4 *)(puVar2 + 2) = uVar3;
  *(undefined4 *)(puVar2 + 4) = uVar4;
  return;
}

