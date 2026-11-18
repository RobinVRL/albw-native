// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_002C2D00(int *param_1);
extern int func_00315878(int param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_005532B4(undefined4 param_1,int param_2,int param_3,uint param_4);
extern int func_00556C7C();
extern int func_00588BE4(int param_1);
extern int func_00664C50(undefined4 *param_1,undefined1 param_2);
extern int iRam003162d8;
extern int iRam00316528;
extern undefined4 uRam003162dc;
extern undefined4 *puRam00316524;
extern int *DAT_0031629c;
extern int DAT_003162a0;
extern int DAT_003162a4;
extern int DAT_003162a8;
extern undefined4 DAT_003162ac;
extern undefined4 DAT_003162b0;
extern int *DAT_003162b4;
extern int *DAT_003162b8;
extern int *DAT_003162bc;
extern int *DAT_003162c0;
extern int *DAT_003162c4;
extern undefined4 DAT_003162c8;
extern int DAT_003162cc;
extern int *DAT_003162d0;
extern undefined4 DAT_003162d4;
extern char s_cState_Move_0031652c[];
extern char s_cState_Reverse_00316538[];

// USA 00315E64 <- EU 00315E40 (Ghidra, non-matching)
// GLOBAL DAT_0031629c int *
// GLOBAL DAT_003162a0 int
// GLOBAL DAT_003162a4 int
// GLOBAL DAT_003162a8 int
// GLOBAL DAT_003162ac undefined4
// GLOBAL DAT_003162b0 undefined4
// GLOBAL DAT_003162b4 int *
// GLOBAL DAT_003162b8 int *
// GLOBAL DAT_003162bc int *
// GLOBAL DAT_003162c0 int *
// GLOBAL DAT_003162c4 int *
// GLOBAL DAT_003162c8 undefined4
// GLOBAL DAT_003162cc int
// GLOBAL DAT_003162d0 int *
// GLOBAL DAT_003162d4 undefined4
// GLOBAL UNK_003162d8 int
// GLOBAL UNK_003162dc undefined4
// GLOBAL UNK_00316524 undefined *
// GLOBAL UNK_00316528 int
// GLOBAL s_cState_Move_0031652c string
// GLOBAL s_cState_Reverse_00316538 string

int func_00315E64(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(uint *)(albw_frame + 0x4))
  #define iStack_68 (*(int *)(albw_frame + 0x8))
  #define puStack_64 (*(uint * *)(albw_frame + 0xc))
  #define iStack_60 (*(int *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define iStack_58 (*(int *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(uint *)(albw_frame + 0x28))
  #define local_44 (*(undefined1 *)(albw_frame + 0x2c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x2d))
  #define local_40 (*(undefined4 *)(albw_frame + 0x30))
  #define local_3c (*(undefined4 *)(albw_frame + 0x34))
  #define local_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x40))
  #define local_2c (*(undefined4 *)(albw_frame + 0x44))
  #define local_28 (*(undefined1 *)(albw_frame + 0x48))
  #define local_27 (*(undefined1 *)(albw_frame + 0x49))
  piVar4 = func_00150E40(param_1,param_2);
  piVar2 = DAT_0031629c;
  piVar4[0x104] = DAT_003162a0;
  iVar8 = DAT_003162a8;
  iVar13 = *piVar2;
  iVar15 = piVar2[1];
  piVar4[0x105] = (int)(piVar4 + 0x103);
  piVar4[0x106] = iVar13;
  piVar4[0x107] = iVar15;
  iVar13 = DAT_003162a4;
  piVar4[0x103] = DAT_003162a4 + 0xbc;
  piVar4[200] = iVar13 + 0x58;
  *piVar4 = iVar13;
  piVar4[0x108] = 0;
  iVar13 = piVar2[2];
  iVar15 = piVar2[3];
  piVar4[0x10a] = (int)piVar4;
  piVar4[0x109] = iVar8;
  piVar4[0x10b] = iVar13;
  piVar4[0x10c] = iVar15;
  iVar13 = func_0054D964((int)piVar4,0);
  piVar4[0x10d] = iVar13;
  iVar13 = func_0054D89C((int)piVar4,0);
  piVar4[0x10e] = iVar13;
  uVar10 = param_2[5];
  uVar14 = param_2[6];
  piVar4[0x10f] = param_2[4];
  piVar4[0x110] = uVar10;
  piVar4[0x111] = uVar14;
  piVar4[0x112] = piVar4[0xf4];
  piVar4[0x113] = piVar4[0xf5];
  piVar4[0x114] = piVar4[0xf6];
  puVar5 = func_0010A794(piVar4 + 0x115);
  puVar5[5] = 0;
  puVar5[6] = 0;
  uVar3 = DAT_003162ac;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = uVar3;
  puVar5[10] = uVar3;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  uVar3 = DAT_003162b0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = uVar3;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  iVar13 = func_004EE484(puVar5 + 0x12);
  iVar15 = iVar13 + -0x49c;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5 = func_0034CAA0(puVar6);
  }
  *(undefined4 **)(iVar13 + 0x68) = puVar5;
  piVar4 = DAT_003162b4;
  *(undefined4 *)(iVar13 + 0x6c) = 0;
  *(undefined4 *)(iVar13 + 0x74) = 0;
  *(undefined1 *)(iVar13 + 0x7c) = 0;
  *(bool *)(iVar13 + 0x7d) = *(char *)(*piVar4 + 0x18) == '\a' || *(char *)(*piVar4 + 0x18) == '%';
  *(undefined4 *)(iVar13 + 0x84) = 0;
  iVar7 = piVar2[0x14];
  iVar11 = piVar2[0x15];
  *(int *)(iVar13 + 0x80) = iVar8;
  *(int *)(iVar13 + 0x88) = iVar7;
  *(int *)(iVar13 + 0x8c) = iVar11;
  local_6c = *(uint *)(iVar13 + -0x44c);
  iVar8 = func_0052FBA0(*DAT_003162b8 + 0x3dbbc,local_6c);
  if (iVar8 == 0) {
    *(undefined1 *)(iVar13 + -0x1c5) = 1;
    return iVar15;
  }
  iVar7 = func_00588BE4(iVar15);
  if (iVar7 == *DAT_003162bc) {
    *(undefined1 *)(iVar13 + 100) = 1;
    func_003521F0(iVar13 + -0x178,2);
  }
  else {
    *(undefined1 *)(iVar13 + 100) = 0;
    iVar7 = func_00588BE4(iVar15);
    if (iVar7 == *DAT_003162c0) {
      func_003521F0(iVar13 + -0x178,0);
    }
    else {
      func_003521F0(iVar13 + -0x178,1);
    }
  }
  iVar7 = func_00588BE4(iVar8);
  iVar8 = DAT_003162cc;
  uVar3 = DAT_003162c8;
  if (iVar7 == *DAT_003162c4) {
    local_50 = func_005532B4(*(undefined4 *)(*DAT_003162d0 + 0x10),1,
                             *(ushort *)((int)param_2 + 0x2a) & 0xff,0);
    iStack_60 = iVar8;
    uStack_5c = uVar3;
    uStack_4c = 0;
    local_48 = 0;
    iStack_58 = iVar8;
    uStack_54 = uVar3;
    local_28 = 1;
    local_43 = 0;
    local_30 = 0;
    local_2c = 0;
    local_3c = 0;
    local_40 = 0;
    local_34 = 0;
    local_38 = 0;
    local_27 = 0xc4;
    local_44 = 1;
  }
  else {
    iVar7 = func_00556C7C();
    if (iVar7 == 0) goto LAB_00316188;
    if (*(int *)(iVar7 + 200) == 0) {
      local_50 = 0;
    }
    else {
      local_50 = **(undefined4 **)(iVar7 + 0xd0);
    }
    iStack_60 = iVar8;
    uStack_5c = uVar3;
    uStack_4c = 0;
    local_48 = 0;
    iStack_58 = iVar8;
    uStack_54 = uVar3;
    local_28 = 1;
    local_43 = 0;
    local_3c = 0;
    local_30 = 0;
    local_2c = 0;
    local_27 = 0xc4;
    local_40 = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 1;
    iVar7 = func_00588BE4(iVar15);
    if (iVar7 == *DAT_003162bc) {
      local_48 = local_48 | 1;
    }
  }
  piVar4 = func_002C2D00(&iStack_60);
  *(int **)(iVar13 + -0x7c) = piVar4;
LAB_00316188:
  iVar7 = piVar2[4];
  iVar11 = piVar2[5];
  *(int *)(iVar13 + -0x74) = iVar15;
  *(int *)(iVar13 + -0x70) = iVar7;
  *(int *)(iVar13 + -0x6c) = iVar11;
  *(int *)(iVar13 + -0xb0) = iVar13 + -0x78;
  func_00151148(*(int *)(iVar13 + -100),1);
  func_00315878(iVar15);
  iVar7 = iRam003162d8;
  iVar11 = piVar2[6];
  iVar12 = piVar2[7];
  *(int *)(iVar13 + 0x84) = iVar15;
  *(int *)(iVar13 + 0x88) = iVar11;
  *(int *)(iVar13 + 0x8c) = iVar12;
  *(undefined2 *)(iVar7 + iVar15) = 0x16;
  local_6c = *(uint *)(iVar13 + -0x1d0);
  func_0014EB8C(iVar13,*(undefined4 *)(iVar13 + -0x68),*(undefined2 **)(iVar13 + -0xfc),&local_6c,
                *(undefined2 *)(iVar13 + -0x448),iVar13 + 0x80,(short)uRam003162dc);
  *(undefined1 *)(iVar13 + -0x42) = 2;
  *(int *)(iVar13 + -0x34) = iVar15;
  iVar7 = func_0010BA78(0x20);
  *(int *)(iVar13 + -0x30) = iVar7;
  *(uint *)(iVar13 + -0x2c) = iVar7 + (uint)*(byte *)(iVar13 + -0x42) * 8;
  iVar11 = 2;
  piVar4 = (int *)(iVar7 + -8);
  do {
    iVar7 = piVar2[0x13];
    iVar11 = iVar11 + -1;
    piVar4[2] = piVar2[0x12];
    piVar4[3] = iVar7;
    iVar7 = piVar2[0x13];
    piVar4[4] = piVar2[0x12];
    piVar4[5] = iVar7;
    piVar4 = piVar4 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar13 + -0x42);
  uVar10 = (uint)bVar1;
  piVar4 = (int *)func_0010BA78(uVar10 << 3);
  *(int **)(iVar13 + -0x28) = piVar4;
  if (uVar10 != 0) {
    piVar9 = piVar4 + -2;
    if ((bVar1 & 1) != 0) {
      iVar7 = piVar2[0xd];
      *piVar4 = piVar2[0xc];
      piVar4[1] = iVar7;
      piVar9 = piVar4;
    }
    for (iVar7 = (int)uVar10 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
      iVar11 = piVar2[0xd];
      piVar9[2] = piVar2[0xc];
      piVar9[3] = iVar11;
      iVar11 = piVar2[0xd];
      piVar9[4] = piVar2[0xc];
      piVar9[5] = iVar11;
      piVar9 = piVar9 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar7 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 2;
    iVar7 = func_00100118((int)(puVar5 + 2),puRam00316524,0x24,2);
  }
  if (iVar7 != 0) {
    *(int *)(iVar13 + -0x3c) = iVar7;
    *(undefined4 *)(iVar13 + -0x40) = 2;
  }
  iVar7 = iRam00316528;
  *(undefined4 **)(iVar13 + -0x148) = (undefined4 *)(iVar13 + -0x48);
  *(undefined2 *)(iVar7 + iVar15) = 2;
  puStack_64 = (uint *)s_cState_Move_0031652c;
  iStack_68 = iVar8;
  iVar7 = *(int *)(iVar13 + -0x3c);
  puVar17 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar8 + 8))(&iStack_68);
  uVar10 = 0;
  do {
    if (*(char *)((int)puStack_64 + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_003163d4;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_003163d4:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar10) {
    uVar10 = iVar7 - 1;
  }
  (**(code **)(iStack_68 + 8))(&iStack_68);
  func_0010E3C4(puVar17,puStack_64,uVar10);
  *(undefined1 *)((int)puVar17 + uVar10) = 0;
  piVar4 = *(int **)(iVar13 + -0x30);
  iVar12 = piVar2[9];
  iVar7 = piVar2[10];
  iVar18 = piVar2[0xb];
  iVar11 = piVar2[0xc];
  iVar16 = piVar2[0xd];
  *piVar4 = piVar2[8];
  piVar4[1] = iVar12;
  piVar4 = *(int **)(iVar13 + -0x2c);
  *piVar4 = iVar7;
  piVar4[1] = iVar18;
  piVar4 = *(int **)(iVar13 + -0x28);
  *piVar4 = iVar11;
  piVar4[1] = iVar16;
  puStack_64 = (uint *)s_cState_Reverse_00316538;
  iStack_68 = iVar8;
  if (*(uint *)(iVar13 + -0x40) < 2) {
    iVar7 = *(int *)(iVar13 + -0x3c);
  }
  else {
    iVar7 = *(int *)(iVar13 + -0x3c) + 0x24;
  }
  puVar17 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar8 + 8))(&iStack_68);
  uVar10 = 0;
  do {
    if (*(char *)((int)puStack_64 + uVar10) == '\0') {
      if ((int)uVar10 < 0x40001) goto LAB_0031649c;
      break;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < 0x40001);
  uVar10 = 0;
LAB_0031649c:
  if (*(int *)(iVar7 + 8) <= (int)uVar10) {
    uVar10 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(iStack_68 + 8))(&iStack_68);
  func_0010E3C4(puVar17,puStack_64,uVar10);
  *(undefined1 *)((int)puVar17 + uVar10) = 0;
  iVar7 = piVar2[0x11];
  iVar16 = piVar2[0xc];
  iVar18 = *(int *)(iVar13 + -0x30);
  iVar12 = piVar2[0xd];
  iVar8 = piVar2[0xf];
  iVar11 = piVar2[0x10];
  *(int *)(iVar18 + 8) = piVar2[0xe];
  *(int *)(iVar18 + 0xc) = iVar8;
  iVar8 = *(int *)(iVar13 + -0x2c);
  *(int *)(iVar8 + 8) = iVar11;
  *(int *)(iVar8 + 0xc) = iVar7;
  iVar8 = *(int *)(iVar13 + -0x28);
  *(int *)(iVar8 + 8) = iVar16;
  *(int *)(iVar8 + 0xc) = iVar12;
  func_00664C50((undefined4 *)(iVar13 + -0x48),0);
  return iVar15;
}

