#include "ghidra_types.h"

extern int func_0010BF5C(undefined4 *param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_00300320;
extern undefined4 DAT_00300324;
extern undefined4 *DAT_00300328;
extern undefined4 DAT_0030032c;
extern undefined4 DAT_00300330;
extern undefined4 DAT_00300334;
extern undefined4 DAT_00300338;
extern undefined4 DAT_0030033c;
extern undefined4 *DAT_00300340;
extern undefined4 *DAT_00300344;

// USA 0030022C <- EU 00300208 (Ghidra, non-matching)
// GLOBAL DAT_00300320 undefined4
// GLOBAL DAT_00300324 undefined4
// GLOBAL DAT_00300328 undefined4 *
// GLOBAL DAT_0030032c undefined4
// GLOBAL DAT_00300330 undefined4
// GLOBAL DAT_00300334 undefined4
// GLOBAL DAT_00300338 undefined4
// GLOBAL DAT_0030033c undefined4
// GLOBAL DAT_00300340 undefined4 *
// GLOBAL DAT_00300344 undefined4 *

int func_0030022C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_00300320;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0;
  iVar3 = func_0010BF5C(puVar2 + 0xf);
  puVar2 = DAT_00300328;
  uVar4 = DAT_00300324;
  *(undefined4 *)(iVar3 + 0x4c) = DAT_00300324;
  *(undefined4 *)(iVar3 + 0x50) = uVar4;
  *(undefined4 *)(iVar3 + 0x54) = uVar4;
  *(undefined4 *)(iVar3 + 0x58) = uVar4;
  *(undefined4 *)(iVar3 + 0x5c) = 0;
  func_001119F4((undefined4 *)(iVar3 + 0x60),puVar2);
  puVar2 = DAT_00300328;
  *(undefined4 *)(iVar3 + 0x90) = DAT_0030032c;
  func_001119F4((undefined4 *)(iVar3 + 0x94),puVar2);
  puVar1 = DAT_00300344;
  uVar5 = DAT_00300334;
  *(undefined4 *)(iVar3 + 0x90) = DAT_00300330;
  *(undefined4 *)(iVar3 + 0xc4) = uVar4;
  *(undefined4 *)(iVar3 + 200) = uVar4;
  *(undefined4 *)(iVar3 + 0xcc) = uVar5;
  *(undefined4 *)(iVar3 + 0xd0) = uVar4;
  *(undefined4 *)(iVar3 + 0xd4) = uVar4;
  *(undefined4 *)(iVar3 + 0xd8) = uVar4;
  uVar5 = DAT_00300338;
  *(undefined4 *)(iVar3 + 0xdc) = uVar4;
  puVar2 = DAT_00300340;
  *(undefined4 *)(iVar3 + 0xe0) = uVar5;
  uVar5 = DAT_0030033c;
  *(undefined4 *)(iVar3 + 0xe4) = uVar4;
  *(undefined4 *)(iVar3 + 0x128) = uVar5;
  *(undefined4 *)(iVar3 + 300) = *puVar2;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  *(undefined4 *)(iVar3 + 0x130) = *puVar1;
  *(undefined4 *)(iVar3 + 0x134) = uVar4;
  *(undefined4 *)(iVar3 + 0x138) = uVar5;
  *(undefined4 *)(iVar3 + 0x13c) = 0;
  *(undefined4 *)(iVar3 + 0x140) = 0;
  *(undefined4 *)(iVar3 + 0x144) = 0;
  *(undefined4 *)(iVar3 + 0x148) = 0;
  *(undefined4 *)(iVar3 + 0x14c) = 0;
  return iVar3 + -0x3c;
}

