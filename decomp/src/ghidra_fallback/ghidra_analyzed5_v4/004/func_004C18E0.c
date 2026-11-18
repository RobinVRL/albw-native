#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001E6898(undefined4 *param_1);
extern int func_001E6CEC(undefined4 *param_1,uint *param_2,undefined4 param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004BD89C(int param_1,int param_2);
extern void func_004BDDB0(int param_1);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00547538(int param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_004c1cb4;
extern undefined4 DAT_004c1cb8;
extern undefined4 DAT_004c1cbc;
extern undefined4 DAT_004c1cc0;
extern undefined4 DAT_004c1cc4;
extern undefined4 DAT_004c1cc8;
extern undefined4 DAT_004c1ccc;
extern undefined4 DAT_004c1cd0;
extern int DAT_004c1cd4;
extern undefined4 DAT_004c1cd8;
extern int DAT_004c1cdc;
extern undefined4 DAT_004c1ce0;
extern undefined4 DAT_004c1ce4;
extern undefined4 DAT_004c1ce8;
extern undefined4 DAT_004c1cec;
extern undefined4 DAT_004c1cf0;
extern undefined4 DAT_004c1cf4;
extern undefined4 DAT_004c1cf8;
extern undefined4 DAT_004c1cfc;

// USA 004C18E0 <- EU 004C18B8 (Ghidra, non-matching)
// GLOBAL DAT_004c1cb4 int
// GLOBAL DAT_004c1cb8 undefined4
// GLOBAL DAT_004c1cbc undefined4
// GLOBAL DAT_004c1cc0 undefined4
// GLOBAL DAT_004c1cc4 undefined4
// GLOBAL DAT_004c1cc8 undefined4
// GLOBAL DAT_004c1ccc undefined4
// GLOBAL DAT_004c1cd0 undefined4
// GLOBAL DAT_004c1cd4 int
// GLOBAL DAT_004c1cd8 undefined4
// GLOBAL DAT_004c1cdc int
// GLOBAL DAT_004c1ce0 undefined4
// GLOBAL DAT_004c1ce4 undefined4
// GLOBAL DAT_004c1ce8 undefined4
// GLOBAL DAT_004c1cec undefined4
// GLOBAL DAT_004c1cf0 undefined4
// GLOBAL DAT_004c1cf4 undefined4
// GLOBAL DAT_004c1cf8 undefined4
// GLOBAL DAT_004c1cfc undefined4

int func_004C18E0(undefined4 *param_1,uint *param_2,undefined1 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  
  piVar6 = (int *)func_001E6CEC(param_1,param_2,0xb);
  iVar7 = DAT_004c1cb4;
  piVar6[200] = DAT_004c1cb4 + 0xb8;
  *piVar6 = iVar7;
  iVar7 = func_0054D964((int)piVar6,0);
  piVar6[0x1e2] = iVar7;
  piVar6[0x1e3] = 0;
  piVar6[0x1e4] = 0;
  piVar6[0x1e5] = 0;
  piVar6[0x1e6] = 0;
  piVar6[0x1e7] = 0;
  piVar6[0x1e8] = 0;
  piVar6[0x1e9] = 0;
  piVar6[0x1ea] = 0;
  piVar6[0x1eb] = 0;
  piVar6[0x1ec] = 0;
  piVar6[0x1ed] = 0;
  piVar6[0x1ee] = 0;
  piVar6[0x1ef] = 0;
  piVar6[0x1f0] = 0;
  iVar7 = func_001E6898(piVar6 + 0x1f1);
  uVar10 = DAT_004c1cb8;
  iVar11 = iVar7 + -0x7c4;
  *(undefined4 *)(iVar7 + 0x28) = DAT_004c1cb8;
  *(undefined4 *)(iVar7 + 0x2c) = uVar10;
  *(undefined4 *)(iVar7 + 0x30) = uVar10;
  uVar2 = DAT_004c1cbc;
  *(undefined4 *)(iVar7 + 0x34) = uVar10;
  *(undefined4 *)(iVar7 + 0x38) = uVar2;
  *(undefined4 *)(iVar7 + 0x3c) = uVar10;
  *(undefined4 *)(iVar7 + 0x40) = uVar10;
  *(undefined4 *)(iVar7 + 0x44) = uVar2;
  *(undefined4 *)(iVar7 + 0x48) = uVar10;
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  *(undefined4 *)(iVar7 + 0x50) = 0;
  *(undefined4 *)(iVar7 + 0x54) = 0;
  *(undefined4 *)(iVar7 + 0x58) = 0;
  *(undefined4 *)(iVar7 + 0x5c) = 0;
  *(undefined4 *)(iVar7 + 0x60) = 0;
  uVar2 = DAT_004c1cc0;
  *(undefined4 *)(iVar7 + 100) = 0;
  *(undefined4 *)(iVar7 + 0x68) = 0;
  *(undefined4 *)(iVar7 + 0x6c) = uVar2;
  uVar3 = DAT_004c1cc8;
  *(undefined4 *)(iVar7 + 0x70) = uVar10;
  uVar2 = DAT_004c1cc4;
  *(undefined4 *)(iVar7 + 0x74) = uVar10;
  *(undefined4 *)(iVar7 + 0x78) = uVar2;
  *(undefined4 *)(iVar7 + 0x7c) = uVar3;
  *(undefined4 *)(iVar7 + 0x80) = uVar3;
  *(undefined2 *)(iVar7 + 0x84) = 0;
  *(undefined2 *)(iVar7 + 0x86) = 0;
  *(undefined2 *)(iVar7 + 0x88) = 0;
  *(undefined2 *)(iVar7 + 0x8a) = 0;
  *(undefined2 *)(iVar7 + 0x8c) = 0;
  *(undefined1 *)(iVar7 + 0x8e) = 0xff;
  *(undefined1 *)(iVar7 + 0x8f) = 0;
  *(undefined1 *)(iVar7 + 0x90) = 2;
  *(undefined1 *)(iVar7 + 0x91) = 1;
  *(undefined1 *)(iVar7 + 0x92) = 3;
  *(undefined1 *)(iVar7 + 0x93) = 0;
  *(undefined1 *)(iVar7 + 0x94) = 0;
  *(undefined1 *)(iVar7 + 0x95) = 0;
  *(undefined1 *)(iVar7 + 0x96) = 0;
  *(undefined1 *)(iVar7 + 0x97) = 0;
  *(undefined1 *)(iVar7 + 0x98) = param_3;
  *(undefined1 *)(iVar7 + 0x99) = 0;
  *(undefined1 *)(iVar7 + 0x9a) = 0;
  *(undefined1 *)(iVar7 + 0x9b) = 0;
  *(undefined1 *)(iVar7 + 0x9c) = 0;
  *(undefined1 *)(iVar7 + 0x9d) = 0;
  *(undefined4 *)(iVar7 + 0xa0) = 0;
  *(undefined4 *)(iVar7 + 0xa4) = 0;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar9 = func_004EDC9C(puVar8);
  }
  *(undefined4 **)(iVar7 + 0xa8) = puVar9;
  *(undefined4 *)(iVar7 + 0xac) = uVar10;
  *(undefined4 *)(iVar7 + 0xb0) = uVar10;
  *(undefined4 *)(iVar7 + 0xb4) = uVar10;
  uVar2 = DAT_004c1ccc;
  *(undefined4 *)(iVar7 + 0xb8) = uVar10;
  *(undefined4 *)(iVar7 + 0xbc) = uVar10;
  *(undefined4 *)(iVar7 + 0xc0) = uVar10;
  *(undefined4 *)(iVar7 + 0xc4) = uVar10;
  *(undefined4 *)(iVar7 + 200) = uVar10;
  *(undefined4 *)(iVar7 + 0xcc) = uVar10;
  *(undefined4 *)(iVar7 + 0xd0) = uVar10;
  *(undefined4 *)(iVar7 + 0xd4) = uVar10;
  *(undefined4 *)(iVar7 + 0xd8) = uVar10;
  *(undefined4 *)(iVar7 + 0xdc) = uVar10;
  *(undefined4 *)(iVar7 + 0xe0) = uVar10;
  *(undefined4 *)(iVar7 + 0xe4) = uVar10;
  *(undefined4 *)(iVar7 + 0xe8) = 0;
  *(undefined1 *)(iVar7 + 0xec) = 0;
  *(undefined1 *)(iVar7 + 0xed) = 0;
  *(undefined4 *)(iVar7 + 0xf0) = uVar2;
  iVar4 = DAT_004c1cd4;
  *(undefined4 *)(iVar7 + 0xf4) = DAT_004c1cd0;
  *(undefined4 *)(iVar7 + 0xf8) = uVar10;
  *(undefined4 *)(iVar7 + 0xfc) = uVar10;
  iVar1 = iVar4 << 1;
  *(int *)(iVar7 + 0x100) = iVar4;
  *(int *)(iVar7 + 0x104) = iVar1;
  uVar2 = DAT_004c1ce8;
  *(undefined4 *)(iVar7 + 0x108) = DAT_004c1cd8;
  iVar4 = DAT_004c1cdc;
  *(int *)(iVar7 + 0x10c) = DAT_004c1cdc;
  *(int *)(iVar7 + 0x110) = (iVar4 >> 2) - iVar4;
  *(undefined4 *)(iVar7 + 0x114) = DAT_004c1ce0;
  *(undefined4 *)(iVar7 + 0x118) = DAT_004c1ce4;
  *(undefined4 *)(iVar7 + 0x11c) = uVar3;
  *(undefined4 *)(iVar7 + 0x120) = uVar3;
  *(undefined4 *)(iVar7 + 0x124) = uVar2;
  *(undefined4 *)(iVar7 + 0x128) = 10;
  *(undefined4 *)(iVar7 + 300) = DAT_004c1cec;
  *(undefined4 *)(iVar7 + 0x130) = 0x80000000;
  *(undefined4 *)(iVar7 + 0x134) = uVar3;
  *(undefined4 *)(iVar7 + 0x138) = uVar3;
  *(undefined4 *)(iVar7 + 0x13c) = uVar3;
  *(undefined2 *)(iVar7 + 0x140) = 0xffff;
  *(undefined2 *)(iVar7 + 0x142) = 0xffff;
  *(undefined2 *)(iVar7 + 0x144) = 0xffff;
  *(undefined2 *)(iVar7 + 0x146) = 0xffff;
  *(undefined2 *)(iVar7 + 0x148) = 0xffff;
  *(undefined2 *)(iVar7 + 0x14a) = 0xffff;
  *(undefined1 *)(iVar7 + 0x14c) = 0;
  *(undefined1 *)(iVar7 + 0x14d) = 0xff;
  *(undefined1 *)(iVar7 + 0x14e) = 0;
  *(undefined1 *)(iVar7 + 0x14f) = 0;
  *(undefined1 *)(iVar7 + 0x150) = 0;
  *(undefined1 *)(iVar7 + 0x151) = 0;
  *(undefined1 *)(iVar7 + 0x152) = 0;
  *(undefined1 *)(iVar7 + 0x153) = 0;
  uVar2 = DAT_004c1cf0;
  *(undefined1 *)(iVar7 + 0x154) = 0;
  *(undefined1 *)(iVar7 + 0x155) = 0;
  *(undefined1 *)(iVar7 + 0x156) = 0;
  *(undefined4 *)(iVar7 + 0x158) = uVar2;
  *(int *)(iVar7 + 0x15c) = iVar11;
  *(undefined4 *)(iVar7 + 0x160) = uVar3;
  *(undefined4 *)(iVar7 + 0x168) = 0;
  uVar2 = DAT_004c1cf4;
  *(undefined4 *)(iVar7 + 0x164) = uVar3;
  *(undefined4 *)(iVar7 + 0x16c) = 0;
  *(undefined4 *)(iVar7 + 0x170) = 0;
  *(undefined4 *)(iVar7 + 0x174) = uVar2;
  *(undefined4 *)(iVar7 + 0x178) = DAT_004c1cf8;
  *(int *)(iVar7 + 0x17c) = iVar1 >> 2;
  *(int *)(iVar7 + 0x180) = iVar1;
  *(undefined4 *)(iVar7 + 0x184) = 0;
  *(undefined4 *)(iVar7 + 0x188) = 0;
  *(undefined4 *)(iVar7 + 0x18c) = 0;
  *(undefined4 *)(iVar7 + 400) = uVar10;
  *(undefined2 *)(iVar7 + 0x194) = 0;
  *(undefined2 *)(iVar7 + 0x196) = 0;
  *(undefined1 *)(iVar7 + 0x198) = 0;
  if (-1 < (int)param_4[1]) {
    uVar10 = func_0014E428(iVar11,*param_4,param_4[1],param_4[2],1,0,
                           *(char *)((int)param_4 + 0xd) == '\0');
    *(undefined4 *)(iVar7 + -0x24) = uVar10;
  }
  func_004BD89C(iVar11,(int)param_2);
  func_003249E0(iVar11,(uint)*(byte *)(param_4 + 3));
  func_00324964(iVar11);
  func_004BDDB0(iVar11);
  *(uint *)(iVar7 + 0xe8) = *(uint *)(iVar7 + 0xe8) | 9;
  *(undefined4 *)(iVar7 + 0x4c) = 0;
  if (*(char *)(iVar7 + 0x93) == '\0') {
    *(undefined4 *)(iVar7 + -0x418) = DAT_004c1cfc;
  }
  *(undefined4 *)(iVar7 + 0x78) = *(undefined4 *)(iVar7 + -0x418);
  bVar5 = func_00547538(iVar7 + -0x7c0);
  if (bVar5) {
    *(undefined1 *)(iVar7 + -0x4ed) = 1;
  }
  return iVar11;
}

