#include "ghidra_types.h"

extern undefined4 *DAT_005e480c;
extern undefined4 DAT_005e4810;
extern undefined4 DAT_005e4814;
extern undefined4 DAT_005e4818;
extern undefined4 *DAT_005e481c;
extern undefined4 DAT_005e4820;
extern undefined4 *DAT_005e4824;
extern undefined4 DAT_005e4828;

// USA 005E475C <- EU 005E4734 (Ghidra, non-matching)
// GLOBAL DAT_005e480c undefined4 *
// GLOBAL DAT_005e4810 undefined4
// GLOBAL DAT_005e4814 undefined4
// GLOBAL DAT_005e4818 undefined4
// GLOBAL DAT_005e481c undefined4 *
// GLOBAL DAT_005e4820 undefined4
// GLOBAL DAT_005e4824 undefined4 *
// GLOBAL DAT_005e4828 undefined4

void func_005E475C(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  puVar1 = DAT_005e480c;
  DAT_005e480c[2] = 0xffffffff;
  puVar1[3] = 0xffffffff;
  uVar2 = DAT_005e4810;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar6 = DAT_005e481c;
  uVar3 = DAT_005e4814;
  *puVar1 = uVar2;
  uVar4 = DAT_005e4818;
  *puVar6 = uVar3;
  puVar6[1] = uVar3;
  puVar6[2] = uVar4;
  puVar6[3] = uVar4;
  puVar6[4] = uVar3;
  puVar6[5] = uVar3;
  uVar5 = DAT_005e4820;
  puVar6[6] = uVar3;
  puVar6[7] = uVar3;
  puVar6[8] = uVar5;
  puVar6[9] = uVar5;
  puVar6[10] = uVar3;
  puVar6[0xb] = uVar3;
  puVar1 = DAT_005e4824;
  puVar6 = DAT_005e4824 + 4;
  *DAT_005e4824 = uVar3;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar2;
  *puVar6 = uVar3;
  puVar1[5] = uVar2;
  puVar1[6] = uVar4;
  puVar1[7] = uVar3;
  puVar1[8] = uVar3;
  uVar4 = DAT_005e4828;
  puVar1[9] = uVar2;
  puVar1[10] = uVar3;
  puVar1[0xb] = uVar4;
  puVar1[0xc] = uVar3;
  puVar1[0xd] = uVar3;
  puVar1[0xe] = uVar5;
  puVar1[0xf] = uVar4;
  puVar1[0x10] = uVar3;
  puVar1[0x11] = uVar4;
  puVar1[0x12] = uVar5;
  puVar1[0x13] = uVar3;
  puVar1[0x14] = uVar3;
  puVar1[0x15] = uVar4;
  puVar1[0x16] = uVar3;
  puVar1[0x17] = uVar2;
  return;
}

