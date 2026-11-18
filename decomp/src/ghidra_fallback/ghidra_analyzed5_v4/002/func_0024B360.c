#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0024AD28(int param_1,undefined4 param_2,float fparam_0,float fparam_1);
extern int func_004CEAF0(int param_1);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern int func_0065F7E8(undefined4 *param_1,undefined1 param_2);
extern int DAT_0024b764;
extern undefined4 DAT_0024b768;
extern undefined4 DAT_0024b76c;
extern undefined4 *DAT_0024b770;
extern undefined4 DAT_0024b774;
extern int *DAT_0024b778;
extern int DAT_0024b77c;
extern undefined4 DAT_0024b780;
extern int *DAT_0024b784;
extern undefined4 *DAT_0024b788;
extern undefined *DAT_0024bb20;
extern int DAT_0024bb24;
extern int DAT_0024bb34;
extern char s_cState_Escape_0024bb44[];
extern char s_cState_Fly_0024bb38[];
extern char s_cState_OnNpcBridgeMan_0024bb54[];
extern char s_cState_OutScreen_0024bb6c[];
extern char s_cState_RailMove_0024bb80[];
extern char s_cState_Return_0024bb90[];
extern char s_cState_Wait_0024bb28[];

// USA 0024B360 <- EU 0024B360 (Ghidra, non-matching)
// GLOBAL DAT_0024b764 int
// GLOBAL DAT_0024b768 undefined4
// GLOBAL DAT_0024b76c undefined4
// GLOBAL DAT_0024b770 undefined4 *
// GLOBAL DAT_0024b774 undefined4
// GLOBAL DAT_0024b778 int *
// GLOBAL DAT_0024b77c int
// GLOBAL DAT_0024b780 undefined4
// GLOBAL DAT_0024b784 int *
// GLOBAL DAT_0024b788 undefined4 *
// GLOBAL DAT_0024bb20 undefined *
// GLOBAL DAT_0024bb24 int
// GLOBAL DAT_0024bb34 int
// GLOBAL s_cState_Escape_0024bb44 string
// GLOBAL s_cState_Fly_0024bb38 string
// GLOBAL s_cState_OnNpcBridgeMan_0024bb54 string
// GLOBAL s_cState_OutScreen_0024bb6c string
// GLOBAL s_cState_RailMove_0024bb80 string
// GLOBAL s_cState_Return_0024bb90 string
// GLOBAL s_cState_Wait_0024bb28 string

undefined4 * func_0024B360(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  piVar3 = func_00150E40(param_1,param_2);
  iVar4 = DAT_0024b764;
  piVar3[200] = DAT_0024b764 + 0x54;
  *piVar3 = iVar4;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  piVar3[0x105] = 0;
  iVar4 = func_0054D89C((int)piVar3,0);
  piVar3[0x106] = iVar4;
  puVar5 = func_0010A794(piVar3 + 0x107);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  uVar11 = DAT_0024b76c;
  uVar18 = DAT_0024b768;
  puVar5[0xc] = DAT_0024b768;
  puVar5[0xd] = uVar18;
  puVar5[0xe] = uVar18;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = uVar11;
  uVar18 = DAT_0024b774;
  puVar8 = DAT_0024b770;
  puVar16 = puVar5 + -0x107;
  uVar14 = DAT_0024b770[1];
  uVar15 = DAT_0024b770[2];
  uVar22 = CONCAT44(DAT_0024b774,uVar11);
  puVar5[0x12] = *DAT_0024b770;
  puVar5[0x13] = uVar14;
  puVar5[0x14] = uVar15;
  puVar5[0x15] = uVar18;
  puVar5[0x16] = 0xffffffff;
  puVar5[0x17] = uVar18;
  uVar11 = *puVar8;
  uVar14 = puVar8[1];
  iVar4 = 0;
  puVar5[0x1a] = puVar8[2];
  puVar5[0x18] = uVar11;
  puVar5[0x19] = uVar14;
  puVar5[0x1b] = uVar18;
  if (*(char *)((int)param_2 + 0x59) == '\0') {
LAB_0024b558:
    uVar18 = func_0014E428((int)puVar16,1,0,0,1,0,0);
    puVar5[-4] = uVar18;
    uVar18 = func_0014E904((int)puVar16,6,1);
    puVar5[-3] = uVar18;
    iVar7 = DAT_0024b77c;
    uVar17 = 0;
    iVar13 = *(int *)(puVar5[-0x53] + 0x1c8);
    do {
      func_00169688((uint *)puVar5[-3],uVar17,(int *)(iVar7 + uVar17 * 8),iVar13);
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < 6);
    func_0016A02C(puVar5[-3],-1,(int *)0xffffffff,0);
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar6 = (uint *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar6 = func_0016A2FC(puVar8,1,DAT_0024b780,1);
    }
    puVar5[-2] = puVar6;
    func_00169608(puVar6,0,DAT_0024b784,*(int *)(puVar5[-0x53] + 0x1c8));
    func_0016A02C(puVar5[-2],-1,(int *)0xffffffff,0);
    iVar7 = puVar5[-4];
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar7 + 0x80),puVar5[-0xd],(float *)(puVar5 + -0x13));
    iVar7 = puVar5[-4];
    *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar7 + 0x74) = puVar5[0xc];
    *(undefined4 *)(iVar7 + 0x78) = puVar5[0xd];
    *(undefined4 *)(iVar7 + 0x7c) = puVar5[0xe];
    func_004CEAF0(puVar5[-4]);
    func_001512B4(puVar5[-1],(float *)(puVar5 + -0x13));
    fVar21 = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
    fVar20 = (float)VectorSignedToFloat((int)*(short *)((int)puVar5 + -0x3ee),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((fVar20 < fVar21) || (0x40000000 < (int)ALBW_AS_U32(fVar20))) {
      fVar20 = fVar21;
    }
    func_0024AD28((int)puVar16,0,fVar20,fVar21);
    uVar18 = (undefined4)uVar22;
    *(char *)(puVar5 + 9) = (char)*(ushort *)(puVar5 + -0xfb);
    if (4 < (*(ushort *)(puVar5 + -0xfb) & 0xff)) {
      *(undefined1 *)(puVar5 + 9) = 0;
    }
    puVar5[5] = puVar16;
    *(undefined1 *)((int)puVar5 + 6) = 7;
    iVar7 = func_0010BA78(0x70);
    puVar8 = DAT_0024b788;
    puVar5[6] = iVar7;
    puVar5[7] = iVar7 + (uint)*(byte *)((int)puVar5 + 6) * 8;
    iVar13 = 7;
    puVar9 = (undefined4 *)(iVar7 + -8);
    do {
      uVar11 = puVar8[0x1f];
      iVar13 = iVar13 + -1;
      puVar9[2] = puVar8[0x1e];
      puVar9[3] = uVar11;
      uVar11 = puVar8[0x1f];
      puVar9[4] = puVar8[0x1e];
      puVar9[5] = uVar11;
      puVar9 = puVar9 + 4;
    } while (iVar13 != 0);
    bVar1 = *(byte *)((int)puVar5 + 6);
    uVar17 = (uint)bVar1;
    puVar9 = (undefined4 *)func_0010BA78(uVar17 << 3);
    puVar5[8] = puVar9;
    if (uVar17 != 0) {
      puVar10 = puVar9 + -2;
      if ((bVar1 & 1) != 0) {
        uVar11 = puVar8[5];
        *puVar9 = puVar8[4];
        puVar9[1] = uVar11;
        puVar10 = puVar9;
      }
      for (iVar7 = (int)uVar17 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar11 = puVar8[5];
        puVar10[2] = puVar8[4];
        puVar10[3] = uVar11;
        uVar11 = puVar8[5];
        puVar10[4] = puVar8[4];
        puVar10[5] = uVar11;
        puVar10 = puVar10 + 4;
      }
    }
    puVar9 = (undefined4 *)func_0010CEE0(0x104,(int *)0x0,4);
    iVar7 = 0;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = 0x24;
      puVar9[1] = 7;
      iVar7 = func_00100118((int)(puVar9 + 2),DAT_0024bb20,0x24,7);
    }
    if (iVar7 != 0) {
      puVar5[3] = iVar7;
      puVar5[2] = 7;
    }
    iVar7 = DAT_0024bb24;
    puVar5[-0x32] = puVar5;
    iVar13 = DAT_0024bb34;
    *(undefined2 *)(iVar7 + (int)puVar16) = 7;
    local_3c = s_cState_Wait_0024bb28;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,0,&local_40);
    puVar9 = (undefined4 *)puVar5[6];
    uVar15 = puVar8[2];
    uVar11 = puVar8[1];
    uVar24 = puVar8[4];
    uVar14 = puVar8[3];
    uVar23 = puVar8[5];
    *puVar9 = *puVar8;
    puVar9[1] = uVar11;
    puVar9 = (undefined4 *)puVar5[7];
    *puVar9 = uVar15;
    puVar9[1] = uVar14;
    puVar9 = (undefined4 *)puVar5[8];
    *puVar9 = uVar24;
    puVar9[1] = uVar23;
    local_3c = s_cState_Fly_0024bb38;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,1,&local_40);
    iVar7 = puVar5[6];
    uVar11 = puVar8[7];
    uVar14 = puVar8[8];
    uVar15 = puVar8[9];
    *(undefined4 *)(iVar7 + 8) = puVar8[6];
    *(undefined4 *)(iVar7 + 0xc) = uVar11;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 8) = uVar14;
    *(undefined4 *)(iVar7 + 0xc) = uVar15;
    iVar7 = puVar5[8];
    *(undefined4 *)(iVar7 + 8) = uVar24;
    *(undefined4 *)(iVar7 + 0xc) = uVar23;
    local_3c = s_cState_Escape_0024bb44;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,2,&local_40);
    iVar7 = puVar5[6];
    uVar14 = puVar8[0xb];
    uVar11 = puVar8[0xc];
    uVar15 = puVar8[0xd];
    *(undefined4 *)(iVar7 + 0x10) = puVar8[10];
    *(undefined4 *)(iVar7 + 0x14) = uVar14;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x10) = uVar11;
    *(undefined4 *)(iVar7 + 0x14) = uVar15;
    iVar7 = puVar5[8];
    *(undefined4 *)(iVar7 + 0x10) = uVar24;
    *(undefined4 *)(iVar7 + 0x14) = uVar23;
    local_3c = s_cState_OnNpcBridgeMan_0024bb54;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,3,&local_40);
    iVar7 = puVar5[6];
    uVar11 = puVar8[0xf];
    uVar14 = puVar8[0x10];
    uVar15 = puVar8[0x11];
    *(undefined4 *)(iVar7 + 0x18) = puVar8[0xe];
    *(undefined4 *)(iVar7 + 0x1c) = uVar11;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x18) = uVar14;
    *(undefined4 *)(iVar7 + 0x1c) = uVar15;
    iVar7 = puVar5[8];
    *(undefined4 *)(iVar7 + 0x18) = uVar24;
    *(undefined4 *)(iVar7 + 0x1c) = uVar23;
    local_3c = s_cState_OutScreen_0024bb6c;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,4,&local_40);
    iVar7 = puVar5[6];
    uVar11 = puVar8[0x13];
    uVar14 = puVar8[0x14];
    uVar15 = puVar8[0x15];
    *(undefined4 *)(iVar7 + 0x20) = puVar8[0x12];
    *(undefined4 *)(iVar7 + 0x24) = uVar11;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x20) = uVar14;
    *(undefined4 *)(iVar7 + 0x24) = uVar15;
    iVar7 = puVar5[8];
    *(undefined4 *)(iVar7 + 0x20) = uVar24;
    *(undefined4 *)(iVar7 + 0x24) = uVar23;
    local_3c = s_cState_RailMove_0024bb80;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,5,&local_40);
    iVar7 = puVar5[6];
    uVar11 = puVar8[0x17];
    uVar14 = puVar8[0x18];
    uVar15 = puVar8[0x19];
    *(undefined4 *)(iVar7 + 0x28) = puVar8[0x16];
    *(undefined4 *)(iVar7 + 0x2c) = uVar11;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x28) = uVar14;
    *(undefined4 *)(iVar7 + 0x2c) = uVar15;
    iVar7 = puVar5[8];
    *(undefined4 *)(iVar7 + 0x28) = uVar24;
    *(undefined4 *)(iVar7 + 0x2c) = uVar23;
    local_3c = s_cState_Return_0024bb90;
    local_40 = iVar13;
    func_0010BEC4((int)puVar5,6,&local_40);
    iVar7 = puVar5[6];
    uVar11 = puVar8[0x1b];
    uVar14 = puVar8[0x1c];
    uVar15 = puVar8[0x1d];
    piVar3 = (int *)(iVar7 + 0x30);
    *piVar3 = puVar8[0x1a];
    *(undefined4 *)(iVar7 + 0x34) = uVar11;
    iVar7 = puVar5[7];
    *(undefined4 *)(iVar7 + 0x30) = uVar14;
    *(undefined4 *)(iVar7 + 0x34) = uVar15;
    iVar7 = puVar5[8];
    *(undefined4 *)(iVar7 + 0x30) = uVar24;
    *(undefined4 *)(iVar7 + 0x34) = uVar23;
    if (iVar4 == 0) {
      cVar2 = *(char *)(puVar5 + 9);
      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
        func_0065F7E8(puVar5,0);
        uVar11 = extraout_r1_02;
      }
      else if (cVar2 == '\x02' || cVar2 == '\x03') {
        func_0065F7E8(puVar5,1);
        uVar11 = extraout_r1_03;
      }
      else {
        func_0065F7E8(puVar5,3);
        uVar11 = extraout_r1_00;
      }
    }
    else {
      func_0065F7E8(puVar5,5);
      uVar11 = extraout_r1;
    }
    if ((int *)puVar5[-3] != (int *)0x0) {
      func_00169A80((int *)puVar5[-3],uVar11,uVar14,piVar3);
      uVar14 = 0;
      func_00168E9C((int *)puVar5[-3],puVar5[-4],(int *)0x0);
      uVar11 = extraout_r1_01;
    }
    if ((int *)puVar5[-2] != (int *)0x0) {
      func_00169A80((int *)puVar5[-2],uVar11,uVar14,piVar3);
      func_00168E9C((int *)puVar5[-2],puVar5[-4],(int *)0x0);
    }
    puVar5[-0x4f] = puVar5[-0x4f] | 2;
    bVar19 = *(short *)((int)puVar5 + -0x3e6) != 0;
    iVar4 = 0;
    if (bVar19) {
      iVar4 = puVar5[-4];
    }
    if (bVar19) {
      *(undefined4 *)(iVar4 + 0x134) = uVar18;
    }
    return puVar16;
  }
  uVar17 = param_2[0xa7];
  puVar6 = param_2 + 0xa7;
  if (-1 < (int)uVar17) {
    puVar6 = (uint *)param_2[0xa8];
  }
  if (-1 < (int)uVar17 && -1 < (int)puVar6) {
    iVar4 = *DAT_0024b778;
    iVar7 = func_00581B9C(iVar4);
    if (iVar7 == 1) {
      puVar6 = (uint *)func_00582250(iVar4);
      uVar12 = *puVar6;
      if (uVar17 < uVar12) {
        piVar3 = (int *)puVar6[2];
        iVar4 = piVar3[uVar17];
        bVar19 = iVar4 != 0;
        if (bVar19) {
          piVar3 = *(int **)(iVar4 + 0x28);
        }
        if (bVar19 && piVar3 != (int *)0x0) {
          uVar12 = *(uint *)(iVar4 + 0x20);
        }
        if (((bVar19 && piVar3 != (int *)0x0) && uVar12 != 0) && (iVar7 = *piVar3, iVar7 != 0)) {
          puVar5[0x12] = *(undefined4 *)(iVar7 + 0x18);
          puVar5[0x13] = *(undefined4 *)(iVar7 + 0x1c);
          puVar5[0x14] = *(undefined4 *)(iVar7 + 0x20);
          if ((*(int *)(iVar4 + 0x28) != 0) &&
             ((uVar17 = *(uint *)(iVar4 + 0x20) - 1, uVar17 < *(uint *)(iVar4 + 0x20) &&
              (iVar13 = *(int *)(*(int *)(iVar4 + 0x28) + uVar17 * 4), iVar13 != 0)))) {
            uVar18 = *(undefined4 *)(iVar7 + 0x1c);
            fVar21 = *(float *)(iVar7 + 0x20);
            puVar5[-0x13] = *(undefined4 *)(iVar7 + 0x18);
            puVar5[-0x12] = uVar18;
            puVar5[-0x11] = ALBW_AS_U32(fVar21);
            fVar20 = ALBW_AS_F32(puVar5[-0x13]) - *(float *)(iVar13 + 0x18);
            fVar21 = fVar21 - *(float *)(iVar13 + 0x20);
            puVar5[0x15] = SQRT(fVar20 * fVar20 + fVar21 * fVar21);
            iVar7 = func_004D80EC((float *)(puVar5 + -0x13),(float *)(iVar13 + 0x18),0);
            puVar5[-0xd] = iVar7;
            goto LAB_0024b558;
          }
        }
      }
    }
  }
  *(undefined1 *)((int)puVar5 + -0x145) = 1;
  return puVar16;
}

