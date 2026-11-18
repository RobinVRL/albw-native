#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_0012C9C4(undefined4 *param_1);
extern int func_002C02C4(int param_1);
extern int func_003CBB00(undefined1 *param_1);
extern int func_003CD4B4(undefined1 *param_1);
extern int func_003CD588(int param_1);
extern int func_004928E8(undefined4 *param_1);
extern undefined4 DAT_002c1198;
extern undefined *DAT_002c119c;
extern undefined *DAT_002c11a0;
extern undefined *DAT_002c11a4;
extern undefined4 DAT_002c11a8;
extern undefined4 *DAT_002c11ac;
extern undefined4 DAT_002c11b0;
extern undefined4 DAT_002c11b4;
extern undefined4 DAT_002c11b8;
extern undefined4 DAT_002c11bc;
extern int DAT_002c11c0;

// USA 002C0FA4 <- EU 002C0F80 (Ghidra, non-matching)
// GLOBAL DAT_002c1198 undefined4
// GLOBAL DAT_002c119c undefined *
// GLOBAL DAT_002c11a0 undefined *
// GLOBAL DAT_002c11a4 undefined *
// GLOBAL DAT_002c11a8 undefined4
// GLOBAL DAT_002c11ac undefined4 *
// GLOBAL DAT_002c11b0 undefined4
// GLOBAL DAT_002c11b4 undefined4
// GLOBAL DAT_002c11b8 undefined4
// GLOBAL DAT_002c11bc undefined4
// GLOBAL DAT_002c11c0 int

int func_002C0FA4(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = func_0012C9C4(param_1);
  *puVar1 = DAT_002c1198;
  iVar2 = func_00100118((int)(puVar1 + 7),DAT_002c119c,0x14,2);
  iVar3 = iVar2 + 0x28;
  *(int *)(iVar2 + 0x2c) = iVar3;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  iVar4 = iVar2 + 0x40;
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  if (iVar4 != 0) {
    iVar3 = 0;
    iVar5 = 0x73;
    *(int *)(iVar2 + 0x34) = iVar4;
    do {
      iVar5 = iVar5 + -1;
      *(int *)(iVar4 + iVar3 * 4) = iVar4 + (iVar3 + 0x15) * 4;
      iVar3 = iVar3 + 0x15;
    } while (iVar5 != 0);
    *(undefined4 *)(iVar2 + 0x25fc) = 0;
    *(int *)(iVar2 + 0x38) = iVar4;
    *(undefined4 *)(iVar2 + 0x3c) = 0x74;
  }
  *(undefined4 *)(iVar2 + 0x2650) = 0;
  iVar2 = func_003CBB00((undefined1 *)(iVar2 + 0x2654));
  iVar2 = func_003CD588(iVar2 + 0x80);
  *(undefined1 *)(iVar2 + 0x94) = 0;
  *(undefined1 *)(iVar2 + 0x95) = 1;
  *(undefined1 *)(iVar2 + 0x96) = 0xff;
  *(undefined1 *)(iVar2 + 0x97) = 0xff;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  iVar2 = func_00100118(iVar2 + 0x9c,DAT_002c11a0,0xa8,2);
  iVar2 = func_00100118(iVar2 + 0x150,DAT_002c11a4,0x10,2);
  puVar1 = DAT_002c11ac;
  *(undefined4 *)(iVar2 + 0x20) = DAT_002c11a8;
  func_001119F4((undefined4 *)(iVar2 + 0x24),puVar1);
  uVar7 = DAT_002c11b8;
  uVar6 = DAT_002c11b4;
  *(undefined4 *)(iVar2 + 0x20) = DAT_002c11b0;
  *(undefined4 *)(iVar2 + 0x54) = uVar6;
  *(undefined4 *)(iVar2 + 0x58) = uVar6;
  *(undefined4 *)(iVar2 + 0x5c) = uVar7;
  *(undefined4 *)(iVar2 + 0x60) = uVar6;
  *(undefined4 *)(iVar2 + 100) = uVar6;
  *(undefined4 *)(iVar2 + 0x68) = uVar6;
  uVar7 = DAT_002c11bc;
  *(undefined4 *)(iVar2 + 0x6c) = uVar6;
  *(undefined4 *)(iVar2 + 0x70) = uVar7;
  *(undefined4 *)(iVar2 + 0x74) = uVar6;
  iVar3 = func_004928E8((undefined4 *)(iVar2 + 0x78));
  iVar5 = iVar3 + -0x2954;
  *(undefined4 *)(iVar3 + 0xac) = uVar6;
  *(undefined4 *)(iVar3 + 0xb0) = uVar7;
  *(undefined4 *)(iVar3 + 0xb4) = 0;
  func_003CD4B4((undefined1 *)(iVar3 + -0x264));
  iVar2 = DAT_002c11c0;
  iVar4 = DAT_002c11c0 + 0x5c;
  *(undefined1 *)(DAT_002c11c0 + iVar5) = 1;
  *(undefined1 *)(iVar4 + iVar5) = 0;
  *(undefined1 *)(iVar2 + 0x30 + iVar5) = 0;
  *(undefined1 *)(iVar2 + 0x54 + iVar5) = 0;
  *(undefined1 *)(iVar2 + 0x55 + iVar5) = 0;
  *(undefined1 *)(iVar2 + 0x68 + iVar5) = 0;
  *(undefined4 *)(iVar3 + -0x280) = uVar6;
  *(undefined4 *)(iVar3 + -0x78) = uVar7;
  *(undefined4 *)(iVar3 + -0x74) = uVar7;
  *(undefined4 *)(iVar3 + -0x70) = uVar7;
  *(undefined4 *)(iVar3 + -0x6c) = uVar7;
  *(undefined4 *)(iVar3 + -0x68) = uVar7;
  *(undefined4 *)(iVar3 + -100) = uVar7;
  *(undefined4 *)(iVar3 + -0x60) = uVar7;
  *(undefined4 *)(iVar3 + -0x5c) = uVar7;
  *(undefined1 *)(iVar3 + -0x2945) = 0x19;
  func_002C02C4(iVar5);
  return iVar5;
}

