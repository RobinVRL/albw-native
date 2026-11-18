#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_0041E840(int param_1,byte *param_2);
extern int func_0041F3C0(undefined4 param_1,uint *param_2,uint *param_3,uint param_4,int param_5);
extern int func_0041F83C(int param_1,undefined4 *param_2,int param_3,uint param_4);
extern int func_00420CB8(float *param_1,undefined4 param_2);
extern int func_00420DE8(float *param_1,int param_2,undefined4 param_3);
extern byte *DAT_0041fd30;
extern uint DAT_0041fd34;
extern int DAT_0041fd38;
extern int DAT_0041fd3c;
extern uint DAT_0041fd40;
extern uint DAT_0041fd44;
extern uint DAT_0041fd48;
extern uint *DAT_0041fd4c;
extern int *DAT_0041fd50;
extern uint DAT_0041ff74;
extern int DAT_0041ff78;
extern uint DAT_0041ff7c;

// USA 0041F970 <- EU 0041F950 (Ghidra, non-matching)
// GLOBAL DAT_0041fd30 byte *
// GLOBAL DAT_0041fd34 uint
// GLOBAL DAT_0041fd38 int
// GLOBAL DAT_0041fd3c int
// GLOBAL DAT_0041fd40 uint
// GLOBAL DAT_0041fd44 uint
// GLOBAL DAT_0041fd48 uint
// GLOBAL DAT_0041fd4c uint *
// GLOBAL DAT_0041fd50 int *
// GLOBAL DAT_0041ff74 uint
// GLOBAL DAT_0041ff78 int
// GLOBAL DAT_0041ff7c uint

/* WARNING: Variable defined which should be unmapped: objStack_60 */

uint * func_0041F970(int *param_1,uint *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 extraout_r1;
  int *piVar6;
  undefined4 extraout_r1_00;
  uint uVar7;
  float *pfVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint in_fpscr;
  int iVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  int iVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define iStack_5c (*(int *)(albw_frame + 0x4))
  #define iStack_58 (*(int *)(albw_frame + 0x8))
  #define iStack_54 (*(int *)(albw_frame + 0xc))
  #define iStack_50 (*(int *)(albw_frame + 0x10))
  #define iStack_4c (*(int *)(albw_frame + 0x14))
  #define iStack_48 (*(int *)(albw_frame + 0x18))
  #define iStack_44 (*(int *)(albw_frame + 0x1c))
  #define local_40 (*(int *)(albw_frame + 0x20))
  #define iStack_3c (*(int *)(albw_frame + 0x24))
  #define iStack_38 (*(int *)(albw_frame + 0x28))
  #define iStack_34 (*(int *)(albw_frame + 0x2c))
  iVar11 = *param_3;
  puVar5 = param_2;
  if (iVar11 != 0) {
    puVar5 = (uint *)(uint)*(ushort *)(iVar11 + 4);
  }
  if (iVar11 != 0 && puVar5 != (uint *)0x0) {
    func_00110D44(param_2,DAT_0041fd30,0x28);
    puVar5 = param_2 + 0xc;
    if ((param_3[0x15] & 1U) == 0) {
      uVar7 = 0x1100;
    }
    else {
      uVar7 = 0x2200;
    }
    param_2[0xb] = DAT_0041fd34;
    param_2[10] = uVar7;
    piVar1 = (int *)param_3[1];
    if (piVar1 != (int *)0x0) {
      iVar10 = piVar1[1];
      iVar12 = piVar1[2];
      param_1[0xe] = *piVar1;
      iVar13 = piVar1[3];
      param_1[0xf] = iVar10;
      iVar10 = piVar1[4];
      param_1[0x10] = iVar12;
      iVar12 = piVar1[5];
      param_1[0x11] = iVar13;
      iVar13 = piVar1[6];
      param_1[0x12] = iVar10;
      iVar10 = piVar1[7];
      param_1[0x13] = iVar12;
      iVar12 = piVar1[8];
      param_1[0x14] = iVar13;
      iVar14 = piVar1[9];
      param_1[0x15] = iVar10;
      iVar13 = piVar1[10];
      param_1[0x16] = iVar12;
      iVar12 = piVar1[0xb];
      param_1[0x17] = iVar14;
      iVar10 = piVar1[0xc];
      param_1[0x18] = iVar13;
      iVar13 = piVar1[0xd];
      param_1[0x19] = iVar12;
      iVar12 = piVar1[0xf];
      param_1[0x1c] = piVar1[0xe];
      param_1[0x1d] = iVar12;
      param_1[0x1a] = iVar10;
      param_1[0x1b] = iVar13;
      objStack_60[0] = 5;
      puVar5 = func_0041F3C0(param_1,puVar5,(uint *)(param_1 + 0xe),0,5);
    }
    iVar12 = DAT_0041fd3c;
    iVar10 = DAT_0041fd38;
    pfVar8 = (float *)param_3[3];
    if (pfVar8 == (float *)0x0) {
      piVar1 = (int *)param_3[2];
      if (piVar1 == (int *)0x0) {
        if (((*DAT_0041fd4c & 1) == 0) &&
           (iVar13 = func_00100174((int *)DAT_0041fd4c), piVar1 = DAT_0041fd50, iVar13 != 0)) {
          piVar6 = DAT_0041fd50 + 4;
          *DAT_0041fd50 = iVar10;
          piVar1[1] = iVar12;
          piVar1[2] = iVar12;
          piVar1[3] = iVar12;
          *piVar6 = iVar12;
          piVar1[5] = iVar10;
          piVar1[6] = iVar12;
          piVar1[7] = iVar12;
          piVar1[8] = iVar12;
          piVar1[9] = iVar12;
          piVar1[10] = iVar10;
          piVar1[0xb] = iVar12;
        }
        iVar13 = DAT_0041fd50[1];
        iVar14 = DAT_0041fd50[2];
        iVar15 = DAT_0041fd50[3];
        iVar18 = DAT_0041fd50[4];
        iVar21 = DAT_0041fd50[5];
        iVar23 = DAT_0041fd50[6];
        iVar25 = DAT_0041fd50[7];
        iVar27 = DAT_0041fd50[8];
        iVar28 = DAT_0041fd50[9];
        iVar29 = DAT_0041fd50[10];
        iVar30 = DAT_0041fd50[0xb];
        param_1[0x7e] = *DAT_0041fd50;
        param_1[0x7f] = iVar13;
        param_1[0x80] = iVar14;
        param_1[0x81] = iVar15;
        param_1[0x82] = iVar18;
        param_1[0x83] = iVar21;
        param_1[0x84] = iVar23;
        param_1[0x85] = iVar25;
        param_1[0x86] = iVar27;
        param_1[0x87] = iVar28;
        param_1[0x88] = iVar29;
        param_1[0x89] = iVar30;
      }
      else {
        iVar21 = piVar1[1];
        iVar13 = piVar1[2];
        iVar14 = piVar1[5];
        iVar15 = piVar1[3];
        iVar18 = piVar1[4];
        param_1[0x7e] = *piVar1;
        iVar23 = piVar1[6];
        param_1[0x7f] = iVar21;
        iVar21 = piVar1[7];
        param_1[0x80] = iVar13;
        iVar13 = piVar1[8];
        param_1[0x81] = iVar15;
        iVar15 = piVar1[9];
        param_1[0x82] = iVar18;
        iVar18 = piVar1[10];
        iVar25 = piVar1[0xb];
        param_1[0x83] = iVar14;
        param_1[0x84] = iVar23;
        param_1[0x85] = iVar21;
        param_1[0x86] = iVar13;
        param_1[0x89] = iVar25;
        param_1[0x87] = iVar15;
        param_1[0x88] = iVar18;
      }
    }
    else if ((float *)param_3[2] == (float *)0x0) {
      fVar24 = pfVar8[1];
      fVar17 = pfVar8[2];
      fVar16 = pfVar8[3];
      fVar20 = pfVar8[4];
      fVar22 = pfVar8[5];
      param_1[0x7e] = (int)ALBW_AS_U32(*pfVar8);
      fVar19 = pfVar8[6];
      param_1[0x7f] = (int)ALBW_AS_U32(fVar24);
      fVar24 = pfVar8[7];
      param_1[0x80] = (int)ALBW_AS_U32(fVar17);
      fVar17 = pfVar8[8];
      param_1[0x81] = (int)ALBW_AS_U32(fVar16);
      fVar16 = pfVar8[9];
      param_1[0x82] = (int)ALBW_AS_U32(fVar20);
      fVar20 = pfVar8[10];
      fVar26 = pfVar8[0xb];
      param_1[0x83] = (int)ALBW_AS_U32(fVar22);
      param_1[0x84] = (int)ALBW_AS_U32(fVar19);
      param_1[0x85] = (int)ALBW_AS_U32(fVar24);
      param_1[0x86] = (int)ALBW_AS_U32(fVar17);
      param_1[0x87] = (int)ALBW_AS_U32(fVar16);
      param_1[0x88] = (int)ALBW_AS_U32(fVar20);
      param_1[0x89] = (int)ALBW_AS_U32(fVar26);
    }
    else {
      func_00114E74((float *)objStack_60,(float *)param_3[2],pfVar8);
      param_1[0x7e] = objStack_60[0];
      param_1[0x7f] = iStack_5c;
      param_1[0x80] = iStack_58;
      param_1[0x81] = iStack_54;
      param_1[0x82] = iStack_50;
      param_1[0x83] = iStack_4c;
      param_1[0x84] = iStack_48;
      param_1[0x85] = iStack_44;
      param_1[0x86] = local_40;
      param_1[0x87] = iStack_3c;
      param_1[0x88] = iStack_38;
      param_1[0x89] = iStack_34;
    }
    objStack_60[0] = 3;
    puVar5 = func_0041F3C0(param_1,puVar5,(uint *)(param_1 + 0x7e),0x20,3);
    uVar7 = DAT_0041fd40;
    if ((*(byte *)(iVar11 + 0x40) & 1) != 0) {
      *puVar5 = DAT_0041fd44;
      puVar5[1] = uVar7;
      *(undefined1 *)((int)param_1 + 0x31) = 3;
      *(undefined1 *)((int)param_1 + 0x32) = 3;
      fVar16 = *(float *)(iVar11 + 0x30);
      iVar13 = *(int *)(iVar11 + 0x38);
      iVar14 = *(int *)(iVar11 + 0x2c);
      iVar15 = *(int *)(iVar11 + 0x34);
      iVar18 = ALBW_AS_U32(VectorSignedToFloat((int)(short)(*(short *)(iVar11 + 0x3c) +
                                               *(short *)(iVar11 + 0x3e)),
                                   (byte)(in_fpscr >> 0x15) & 3));
      param_1[0x8a] = iVar18;
      param_1[0x8b] = iVar12;
      param_1[0x8c] = iVar12;
      param_1[0x8d] = iVar12;
      param_1[0x8e] = iVar15;
      param_1[0x8f] = iVar13;
      param_1[0x90] = iVar14;
      param_1[0x91] = (int)ALBW_AS_U32(-fVar16);
      *(undefined1 *)((int)param_1 + 0x31) = 5;
      func_0041E840((int)param_1,(byte *)(iVar11 + 0x24));
      uVar2 = (uint)*(byte *)((int)param_1 + 0x32);
      objStack_60[0] = *(byte *)((int)param_1 + 0x31) - uVar2;
      puVar9 = (uint *)(param_1 + uVar2 * 4 + 0x7e);
      puVar5 = func_0041F3C0(param_1,puVar5 + 2,puVar9,uVar2 + 0x20,objStack_60[0]);
      *(undefined1 *)((int)param_1 + 0x31) = 0;
      *(undefined1 *)((int)param_1 + 0x32) = 0;
      uVar3 = func_00420CB8((float *)(param_3 + 0x10),extraout_r1);
      uVar4 = func_00420DE8((float *)(param_3 + 0xc),0,puVar9);
      uVar2 = DAT_0041fd48;
      puVar5[1] = DAT_0041fd48;
      *puVar5 = uVar3;
      puVar5[2] = uVar4;
      puVar5[3] = uVar2 + 0x18;
      puVar5 = puVar5 + 4;
      if ((*(byte *)(iVar11 + 7) & 2) == 0) {
        if (*(byte **)(iVar11 + 0x10) == (byte *)0x0) {
          puVar5 = (uint *)(**(code **)(*param_1 + 0x1c))(param_1,puVar5,0xffffffff,iVar11);
        }
        else {
          iVar13 = *(int *)(iVar11 + 0xc);
          func_00110D44(puVar5,*(byte **)(iVar11 + 0x10),iVar13 * 4);
          puVar5 = puVar5 + iVar13;
        }
      }
      else if ((*(byte *)(iVar11 + 7) & 4) == 0) {
        puVar5 = func_0041F83C((int)param_1,puVar5,*(int *)(iVar11 + 0x10),
                               *(int *)(iVar11 + 0xc) << 2);
      }
      else {
        puVar5 = func_0041F83C((int)param_1,puVar5,*(int *)(iVar11 + 0x14),
                               *(int *)(iVar11 + 0xc) << 2);
      }
    }
    *puVar5 = DAT_0041ff74;
    puVar5[1] = uVar7;
    *(undefined1 *)((int)param_1 + 0x31) = 3;
    *(undefined1 *)((int)param_1 + 0x32) = 3;
    iVar13 = ALBW_AS_U32(VectorSignedToFloat((int)*(short *)(iVar11 + 0x3c),(byte)(in_fpscr >> 0x15) & 3));
    param_1[0x8a] = iVar13;
    param_1[0x8b] = iVar12;
    param_1[0x8c] = iVar12;
    param_1[0x8d] = iVar12;
    param_1[0x8e] = iVar10;
    iVar13 = DAT_0041ff78;
    param_1[0x8f] = iVar10;
    param_1[0x90] = iVar12;
    param_1[0x91] = iVar13;
    *(undefined1 *)((int)param_1 + 0x31) = 5;
    if ((byte *)param_3[0x14] == (byte *)0x0) {
      func_0041E840((int)param_1,(byte *)(iVar11 + 0x1c));
    }
    else {
      func_0041E840((int)param_1,(byte *)param_3[0x14]);
    }
    uVar2 = (uint)*(byte *)((int)param_1 + 0x32);
    objStack_60[0] = *(byte *)((int)param_1 + 0x31) - uVar2;
    puVar9 = (uint *)(param_1 + uVar2 * 4 + 0x7e);
    puVar5 = func_0041F3C0(param_1,puVar5 + 2,puVar9,uVar2 + 0x20,objStack_60[0]);
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    *(undefined1 *)((int)param_1 + 0x32) = 0;
    uVar3 = func_00420CB8((float *)(param_3 + 8),extraout_r1_00);
    uVar4 = func_00420DE8((float *)(param_3 + 4),0,puVar9);
    uVar2 = DAT_0041fd48;
    puVar5[1] = DAT_0041fd48;
    *puVar5 = uVar3;
    puVar5[2] = uVar4;
    puVar5[3] = uVar2 + 0x18;
    puVar5 = puVar5 + 4;
    if ((*(byte *)(iVar11 + 7) & 2) == 0) {
      if (*(byte **)(iVar11 + 0x10) == (byte *)0x0) {
        puVar5 = (uint *)(**(code **)(*param_1 + 0x1c))(param_1,puVar5,0xffffffff,iVar11);
      }
      else {
        iVar10 = *(int *)(iVar11 + 0xc);
        func_00110D44(puVar5,*(byte **)(iVar11 + 0x10),iVar10 * 4);
        puVar5 = puVar5 + iVar10;
      }
    }
    else if ((*(byte *)(iVar11 + 7) & 4) == 0) {
      puVar5 = func_0041F83C((int)param_1,puVar5,*(int *)(iVar11 + 0x10),*(int *)(iVar11 + 0xc) << 2
                            );
    }
    else {
      puVar5 = func_0041F83C((int)param_1,puVar5,*(int *)(iVar11 + 0x14),*(int *)(iVar11 + 0xc) << 2
                            );
    }
    param_2 = puVar5 + 2;
    *puVar5 = DAT_0041ff7c;
    puVar5[1] = uVar7;
    *(undefined1 *)((int)param_1 + 0x31) = 0;
    *(undefined1 *)((int)param_1 + 0x32) = 0;
    *(undefined1 *)((int)param_1 + 0x33) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  return param_2;
}

