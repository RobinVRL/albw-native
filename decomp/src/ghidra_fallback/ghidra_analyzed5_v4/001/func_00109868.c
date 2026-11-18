#include "ghidra_types.h"

extern int func_0010BA60(undefined4 *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern undefined4 DAT_001098f8;
extern undefined4 DAT_001098fc;
extern undefined4 DAT_00109900;

// USA 00109868 <- EU 00109868 (Ghidra, non-matching)
// GLOBAL DAT_001098f8 undefined4
// GLOBAL DAT_001098fc undefined4
// GLOBAL DAT_00109900 undefined4

undefined4 * func_00109868(int param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = func_0010BA60((undefined4 *)(param_1 + 0x10));
  puVar1[4] = param_1;
  puVar1 = func_0010CE7C(puVar1 + -4);
  uVar4 = DAT_001098fc;
  uVar3 = DAT_001098f8;
  *puVar1 = DAT_00109900;
  puVar1[10] = uVar3;
  puVar1[9] = uVar4;
  puVar1[0xb] = param_2[2];
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = puVar1;
  puVar1[0x10] = 0;
  puVar2 = (undefined4 *)*param_2;
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  uVar6 = puVar2[4];
  uVar7 = puVar2[5];
  puVar1[0x11] = *puVar2;
  puVar1[0x12] = uVar3;
  puVar1[0x13] = uVar4;
  puVar1[0x14] = uVar5;
  puVar1[0x15] = uVar6;
  puVar1[0x16] = uVar7;
  puVar1[0x17] = param_2[1];
  *(undefined1 *)(puVar1 + 0x19) = 0;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  *(undefined1 *)((int)puVar1 + 0x61) = 1;
  puVar1[10] = param_3;
  return puVar1;
}

