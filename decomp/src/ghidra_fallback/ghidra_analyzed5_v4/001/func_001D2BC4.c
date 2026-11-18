#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_00111A64(uint *param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_0014FC94(int param_1,int param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151150(int param_1,float *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_001D134C(int param_1);
extern int func_001E4B08(undefined4 *param_1,uint *param_2,int param_3);
extern int func_0032493C(undefined4 *param_1);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_0035D69C(undefined4 *param_1,int param_2);
extern int func_00361574(int param_1,undefined1 param_2);
extern int func_004356B4(int *param_1);
extern int func_004ECF6C(int param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00503324(undefined4 *param_1);
extern int func_0051B6E4(int param_1);
extern int func_00523774(int param_1,uint param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0065C598(undefined4 *param_1,undefined1 param_2);
extern int func_0065C6DC(int param_1,undefined4 param_2,byte *param_3);
extern float fRam001d37ec;
extern undefined4 uRam001d3460;
extern undefined4 uRam001d37d8;
extern undefined4 uRam001d3bec;
extern undefined4 *puRam001d3c78;
extern int DAT_001d3090;
extern undefined4 *DAT_001d3094;
extern undefined4 DAT_001d3098;
extern undefined4 DAT_001d309c;
extern float DAT_001d30a0;
extern undefined4 DAT_001d30a4;
extern undefined4 DAT_001d30a8;
extern undefined4 DAT_001d30ac;
extern undefined4 DAT_001d30b0;
extern undefined4 DAT_001d30b4;
extern float DAT_001d30b8;
extern int *DAT_001d30bc;
extern float DAT_001d30c0;
extern undefined4 DAT_001d30c4;
extern char * *DAT_001d30c8;
extern uint *DAT_001d30cc;
extern int *DAT_001d30d0;
extern int *DAT_001d30d4;
extern int DAT_001d30d8;
extern int *DAT_001d3458;
extern int *DAT_001d345c;
extern uint DAT_001d3464;
extern undefined4 *DAT_001d3468;
extern undefined4 DAT_001d346c;
extern float DAT_001d3470;
extern float DAT_001d3474;
extern float DAT_001d3478;
extern undefined DAT_001d37c8;
extern undefined4 DAT_001d37cc;
extern undefined *PTR_001d37dc;
extern undefined *PTR_001d37e0;
extern undefined *PTR_001d37e4;
extern undefined *PTR_001d37e8;
extern char s_cState_Fall_001d3c24[];
extern char s_cState_Flow_001d344c[];
extern char s_cState_FlyAttack_001d3c50[];
extern char s_cState_GameWait_001d30dc[];
extern char s_cState_GndAttack_001d3c64[];
extern char s_cState_Lifted_001d3c30[];
extern char s_cState_MiniGame_001d30ec[];
extern char s_cState_Move_001d3bfc[];
extern char s_cState_Reaction_001d3c14[];
extern char s_cState_Run_001d3c08[];
extern char s_cState_Thrown_001d3c40[];
extern char s_cState_Wait_001d3bf0[];
extern char s_color_001d37d0[];

// USA 001D2BC4 <- EU 001D2BC4 (Ghidra, non-matching)
// GLOBAL DAT_001d3090 int
// GLOBAL DAT_001d3094 undefined4 *
// GLOBAL DAT_001d3098 undefined4
// GLOBAL DAT_001d309c undefined4
// GLOBAL DAT_001d30a0 float
// GLOBAL DAT_001d30a4 undefined4
// GLOBAL DAT_001d30a8 undefined4
// GLOBAL DAT_001d30ac undefined4
// GLOBAL DAT_001d30b0 undefined4
// GLOBAL DAT_001d30b4 undefined4
// GLOBAL DAT_001d30b8 float
// GLOBAL DAT_001d30bc int *
// GLOBAL DAT_001d30c0 float
// GLOBAL DAT_001d30c4 undefined4
// GLOBAL DAT_001d30c8 char * *
// GLOBAL DAT_001d30cc uint *
// GLOBAL DAT_001d30d0 int *
// GLOBAL DAT_001d30d4 int *
// GLOBAL DAT_001d30d8 int
// GLOBAL DAT_001d3458 int *
// GLOBAL DAT_001d345c int *
// GLOBAL DAT_001d3464 uint
// GLOBAL DAT_001d3468 undefined4 *
// GLOBAL DAT_001d346c undefined4
// GLOBAL DAT_001d3470 float
// GLOBAL DAT_001d3474 float
// GLOBAL DAT_001d3478 float
// GLOBAL DAT_001d37c8 undefined
// GLOBAL DAT_001d37cc undefined4
// GLOBAL PTR_001d37dc undefined *
// GLOBAL PTR_001d37e0 undefined *
// GLOBAL PTR_001d37e4 undefined *
// GLOBAL PTR_001d37e8 undefined *
// GLOBAL UNK_001d3460 undefined4
// GLOBAL UNK_001d37d8 undefined4
// GLOBAL UNK_001d37ec float
// GLOBAL UNK_001d3bec undefined4
// GLOBAL UNK_001d3c78 undefined4 *
// GLOBAL s_cState_Fall_001d3c24 string
// GLOBAL s_cState_Flow_001d344c string
// GLOBAL s_cState_FlyAttack_001d3c50 string
// GLOBAL s_cState_GameWait_001d30dc string
// GLOBAL s_cState_GndAttack_001d3c64 string
// GLOBAL s_cState_Lifted_001d3c30 string
// GLOBAL s_cState_MiniGame_001d30ec string
// GLOBAL s_cState_Move_001d3bfc string
// GLOBAL s_cState_Reaction_001d3c14 string
// GLOBAL s_cState_Run_001d3c08 string
// GLOBAL s_cState_Thrown_001d3c40 string
// GLOBAL s_cState_Wait_001d3bf0 string
// GLOBAL s_color_001d37d0 string

/* WARNING: Variable defined which should be unmapped: objStack_150 */

undefined4 * func_001D2BC4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  char **ppcVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  float *pfVar14;
  int *piVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  bool bVar19;
  uint in_fpscr;
  uint uVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define objStack_150 ((uint *)(albw_frame + 0x0))
  #define local_140 ((uint *)(albw_frame + 0x10))
  #define local_138 (*(char ** *)(albw_frame + 0x18))
  #define local_134 (*(char * *)(albw_frame + 0x1c))
  #define local_130 (*(float *)(albw_frame + 0x20))
  #define fStack_12c (*(float *)(albw_frame + 0x24))
  #define uStack_128 (*(undefined4 *)(albw_frame + 0x28))
  #define fStack_124 (*(float *)(albw_frame + 0x2c))
  #define local_120 (*(uint *)(albw_frame + 0x30))
  #define local_ec (*(undefined4 *)(albw_frame + 0x64))
  #define local_e8 (*(undefined1 *)(albw_frame + 0x68))
  #define local_e0 ((uint *)(albw_frame + 0x70))
  #define local_d8 (*(undefined4 * *)(albw_frame + 0x78))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_d0 (*(float *)(albw_frame + 0x80))
  #define fStack_cc (*(float *)(albw_frame + 0x84))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x88))
  #define fStack_c4 (*(float *)(albw_frame + 0x8c))
  #define local_c0 (*(uint *)(albw_frame + 0x90))
  #define local_8c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_88 (*(undefined1 *)(albw_frame + 0xc8))
  #define local_7c (*(int * *)(albw_frame + 0xd4))
  #define ppcStack_78 (*(char ** *)(albw_frame + 0xd8))
  #define pcStack_74 (*(char * *)(albw_frame + 0xdc))
  #define local_70 (*(undefined4 * *)(albw_frame + 0xe0))
  #define local_68 (*(undefined4 * *)(albw_frame + 0xe8))
  #define local_64 (*(int *)(albw_frame + 0xec))
  #define auStack_60 ((uint *)(albw_frame + 0xf0))
  #define local_58 (*(undefined4 * *)(albw_frame + 0xf8))
  #define local_54 (*(undefined4 * *)(albw_frame + 0xfc))
  #define local_50 (*(undefined4 * *)(albw_frame + 0x100))
  #define local_48 (*(char ** *)(albw_frame + 0x108))
  #define local_44 (*(char * *)(albw_frame + 0x10c))
  piVar4 = (int *)func_001E4B08(param_1,param_2,1);
  iVar9 = DAT_001d3090;
  *piVar4 = DAT_001d3090;
  piVar4[200] = iVar9 + 0x78;
  puVar5 = func_0010A794(piVar4 + 0x13f);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar17 = puVar5 + -0x13f;
  puVar6 = (undefined4 *)func_0010BAB4(0xc);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_0032493C(puVar6);
  }
  puVar5[9] = uVar7;
  puVar8 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    puVar6 = func_0034CAA0(puVar8);
  }
  puVar8 = DAT_001d3094;
  puVar5[10] = puVar6;
  uVar7 = puVar8[1];
  puVar5[0xd] = *puVar8;
  puVar5[0xe] = uVar7;
  uVar7 = DAT_001d3098;
  local_58 = puVar5 + 0xf;
  puVar5[0xb] = DAT_001d3098;
  puVar5[0xc] = puVar17;
  uVar18 = puVar8[2];
  piVar4 = puVar5 + 0x1b;
  puVar5[0x12] = puVar8[3];
  *local_58 = uVar7;
  puVar5[0x10] = puVar17;
  puVar5[0x11] = uVar18;
  uVar18 = puVar8[4];
  local_54 = puVar5 + 0x13;
  puVar5[0x16] = puVar8[5];
  puVar5[0x15] = uVar18;
  *local_54 = uVar7;
  puVar5[0x14] = puVar17;
  puVar6 = DAT_001d3094;
  local_68 = DAT_001d3094 + 0x40;
  puVar5[0x18] = 0;
  uVar13 = puVar6[0x47];
  uVar18 = puVar6[0x46];
  puVar5[0x17] = uVar7;
  puVar5[0x19] = uVar18;
  puVar5[0x1a] = uVar13;
  local_70 = puVar5 + 0x1c;
  puVar5[0x1b] = 0;
  puVar5[0x1c] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  local_7c = puVar5 + 0x1d;
  puVar5[0x1d] = uVar7;
  *(undefined1 *)(puVar5 + 0x1f) = 0xf;
  *(undefined1 *)((int)puVar5 + 0x7d) = 0xff;
  *(undefined1 *)((int)puVar5 + 0x7e) = 0xff;
  uVar7 = DAT_001d309c;
  *(undefined2 *)(puVar5 + 0x23) = 0;
  *(undefined2 *)((int)puVar5 + 0x8e) = 1;
  puVar5[0x24] = uVar7;
  puVar5[0x28] = 0;
  puVar5[0x29] = 0;
  puVar5[0x2a] = uVar7;
  puVar5[0x2b] = 0;
  puVar5[0x2c] = 0;
  puVar5[0x2d] = uVar7;
  puVar5[0x2e] = 0;
  puVar5[0x2f] = 0;
  local_50 = puVar5 + -0x3f;
  puVar5[0x30] = 0;
  fVar24 = DAT_001d30a0;
  uVar26 = CONCAT44(uVar7,DAT_001d30a0);
  *(undefined2 *)(puVar5 + 0x31) = 0;
  *(undefined2 *)((int)puVar5 + 0xc6) = 0;
  puVar5[0x32] = ALBW_AS_U32(fVar24);
  puVar5[0x33] = param_2[2];
  puVar5[0x34] = uVar7;
  puVar5[0x35] = uVar7;
  *(undefined2 *)(puVar5 + 0x36) = 0;
  *(undefined1 *)((int)puVar5 + 0xda) = 0;
  *(undefined1 *)((int)puVar5 + 0xdb) = 0;
  *(undefined1 *)(puVar5 + 0x37) = 0;
  *(undefined1 *)((int)puVar5 + 0xdd) = 0;
  *(undefined1 *)((int)puVar5 + 0xde) = 0;
  puVar6 = DAT_001d3094;
  *(bool *)((int)puVar5 + 0xdf) = *(short *)((int)param_2 + 0x32) != 0;
  *(undefined1 *)(puVar5 + 0x38) = 0;
  *(undefined1 *)((int)puVar5 + 0xe1) = 0;
  *(undefined1 *)((int)puVar5 + 0xe2) = 0;
  *(undefined1 *)(puVar5 + 0x39) = 0;
  puVar5[0x3a] = 0;
  puVar5[0x3b] = 0;
  puVar5[0x3d] = 0;
  uVar7 = puVar6[0x49];
  puVar5[0x3e] = puVar6[0x48];
  puVar5[0x3f] = uVar7;
  puVar5[0x3c] = DAT_001d30a4;
  puVar5[0x41] = 0;
  uVar7 = local_68[0xb];
  puVar5[0x42] = local_68[10];
  puVar5[0x43] = uVar7;
  puVar5[0x40] = DAT_001d30a8;
  puVar5[0x44] = 0;
  puVar5[0x46] = puVar5 + 0x48;
  puVar5[0x47] = 0x10;
  fVar27 = DAT_001d30b8;
  *(undefined2 *)(puVar5[0x46] + 0x1e) = 0;
  *(undefined2 *)puVar5[0x46] = 0;
  puVar5[0x45] = DAT_001d30b4;
  *(undefined1 *)(puVar5 + 0x50) = 0xff;
  *(undefined1 *)((int)puVar5 + 0x141) = 1;
  *(undefined1 *)((int)puVar5 + 0x142) = 0;
  *(undefined1 *)((int)puVar5 + 0x143) = 0;
  fVar21 = (float)VectorUnsignedToFloat
                            (*(ushort *)((int)param_2 + 0x2a) & 0xff,(byte)(in_fpscr >> 0x15) & 3);
  uVar20 = in_fpscr & 0xfffffff | (uint)(fVar24 <= fVar21) << 0x1d;
  if ((SUB41(uVar20 >> 0x1d,0)) &&
     (uVar10 = in_fpscr & 0xfffffff | (uint)(fVar21 < fVar27) << 0x1f |
               (uint)(fVar21 == fVar27) << 0x1e,
     uVar20 = uVar10 | (uint)(NAN(fVar21) || NAN(fVar27)) << 0x1c, bVar1 = (byte)(uVar10 >> 0x18),
     fVar24 = fVar21, !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar20 >> 0x1c) & 1))) {
    fVar24 = fVar27;
  }
  uVar7 = VectorFloatToUnsigned(fVar24,3);
  *(char *)((int)puVar5 + 0xe3) = (char)uVar7;
  iVar9 = func_00588BE4((int)puVar17);
  ppcVar2 = DAT_001d30c8;
  uVar7 = DAT_001d30c4;
  fVar24 = DAT_001d30c0;
  if (iVar9 == *DAT_001d30bc) {
    *(undefined1 *)((int)puVar5 + 0xe3) = 1;
  }
  else {
    uVar10 = func_00588BE4((int)puVar17);
    bVar19 = uVar10 == *DAT_001d30cc;
    if (bVar19) {
      *(undefined1 *)((int)puVar5 + 0xe3) = 2;
    }
    else {
      uVar10 = (uint)*(byte *)((int)puVar5 + 0xe3);
    }
    if (bVar19 || uVar10 == 2) {
      func_00361574(*DAT_001d30d0,1);
      piVar4 = DAT_001d30d4;
      fVar27 = ALBW_AS_F32(uVar26);
      func_0051B6E4(*DAT_001d30d4);
      *(ushort *)(*piVar4 + 0x33e) = *(ushort *)(*piVar4 + 0x33e) | 1;
      fVar21 = (float)VectorSignedToFloat((int)(short)param_2[10],(byte)(uVar20 >> 0x15) & 3);
      if ((fVar27 <= fVar21) && (fVar27 = fVar21, fVar24 < fVar21)) {
        fVar27 = fVar24;
      }
      uVar18 = VectorFloatToUnsigned(fVar27,3);
      *(char *)((int)puVar5 + 0xdb) = (char)uVar18;
      (*(undefined1 *)((char *)&objStack_150[0] + 0)) = 0xc;
      func_0065C6DC((int)puVar5,puVar17,(byte *)objStack_150);
      iVar9 = DAT_001d30d8;
      puVar5[-0x6a] = puVar5;
      *(undefined2 *)(iVar9 + (int)puVar17) = 0xc;
      local_134 = s_cState_GameWait_001d30dc;
      local_138 = ppcVar2;
      func_0010BEC4((int)puVar5,9,(int *)&local_138);
      puVar6 = DAT_001d3094;
      iVar9 = puVar5[6];
      uVar18 = DAT_001d3094[7];
      uVar16 = DAT_001d3094[8];
      uVar13 = DAT_001d3094[9];
      uVar26 = *(undefined8 *)(DAT_001d3094 + 10);
      *(undefined4 *)(iVar9 + 0x48) = DAT_001d3094[6];
      *(undefined4 *)(iVar9 + 0x4c) = uVar18;
      iVar9 = puVar5[7];
      *(undefined4 *)(iVar9 + 0x48) = uVar16;
      *(undefined4 *)(iVar9 + 0x4c) = uVar13;
      iVar9 = puVar5[8];
      *(int *)(iVar9 + 0x48) = (int)uVar26;
      *(int *)(iVar9 + 0x4c) = (int)((ulonglong)uVar26 >> 0x20);
      local_134 = s_cState_MiniGame_001d30ec;
      local_138 = ppcVar2;
      func_0010BEC4((int)puVar5,10,(int *)&local_138);
      iVar9 = puVar5[6];
      uVar18 = puVar6[0xd];
      uVar13 = puVar6[0xe];
      uVar16 = puVar6[0xf];
      *(undefined4 *)(iVar9 + 0x50) = puVar6[0xc];
      *(undefined4 *)(iVar9 + 0x54) = uVar18;
      iVar9 = puVar5[7];
      *(undefined4 *)(iVar9 + 0x50) = uVar13;
      *(undefined4 *)(iVar9 + 0x54) = uVar16;
      iVar9 = puVar5[8];
      *(int *)(iVar9 + 0x50) = (int)uVar26;
      *(int *)(iVar9 + 0x54) = (int)((ulonglong)uVar26 >> 0x20);
      local_134 = s_cState_Flow_001d344c;
      local_138 = ppcVar2;
      func_0010BEC4((int)puVar5,0xb,(int *)&local_138);
      iVar9 = puVar5[6];
      uVar13 = puVar6[0x11];
      uVar18 = puVar6[0x12];
      uVar16 = puVar6[0x13];
      *(undefined4 *)(iVar9 + 0x58) = puVar6[0x10];
      *(undefined4 *)(iVar9 + 0x5c) = uVar13;
      iVar9 = puVar5[7];
      *(undefined4 *)(iVar9 + 0x58) = uVar18;
      *(undefined4 *)(iVar9 + 0x5c) = uVar16;
      iVar9 = puVar5[8];
      *(int *)(iVar9 + 0x58) = (int)uVar26;
      *(int *)(iVar9 + 0x5c) = (int)((ulonglong)uVar26 >> 0x20);
      piVar4 = DAT_001d3458;
      *(undefined1 *)((int)puVar5 + -0x16b) = 1;
      puVar5[-0x54] = uVar7;
      switch(*(undefined1 *)(*piVar4 + 0x18)) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
      case 8:
      case 9:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
        uVar3 = 1;
        break;
      default:
        uVar3 = 0;
      }
      *(undefined1 *)((int)puVar5 + 0x141) = uVar3;
      bVar19 = func_00523774(*DAT_001d345c,0);
      *(bool *)((int)puVar5 + 0x142) = !bVar19;
      puVar6 = (undefined4 *)func_0010BAB4(0x2e4);
      uVar7 = 0;
      if (puVar6 != (undefined4 *)0x0) {
        uVar7 = func_00503324(puVar6);
      }
      puVar6 = DAT_001d3094;
      puVar5[0x3a] = uVar7;
      uVar7 = puVar6[0x14];
      uVar18 = puVar6[0x15];
      puVar5[0x3d] = puVar17;
      puVar5[0x3e] = uVar7;
      puVar5[0x3f] = uVar18;
      *(undefined4 **)(puVar5[0x3a] + 0x2b8) = puVar5 + 0x3c;
      uVar18 = puVar6[0x16];
      uVar7 = puVar6[0x17];
      puVar5[0x41] = puVar17;
      puVar5[0x43] = uVar7;
      puVar5[0x42] = uVar18;
      *(undefined4 **)(puVar5[0x3a] + 0x2b4) = puVar5 + 0x40;
      func_004ECF6C((int)puVar17);
      puVar8 = (undefined4 *)func_0010BAB4(0x28);
      puVar6 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        puVar6 = func_0035D69C(puVar8,(int)puVar17);
        *puVar6 = uRam001d3460;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
      }
      puVar5[0x3b] = puVar6;
      func_0065C598(puVar5,0xb);
      return puVar17;
    }
  }
  iVar9 = func_0054D89C((int)puVar17,0);
  puVar5[0x1e] = iVar9;
  fVar25 = ALBW_AS_F32(uVar26);
  fVar22 = (float)VectorUnsignedToFloat((ushort)param_2[0xb] & 0xff,(byte)(uVar20 >> 0x15) & 3);
  uVar10 = uVar20 & 0xfffffff | (uint)(fVar25 <= fVar22) << 0x1d;
  fVar21 = fVar25;
  if ((SUB41(uVar10 >> 0x1d,0)) &&
     (uVar20 = uVar20 & 0xfffffff | (uint)(fVar22 < fVar24) << 0x1f |
               (uint)(fVar22 == fVar24) << 0x1e,
     uVar10 = uVar20 | (uint)(NAN(fVar22) || NAN(fVar24)) << 0x1c, bVar1 = (byte)(uVar20 >> 0x18),
     fVar21 = fVar22, !(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar10 >> 0x1c) & 1))) {
    fVar21 = fVar24;
  }
  uVar20 = 4;
  uVar23 = VectorFloatToUnsigned(fVar21,3);
  uVar11 = uVar23 & 0xff;
  *(char *)(puVar5 + 0x39) = (char)uVar23;
  local_64 = 0;
  if (uVar11 == 2 || uVar11 == 3) {
    local_64 = 1;
    if (uVar11 == 3) {
      objStack_150[0] = (uint)((ulonglong)uVar26 >> 0x20);
      func_00151150(puVar5[0x1e],(float *)objStack_150);
      *(undefined1 *)((int)puVar5 + 0xe3) = 4;
    }
    *(undefined1 *)(puVar5 + 0x39) = 1;
  }
  objStack_150[0] = 1;
  uVar18 = func_0014E428((int)puVar17,1,0,0,1,0,0);
  puVar5[-2] = uVar18;
  for (iVar9 = 0; iVar9 < (*(int **)(puVar5[-2] + 0x20))[1]; iVar9 = iVar9 + 1) {
    puVar12 = (ushort *)(**(int **)(puVar5[-2] + 0x20) + iVar9 * 0x154);
    if (puVar12 != (ushort *)0x0) {
      *puVar12 = *puVar12 | 0x400;
    }
  }
  puVar5[0x25] = puVar5[-0x4b];
  puVar5[0x26] = puVar5[-0x4a];
  puVar5[0x27] = puVar5[-0x49];
  puVar5[-0x21] = puVar5[-2];
  local_140[0] = *(uint *)(puVar5[-0x8b] + 0x1c8);
  if (*(char *)((int)puVar5 + 0xe3) == '\x03') {
    uVar18 = func_0014E904((int)puVar17,1,1);
    puVar5[-1] = uVar18;
    local_134 = &DAT_001d37c8;
    local_138 = ppcVar2;
    func_00169688((uint *)puVar5[-1],0,(int *)&local_138,local_140[0]);
    func_0016A02C(puVar5[-1],-1,(int *)0xffffffff,0);
  }
  else {
    uVar18 = func_0014E904((int)puVar17,9,1);
    uVar20 = DAT_001d3464;
    uVar11 = 0;
    puVar5[-1] = uVar18;
    do {
      func_00169688((uint *)puVar5[-1],uVar11,(int *)(uVar20 + uVar11 * 8),local_140[0]);
      uVar18 = (undefined4)((ulonglong)uVar26 >> 0x20);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < 9);
    func_0016A02C(puVar5[-1],-1,(int *)0xffffffff,0);
    uVar26 = CONCAT44(uVar18,DAT_001d346c);
    uVar11 = func_00111A64((uint *)*DAT_001d3468);
    fVar24 = (float)VectorUnsignedToFloat(uVar11,(byte)(uVar10 >> 0x15) & 3);
    puVar5[-0x45] = (int)((fVar24 * DAT_001d3470 * ALBW_AS_F32(uVar26) + DAT_001d3474) * DAT_001d3478);
  }
  local_e0[1] = 3;
  fVar24 = ALBW_AS_F32(((ulonglong)uVar26 >> 0x20));
  local_d8 = &local_d4;
  local_c0 = uVar20 | 0xff;
  local_8c = 0;
  local_88 = 0;
  local_e0[0] = 1;
  local_d4 = 0;
  local_d0 = fVar25;
  fStack_cc = fVar24;
  uStack_c8 = uVar7;
  fStack_c4 = fVar24;
  func_0016898C(puVar5[-1],local_e0);
  *(float *)(*(int *)(puVar5[-1] + 0x14) + 0x10) = fVar24;
  func_00168E9C((int *)puVar5[-1],puVar5[-2],(int *)0x0);
  if (*(char *)((int)puVar5 + 0xe3) == '\x04') {
    puVar8 = (undefined4 *)func_0010BAB4(0xa8);
    puVar6 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      puVar6 = func_0016A2FC(puVar8,1,DAT_001d37cc,1);
    }
    puVar5[0x1b] = puVar6;
    local_44 = s_color_001d37d0;
    local_48 = ppcVar2;
    func_00169608((uint *)*piVar4,0,(int *)&local_48,*(int *)(puVar5[-0x8b] + 0x1c8));
    func_00133870(*piVar4,0,puVar5[-2]);
    uVar20 = 0x1d35c8;
    func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
    local_138 = &local_134;
    piVar15 = (int *)0x0;
    local_140[1] = 3;
    pfVar14 = &local_130;
    local_ec = 10;
    local_e8 = 0;
    local_134 = (char *)0x0;
    local_140[0] = 1;
    local_120 = uVar20 | 0xff;
    local_130 = fVar25;
    fStack_12c = fVar24;
    uStack_128 = uVar7;
    fStack_124 = fVar24;
    func_0016898C(puVar5[0x1b],local_140);
    iVar9 = *(int *)(*piVar4 + 0x14);
    uVar10 = uVar10 & 0xfffffff | (uint)(*(float *)(iVar9 + 8) == fVar24) << 0x1e;
    if (!SUB41(uVar10 >> 0x1e,0)) {
      *(float *)(iVar9 + 8) = fVar24;
      *(undefined1 *)(iVar9 + 0x26) = 1;
    }
    uVar18 = *(undefined4 *)(puVar5[0x1b] + 0xc);
    *(float *)(*(int *)(puVar5[0x1b] + 0x14) + 0x10) = fVar25;
    func_00169A80((int *)puVar5[0x1b],uVar18,pfVar14,piVar15);
    func_00168E9C((int *)*piVar4,puVar5[-2],(int *)0x0);
  }
  func_00151148(puVar5[0x1e],1);
  uVar18 = uRam001d37d8;
  if (*(char *)(puVar5 + 0x39) != '\x01') {
    func_003249E0((int)puVar17,0);
    puVar5[0x1c] = puVar5[-0x3c];
    local_50[0x13] = uVar18;
    func_00324964((int)puVar17);
    goto LAB_001d3824;
  }
  puVar6 = (undefined4 *)func_0052FBA0(*(int *)PTR_001d37dc + 0x3dbbc,puVar5[-299]);
  if (puVar6 == (undefined4 *)0x0) {
    *(undefined1 *)((int)puVar5 + -0x225) = 1;
    return puVar17;
  }
  if (((*(uint *)PTR_001d37e0 & 1) == 0) &&
     (iVar9 = func_00100174((int *)PTR_001d37e0), iVar9 != 0)) {
    *(undefined **)PTR_001d37e4 = PTR_001d37e8;
  }
  iVar9 = (**(code **)*puVar6)(puVar6,PTR_001d37e4);
  if (iVar9 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  if ((puVar6 == (undefined4 *)0x0) || (*(char *)((int)puVar6 + 0x5df) != '\x02')) {
LAB_001d37f0:
    iVar9 = func_0054D964((int)puVar17,0);
    puVar5[0x1c] = iVar9;
  }
  else {
    fVar24 = (float)VectorUnsignedToFloat
                              (*(byte *)((int)puVar6 + 0x5d7) + 1,(byte)(uVar10 >> 0x15) & 3);
    uVar20 = uVar10 & 0xfffffff | (uint)(fVar24 < fVar27) << 0x1f | (uint)(fVar24 == fVar27) << 0x1e
    ;
    bVar1 = (byte)(uVar20 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar24) || NAN(fVar27))) {
      fVar24 = fVar27;
    }
    uVar10 = VectorFloatToUnsigned(fVar24,3);
    *(char *)((int)puVar5 + 0xdb) = (char)uVar10;
    if ((uVar10 & 0xff) == 4) {
      fVar24 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2e),
                                          (byte)(uVar20 >> 0x15) & 3);
      if ((fVar25 <= fVar24) && (fVar25 = fVar24, fRam001d37ec < fVar24)) {
        fVar25 = fRam001d37ec;
      }
      uVar13 = VectorFloatToUnsigned(fVar25,3);
      *(char *)(puVar5 + 0x37) = (char)uVar13;
    }
    if (*(char *)((int)puVar5 + 0xe3) == '\x03') goto LAB_001d37f0;
    iVar9 = func_0054D964((int)puVar17,1);
    puVar5[0x1c] = iVar9;
  }
  uVar13 = puVar5[-0x4a];
  uVar16 = puVar5[-0x49];
  *(undefined4 *)(iVar9 + 4) = puVar5[-0x4b];
  *(undefined4 *)(iVar9 + 8) = uVar13;
  *(undefined4 *)(iVar9 + 0xc) = uVar16;
  func_004356B4((int *)*local_70);
  *(undefined1 *)((int)puVar5 + -0x16b) = 1;
  puVar5[-0x54] = uVar7;
LAB_001d3824:
  func_001D134C((int)puVar17);
  puVar6 = DAT_001d3094;
  uVar7 = DAT_001d3094[0x18];
  uVar13 = DAT_001d3094[0x19];
  puVar5[0xc] = puVar17;
  puVar5[0xd] = uVar7;
  puVar5[0xe] = uVar13;
  puVar5[-0x44] = puVar5 + 0xb;
  uVar7 = puVar6[0x1a];
  uVar13 = puVar6[0x1b];
  local_58[1] = puVar17;
  local_58[2] = uVar7;
  local_58[3] = uVar13;
  uVar7 = puVar6[0x1c];
  uVar13 = puVar6[0x1d];
  local_54[1] = puVar17;
  local_54[2] = uVar7;
  local_54[3] = uVar13;
  uVar7 = puVar6[0x1e];
  uVar13 = puVar6[0x1f];
  puVar5[0x18] = puVar17;
  puVar5[0x19] = uVar7;
  puVar5[0x1a] = uVar13;
  uVar7 = uRam001d3bec;
  *(undefined4 *)(puVar5[0x1d] + 0x3c) = uVar18;
  auStack_60[0] = puVar5[-0x8c];
  objStack_150[0] = (uint)*(short *)(puVar5 + -0x12a);
  func_0014EB8C(*local_7c,puVar5[0x1c],(undefined2 *)puVar5[-0x57],auStack_60,
                *(short *)(puVar5 + -0x12a),puVar5 + 0x17,(short)uVar7);
  (*(undefined1 *)((char *)&objStack_150[0] + 0)) = 0xc;
  func_0065C6DC((int)puVar5,puVar17,(byte *)objStack_150);
  iVar9 = DAT_001d30d8;
  puVar5[-0x6a] = puVar5;
  *(undefined2 *)(iVar9 + (int)puVar17) = 0xc;
  pcStack_74 = s_cState_Wait_001d3bf0;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,0,(int *)&ppcStack_78);
  puVar8 = (undefined4 *)puVar5[6];
  uVar7 = puVar6[0x22];
  uVar13 = puVar6[0x23];
  uVar18 = puVar6[0x21];
  uVar26 = *(undefined8 *)(puVar6 + 10);
  *puVar8 = puVar6[0x20];
  puVar8[1] = uVar18;
  puVar8 = (undefined4 *)puVar5[7];
  *puVar8 = uVar7;
  puVar8[1] = uVar13;
  puVar8 = (undefined4 *)puVar5[8];
  *puVar8 = (int)uVar26;
  puVar8[1] = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_Move_001d3bfc;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,1,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar7 = puVar6[0x25];
  uVar18 = puVar6[0x26];
  uVar13 = puVar6[0x27];
  *(undefined4 *)(iVar9 + 8) = puVar6[0x24];
  *(undefined4 *)(iVar9 + 0xc) = uVar7;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 8) = uVar18;
  *(undefined4 *)(iVar9 + 0xc) = uVar13;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 8) = (int)uVar26;
  *(int *)(iVar9 + 0xc) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_Run_001d3c08;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,2,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar7 = puVar6[0x29];
  uVar18 = puVar6[0x2a];
  uVar13 = puVar6[0x2b];
  *(undefined4 *)(iVar9 + 0x10) = puVar6[0x28];
  *(undefined4 *)(iVar9 + 0x14) = uVar7;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar18;
  *(undefined4 *)(iVar9 + 0x14) = uVar13;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x10) = (int)uVar26;
  *(int *)(iVar9 + 0x14) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_Reaction_001d3c14;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,3,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar7 = puVar6[0x2d];
  uVar18 = puVar6[0x2e];
  uVar13 = puVar6[0x2f];
  *(undefined4 *)(iVar9 + 0x18) = puVar6[0x2c];
  *(undefined4 *)(iVar9 + 0x1c) = uVar7;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x18) = uVar18;
  *(undefined4 *)(iVar9 + 0x1c) = uVar13;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x18) = (int)uVar26;
  *(int *)(iVar9 + 0x1c) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_Fall_001d3c24;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,4,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar7 = puVar6[0x31];
  uVar18 = puVar6[0x32];
  uVar13 = puVar6[0x33];
  *(undefined4 *)(iVar9 + 0x20) = puVar6[0x30];
  *(undefined4 *)(iVar9 + 0x24) = uVar7;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x20) = uVar18;
  *(undefined4 *)(iVar9 + 0x24) = uVar13;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x20) = (int)uVar26;
  *(int *)(iVar9 + 0x24) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_Lifted_001d3c30;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,5,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar18 = puVar6[0x35];
  uVar13 = puVar6[0x36];
  uVar7 = puVar6[0x37];
  *(undefined4 *)(iVar9 + 0x28) = puVar6[0x34];
  *(undefined4 *)(iVar9 + 0x2c) = uVar18;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x28) = uVar13;
  *(undefined4 *)(iVar9 + 0x2c) = uVar7;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x28) = (int)uVar26;
  *(int *)(iVar9 + 0x2c) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_Thrown_001d3c40;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,6,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar7 = puVar6[0x3a];
  uVar13 = puVar6[0x3b];
  uVar18 = puVar6[0x39];
  *(undefined4 *)(iVar9 + 0x30) = puVar6[0x38];
  *(undefined4 *)(iVar9 + 0x34) = uVar18;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x30) = uVar7;
  *(undefined4 *)(iVar9 + 0x34) = uVar13;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x30) = (int)uVar26;
  *(int *)(iVar9 + 0x34) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_FlyAttack_001d3c50;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,7,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar13 = puVar6[0x3d];
  uVar18 = DAT_001d3094[0x3e];
  uVar7 = DAT_001d3094[0x3f];
  *(undefined4 *)(iVar9 + 0x38) = puVar6[0x3c];
  *(undefined4 *)(iVar9 + 0x3c) = uVar13;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x38) = uVar18;
  *(undefined4 *)(iVar9 + 0x3c) = uVar7;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x38) = (int)uVar26;
  *(int *)(iVar9 + 0x3c) = (int)((ulonglong)uVar26 >> 0x20);
  pcStack_74 = s_cState_GndAttack_001d3c64;
  ppcStack_78 = ppcVar2;
  func_0010BEC4((int)puVar5,8,(int *)&ppcStack_78);
  iVar9 = puVar5[6];
  uVar7 = puRam001d3c78[1];
  uVar18 = local_68[2];
  uVar13 = local_68[3];
  *(undefined4 *)(iVar9 + 0x40) = *puRam001d3c78;
  *(undefined4 *)(iVar9 + 0x44) = uVar7;
  iVar9 = puVar5[7];
  *(undefined4 *)(iVar9 + 0x40) = uVar18;
  *(undefined4 *)(iVar9 + 0x44) = uVar13;
  iVar9 = puVar5[8];
  *(int *)(iVar9 + 0x40) = (int)uVar26;
  *(int *)(iVar9 + 0x44) = (int)((ulonglong)uVar26 >> 0x20);
  if (local_64 != 0) {
    *(undefined2 *)(puVar5[0x1d] + 0x30) = 0;
  }
  if (*(char *)((int)puVar5 + 0xe3) != '\x03') {
    iVar9 = puVar5[0x1d];
    if (*(char *)(puVar5 + 0x39) != '\x01') {
      if (iVar9 != 0) {
        func_0014FC94((int)puVar17,iVar9);
      }
      uVar20 = func_00111A64((uint *)*DAT_001d3468);
      if ((uint)((ulonglong)uVar20 * 100 >> 0x20) < 0x32) {
        func_0065C598(puVar5,0);
        return puVar17;
      }
      func_0065C598(puVar5,1);
      return puVar17;
    }
    if ((iVar9 != 0) && (*(char *)((int)puVar5 + 0xe3) == '\x04')) {
      func_0014FC94((int)puVar17,iVar9);
    }
  }
  func_0065C598(puVar5,7);
  return puVar17;
}

