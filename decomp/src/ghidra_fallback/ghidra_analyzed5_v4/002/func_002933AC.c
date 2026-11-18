#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_0010DB90(void);
extern int func_0014D9C4(undefined4 *param_1);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_001B687C(undefined4 *param_1);
extern int func_00230174(undefined4 *param_1);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_002FCFC8(undefined4 *param_1);
extern int func_002FDFE8(undefined4 *param_1);
extern int func_00362834(undefined1 *param_1);
extern int func_00377354(undefined4 *param_1,undefined4 param_2);
extern int func_00502E5C(undefined4 *param_1);
extern undefined4 DAT_00293768;
extern undefined4 DAT_0029376c;
extern undefined DAT_00293770;
extern undefined4 DAT_00293780;
extern undefined4 DAT_00293784;
extern undefined4 *DAT_00293788;
extern undefined4 DAT_0029378c;
extern undefined4 DAT_00293790;
extern int DAT_00293794;
extern int DAT_00293798;

// USA 002933AC <- EU 002933D4 (Ghidra, non-matching)
// GLOBAL DAT_00293768 undefined4
// GLOBAL DAT_0029376c undefined4
// GLOBAL DAT_00293770 undefined
// GLOBAL DAT_00293780 undefined4
// GLOBAL DAT_00293784 undefined4
// GLOBAL DAT_00293788 undefined4 *
// GLOBAL DAT_0029378c undefined4
// GLOBAL DAT_00293790 undefined4
// GLOBAL DAT_00293794 int
// GLOBAL DAT_00293798 int

undefined4 * func_002933AC(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_00293768;
  puVar2[4] = param_2;
  puVar2[5] = *(undefined4 *)(param_2 + 0x5fc);
  puVar2[6] = *(undefined4 *)(param_2 + 0x600);
  puVar2[7] = *(undefined4 *)(param_2 + 0x604);
  puVar2[9] = 0;
  puVar2[0xb] = 0;
  puVar2[10] = 0;
  puVar2[0xf] = 0xffffffff;
  func_00362834((undefined1 *)(puVar2 + 8));
  *(undefined2 *)(puVar2 + 0x10) = 0xffff;
  *(undefined2 *)((int)puVar2 + 0x42) = 0;
  puVar2[0x11] = 0;
  piVar3 = (int *)func_0010DB90();
  uVar4 = func_0010CF28(0x1cc,piVar3,4);
  puVar2[0x12] = uVar4;
  puVar2[0x13] = param_2;
  puVar2[0x14] = puVar2;
  puVar2 = func_00377354(puVar2 + 0x15,param_2);
  puVar5 = (undefined4 *)func_0010BAB4(0x108);
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    local_28 = DAT_00293780;
    local_24 = &DAT_00293770;
    uVar4 = func_001663BC(puVar5,&local_28,0,0,1);
  }
  puVar2[3] = uVar4;
  puVar5 = (undefined4 *)func_0010BAB4(0xb0);
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar4 = func_002FCDA0(puVar5,0,0);
  }
  puVar2[4] = uVar4;
  puVar6 = (undefined4 *)func_0010BAB4(0x334);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_00502E5C(puVar6);
  }
  puVar2[5] = puVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x10c);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_001B687C(puVar6);
  }
  puVar2[6] = puVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x84);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_002FDFE8(puVar6);
  }
  puVar2[7] = puVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x28c);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_00230174(puVar6);
  }
  puVar2[8] = puVar5;
  puVar5 = (undefined4 *)func_0010BAB4(0x2f8);
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar4 = func_002FCFC8(puVar5);
  }
  puVar2[9] = uVar4;
  *(undefined1 *)(puVar2 + 10) = 0;
  *(undefined1 *)((int)puVar2 + 0x2a) = 0;
  *(undefined1 *)((int)puVar2 + 0x2b) = 0;
  puVar5 = DAT_00293788;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  uVar4 = DAT_00293784;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = uVar4;
  uVar7 = puVar5[1];
  puVar2[0xf] = *puVar5;
  puVar2[0x10] = uVar7;
  puVar2[0x11] = puVar2 + -0x15;
  puVar2 = (undefined4 *)func_0014D9C4(puVar2 + 0x12);
  uVar7 = DAT_0029378c;
  *(undefined1 *)(puVar2 + 5) = 0;
  *puVar2 = uVar7;
  puVar2[1] = uVar4;
  puVar2[2] = 0;
  uVar7 = DAT_00293790;
  puVar2[3] = 0;
  puVar2[4] = uVar4;
  puVar2[6] = uVar7;
  puVar2[7] = uVar7;
  *(undefined1 *)(puVar2 + 8) = 0;
  *(undefined1 *)((int)puVar2 + 0x21) = 0;
  *(undefined1 *)((int)puVar2 + 0x22) = 0;
  *(undefined1 *)((int)puVar2 + 0x23) = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  *(undefined1 *)((int)puVar2 + 0x25) = 0;
  *(undefined1 *)((int)puVar2 + 0x26) = 0;
  *(undefined1 *)((int)puVar2 + 0x27) = 0;
  *(undefined1 *)(puVar2 + 10) = 1;
  *(undefined1 *)((int)puVar2 + 0x29) = 0;
  *(undefined1 *)((int)puVar2 + 0x2a) = 1;
  *(undefined1 *)((int)puVar2 + 0x2b) = 1;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  *(undefined1 *)((int)puVar2 + 0x2d) = 0;
  puVar5 = puVar2 + -0x27;
  *(undefined1 *)((int)puVar2 + 0x2e) = 0;
  *(undefined1 *)((int)puVar2 + 0x2f) = 0;
  *(undefined1 *)(puVar2 + 0xc) = 0;
  *(undefined1 *)((int)puVar2 + 0x31) = 1;
  *(undefined1 *)((int)puVar2 + 0x32) = 0;
  *(undefined1 *)((int)puVar2 + 0x33) = 0;
  *(undefined1 *)(puVar2 + 0xd) = 1;
  puVar2[0xe] = 0;
  puVar2[0x10] = uVar4;
  puVar2[0x11] = uVar4;
  puVar2[0x12] = uVar4;
  puVar2[0x13] = uVar4;
  puVar2[0x14] = uVar4;
  puVar2[0x15] = uVar4;
  puVar2[0x16] = 0;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  *(undefined2 *)((int)puVar2 + 0x5e) = 0xffff;
  *(undefined2 *)(puVar2 + 0x18) = 0xffff;
  *(undefined2 *)((int)puVar2 + 0x62) = 0xffff;
  puVar2[0x19] = 0;
  *(undefined1 *)(puVar2 + 0xf) = 0;
  *(undefined1 *)((int)puVar2 + 0x3d) = 0;
  *(undefined1 *)((int)puVar2 + 0x3f) = 0;
  *(undefined1 *)((int)puVar2 + 0x3e) = 0;
  puVar2[0x1d] = uVar4;
  puVar2[0x1f] = uVar4;
  puVar2[0x20] = uVar4;
  puVar2[0x21] = uVar4;
  puVar2[0x22] = uVar4;
  puVar2[0x23] = uVar4;
  puVar2[0x24] = uVar4;
  puVar2[0x25] = 0;
  *(undefined2 *)(puVar2 + 0x26) = 0;
  *(undefined2 *)((int)puVar2 + 0x9a) = 0xffff;
  *(undefined2 *)(puVar2 + 0x27) = 0xffff;
  *(undefined2 *)((int)puVar2 + 0x9e) = 0xffff;
  puVar2[0x28] = 0;
  *(undefined1 *)(puVar2 + 0x1e) = 0;
  *(undefined1 *)((int)puVar2 + 0x79) = 0;
  *(undefined1 *)((int)puVar2 + 0x7b) = 0;
  *(undefined1 *)((int)puVar2 + 0x7a) = 0;
  puVar2[0x2c] = uVar4;
  *(undefined1 *)(puVar2 + 0x2d) = 0;
  *(undefined1 *)(puVar2 + 0x2e) = 0;
  puVar2[0x2f] = 0;
  *(undefined2 *)(puVar2 + 0x30) = 0;
  *(undefined1 *)((int)puVar2 + 0xc2) = 0;
  *(undefined1 *)(puVar2 + 0x31) = 8;
  *(undefined1 *)((int)puVar2 + 0xc5) = 0;
  *(undefined1 *)(puVar2 + 0x32) = 0;
  puVar2[0x33] = 0;
  *(undefined2 *)(puVar2 + 0x34) = 0;
  *(undefined1 *)((int)puVar2 + 0xd2) = 0;
  puVar2[0x35] = uVar4;
  puVar2[0x36] = uVar4;
  puVar2[0x37] = uVar4;
  iVar1 = DAT_00293798;
  *(undefined4 **)(puVar2[-0x21] + 0x3c) = puVar5;
  *(undefined4 **)(puVar2[-0x21] + 0x5c) = puVar5;
  *(undefined1 *)(puVar2 + 8) = 1;
  piVar3 = (int *)(DAT_00293794 +
                  (uint)*(byte *)(iVar1 + *(short *)((int)puVar2 + -0x5a) * 0x10) * 8);
  piVar9 = (int *)((int)puVar5 + (piVar3[1] >> 1));
  if ((piVar3[1] & 1U) == 0) {
    pcVar8 = (code *)*piVar3;
  }
  else {
    pcVar8 = *(code **)(*piVar9 + *piVar3);
  }
  (*pcVar8)(piVar9);
  return puVar5;
}

