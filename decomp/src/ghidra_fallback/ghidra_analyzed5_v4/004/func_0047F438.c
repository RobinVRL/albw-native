#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_002313DC(int param_1);
extern int func_002C0294(undefined4 *param_1);
extern int func_0037654C(int param_1,undefined4 param_2,undefined1 param_3);
extern int func_0037685C(undefined4 *param_1,int *param_2,int *param_3);
extern int func_003A0D7C(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9660(int param_1,int param_2);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0047f888;
extern undefined4 *DAT_0047f88c;
extern undefined1 *DAT_0047f890;
extern undefined4 DAT_0047f894;
extern undefined4 DAT_0047f898;
extern undefined4 DAT_0047f89c;
extern int DAT_0047f8a0;
extern int DAT_0047f8a4;
extern undefined *DAT_0047f8c0;
extern char s_L_ArrowB_00_0047f8b4[];
extern char s_L_ArrowT_00_0047f8a8[];
extern char s_cState_Anim_0047f8d0[];
extern char s_cState_Wait_0047f8c4[];

// USA 0047F438 <- EU 0047F410 (Ghidra, non-matching)
// GLOBAL DAT_0047f888 int
// GLOBAL DAT_0047f88c undefined4 *
// GLOBAL DAT_0047f890 undefined1 *
// GLOBAL DAT_0047f894 undefined4
// GLOBAL DAT_0047f898 undefined4
// GLOBAL DAT_0047f89c undefined4
// GLOBAL DAT_0047f8a0 int
// GLOBAL DAT_0047f8a4 int
// GLOBAL DAT_0047f8c0 undefined *
// GLOBAL s_L_ArrowB_00_0047f8b4 string
// GLOBAL s_L_ArrowT_00_0047f8a8 string
// GLOBAL s_cState_Anim_0047f8d0 string
// GLOBAL s_cState_Wait_0047f8c4 string

int * func_0047F438(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined4 uVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  #define local_2c ((undefined4 *)(albw_frame + 0x14))
  piVar3 = func_004B9A10(param_1,1);
  iVar7 = DAT_0047f888;
  *piVar3 = DAT_0047f888;
  piVar3[0xe] = iVar7 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x1d);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  piVar3 = func_004B9A10(puVar4 + 9,0);
  puVar4 = DAT_0047f88c;
  piVar3[0x1d] = 0;
  piVar3[0x1e] = 0;
  piVar3[0x1f] = 0;
  piVar11 = piVar3 + -0x26;
  piVar3[0x20] = 0;
  iVar7 = puVar4[0x11];
  piVar3[0x21] = puVar4[0x10];
  piVar3[0x22] = iVar7;
  *DAT_0047f890 = 1;
  (**(code **)(*piVar3 + 0x38))(piVar3,DAT_0047f894,0);
  piVar15 = (int *)piVar3[7];
  local_2c[0] = DAT_0047f898;
  (**(code **)(*piVar11 + 0x38))(piVar11,DAT_0047f89c,local_2c);
  piVar17 = (int *)piVar3[-0x1f];
  func_0016773C((int)piVar15,5);
  func_0016773C((int)piVar17,4);
  iVar7 = DAT_0047f8a0;
  iVar12 = 0;
  do {
    piVar14 = (int *)(iVar7 + iVar12 * 8);
    func_00166C20(piVar15,iVar12 + 3,piVar14,0);
    func_00166C20(piVar17,iVar12 + 2,piVar14,0);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 2);
  puVar5 = (undefined4 *)func_0010BAB4(0x3a4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    iVar7 = func_003A0D7C(puVar5,piVar15,piVar17,(int)piVar11);
  }
  piVar3[0x1d] = iVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x6c);
  iVar7 = DAT_0047f8a4;
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_34 = (uint *)s_L_ArrowT_00_0047f8a8;
    local_38 = DAT_0047f8a4;
    puVar5 = func_0037685C(puVar6,piVar15,&local_38);
  }
  piVar3[0x1e] = (int)puVar5;
  func_0037654C((int)puVar5,0x110000,0);
  func_004B948C((int)piVar11,piVar3[0x1e]);
  puVar6 = (undefined4 *)func_0010BAB4(0x6c);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    local_34 = (uint *)s_L_ArrowB_00_0047f8b4;
    local_38 = iVar7;
    puVar5 = func_0037685C(puVar6,piVar15,&local_38);
  }
  piVar3[0x1f] = (int)puVar5;
  func_0037654C((int)puVar5,0x220000,1);
  func_004B948C((int)piVar11,piVar3[0x1f]);
  piVar3[-0x1c] = (int)piVar17;
  *(undefined2 *)((int)piVar3 + -0x76) = 2;
  *(undefined2 *)(piVar3 + -0x1e) = 0;
  func_002313DC((int)(piVar3 + -0x1e));
  piVar3[-0x19] = (int)piVar17;
  *(undefined2 *)((int)piVar3 + -0x6a) = 3;
  *(undefined2 *)(piVar3 + -0x1b) = 0;
  piVar3[10] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x22) = 3;
  *(undefined2 *)(piVar3 + 8) = 0;
  func_002313DC((int)(piVar3 + 8));
  piVar3[0xd] = (int)piVar15;
  *(undefined2 *)((int)piVar3 + 0x2e) = 4;
  *(undefined2 *)(piVar3 + 0xb) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x20);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_002C0294(puVar6);
  }
  piVar3[-0x21] = (int)puVar5;
  puVar5[4] = 2;
  *(undefined1 *)(piVar3[-0x21] + 0x14) = 2;
  func_004B9660((int)piVar11,piVar3[-0x21]);
  *(undefined1 *)((int)piVar3 + -0x1e) = 2;
  piVar3[-4] = (int)piVar11;
  iVar12 = func_0010BA78(0x20);
  piVar3[-3] = iVar12;
  piVar3[-2] = iVar12 + (uint)*(byte *)((int)piVar3 + -0x1e) * 8;
  iVar8 = 2;
  puVar5 = (undefined4 *)(iVar12 + -8);
  do {
    uVar19 = puVar4[0xf];
    iVar8 = iVar8 + -1;
    puVar5[2] = puVar4[0xe];
    puVar5[3] = uVar19;
    uVar19 = puVar4[0xf];
    puVar5[4] = puVar4[0xe];
    puVar5[5] = uVar19;
    puVar5 = puVar5 + 4;
  } while (iVar8 != 0);
  bVar1 = *(byte *)((int)piVar3 + -0x1e);
  uVar13 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar13 << 3);
  piVar3[-1] = (int)puVar5;
  if (uVar13 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar19 = puVar4[5];
      *puVar5 = puVar4[4];
      puVar5[1] = uVar19;
      puVar6 = puVar5;
    }
    for (iVar12 = (int)uVar13 >> 1; iVar12 != 0; iVar12 = iVar12 + -1) {
      uVar19 = puVar4[5];
      puVar6[2] = puVar4[4];
      puVar6[3] = uVar19;
      uVar19 = puVar4[5];
      puVar6[4] = puVar4[4];
      puVar6[5] = uVar19;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar12 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar12 = func_00100118((int)(puVar5 + 2),DAT_0047f8c0,0x24,2);
  }
  if (iVar12 != 0) {
    piVar3[-6] = iVar12;
    piVar3[-7] = 2;
  }
  local_34 = (uint *)s_cState_Wait_0047f8c4;
  local_38 = iVar7;
  iVar12 = piVar3[-6];
  puVar18 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar7 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0047f7d0;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0047f7d0:
  iVar12 = *(int *)(iVar12 + 8);
  if (iVar12 <= (int)uVar13) {
    uVar13 = iVar12 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar13);
  *(undefined1 *)((int)puVar18 + uVar13) = 0;
  puVar5 = (undefined4 *)piVar3[-3];
  uVar10 = puVar4[1];
  uVar19 = puVar4[2];
  uVar16 = puVar4[3];
  uVar20 = puVar4[4];
  uVar9 = puVar4[5];
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)piVar3[-2];
  *puVar5 = uVar19;
  puVar5[1] = uVar16;
  puVar5 = (undefined4 *)piVar3[-1];
  puVar5[1] = uVar9;
  *puVar5 = uVar20;
  local_34 = (uint *)s_cState_Anim_0047f8d0;
  local_38 = iVar7;
  uVar13 = piVar3[-7];
  if (uVar13 < 2) {
    iVar12 = piVar3[-6];
    uVar2 = uVar13;
  }
  else {
    iVar12 = iVar7;
    uVar2 = piVar3[-6];
  }
  if (1 < uVar13) {
    iVar12 = uVar2 + 0x24;
  }
  puVar18 = *(uint **)(iVar12 + 4);
  (**(code **)(iVar7 + 8))(&local_38);
  uVar13 = 0;
  do {
    if (*(char *)((int)local_34 + uVar13) == '\0') {
      if ((int)uVar13 < 0x40001) goto LAB_0047f8e8;
      break;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x40001);
  uVar13 = 0;
LAB_0047f8e8:
  if (*(int *)(iVar12 + 8) <= (int)uVar13) {
    uVar13 = *(int *)(iVar12 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar18,local_34,uVar13);
  *(undefined1 *)((int)puVar18 + uVar13) = 0;
  uVar9 = puVar4[9];
  uVar20 = puVar4[4];
  iVar7 = piVar3[-3];
  uVar19 = puVar4[5];
  uVar10 = puVar4[7];
  uVar16 = puVar4[8];
  *(undefined4 *)(iVar7 + 8) = puVar4[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  iVar7 = piVar3[-2];
  *(undefined4 *)(iVar7 + 8) = uVar16;
  *(undefined4 *)(iVar7 + 0xc) = uVar9;
  iVar7 = piVar3[-1];
  *(undefined4 *)(iVar7 + 8) = uVar20;
  *(undefined4 *)(iVar7 + 0xc) = uVar19;
  func_004B9958((int)piVar11,2);
  *(undefined1 *)((int)piVar3 + 0xf) = 1;
  func_004B9958((int)piVar3,2);
  *DAT_0047f890 = 0;
  return piVar11;
}

