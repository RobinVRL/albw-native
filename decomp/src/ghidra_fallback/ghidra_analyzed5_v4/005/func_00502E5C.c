#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern undefined4 DAT_00502f48;
extern undefined4 DAT_00502f4c;
extern undefined8 *DAT_00502f50;
extern undefined4 DAT_00502f54;
extern undefined4 DAT_00502f58;
extern undefined4 DAT_00502f5c;
extern undefined4 DAT_00502f60;

// USA 00502E5C <- EU 00502E34 (Ghidra, non-matching)
// GLOBAL DAT_00502f48 undefined4
// GLOBAL DAT_00502f4c undefined4
// GLOBAL DAT_00502f50 undefined8 *
// GLOBAL DAT_00502f54 undefined4
// GLOBAL DAT_00502f58 undefined4
// GLOBAL DAT_00502f5c undefined4
// GLOBAL DAT_00502f60 undefined4

undefined4 * func_00502E5C(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined4 *)func_002BE9D4(param_1,DAT_00502f48,0,0xb,1);
  puVar1 = DAT_00502f50;
  *puVar2 = DAT_00502f4c;
  *(undefined1 *)(puVar2 + 0xb3) = 0;
  *(undefined1 *)((int)puVar2 + 0x2cd) = 0;
  *(undefined1 *)((int)puVar2 + 0x2ce) = 0;
  *(undefined1 *)((int)puVar2 + 0x2cf) = 0;
  puVar2[0xb4] = 0;
  *(undefined1 *)(puVar2 + 0xb5) = 0;
  puVar2[0xb7] = 0;
  uVar5 = *(undefined4 *)((int)puVar1 + 0x1c);
  puVar2[0xb8] = *(undefined4 *)(puVar1 + 3);
  puVar2[0xb9] = uVar5;
  puVar2[0xb6] = DAT_00502f54;
  puVar2[0xbb] = 0;
  uVar5 = *(undefined4 *)((int)puVar1 + 0x24);
  puVar2[0xbc] = *(undefined4 *)(puVar1 + 4);
  puVar2[0xbd] = uVar5;
  puVar2[0xba] = DAT_00502f58;
  uVar8 = *puVar1;
  puVar3 = func_0010CE7C(puVar2 + 0xbe);
  *puVar3 = DAT_00502f5c;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar3[7] = 0;
  puVar4 = puVar3 + 9;
  bVar7 = puVar4 == (undefined4 *)0x0;
  puVar3[8] = 0;
  if (bVar7) {
    puVar4 = (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar3 + 0xe) = 0;
  if (!bVar7) {
    puVar4[1] = puVar2;
    uVar5 = DAT_00502f60;
    puVar4[2] = (int)uVar8;
    puVar4[3] = (int)((ulonglong)uVar8 >> 0x20);
    *puVar4 = uVar5;
  }
  puVar3[8] = puVar4;
  uVar5 = *(undefined4 *)(puVar1 + 1);
  uVar6 = *(undefined4 *)((int)puVar1 + 0xc);
  puVar2 = puVar3 + -0xbe;
  puVar3[-3] = puVar2;
  puVar3[-2] = uVar5;
  puVar3[-1] = uVar6;
  uVar5 = *(undefined4 *)(puVar1 + 2);
  uVar6 = *(undefined4 *)((int)puVar1 + 0x14);
  puVar3[-7] = puVar2;
  puVar3[-6] = uVar5;
  puVar3[-5] = uVar6;
  puVar3[-0x11] = puVar3 + -8;
  puVar3[-0x10] = puVar3 + -4;
  return puVar2;
}

