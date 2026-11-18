#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0065794C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00148fbc;
extern int *DAT_00148fc0;
extern int DAT_00148fc4;
extern float DAT_00148fc8;
extern undefined4 DAT_00148fcc;
extern undefined4 DAT_00148fd0;
extern undefined *DAT_00148fd4;
extern undefined *DAT_00148fd8;
extern undefined *DAT_00148fdc;
extern int DAT_00148fe0;
extern int DAT_00148ff0;
extern undefined4 *DAT_00149160;
extern char s_cState_Destroy_00149164[];
extern char s_cState_Pillar_00148ff4[];
extern char s_cState_Wait_00148fe4[];

// USA 00148C18 <- EU 00148C18 (Ghidra, non-matching)
// GLOBAL DAT_00148fbc int
// GLOBAL DAT_00148fc0 int *
// GLOBAL DAT_00148fc4 int
// GLOBAL DAT_00148fc8 float
// GLOBAL DAT_00148fcc undefined4
// GLOBAL DAT_00148fd0 undefined4
// GLOBAL DAT_00148fd4 undefined *
// GLOBAL DAT_00148fd8 undefined *
// GLOBAL DAT_00148fdc undefined *
// GLOBAL DAT_00148fe0 int
// GLOBAL DAT_00148ff0 int
// GLOBAL DAT_00149160 undefined4 *
// GLOBAL s_cState_Destroy_00149164 string
// GLOBAL s_cState_Pillar_00148ff4 string
// GLOBAL s_cState_Wait_00148fe4 string

int func_00148C18(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar3 = func_00150E40(param_1,param_2);
  piVar14 = DAT_00148fc0;
  iVar7 = DAT_00148fbc + 0x60;
  *piVar3 = DAT_00148fbc;
  piVar3[200] = iVar7;
  iVar7 = *piVar14;
  iVar8 = piVar14[1];
  piVar3[0x104] = (int)piVar3;
  piVar3[0x105] = iVar7;
  piVar3[0x106] = iVar8;
  iVar7 = DAT_00148fc4;
  piVar3[0x103] = DAT_00148fc4;
  iVar8 = piVar14[2];
  iVar9 = piVar14[3];
  piVar3[0x107] = iVar7;
  piVar3[0x108] = (int)piVar3;
  piVar3[0x109] = iVar8;
  piVar3[0x10a] = iVar9;
  iVar8 = piVar14[4];
  iVar9 = piVar14[5];
  piVar3[0x10b] = iVar7;
  piVar3[0x10c] = (int)piVar3;
  piVar3[0x10d] = iVar8;
  piVar3[0x10e] = iVar9;
  puVar4 = func_0010A794(piVar3 + 0x10f);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[10] = 0;
  iVar8 = piVar14[0x16];
  iVar9 = piVar14[0x17];
  puVar4[9] = iVar7;
  puVar4[0xb] = iVar8;
  puVar4[0xc] = iVar9;
  uVar17 = DAT_00148fcc;
  fVar22 = DAT_00148fc8;
  puVar4[0xd] = ALBW_AS_U32(DAT_00148fc8);
  uVar18 = DAT_00148fd0;
  puVar4[0x16] = uVar17;
  puVar4[0x17] = uVar18;
  puVar4[0x15] = 0;
  *(undefined2 *)(puVar4 + 0x18) = 0xffff;
  *(undefined1 *)(puVar4 + 0x19) = 0;
  *(undefined1 *)((int)puVar4 + 0x65) = 0;
  *(undefined1 *)((int)puVar4 + 0x66) = 0;
  *(undefined2 *)(puVar4 + 0x1a) = 0;
  puVar4[0x1b] = 0;
  iVar7 = func_00100118((int)(puVar4 + 0x1c),DAT_00148fd4,4,0x10);
  iVar7 = func_00100118(iVar7 + 0x40,DAT_00148fd8,8,0x10);
  iVar7 = func_00100118(iVar7 + 0x80,DAT_00148fd8,8,0x10);
  iVar7 = func_00100118(iVar7 + 0x140,DAT_00148fd4,4,0x10);
  *(undefined2 *)(iVar7 + 0x80) = 0;
  iVar11 = iVar7 + -0x6ac;
  *(bool *)(iVar7 + -0x209) = ALBW_AS_F32(param_2[0x11]) != fVar22;
  *(uint *)(iVar7 + -0x204) = param_2[0x13];
  *(undefined1 *)(iVar7 + -0x26a) = 3;
  *(int *)(iVar7 + -0x25c) = iVar11;
  iVar8 = func_0010BA78(0x30);
  *(int *)(iVar7 + -600) = iVar8;
  *(uint *)(iVar7 + -0x254) = iVar8 + (uint)*(byte *)(iVar7 + -0x26a) * 8;
  iVar9 = 3;
  piVar3 = (int *)(iVar8 + -8);
  do {
    iVar8 = piVar14[0x15];
    iVar9 = iVar9 + -1;
    piVar3[2] = piVar14[0x14];
    piVar3[3] = iVar8;
    iVar8 = piVar14[0x15];
    piVar3[4] = piVar14[0x14];
    piVar3[5] = iVar8;
    piVar3 = piVar3 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar7 + -0x26a);
  uVar12 = (uint)bVar1;
  piVar3 = (int *)func_0010BA78(uVar12 << 3);
  *(int **)(iVar7 + -0x250) = piVar3;
  if (uVar12 != 0) {
    piVar5 = piVar3 + -2;
    if ((bVar1 & 1) != 0) {
      iVar8 = piVar14[0xb];
      *piVar3 = piVar14[10];
      piVar3[1] = iVar8;
      piVar5 = piVar3;
    }
    for (iVar8 = (int)uVar12 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar9 = piVar14[0xb];
      piVar5[2] = piVar14[10];
      piVar5[3] = iVar9;
      iVar9 = piVar14[0xb];
      piVar5[4] = piVar14[10];
      piVar5[5] = iVar9;
      piVar5 = piVar5 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  puVar2 = DAT_00148fdc;
  iVar8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = 3;
    *puVar4 = 0x24;
    iVar8 = func_00100118((int)(puVar4 + 2),puVar2,0x24,3);
  }
  if (iVar8 != 0) {
    *(int *)(iVar7 + -0x264) = iVar8;
    *(undefined4 *)(iVar7 + -0x268) = 3;
  }
  iVar8 = DAT_00148fe0;
  *(undefined4 **)(iVar7 + -0x358) = (undefined4 *)(iVar7 + -0x270);
  iVar9 = DAT_00148ff0;
  *(undefined2 *)(iVar8 + iVar11) = 3;
  local_34 = (uint *)s_cState_Wait_00148fe4;
  local_38 = iVar9;
  iVar8 = *(int *)(iVar7 + -0x264);
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar9 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00148ef8;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00148ef8:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar12) {
    uVar12 = iVar8 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  piVar14 = *(int **)(iVar7 + -600);
  iVar16 = DAT_00148fc0[7];
  iVar6 = DAT_00148fc0[10];
  iVar10 = DAT_00148fc0[8];
  iVar13 = DAT_00148fc0[9];
  iVar8 = DAT_00148fc0[0xb];
  *piVar14 = DAT_00148fc0[6];
  piVar14[1] = iVar16;
  piVar14 = *(int **)(iVar7 + -0x254);
  *piVar14 = iVar10;
  piVar14[1] = iVar13;
  piVar14 = *(int **)(iVar7 + -0x250);
  piVar14[1] = iVar8;
  *piVar14 = iVar6;
  local_34 = (uint *)s_cState_Pillar_00148ff4;
  local_38 = iVar9;
  if (*(uint *)(iVar7 + -0x268) < 2) {
    iVar8 = *(int *)(iVar7 + -0x264);
  }
  else {
    iVar8 = *(int *)(iVar7 + -0x264) + 0x24;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar9 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00149010;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00149010:
  if (*(int *)(iVar8 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  iVar8 = *(int *)(iVar7 + -600);
  uVar17 = *DAT_00149160;
  uVar18 = DAT_00149160[1];
  uVar19 = DAT_00149160[3];
  uVar20 = DAT_00149160[4];
  uVar21 = DAT_00149160[5];
  *(undefined4 *)(iVar8 + 8) = DAT_00149160[2];
  *(undefined4 *)(iVar8 + 0xc) = uVar19;
  iVar8 = *(int *)(iVar7 + -0x254);
  *(undefined4 *)(iVar8 + 8) = uVar20;
  *(undefined4 *)(iVar8 + 0xc) = uVar21;
  iVar8 = *(int *)(iVar7 + -0x250);
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  local_34 = (uint *)s_cState_Destroy_00149164;
  local_38 = iVar9;
  if (*(uint *)(iVar7 + -0x268) < 3) {
    iVar8 = *(int *)(iVar7 + -0x264);
  }
  else {
    iVar8 = *(int *)(iVar7 + -0x264) + 0x48;
  }
  puVar15 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar9 + 8))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_001490d4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_001490d4:
  if (*(int *)(iVar8 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  piVar14 = DAT_00148fc0;
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  iVar6 = *(int *)(iVar7 + -600);
  iVar16 = piVar14[0x11];
  iVar10 = piVar14[10];
  iVar9 = piVar14[0x12];
  iVar13 = piVar14[0x13];
  iVar8 = piVar14[0xb];
  *(int *)(iVar6 + 0x10) = piVar14[0x10];
  *(int *)(iVar6 + 0x14) = iVar16;
  iVar6 = *(int *)(iVar7 + -0x254);
  *(int *)(iVar6 + 0x10) = iVar9;
  *(int *)(iVar6 + 0x14) = iVar13;
  iVar9 = *(int *)(iVar7 + -0x250);
  *(int *)(iVar9 + 0x10) = iVar10;
  *(int *)(iVar9 + 0x14) = iVar8;
  func_0065794C((undefined4 *)(iVar7 + -0x270),0);
  return iVar11;
}

