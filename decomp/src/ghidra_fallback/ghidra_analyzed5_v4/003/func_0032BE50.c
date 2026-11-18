#include "ghidra_types.h"

extern void func_004D08B8(int param_1,float fparam_0);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC78C(int param_1,undefined2 param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern int func_004FD238(int param_1,undefined1 param_2);
extern undefined4 *DAT_0032bfb0;
extern float DAT_0032bfb4;
extern undefined4 DAT_0032bfb8;
extern float DAT_0032bfbc;
extern float DAT_0032bfc0;
extern int DAT_0032bfc4;

// USA 0032BE50 <- EU 0032BE2C (Ghidra, non-matching)
// GLOBAL DAT_0032bfb0 undefined4 *
// GLOBAL DAT_0032bfb4 float
// GLOBAL DAT_0032bfb8 undefined4
// GLOBAL DAT_0032bfbc float
// GLOBAL DAT_0032bfc0 float
// GLOBAL DAT_0032bfc4 int

void func_0032BE50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  bool bVar5;
  float fVar6;
  
  uVar1 = *DAT_0032bfb0;
  *(undefined4 *)(param_1 + 0x950) = uVar1;
  *(undefined4 *)(param_1 + 0xa28) = uVar1;
  func_004F87F8(param_1,1);
  fVar6 = DAT_0032bfb4;
  *(undefined4 *)(param_1 + 0xc6c) = 0;
  *(undefined1 *)(param_1 + 0xc93) = 1;
  func_004D08B8(*(int *)(param_1 + 0xa88),fVar6);
  if (*(int *)(param_1 + 0xa80) != 0) {
    func_004D08B8(*(int *)(param_1 + 0xa80),fVar6);
  }
  uVar1 = DAT_0032bfb8;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0032bfb8;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  fVar6 = DAT_0032bfbc;
  iVar2 = *(int *)(param_1 + 0xa94);
  piVar3 = *(int **)(iVar2 + 0x28);
  if (piVar3 != (int *)0x0) {
    iVar2 = *(int *)(iVar2 + 0x20);
  }
  if ((piVar3 == (int *)0x0 || iVar2 == 0) || (iVar2 = *piVar3, iVar2 == 0)) {
    *(float *)(param_1 + 0xc2c) = *(float *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc24) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xc28) = *(undefined4 *)(param_1 + 0xc);
    *(float *)(param_1 + 0xc2c) = *(float *)(param_1 + 0x10) - fVar6;
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 0x18);
    uVar4 = *(undefined4 *)(iVar2 + 0x1c);
    *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0xc24) = uVar1;
    *(undefined4 *)(param_1 + 0xc28) = uVar4;
  }
  *(float *)(param_1 + 0xc28) = *(float *)(param_1 + 0xc) + DAT_0032bfc0;
  *(undefined1 *)(param_1 + 0xc90) = 2;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(param_1 + 0x5a8,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  func_004FD238(param_1 + 0x5a8,0);
  bVar5 = *(short *)(DAT_0032bfc4 + param_1) == 0x60;
  if (*(short *)(DAT_0032bfc4 + param_1) < 0x61) {
    bVar5 = *(char *)(param_1 + 0xc96) == '\0';
  }
  if (bVar5) {
    *(undefined1 *)(param_1 + 0xc97) = 1;
    *(undefined1 *)(param_1 + 0xc96) = 1;
    *(undefined1 *)(param_1 + 0xc99) = 1;
    func_004FC78C(param_1,0x60);
  }
  func_004FC07C(param_1,0x11,8,0);
  uVar1 = *(undefined4 *)(param_1 + 0xc50);
  *(undefined4 *)(param_1 + 0x4e4) = uVar1;
  *(undefined4 *)(param_1 + 0x4e8) = uVar1;
  *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  *(undefined4 *)(param_1 + 0xc80) = 0;
  *(undefined1 *)(param_1 + 0xc98) = 0;
  return;
}

