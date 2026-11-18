#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_002C2D00(int *param_1);
extern int func_00386B28(int param_1);
extern int func_003AB9D8(undefined4 param_1,int param_2,int param_3);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00667C8C(undefined4 *param_1,undefined1 param_2);
extern undefined4 *DAT_0038519c;
extern int *DAT_003851a0;
extern int DAT_003851a4;
extern int DAT_003851a8;
extern undefined4 *DAT_003851ac;
extern undefined DAT_003851b0;
extern undefined *DAT_003851b4;
extern undefined4 DAT_003852c4;
extern char s_cState_Attack_003851c4[];
extern char s_cState_Brace_003851d4[];
extern char s_cState_Dash_00385200[];
extern char s_cState_Roll_003851e4[];
extern char s_cState_SpRoll_003851f0[];
extern char s_cState_Wait_003851b8[];

// USA 00384CA0 <- EU 00384C7C (Ghidra, non-matching)
// GLOBAL DAT_0038519c undefined4 *
// GLOBAL DAT_003851a0 int *
// GLOBAL DAT_003851a4 int
// GLOBAL DAT_003851a8 int
// GLOBAL DAT_003851ac undefined4 *
// GLOBAL DAT_003851b0 undefined
// GLOBAL DAT_003851b4 undefined *
// GLOBAL DAT_003852c4 undefined4
// GLOBAL s_cState_Attack_003851c4 string
// GLOBAL s_cState_Brace_003851d4 string
// GLOBAL s_cState_Dash_00385200 string
// GLOBAL s_cState_Roll_003851e4 string
// GLOBAL s_cState_SpRoll_003851f0 string
// GLOBAL s_cState_Wait_003851b8 string

void func_00384CA0(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  ushort uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define iStack_70 (*(int *)(albw_frame + 0x10))
  #define iStack_6c (*(int *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(undefined * *)(albw_frame + 0x1c))
  #define local_60 ((uint *)(albw_frame + 0x20))
  #define local_58 (*(undefined1 *)(albw_frame + 0x28))
  #define local_57 (*(undefined1 *)(albw_frame + 0x29))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x30))
  #define local_4c (*(undefined4 *)(albw_frame + 0x34))
  #define local_48 (*(undefined4 *)(albw_frame + 0x38))
  #define local_44 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x40))
  #define local_3c (*(undefined1 *)(albw_frame + 0x44))
  #define local_3b (*(undefined1 *)(albw_frame + 0x45))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_34 (*(char * *)(albw_frame + 0x4c))
  if (*(int *)(param_1 + 8) == 0) {
    iVar16 = 1;
  }
  else {
    iVar16 = func_0010983C(*DAT_0038519c,*(int *)(param_1 + 8));
  }
  cVar2 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x8bc) + 9);
  if (cVar2 == '\0') {
LAB_00384cf8:
    *(undefined1 *)(param_1 + 0x3b) = 3;
  }
  else if (cVar2 == '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 4;
  }
  else if (cVar2 == '\x02') {
    *(undefined1 *)(param_1 + 0x3b) = 5;
  }
  else {
    if (cVar2 != '\x03') goto LAB_00384cf8;
    *(undefined1 *)(param_1 + 0x3b) = 6;
  }
  iVar3 = DAT_003851a8;
  iVar15 = *(int *)(*DAT_003851a0 + 0x10);
  local_64 = *(undefined **)(iVar15 + 0x10 + (uint)*(byte *)(param_1 + 0x3b) * 4);
  local_74 = DAT_003851a8;
  iStack_70 = DAT_003851a4;
  iStack_6c = DAT_003851a8;
  local_68 = DAT_003851a4;
  local_60[0] = 0;
  local_3c = 1;
  local_57 = 0;
  local_50 = 0;
  local_44 = 0;
  local_40 = 0;
  local_48 = 0;
  local_3b = 0xc4;
  local_54 = 0;
  local_4c = 0;
  local_58 = 1;
  local_60[1] = 1;
  piVar6 = func_002C2D00(&local_74);
  *(int **)(param_1 + 0x3c) = piVar6;
  func_003AB9D8(param_1,(int)piVar6,1);
  iVar10 = *(int *)(param_1 + 0x3c);
  uVar13 = *(undefined4 *)(iVar10 + 0x74);
  uVar14 = *(undefined4 *)(iVar10 + 0x78);
  uVar11 = *(undefined4 *)(iVar10 + 0x7c);
  *(undefined4 *)(param_1 + 0x144) = uVar11;
  *(undefined4 *)(param_1 + 0x13c) = uVar13;
  *(undefined4 *)(param_1 + 0x140) = uVar14;
  *(undefined4 *)(param_1 + 0x150) = uVar11;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x140);
  *(int *)(param_1 + 0xc4) = param_1 + 0x48;
  local_60[0] = *(uint *)(*(int *)(param_1 + 4) + 0x2cc);
  func_004EDEA0(param_1 + 0xb4,local_60);
  uVar13 = *DAT_003851ac;
  uVar11 = DAT_003851ac[1];
  *(int *)(param_1 + 0x1a0) = param_1;
  *(int *)(param_1 + 0xd0) = param_1 + 0x19c;
  *(undefined4 *)(param_1 + 0x1a8) = uVar11;
  *(undefined4 *)(param_1 + 0x1a4) = uVar13;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 8;
  *(undefined1 *)(param_1 + 0xd5) = 5;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  local_64 = &DAT_003851b0;
  local_68 = iVar3;
  uVar7 = func_00564A78(*(int *)(param_1 + 0x3c),&local_68);
  *(uint *)(param_1 + 0x130) = uVar7;
  bVar1 = *(byte *)(param_1 + 0x3b);
  uVar5 = (ushort)bVar1;
  if (bVar1 == 3) {
    *(undefined2 *)(param_1 + 0xe4) = 2;
    goto LAB_00384e5c;
  }
  if (bVar1 != 4) {
    if (bVar1 == 5) {
      *(undefined2 *)(param_1 + 0xe4) = 6;
      goto LAB_00384e5c;
    }
    if (bVar1 != 6) goto LAB_00384e5c;
    uVar5 = 8;
  }
  *(ushort *)(param_1 + 0xe4) = uVar5;
LAB_00384e5c:
  puVar4 = DAT_003851ac;
  uVar11 = DAT_003851ac[2];
  uVar13 = DAT_003851ac[3];
  *(int *)(param_1 + 0x1b0) = param_1;
  *(undefined4 *)(param_1 + 0x1b4) = uVar11;
  *(undefined4 *)(param_1 + 0x1b8) = uVar13;
  *(undefined1 *)(param_1 + 0x16) = 6;
  *(int *)(param_1 + 0x24) = param_1;
  iVar10 = func_0010BA78(0x60);
  *(int *)(param_1 + 0x28) = iVar10;
  *(uint *)(param_1 + 0x2c) = iVar10 + (uint)*(byte *)(param_1 + 0x16) * 8;
  iVar12 = 6;
  puVar8 = (undefined4 *)(iVar10 + -8);
  do {
    uVar11 = puVar4[0x29];
    iVar12 = iVar12 + -1;
    puVar8[2] = puVar4[0x28];
    puVar8[3] = uVar11;
    uVar11 = puVar4[0x29];
    puVar8[4] = puVar4[0x28];
    puVar8[5] = uVar11;
    puVar8 = puVar8 + 4;
  } while (iVar12 != 0);
  bVar1 = *(byte *)(param_1 + 0x16);
  uVar7 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar7 << 3);
  *(undefined4 **)(param_1 + 0x30) = puVar8;
  if (uVar7 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = puVar4[9];
      *puVar8 = puVar4[8];
      puVar8[1] = uVar11;
      puVar9 = puVar8;
    }
    for (iVar10 = (int)uVar7 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar11 = puVar4[9];
      puVar9[2] = puVar4[8];
      puVar9[3] = uVar11;
      uVar11 = puVar4[9];
      puVar9[4] = puVar4[8];
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar10 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 6;
    iVar10 = func_00100118((int)(puVar8 + 2),DAT_003851b4,0x24,6);
  }
  if (iVar10 != 0) {
    *(int *)(param_1 + 0x1c) = iVar10;
    *(undefined4 *)(param_1 + 0x18) = 6;
  }
  local_34 = s_cState_Wait_003851b8;
  local_38 = iVar3;
  func_0010BEC4(param_1 + 0x10,0,&local_38);
  puVar8 = *(undefined4 **)(param_1 + 0x28);
  uVar11 = puVar4[5];
  uVar13 = puVar4[6];
  uVar14 = puVar4[7];
  uVar17 = puVar4[8];
  uVar18 = puVar4[9];
  *puVar8 = puVar4[4];
  puVar8[1] = uVar11;
  puVar8 = *(undefined4 **)(param_1 + 0x2c);
  *puVar8 = uVar13;
  puVar8[1] = uVar14;
  puVar8 = *(undefined4 **)(param_1 + 0x30);
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  local_34 = s_cState_Attack_003851c4;
  local_38 = iVar3;
  func_0010BEC4(param_1 + 0x10,1,&local_38);
  iVar10 = *(int *)(param_1 + 0x28);
  uVar11 = puVar4[0xb];
  uVar13 = puVar4[0xc];
  uVar14 = puVar4[0xd];
  uVar17 = puVar4[0xe];
  uVar18 = puVar4[0xf];
  *(undefined4 *)(iVar10 + 8) = puVar4[10];
  *(undefined4 *)(iVar10 + 0xc) = uVar11;
  iVar10 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar10 + 8) = uVar13;
  *(undefined4 *)(iVar10 + 0xc) = uVar14;
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar10 + 8) = uVar17;
  *(undefined4 *)(iVar10 + 0xc) = uVar18;
  local_34 = s_cState_Brace_003851d4;
  local_38 = iVar3;
  func_0010BEC4(param_1 + 0x10,2,&local_38);
  iVar10 = *(int *)(param_1 + 0x28);
  uVar11 = puVar4[0x11];
  uVar13 = puVar4[0x12];
  uVar14 = puVar4[0x13];
  uVar17 = puVar4[0x14];
  uVar18 = puVar4[0x15];
  *(undefined4 *)(iVar10 + 0x10) = puVar4[0x10];
  *(undefined4 *)(iVar10 + 0x14) = uVar11;
  iVar10 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar10 + 0x10) = uVar13;
  *(undefined4 *)(iVar10 + 0x14) = uVar14;
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar10 + 0x10) = uVar17;
  *(undefined4 *)(iVar10 + 0x14) = uVar18;
  local_34 = s_cState_Roll_003851e4;
  local_38 = iVar3;
  func_0010BEC4(param_1 + 0x10,3,&local_38);
  iVar10 = *(int *)(param_1 + 0x28);
  uVar11 = puVar4[0x17];
  uVar13 = puVar4[0x18];
  uVar14 = puVar4[0x19];
  uVar17 = puVar4[0x1a];
  uVar18 = puVar4[0x1b];
  *(undefined4 *)(iVar10 + 0x18) = puVar4[0x16];
  *(undefined4 *)(iVar10 + 0x1c) = uVar11;
  iVar10 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar10 + 0x18) = uVar13;
  *(undefined4 *)(iVar10 + 0x1c) = uVar14;
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar10 + 0x18) = uVar17;
  *(undefined4 *)(iVar10 + 0x1c) = uVar18;
  local_34 = s_cState_SpRoll_003851f0;
  local_38 = iVar3;
  func_0010BEC4(param_1 + 0x10,4,&local_38);
  iVar10 = *(int *)(param_1 + 0x28);
  uVar11 = puVar4[0x1d];
  uVar13 = puVar4[0x1e];
  uVar14 = puVar4[0x1f];
  uVar17 = puVar4[0x20];
  uVar18 = puVar4[0x21];
  *(undefined4 *)(iVar10 + 0x20) = puVar4[0x1c];
  *(undefined4 *)(iVar10 + 0x24) = uVar11;
  iVar10 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar10 + 0x20) = uVar13;
  *(undefined4 *)(iVar10 + 0x24) = uVar14;
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar10 + 0x20) = uVar17;
  *(undefined4 *)(iVar10 + 0x24) = uVar18;
  local_34 = s_cState_Dash_00385200;
  local_38 = iVar3;
  func_0010BEC4(param_1 + 0x10,5,&local_38);
  iVar10 = *(int *)(param_1 + 0x28);
  uVar11 = puVar4[0x23];
  uVar13 = puVar4[0x24];
  uVar14 = puVar4[0x25];
  uVar17 = puVar4[0x26];
  uVar18 = puVar4[0x27];
  *(undefined4 *)(iVar10 + 0x28) = puVar4[0x22];
  *(undefined4 *)(iVar10 + 0x2c) = uVar11;
  iVar10 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar10 + 0x28) = uVar13;
  *(undefined4 *)(iVar10 + 0x2c) = uVar14;
  iVar10 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar10 + 0x28) = uVar17;
  *(undefined4 *)(iVar10 + 0x2c) = uVar18;
  func_00667C8C((undefined4 *)(param_1 + 0x10),0);
  iVar10 = DAT_003851a4;
  local_64 = *(undefined **)(iVar15 + 0x80);
  local_74 = iVar3;
  iStack_70 = DAT_003851a4;
  local_60[0] = 0;
  iStack_6c = iVar3;
  local_68 = DAT_003851a4;
  local_3c = 1;
  local_57 = 0;
  local_44 = 0;
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  local_54 = 0;
  local_4c = 0;
  local_3b = 0xc4;
  local_58 = 1;
  local_60[1] = 1;
  piVar6 = func_002C2D00(&local_74);
  *(int **)(param_1 + 0x40) = piVar6;
  func_003AB9D8(param_1,(int)piVar6,1);
  local_64 = *(undefined **)(iVar15 + 0x84);
  local_74 = iVar3;
  iStack_70 = iVar10;
  local_60[0] = 0;
  iStack_6c = iVar3;
  local_68 = iVar10;
  local_3c = 1;
  local_57 = 0;
  local_44 = 0;
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  local_54 = 0;
  local_4c = 0;
  local_3b = 0xc4;
  local_58 = 1;
  local_60[1] = 1;
  piVar6 = func_002C2D00(&local_74);
  *(int **)(param_1 + 0x44) = piVar6;
  func_003AB9D8(param_1,(int)piVar6,1);
  uVar11 = DAT_003852c4;
  *(undefined4 *)(*(int *)(param_1 + 0x40) + 0x134) = DAT_003852c4;
  *(undefined4 *)(*(int *)(param_1 + 0x44) + 0x134) = uVar11;
  *(undefined4 *)(*(int *)(param_1 + 0x3c) + 0x134) = uVar11;
  func_00386B28(param_1);
  if (iVar16 != 1) {
    func_0010983C(*DAT_0038519c,iVar16);
  }
  return;
}

