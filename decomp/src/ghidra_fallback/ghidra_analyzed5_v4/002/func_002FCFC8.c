#include "ghidra_types.h"

extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern undefined4 DAT_002fd03c;
extern undefined4 DAT_002fd040;
extern undefined4 *DAT_002fd044;
extern undefined4 DAT_002fd048;
extern undefined4 DAT_002fd04c;

// USA 002FCFC8 <- EU 002FCFA4 (Ghidra, non-matching)
// GLOBAL DAT_002fd03c undefined4
// GLOBAL DAT_002fd040 undefined4
// GLOBAL DAT_002fd044 undefined4 *
// GLOBAL DAT_002fd048 undefined4
// GLOBAL DAT_002fd04c undefined4

undefined4 * func_002FCFC8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)func_002BE9D4(param_1,DAT_002fd03c,0,0xb,1);
  uVar3 = DAT_002fd040;
  puVar2[0xb3] = 0;
  *puVar2 = uVar3;
  puVar2[0xb4] = 0;
  *(undefined1 *)(puVar2 + 0xb5) = 0;
  *(undefined1 *)((int)puVar2 + 0x2d5) = 0;
  puVar1 = DAT_002fd044;
  puVar2[0xb7] = 0;
  uVar3 = puVar1[5];
  puVar2[0xb8] = puVar1[4];
  puVar2[0xb9] = uVar3;
  uVar3 = DAT_002fd048;
  puVar2[0xba] = DAT_002fd04c;
  puVar2[0xb6] = uVar3;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  puVar2[0xbb] = puVar2;
  puVar2[0xbc] = uVar3;
  puVar2[0xbd] = uVar4;
  uVar3 = puVar1[2];
  puVar2[0xb9] = puVar1[3];
  puVar2[0xb7] = puVar2;
  puVar2[0xb8] = uVar3;
  puVar2[0xad] = puVar2 + 0xb6;
  puVar2[0xae] = puVar2 + 0xba;
  return puVar2;
}

