#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0015116C(int param_1);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0065743C(undefined4 *param_1,undefined1 param_2);
extern float fRam0013e9b4;
extern int iRam0013e69c;
extern int iRam0013e6ac;
extern undefined4 uRam0013e9b8;
extern int *piRam0013e9b0;
extern undefined4 *puRam0013e698;
extern int DAT_0013e678;
extern undefined4 DAT_0013e67c;
extern undefined4 *DAT_0013e680;
extern undefined4 DAT_0013e684;
extern undefined4 *DAT_0013e688;
extern undefined4 DAT_0013e68c;
extern undefined4 DAT_0013e690;
extern undefined4 DAT_0013e694;
extern char s_cState_Carry_0013e990[];
extern char s_cState_Hide_0013e978[];
extern char s_cState_Idle_0013e984[];
extern char s_cState_Lifted_0013e6b0[];
extern char s_cState_Revival_0013e9a0[];
extern char s_cState_Thrown_0013e6c0[];
extern char s_cState_ToEyeStand_0013e964[];
extern char s_cState_Wait_0013e6a0[];

// USA 0013E298 <- EU 0013E298 (Ghidra, non-matching)
// GLOBAL DAT_0013e678 int
// GLOBAL DAT_0013e67c undefined4
// GLOBAL DAT_0013e680 undefined4 *
// GLOBAL DAT_0013e684 undefined4
// GLOBAL DAT_0013e688 undefined4 *
// GLOBAL DAT_0013e68c undefined4
// GLOBAL DAT_0013e690 undefined4
// GLOBAL DAT_0013e694 undefined4
// GLOBAL UNK_0013e698 undefined *
// GLOBAL UNK_0013e69c int
// GLOBAL UNK_0013e6ac int
// GLOBAL UNK_0013e9b0 int *
// GLOBAL UNK_0013e9b4 float
// GLOBAL UNK_0013e9b8 undefined4
// GLOBAL s_cState_Carry_0013e990 string
// GLOBAL s_cState_Hide_0013e978 string
// GLOBAL s_cState_Idle_0013e984 string
// GLOBAL s_cState_Lifted_0013e6b0 string
// GLOBAL s_cState_Revival_0013e9a0 string
// GLOBAL s_cState_Thrown_0013e6c0 string
// GLOBAL s_cState_ToEyeStand_0013e964 string
// GLOBAL s_cState_Wait_0013e6a0 string

int func_0013E298(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define uStack_3c (*(uint *)(albw_frame + 0x4))
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xc))
  piVar3 = (int *)func_001E4B08(param_1,param_2,1);
  iVar5 = DAT_0013e678;
  *piVar3 = DAT_0013e678;
  piVar3[200] = iVar5 + 0x78;
  piVar3[0x13d] = 0;
  puVar4 = func_0010A794(piVar3 + 0x13e);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  uVar7 = DAT_0013e67c;
  puVar4[10] = 0;
  puVar4[0xb] = uVar7;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = uVar7;
  puVar4[0x10] = 0x14;
  puVar4[0xf] = 0;
  puVar4[0x11] = uVar7;
  puVar4[0x12] = 0;
  puVar4[0x13] = 0;
  puVar4[0x14] = uVar7;
  iVar5 = func_0054D89C((int)(puVar4 + -0x13e),0);
  puVar4[0x15] = iVar5;
  puVar4[0x16] = 0;
  puVar2 = DAT_0013e680;
  uVar12 = param_2[2];
  uVar15 = param_2[3];
  puVar4[0x17] = param_2[1];
  puVar4[0x18] = uVar12;
  puVar4[0x19] = uVar15;
  uVar10 = DAT_0013e684;
  uVar12 = param_2[5];
  uVar15 = param_2[6];
  puVar4[0x1a] = param_2[4];
  puVar4[0x1b] = uVar12;
  puVar4[0x1c] = uVar15;
  uVar13 = puVar2[1];
  uVar16 = puVar2[2];
  puVar4[0x1d] = *puVar2;
  puVar4[0x1e] = uVar13;
  puVar4[0x1f] = uVar16;
  uVar13 = *puVar2;
  uVar16 = puVar2[1];
  puVar4[0x22] = puVar2[2];
  puVar4[0x20] = uVar13;
  puVar4[0x21] = uVar16;
  puVar4[0x27] = param_2[2];
  puVar4[0x28] = uVar10;
  puVar4[0x29] = uVar7;
  puVar4[0x2a] = 0;
  iVar5 = func_004EE484(puVar4 + 0x2b);
  uVar7 = DAT_0013e68c;
  puVar2 = DAT_0013e688;
  iVar6 = iVar5 + -0x5a4;
  uVar10 = *DAT_0013e688;
  uVar13 = DAT_0013e688[1];
  *(int *)(iVar5 + 0x68) = iVar6;
  *(undefined4 *)(iVar5 + 0x6c) = uVar10;
  *(undefined4 *)(iVar5 + 0x70) = uVar13;
  *(undefined4 *)(iVar5 + 100) = uVar7;
  uVar10 = puVar2[2];
  uVar13 = puVar2[3];
  *(undefined4 *)(iVar5 + 0x74) = uVar7;
  *(int *)(iVar5 + 0x78) = iVar6;
  *(undefined4 *)(iVar5 + 0x7c) = uVar10;
  *(undefined4 *)(iVar5 + 0x80) = uVar13;
  *(undefined4 *)(iVar5 + 0x84) = 0;
  *(undefined1 *)(iVar5 + 0x88) = 0;
  *(undefined1 *)(iVar5 + 0x89) = 0;
  *(undefined1 *)(iVar5 + 0x8a) = 0;
  *(int *)(iVar5 + -0x1b8) = iVar5 + 100;
  uVar7 = func_0014E428(iVar6,0,0,0,1,0,0);
  *(undefined4 *)(iVar5 + -0xb0) = uVar7;
  *(undefined4 *)(iVar5 + -300) = uVar7;
  *(undefined4 *)(iVar5 + -0xc0) = 0x11;
  uVar7 = DAT_0013e694;
  *(undefined4 *)(iVar5 + -0xbc) = DAT_0013e690;
  *(undefined4 *)(iVar5 + -0xb8) = uVar7;
  func_00151148(*(int *)(iVar5 + -0x58),1);
  func_003249E0(iVar6,0);
  iVar8 = func_0054D964(iVar6,1);
  *(int *)(iVar5 + -4) = iVar8;
  func_00324964(iVar6);
  *(undefined1 *)(iVar5 + -0xa6) = 9;
  puVar14 = (undefined4 *)(iVar5 + -0xac);
  *(int *)(iVar5 + -0x98) = iVar6;
  iVar8 = func_0010BA78(0x90);
  *(int *)(iVar5 + -0x94) = iVar8;
  *(uint *)(iVar5 + -0x90) = iVar8 + (uint)*(byte *)(iVar5 + -0xa6) * 8;
  iVar11 = 9;
  puVar4 = (undefined4 *)(iVar8 + -8);
  do {
    uVar7 = puVar2[0x2d];
    iVar11 = iVar11 + -1;
    puVar4[2] = puVar2[0x2c];
    puVar4[3] = uVar7;
    uVar7 = puVar2[0x2d];
    puVar4[4] = puVar2[0x2c];
    puVar4[5] = uVar7;
    puVar4 = puVar4 + 4;
  } while (iVar11 != 0);
  bVar1 = *(byte *)(iVar5 + -0xa6);
  uVar12 = (uint)bVar1;
  puVar4 = (undefined4 *)func_0010BA78(uVar12 << 3);
  *(undefined4 **)(iVar5 + -0x8c) = puVar4;
  if (uVar12 != 0) {
    puVar9 = puVar4 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar2[9];
      *puVar4 = puVar2[8];
      puVar4[1] = uVar7;
      puVar9 = puVar4;
    }
    for (iVar8 = (int)uVar12 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar7 = puVar2[9];
      puVar9[2] = puVar2[8];
      puVar9[3] = uVar7;
      uVar7 = puVar2[9];
      puVar9[4] = puVar2[8];
      puVar9[5] = uVar7;
      puVar9 = puVar9 + 4;
    }
  }
  puVar4 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar8 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0x24;
    puVar4[1] = 9;
    iVar8 = func_00100118((int)(puVar4 + 2),puRam0013e698,0x24,9);
  }
  if (iVar8 != 0) {
    *(int *)(iVar5 + -0xa0) = iVar8;
    *(undefined4 *)(iVar5 + -0xa4) = 9;
  }
  iVar8 = iRam0013e69c;
  *(undefined4 **)(iVar5 + -0x250) = puVar14;
  iVar11 = iRam0013e6ac;
  *(undefined2 *)(iVar8 + iVar6) = 9;
  pcStack_34 = s_cState_Wait_0013e6a0;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,0,&iStack_38);
  puVar4 = *(undefined4 **)(iVar5 + -0x94);
  uVar7 = puVar2[5];
  uVar10 = puVar2[6];
  uVar13 = puVar2[7];
  uVar19 = *(undefined8 *)(puVar2 + 8);
  *puVar4 = puVar2[4];
  puVar4[1] = uVar7;
  puVar4 = *(undefined4 **)(iVar5 + -0x90);
  *puVar4 = uVar10;
  puVar4[1] = uVar13;
  puVar4 = *(undefined4 **)(iVar5 + -0x8c);
  *puVar4 = (int)uVar19;
  puVar4[1] = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_34 = s_cState_Lifted_0013e6b0;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,1,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar7 = puVar2[0xb];
  uVar10 = puVar2[0xc];
  uVar13 = puVar2[0xd];
  *(undefined4 *)(iVar8 + 8) = puVar2[10];
  *(undefined4 *)(iVar8 + 0xc) = uVar7;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 8) = uVar10;
  *(undefined4 *)(iVar8 + 0xc) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(int *)(iVar8 + 8) = (int)uVar19;
  *(int *)(iVar8 + 0xc) = (int)((ulonglong)uVar19 >> 0x20);
  pcStack_34 = s_cState_Thrown_0013e6c0;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,2,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar7 = puVar2[0xf];
  uVar10 = puVar2[0x10];
  uVar13 = puVar2[0x11];
  uVar16 = puVar2[0x12];
  uVar18 = puVar2[0x13];
  *(undefined4 *)(iVar8 + 0x10) = puVar2[0xe];
  *(undefined4 *)(iVar8 + 0x14) = uVar7;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 0x10) = uVar10;
  *(undefined4 *)(iVar8 + 0x14) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(undefined4 *)(iVar8 + 0x10) = uVar16;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  pcStack_34 = s_cState_ToEyeStand_0013e964;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,3,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar7 = puVar2[0x15];
  uVar10 = puVar2[0x16];
  uVar13 = puVar2[0x17];
  uVar16 = puVar2[0x18];
  uVar18 = puVar2[0x19];
  *(undefined4 *)(iVar8 + 0x18) = puVar2[0x14];
  *(undefined4 *)(iVar8 + 0x1c) = uVar7;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 0x18) = uVar10;
  *(undefined4 *)(iVar8 + 0x1c) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(undefined4 *)(iVar8 + 0x18) = uVar16;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  pcStack_34 = s_cState_Hide_0013e978;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,4,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar10 = puVar2[0x1b];
  uVar7 = puVar2[0x1c];
  uVar13 = puVar2[0x1d];
  uVar18 = puVar2[8];
  uVar16 = puVar2[9];
  *(undefined4 *)(iVar8 + 0x20) = puVar2[0x1a];
  *(undefined4 *)(iVar8 + 0x24) = uVar10;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 0x20) = uVar7;
  *(undefined4 *)(iVar8 + 0x24) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(undefined4 *)(iVar8 + 0x20) = uVar18;
  *(undefined4 *)(iVar8 + 0x24) = uVar16;
  pcStack_34 = s_cState_Idle_0013e984;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,5,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar7 = puVar2[0x1f];
  uVar10 = puVar2[0x20];
  uVar13 = puVar2[0x21];
  *(undefined4 *)(iVar8 + 0x28) = puVar2[0x1e];
  *(undefined4 *)(iVar8 + 0x2c) = uVar7;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 0x28) = uVar10;
  *(undefined4 *)(iVar8 + 0x2c) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(undefined4 *)(iVar8 + 0x28) = uVar18;
  *(undefined4 *)(iVar8 + 0x2c) = uVar16;
  pcStack_34 = s_cState_Carry_0013e990;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,6,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar7 = puVar2[0x23];
  uVar10 = puVar2[0x24];
  uVar13 = puVar2[0x25];
  *(undefined4 *)(iVar8 + 0x30) = puVar2[0x22];
  *(undefined4 *)(iVar8 + 0x34) = uVar7;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 0x30) = uVar10;
  *(undefined4 *)(iVar8 + 0x34) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(undefined4 *)(iVar8 + 0x30) = uVar18;
  *(undefined4 *)(iVar8 + 0x34) = uVar16;
  pcStack_34 = s_cState_Revival_0013e9a0;
  iStack_38 = iVar11;
  func_0010BEC4((int)puVar14,7,&iStack_38);
  iVar8 = *(int *)(iVar5 + -0x94);
  uVar7 = puVar2[0x27];
  uVar10 = puVar2[0x28];
  uVar13 = puVar2[0x29];
  uVar16 = puVar2[0x2a];
  uVar18 = puVar2[0x2b];
  *(undefined4 *)(iVar8 + 0x38) = puVar2[0x26];
  *(undefined4 *)(iVar8 + 0x3c) = uVar7;
  iVar8 = *(int *)(iVar5 + -0x90);
  *(undefined4 *)(iVar8 + 0x38) = uVar10;
  *(undefined4 *)(iVar8 + 0x3c) = uVar13;
  iVar8 = *(int *)(iVar5 + -0x8c);
  *(undefined4 *)(iVar8 + 0x38) = uVar16;
  *(undefined4 *)(iVar8 + 0x3c) = uVar18;
  if (param_2[0x13] == 0) {
    func_0065743C(puVar14,0);
  }
  else {
    iVar8 = func_0052FBA0(*piRam0013e9b0 + 0x3dbbc,param_2[0x13]);
    fVar17 = fRam0013e9b4;
    if (iVar8 != 0) {
      *(undefined4 *)(iVar5 + -0x50) = *(undefined4 *)(iVar8 + 0x3d0);
      *(undefined4 *)(iVar5 + -0x4c) = *(undefined4 *)(iVar8 + 0x3d4);
      *(undefined4 *)(iVar5 + -0x48) = *(undefined4 *)(iVar8 + 0x3d8);
      *(float *)(iVar5 + -0x4c) = *(float *)(iVar5 + -0x4c) + fVar17;
      *(undefined4 *)(iVar5 + -0x54) = *(undefined4 *)(iVar8 + 0x2cc);
      *(undefined4 *)(iVar5 + -0x1d4) = *(undefined4 *)(iVar5 + -0x50);
      *(undefined4 *)(iVar5 + -0x1d0) = *(undefined4 *)(iVar5 + -0x4c);
      *(undefined4 *)(iVar5 + -0x1cc) = *(undefined4 *)(iVar5 + -0x48);
      func_0065743C(puVar14,5);
    }
  }
  func_0015116C(iVar6);
  iVar8 = func_0054D964(iVar6,1);
  fVar17 = func_0054DE3C(iVar6,1,1);
  *(float *)(iVar5 + -0xc) = fVar17;
  uStack_3c = *(uint *)(iVar5 + -0x2d8);
  func_0014EB8C(iVar5,iVar8,*(undefined2 **)(iVar5 + -0x204),&uStack_3c,
                *(undefined2 *)(iVar5 + -0x550),0,(short)uRam0013e9b8);
  *(undefined1 *)(iVar5 + 0x61) = 0;
  return iVar6;
}

