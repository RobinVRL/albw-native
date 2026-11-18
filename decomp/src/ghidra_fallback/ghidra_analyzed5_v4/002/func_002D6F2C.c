#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00564A78(int param_1,int *param_2);
extern undefined4 DAT_002d70c0;
extern undefined4 DAT_002d70c4;
extern undefined4 DAT_002d70c8;
extern undefined4 DAT_002d70cc;
extern undefined4 DAT_002d70d0;
extern undefined4 DAT_002d70d4;
extern undefined4 *DAT_002d70d8;
extern undefined4 DAT_002d70dc;
extern undefined DAT_002d70e0;
extern int DAT_002d70e4;

// USA 002D6F2C <- EU 002D6F08 (Ghidra, non-matching)
// GLOBAL DAT_002d70c0 undefined4
// GLOBAL DAT_002d70c4 undefined4
// GLOBAL DAT_002d70c8 undefined4
// GLOBAL DAT_002d70cc undefined4
// GLOBAL DAT_002d70d0 undefined4
// GLOBAL DAT_002d70d4 undefined4
// GLOBAL DAT_002d70d8 undefined4 *
// GLOBAL DAT_002d70dc undefined4
// GLOBAL DAT_002d70e0 undefined
// GLOBAL DAT_002d70e4 int

int func_002D6F2C(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  puVar1 = (undefined4 *)func_002D5C70(param_1,param_2);
  *puVar1 = DAT_002d70c0;
  uVar5 = DAT_002d70c8;
  uVar4 = DAT_002d70c4;
  puVar1[0x1c] = *(undefined4 *)(puVar1[10] + 0x630);
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = *(undefined4 *)(puVar1[0xc] + 4);
  puVar1[0x1f] = uVar4;
  puVar1[0x20] = *(undefined4 *)(puVar1[0xc] + 4);
  puVar1[0x22] = uVar4;
  puVar1[0x23] = uVar4;
  puVar1[0x24] = uVar4;
  puVar1[0x25] = uVar4;
  puVar1[0x26] = uVar4;
  puVar1[0x27] = uVar4;
  puVar1[0x28] = uVar4;
  puVar1[0x29] = uVar4;
  puVar1[0x2a] = uVar4;
  local_20 = 0;
  *(undefined2 *)(puVar1 + 0x2b) = 0;
  puVar1[0x2c] = 0;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  puVar1[0x2e] = uVar5;
  puVar1[0x2f] = uVar5;
  puVar1[0x30] = uVar5;
  uVar5 = DAT_002d70cc;
  puVar1[0x31] = DAT_002d70cc;
  puVar1[0x32] = uVar5;
  puVar1[0x33] = uVar5;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  *(undefined2 *)(puVar1 + 0x36) = 7;
  uVar5 = DAT_002d70d0;
  puVar1[0x21] = DAT_002d70d4;
  puVar1[0x3a] = uVar5;
  puVar1[0x3b] = uVar5;
  iVar2 = func_004EE484(puVar1 + 0x3c);
  puVar1 = DAT_002d70d8;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  uVar5 = puVar1[3];
  *(undefined4 *)(iVar2 + 0x74) = puVar1[2];
  *(undefined4 *)(iVar2 + 0x78) = uVar5;
  *(undefined4 *)(iVar2 + 0x6c) = DAT_002d70dc;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  puVar6 = *(undefined4 **)(iVar2 + -0xc0);
  uVar5 = puVar6[1];
  uVar7 = puVar6[2];
  *(undefined4 *)(iVar2 + 0x80) = *puVar6;
  *(undefined4 *)(iVar2 + 0x84) = uVar5;
  *(undefined4 *)(iVar2 + 0x88) = uVar7;
  *(undefined1 *)(iVar2 + 0x8c) = 0;
  *(uint *)(iVar2 + -0x40) = *(uint *)(iVar2 + -0x40) | 8;
  puVar6 = *(undefined4 **)(iVar2 + -0xc0);
  *(undefined4 *)(iVar2 + -0x68) = *puVar6;
  *(undefined4 *)(iVar2 + -100) = puVar6[1];
  *(undefined4 *)(iVar2 + -0x60) = puVar6[2];
  *(undefined4 *)(iVar2 + -0x14) = uVar4;
  *(undefined4 *)(iVar2 + -0x10) = uVar4;
  *(undefined4 *)(iVar2 + -0xc) = uVar4;
  *(int *)(iVar2 + 0x10) = iVar2 + -0x6c;
  *(undefined1 *)(iVar2 + 0x21) = 5;
  *(undefined1 *)(iVar2 + 0x22) = 0;
  *(undefined2 *)(iVar2 + 0x30) = 0;
  func_004356B4((int *)(iVar2 + -0x6c));
  local_20 = DAT_002d70e4;
  *(undefined1 *)(iVar2 + 0x61) = 0;
  local_1c = &DAT_002d70e0;
  uVar3 = func_00564A78(*(int *)(*(int *)(iVar2 + -0x80) + 4),&local_20);
  *(uint *)(iVar2 + -0x7c) = uVar3;
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  *(int *)(iVar2 + 0x70) = iVar2 + -0xf0;
  *(undefined4 *)(iVar2 + 0x74) = uVar4;
  *(undefined4 *)(iVar2 + 0x78) = uVar5;
  return iVar2 + -0xf0;
}

