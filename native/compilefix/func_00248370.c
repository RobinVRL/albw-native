/* compilefix: func_00248370, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_00248370.c) with raw code-address string pointers
 * replaced by the strings themselves (tools/raw_cstr_fix.py, BOOT_LOG 143): 0x248bd0 "fade" */
#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0014E398(int param_1,int *param_2,int param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2A4(uint *param_1,uint param_2,int *param_3);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00247830(int param_1,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_00533304(int param_1,int *param_2,uint param_3);
extern int func_00533400(int param_1,int *param_2);
extern int func_0054D884(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern undefined4 func_0065F560(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern float fRam00248828;
extern int iRam00248be0;
extern undefined4 uRam00248824;
extern undefined4 uRam00248bd8;
extern undefined4 *puRam00248bdc;
extern int DAT_002487b0;
extern int DAT_002487b4;
extern float DAT_002487b8;
extern undefined4 DAT_002487bc;
extern undefined4 *DAT_002487c0;
extern undefined4 DAT_002487c4;
extern undefined4 DAT_002487c8;
extern undefined4 *DAT_002487cc;
extern int *DAT_002487d0;
extern int *DAT_002487d4;
extern int DAT_002487d8;
extern uint *DAT_002487dc;
extern undefined4 DAT_00248818;
extern undefined4 DAT_0024881c;
extern undefined4 DAT_00248820;
extern char s_EfFlamePillarLv1_002487f0[];
extern char s_EfFlamePillarLv2_00248804[];
extern char s_EfFlamePillar_002487e0[];
extern char s_cState_Erase_00248ce8[];
extern char s_cState_Fadeout_00248cd8[];
extern char s_cState_Launch_00248bf4[];
extern char s_cState_Sleep_00248be4[];
extern char s_cState_Upper_00248c04[];

// USA 00248370 <- EU 00248370 (Ghidra, non-matching)
// GLOBAL DAT_002487b0 int
// GLOBAL DAT_002487b4 int
// GLOBAL DAT_002487b8 float
// GLOBAL DAT_002487bc undefined4
// GLOBAL DAT_002487c0 undefined4 *
// GLOBAL DAT_002487c4 undefined4
// GLOBAL DAT_002487c8 undefined4
// GLOBAL DAT_002487cc undefined4 *
// GLOBAL DAT_002487d0 int *
// GLOBAL DAT_002487d4 int *
// GLOBAL DAT_002487d8 int
// GLOBAL DAT_002487dc uint *
// GLOBAL DAT_00248818 undefined4
// GLOBAL DAT_0024881c undefined4
// GLOBAL DAT_00248820 undefined4
// GLOBAL UNK_00248824 undefined4
// GLOBAL UNK_00248828 float
// GLOBAL UNK_00248bd8 undefined4
// GLOBAL UNK_00248bdc undefined *
// GLOBAL UNK_00248be0 int
// GLOBAL s_EfFlamePillarLv1_002487f0 string
// GLOBAL s_EfFlamePillarLv2_00248804 string
// GLOBAL s_EfFlamePillar_002487e0 string
// GLOBAL s_cState_Erase_00248ce8 string
// GLOBAL s_cState_Fadeout_00248cd8 string
// GLOBAL s_cState_Launch_00248bf4 string
// GLOBAL s_cState_Sleep_00248be4 string
// GLOBAL s_cState_Upper_00248c04 string

undefined4 * func_00248370(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint *puVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined2 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  uint uVar20;
  float fparam_0;
  float fVar21;
  undefined4 uVar22;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d4 (*(int *)(albw_frame + 0xc))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define iStack_cc (*(int *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(int *)(albw_frame + 0x1c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x28))
  #define local_b7 (*(undefined1 *)(albw_frame + 0x29))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ac (*(undefined4 *)(albw_frame + 0x34))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined1 *)(albw_frame + 0x44))
  #define local_9b (*(undefined1 *)(albw_frame + 0x45))
  #define auStack_98 ((uint *)(albw_frame + 0x48))
  #define puStack_90 (*(undefined4 * *)(albw_frame + 0x50))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x58))
  #define fStack_84 (*(float *)(albw_frame + 0x5c))
  #define fStack_80 (*(float *)(albw_frame + 0x60))
  #define fStack_7c (*(float *)(albw_frame + 0x64))
  #define uStack_78 (*(uint *)(albw_frame + 0x68))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x9c))
  #define uStack_40 (*(undefined1 *)(albw_frame + 0xa0))
  #define uStack_3c (*(uint *)(albw_frame + 0xa4))
  #define iStack_38 (*(int *)(albw_frame + 0xa8))
  #define pcStack_34 (*(char * *)(albw_frame + 0xac))
  piVar4 = func_00150E40(param_1,param_2);
  iVar14 = DAT_002487b0 + 0x54;
  *piVar4 = DAT_002487b0;
  piVar4[200] = iVar14;
  iVar14 = DAT_002487b4;
  *(char *)(piVar4 + 0x103) = (char)(short)param_2[10];
  *(undefined2 *)(iVar14 + (int)piVar4) = 0;
  puVar5 = func_0010A794(piVar4 + 0x104);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar15 = puVar5 + -0x104;
  puVar5[9] = 0;
  iVar14 = func_0054D964((int)puVar15,0);
  puVar5[0xd] = iVar14;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  puVar5[0xe] = uVar7;
  puVar6 = (undefined4 *)func_0010BAB4(100);
  uVar7 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    uVar7 = func_004EE484(puVar6);
  }
  puVar5[0xf] = uVar7;
  puVar6 = DAT_002487c0;
  uVar7 = DAT_002487bc;
  fVar21 = DAT_002487b8;
  puVar5[0x10] = ALBW_AS_U32(DAT_002487b8);
  puVar5[0x11] = uVar7;
  puVar5[0x12] = ALBW_AS_U32(fVar21);
  uVar7 = puVar6[1];
  puVar5[0x1b] = *puVar6;
  puVar5[0x1c] = uVar7;
  uVar7 = DAT_002487c4;
  puVar5[0x19] = DAT_002487c4;
  puVar5[0x1a] = puVar15;
  uVar16 = puVar6[3];
  puVar5[0x1f] = puVar6[2];
  puVar5[0x20] = uVar16;
  puVar5[0x1d] = uVar7;
  puVar5[0x1e] = puVar15;
  uVar16 = DAT_002487c8;
  uVar17 = puVar6[5];
  puVar5[0x23] = puVar6[4];
  puVar5[0x24] = uVar17;
  puVar5[0x21] = uVar7;
  puVar5[0x22] = puVar15;
  puVar5[0x28] = ALBW_AS_U32(fVar21);
  puVar6 = DAT_002487cc;
  puVar5[0x29] = ALBW_AS_U32(fVar21);
  puVar5[0x2a] = uVar16;
  puVar5[0x2b] = uVar16;
  *(undefined1 *)(puVar5 + 0x2c) = 0;
  *(undefined1 *)((int)puVar5 + 0xb1) = 0;
  *(undefined1 *)((int)puVar5 + 0xb2) = 0;
  *(undefined1 *)((int)puVar5 + 0xb3) = 0;
  uVar7 = puVar6[1];
  uVar17 = puVar6[2];
  puVar5[0x2d] = *puVar6;
  puVar5[0x2e] = uVar7;
  puVar5[0x2f] = uVar17;
  uVar7 = *puVar6;
  uVar17 = puVar6[1];
  puVar5[0x32] = puVar6[2];
  puVar5[0x30] = uVar7;
  puVar5[0x31] = uVar17;
  *(undefined1 *)(puVar5 + 0x33) = 0;
  *(undefined2 *)((int)puVar5 + 0xce) = 7;
  iVar14 = *DAT_002487d0;
  if (((iVar14 != 0) && (*(char *)(iVar14 + 0x18) == '\x01')) &&
     (iVar14 = *(int *)(iVar14 + 0x1c), (iVar14 == 2 || iVar14 == 3) || iVar14 == 4)) {
    *(undefined2 *)((int)puVar5 + 0xce) = 8;
  }
  puVar5[-9] = puVar5 + 0x19;
  func_004D80A4((float *)(puVar5 + -0xd),param_2[8],fVar21);
  puVar2 = DAT_002487dc;
  puVar5[-0xc] = uVar16;
  iVar14 = DAT_002487d8;
  piVar4 = DAT_002487d4;
  if (((*puVar2 & 1) == 0) &&
     (iVar8 = func_00100174((int *)DAT_002487dc), piVar11 = DAT_002487d4, iVar8 != 0)) {
    DAT_002487d4[1] = (int)s_EfFlamePillar_002487e0;
    *piVar11 = iVar14;
    piVar4[3] = (int)s_EfFlamePillarLv1_002487f0;
    piVar4[2] = iVar14;
    piVar4[5] = (int)s_EfFlamePillarLv2_00248804;
    piVar4[4] = iVar14;
  }
  iVar8 = *(int *)(puVar5[-0x50] + 0x1c8);
  local_c4 = func_00533400(iVar8,piVar4 + *(char *)(puVar5 + -1) * 2);
  local_d4 = iVar14;
  uStack_d0 = DAT_00248820;
  iStack_cc = iVar14;
  local_c8 = DAT_00248820;
  uStack_c0 = 0;
  local_9c = 1;
  local_b8 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_9b = 0xc4;
  local_bc = 1;
  local_b7 = 1;
  local_b4 = 0;
  local_ac = 0;
  iVar9 = func_0014E398((int)puVar15,&local_d4,1);
  puVar5[9] = iVar9;
  func_004CF478(iVar9,0);
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar10,1,uRam00248824,1);
  }
  puVar5[0xc] = puVar6;
  piVar19 = puVar5 + 0xc;
  piVar11 = (int *)func_00533304(iVar8,piVar4 + *(char *)(puVar5 + -1) * 2,0);
  func_0016A2A4((uint *)*piVar19,0,piVar11);
  func_0016A02C(*piVar19,-1,(int *)0xffffffff,puVar5[9]);
  puStack_90 = &uStack_8c;
  auStack_98[1] = 3;
  uStack_44 = 10;
  uStack_40 = 0;
  auStack_98[0] = 1;
  uStack_8c = 0;
  fStack_80 = fRam00248828;
  uStack_78 = (uint)piVar19 | 0xff;
  fparam_0 = fRam00248828;
  uStack_88 = uVar16;
  fStack_84 = fVar21;
  fStack_7c = fVar21;
  func_0016898C(puVar5[0xc],auStack_98);
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar10,1,uRam00248824,1);
  }
  puVar5[10] = puVar6;
  piVar4 = (int *)func_00533304(iVar8,piVar4 + *(char *)(puVar5 + -1) * 2,1);
  func_0016A2A4((uint *)puVar5[10],0,piVar4);
  func_0016A02C(puVar5[10],-1,(int *)0xffffffff,puVar5[9]);
  puVar10 = (undefined4 *)func_0010BAB4(0xa8);
  puVar6 = (undefined4 *)0x0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar6 = func_0016A2FC(puVar10,1,uRam00248824,1);
  }
  puVar5[0xb] = puVar6;
  pcStack_34 = (char *)"fade";
  iStack_38 = iVar14;
  piVar4 = (int *)func_00533304(*(int *)(puVar5[-0x50] + 0x1c8),&iStack_38,1);
  func_0016A2A4((uint *)puVar5[0xb],0,piVar4);
  func_0016A02C(puVar5[0xb],-1,(int *)0xffffffff,puVar5[9]);
  *(undefined2 *)(puVar5[0xd] + 0x28) = 0x1a0;
  *(uint *)(puVar5[0xd] + 0x2c) = *(uint *)(puVar5[0xd] + 0x2c) | 0x60008;
  *(undefined1 *)(puVar5[0xe] + 0x61) = 0;
  puVar12 = (undefined2 *)func_0054DDF4((int)puVar15,0);
  uStack_3c = puVar5[-0x51];
  func_0014EB8C(puVar5[0xe],puVar5[0xd],puVar12,&uStack_3c,*(undefined2 *)(puVar5 + -0xef),0,
                (short)uRam00248bd8);
  *(undefined1 *)(puVar5[0xf] + 0x61) = 0;
  iVar8 = func_0054DDF4((int)puVar15,1);
  puVar5[-0x1c] = iVar8;
  puVar5[-0x1b] = iVar8;
  uStack_3c = puVar5[-0x51];
  func_0014EB8C(puVar5[0xf],puVar5[0xd],(undefined2 *)puVar5[-0x1c],&uStack_3c,
                *(undefined2 *)(puVar5 + -0xef),0,(short)uRam00248bd8);
  if (*(char *)(*DAT_002487d0 + 0x18) == '\a' || *(char *)(*DAT_002487d0 + 0x18) == '%') {
    uVar3 = 4;
    if (*(char *)(puVar5 + -1) == '\x02') {
      uVar3 = 8;
    }
    *(undefined2 *)(puVar5[0xe] + 0x30) = uVar3;
    *(undefined2 *)(puVar5[0xf] + 0x30) = uVar3;
  }
  else if (*(char *)(puVar5 + -1) == '\x02') {
    *(short *)(puVar5[0xe] + 0x30) = *(short *)(puVar5[0xe] + 0x30) << 1;
  }
  iVar8 = func_0054D884(puVar5[-0x50] + 0x18,0);
  puVar5[0x16] = *(undefined4 *)(iVar8 + 4);
  puVar5[0x17] = *(undefined4 *)(iVar8 + 8);
  puVar5[0x18] = *(undefined4 *)(iVar8 + 0xc);
  *(undefined1 *)((int)puVar5 + 6) = 5;
  puVar5[5] = puVar15;
  iVar8 = func_0010BA78(0x50);
  puVar5[6] = iVar8;
  puVar6 = DAT_002487c0;
  puVar5[7] = iVar8 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar9 = 5;
  puVar10 = (undefined4 *)(iVar8 + -8);
  do {
    uVar7 = puVar6[0x1d];
    iVar9 = iVar9 + -1;
    puVar10[2] = puVar6[0x1c];
    puVar10[3] = uVar7;
    uVar7 = puVar6[0x1d];
    puVar10[4] = puVar6[0x1c];
    puVar10[5] = uVar7;
    puVar10 = puVar10 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar20 = (uint)bVar1;
  puVar10 = (undefined4 *)func_0010BA78(uVar20 << 3);
  puVar5[8] = puVar10;
  if (uVar20 != 0) {
    puVar13 = puVar10 + -2;
    if ((bVar1 & 1) != 0) {
      uVar7 = puVar6[0xb];
      *puVar10 = puVar6[10];
      puVar10[1] = uVar7;
      puVar13 = puVar10;
    }
    for (iVar8 = (int)uVar20 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      uVar7 = puVar6[0xb];
      puVar13[2] = puVar6[10];
      puVar13[3] = uVar7;
      uVar7 = puVar6[0xb];
      puVar13[4] = puVar6[10];
      puVar13[5] = uVar7;
      puVar13 = puVar13 + 4;
    }
  }
  puVar10 = (undefined4 *)func_0010CEE0(0xbc,(int *)0x0,4);
  iVar8 = 0;
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 0x24;
    puVar10[1] = 5;
    iVar8 = func_00100118((int)(puVar10 + 2),puRam00248bdc,0x24,5);
  }
  if (iVar8 != 0) {
    puVar5[2] = 5;
    puVar5[3] = iVar8;
  }
  iVar8 = iRam00248be0;
  puVar5[-0x2f] = puVar5;
  *(undefined2 *)(iVar8 + (int)puVar15) = 5;
  pcStack_34 = s_cState_Sleep_00248be4;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,0,&iStack_38);
  puVar10 = (undefined4 *)puVar5[6];
  uVar16 = puVar6[7];
  uVar17 = puVar6[8];
  uVar7 = puVar6[9];
  uVar18 = puVar6[0xb];
  uVar22 = puVar6[10];
  *puVar10 = puVar6[6];
  puVar10[1] = uVar16;
  puVar10 = (undefined4 *)puVar5[7];
  puVar10[1] = uVar7;
  *puVar10 = uVar17;
  puVar10 = (undefined4 *)puVar5[8];
  *puVar10 = uVar22;
  puVar10[1] = uVar18;
  pcStack_34 = s_cState_Launch_00248bf4;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,1,&iStack_38);
  iVar8 = puVar5[6];
  uVar7 = puVar6[0xd];
  uVar17 = puVar6[0xe];
  uVar16 = puVar6[0xf];
  *(undefined4 *)(iVar8 + 8) = puVar6[0xc];
  *(undefined4 *)(iVar8 + 0xc) = uVar7;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 8) = uVar17;
  *(undefined4 *)(iVar8 + 0xc) = uVar16;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 8) = uVar22;
  *(undefined4 *)(iVar8 + 0xc) = uVar18;
  pcStack_34 = s_cState_Upper_00248c04;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,2,&iStack_38);
  iVar8 = puVar5[6];
  uVar16 = puVar6[0x11];
  uVar7 = puVar6[0x12];
  uVar17 = puVar6[0x13];
  *(undefined4 *)(iVar8 + 0x10) = puVar6[0x10];
  *(undefined4 *)(iVar8 + 0x14) = uVar16;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x10) = uVar7;
  *(undefined4 *)(iVar8 + 0x14) = uVar17;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x10) = uVar22;
  *(undefined4 *)(iVar8 + 0x14) = uVar18;
  pcStack_34 = s_cState_Fadeout_00248cd8;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,3,&iStack_38);
  iVar8 = puVar5[6];
  uVar16 = puVar6[0x15];
  uVar7 = puVar6[0x16];
  uVar17 = puVar6[0x17];
  *(undefined4 *)(iVar8 + 0x18) = puVar6[0x14];
  *(undefined4 *)(iVar8 + 0x1c) = uVar16;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar7;
  *(undefined4 *)(iVar8 + 0x1c) = uVar17;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar22;
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  pcStack_34 = s_cState_Erase_00248ce8;
  iStack_38 = iVar14;
  func_0010BEC4((int)puVar5,4,&iStack_38);
  iVar14 = puVar5[6];
  uVar7 = puVar6[0x19];
  uVar16 = puVar6[0x1a];
  uVar17 = puVar6[0x1b];
  *(undefined4 *)(iVar14 + 0x20) = puVar6[0x18];
  *(undefined4 *)(iVar14 + 0x24) = uVar7;
  iVar14 = puVar5[7];
  *(undefined4 *)(iVar14 + 0x20) = uVar16;
  *(undefined4 *)(iVar14 + 0x24) = uVar17;
  iVar14 = puVar5[8];
  *(undefined4 *)(iVar14 + 0x20) = uVar22;
  *(undefined4 *)(iVar14 + 0x24) = uVar18;
  func_0065F560(puVar5,0,fparam_0);
  func_00247830((int)puVar15,fVar21);
  return puVar15;
}

