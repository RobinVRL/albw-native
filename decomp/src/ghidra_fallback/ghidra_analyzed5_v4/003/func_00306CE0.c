#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A20(int param_1,undefined4 param_2,uint *param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_002758CC(undefined4 *param_1,int *param_2);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_0054D964(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_006649C8(undefined4 *param_1,undefined1 param_2);
extern int DAT_003071cc;
extern undefined4 *DAT_003071d0;
extern undefined4 DAT_003071d4;
extern undefined4 DAT_003071d8;
extern float DAT_003071dc;
extern undefined4 DAT_003071e0;
extern undefined4 DAT_003071e4;
extern uint DAT_003071e8;
extern int *DAT_003071ec;
extern int *DAT_003071f0;
extern int *DAT_003071f4;
extern float DAT_003071f8;
extern int *DAT_003071fc;
extern uint *DAT_00307200;
extern float *DAT_00307204;
extern undefined4 DAT_00307208;
extern int DAT_0030720c;
extern int DAT_00307210;
extern int *DAT_00307214;
extern int DAT_00307218;
extern uint DAT_0030721c;
extern float DAT_0030761c;
extern float DAT_00307620;
extern float *DAT_00307624;
extern float DAT_00307a24;
extern float DAT_00307a28;
extern undefined *DAT_00307a2c;
extern int DAT_00307a30;
extern undefined4 *DAT_00307c94;
extern char s_Actor_JumpStandMoveCave_kcl_00307220[];
extern char s_Actor_JumpStandMove_kcl_00307604[];
extern char s_cState_Down_00307c98[];
extern char s_cState_GoDown_00307a40[];
extern char s_cState_Pushing_00307ca4[];
extern char s_cState_Wait_00307a34[];
extern char s_cf_00307220[];
extern char s_cf_00307604[];

// USA 00306CE0 <- EU 00306CBC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003071cc int
// GLOBAL DAT_003071d0 undefined4 *
// GLOBAL DAT_003071d4 undefined4
// GLOBAL DAT_003071d8 undefined4
// GLOBAL DAT_003071dc float
// GLOBAL DAT_003071e0 undefined4
// GLOBAL DAT_003071e4 undefined4
// GLOBAL DAT_003071e8 uint
// GLOBAL DAT_003071ec int *
// GLOBAL DAT_003071f0 int *
// GLOBAL DAT_003071f4 int *
// GLOBAL DAT_003071f8 float
// GLOBAL DAT_003071fc int *
// GLOBAL DAT_00307200 uint *
// GLOBAL DAT_00307204 float *
// GLOBAL DAT_00307208 undefined4
// GLOBAL DAT_0030720c int
// GLOBAL DAT_00307210 int
// GLOBAL DAT_00307214 int *
// GLOBAL DAT_00307218 int
// GLOBAL DAT_0030721c uint
// GLOBAL DAT_0030761c float
// GLOBAL DAT_00307620 float
// GLOBAL DAT_00307624 float *
// GLOBAL DAT_00307a24 float
// GLOBAL DAT_00307a28 float
// GLOBAL DAT_00307a2c undefined *
// GLOBAL DAT_00307a30 int
// GLOBAL DAT_00307c94 undefined4 *
// GLOBAL s_cf_00307604 string
// GLOBAL s_cf_00307220 string
// GLOBAL s_cState_Down_00307c98 string
// GLOBAL s_cState_GoDown_00307a40 string
// GLOBAL s_cState_Pushing_00307ca4 string
// GLOBAL s_cState_Wait_00307a34 string

/* WARNING: Variable defined which should be unmapped: objStack_f0 */
/* WARNING: Variable defined which should be unmapped: objStack_e8 */

undefined4 * func_00306CE0(undefined4 *param_1,uint *param_2)

{
  float *pfVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *extraout_r1;
  undefined4 extraout_r1_00;
  int iVar12;
  code *pcVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint uVar17;
  undefined4 uVar18;
  int *piVar19;
  int *piVar20;
  uint *puVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong lVar30;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define objStack_f0 ((uint *)(albw_frame + 0x0))
  #define objStack_e8 ((uint *)(albw_frame + 0x8))
  #define local_e4 (*(float *)(albw_frame + 0xc))
  #define local_e0 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_dc (*(float *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define local_cc (*(float *)(albw_frame + 0x24))
  #define uStack_a5 (*(undefined1 *)(albw_frame + 0x4b))
  #define local_a4 (*(undefined4 * *)(albw_frame + 0x4c))
  #define local_a0 (*(int *)(albw_frame + 0x50))
  #define local_9c (*(uint * *)(albw_frame + 0x54))
  #define local_98 (*(uint *)(albw_frame + 0x58))
  #define local_94 (*(char * *)(albw_frame + 0x5c))
  #define uStack_90 (*(uint *)(albw_frame + 0x60))
  #define local_8c ((char *)(albw_frame + 0x64))
  #define uStack_4d (*(undefined1 *)(albw_frame + 0xa3))
  #define local_44 (*(int * *)(albw_frame + 0xac))
  puVar21 = objStack_f0;
  piVar3 = func_00150E40(param_1,param_2);
  iVar8 = DAT_003071cc;
  *piVar3 = DAT_003071cc;
  piVar3[200] = iVar8 + 0x54;
  piVar3[0x103] = 0;
  puVar4 = func_0010A794(piVar3 + 0x104);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar16 = puVar4 + -0x104;
  objStack_f0[1] = 0;
  objStack_f0[0] = 1;
  objStack_e8[0] = 0;
  uVar5 = func_0014E428((int)puVar16,1,0,0,1,0,0);
  puVar4[9] = uVar5;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_004EDC9C(puVar6);
  }
  piVar19 = puVar4 + 0xd;
  *piVar19 = (int)puVar7;
  puVar4[0xe] = 0;
  piVar3 = puVar4 + 0xe;
  iVar8 = func_0054D964((int)puVar16,0);
  puVar4[0xf] = iVar8;
  piVar20 = puVar4 + 0xf;
  iVar8 = func_0054D964((int)puVar16,0);
  local_44 = puVar4 + 0x10;
  puVar4[0x10] = iVar8;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034CAA0(puVar6);
  }
  puVar4[0x11] = puVar7;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0034CAA0(puVar6);
  }
  puVar6 = DAT_003071d0;
  puVar4[0x12] = puVar7;
  uVar5 = puVar6[1];
  puVar4[0x15] = *puVar6;
  puVar4[0x16] = uVar5;
  uVar5 = DAT_003071d4;
  puVar4[0x13] = DAT_003071d4;
  puVar4[0x14] = puVar16;
  uVar14 = puVar6[2];
  uVar22 = puVar6[3];
  puVar4[0x17] = uVar5;
  puVar4[0x18] = puVar16;
  puVar4[0x19] = uVar14;
  puVar4[0x1a] = uVar22;
  local_e0 = puVar4 + 0x1b;
  uVar5 = puVar6[5];
  puVar4[0x1d] = puVar6[4];
  puVar4[0x1e] = uVar5;
  uVar5 = DAT_003071d8;
  *local_e0 = DAT_003071d8;
  puVar4[0x1c] = puVar16;
  uVar14 = puVar6[6];
  local_a4 = puVar4 + 0x1f;
  uVar22 = puVar6[7];
  puVar4[0x20] = puVar16;
  puVar4[0x21] = uVar14;
  puVar4[0x22] = uVar22;
  fVar28 = DAT_003071dc;
  puVar4[0x1f] = uVar5;
  puVar4[0x23] = ALBW_AS_U32(fVar28);
  puVar4[0x24] = ALBW_AS_U32(fVar28);
  puVar4[0x25] = ALBW_AS_U32(fVar28);
  uVar14 = DAT_003071e4;
  uVar5 = DAT_003071e0;
  *(bool *)((int)puVar4 + 0x99) = *(short *)((int)param_2 + 0x32) != 0;
  puVar4[0x2c] = uVar5;
  puVar4[0x2d] = uVar14;
  puVar4[0x2b] = 0;
  lVar30 = (ulonglong)DAT_003071e8 << 0x20;
  *(undefined1 *)(puVar4 + 0x2e) = 0;
  iVar8 = func_00588BE4((int)puVar16);
  if (iVar8 == *DAT_003071ec) {
    *(undefined1 *)(puVar4 + 0x26) = 0;
  }
  else {
    *(undefined1 *)(puVar4 + 0x26) = 1;
  }
  iVar8 = func_00588BE4((int)puVar16);
  if ((iVar8 == *DAT_003071f0) || (iVar8 = func_00588BE4((int)puVar16), iVar8 == *DAT_003071f4)) {
    iVar8 = 0;
    if ((char)param_2[0x16] == '\0') {
      puVar7 = (undefined4 *)func_0010BAB4(0x88);
      piVar10 = (int *)0x0;
      if (puVar7 != (undefined4 *)0x0) {
        piVar10 = func_002758CC(puVar7,(int *)param_2);
      }
      puVar4[0xc] = piVar10;
    }
    else {
      local_e4 = DAT_003071f8;
      do {
        puVar7 = (undefined4 *)
                 func_0052FBDC(*DAT_003071fc + 0x3dbbc,(int)*(short *)((int)puVar4 + -0x3b2),0);
        if (puVar7 != (undefined4 *)0x0) {
          if (((*DAT_00307200 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_00307200), iVar9 != 0)
             ) {
            *DAT_00307204 = local_e4;
          }
          iVar9 = (**(code **)*puVar7)(puVar7,DAT_00307204);
          if (iVar9 == 0) {
            puVar7 = (undefined4 *)0x0;
          }
          if (puVar7 != (undefined4 *)0x0) {
            func_00115C70(&local_d4,(float *)(puVar4 + -0x10),(float *)(puVar7 + 0xf4));
            puVar4[0x23] = ALBW_AS_U32(local_d4);
            puVar4[0x24] = ALBW_AS_U32(local_d0);
            puVar4[0x25] = ALBW_AS_U32(local_cc);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)(uint)(byte)param_2[0x16]);
    }
    puVar6 = (undefined4 *)func_0010BAB4(0x48);
    puVar7 = (undefined4 *)0x0;
    if (puVar6 != (undefined4 *)0x0) {
      puVar7 = func_004EDC9C(puVar6);
    }
    puVar4[0xe] = puVar7;
  }
  iVar8 = puVar4[9];
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar8 + 0x80),puVar4[-10],(float *)(puVar4 + -0x10));
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar6,3,DAT_00307208,1);
  }
  iVar8 = DAT_0030720c;
  uVar17 = 0;
  puVar4[10] = puVar7;
  do {
    func_00169688((uint *)puVar4[10],uVar17,(int *)(iVar8 + uVar17 * 8),
                  *(int *)(puVar4[-0x50] + 0x1c8));
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 3);
  func_0016A02C(puVar4[10],-1,(int *)0xffffffff,0);
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0016A2FC(puVar6,2,DAT_00307208,1);
  }
  iVar8 = DAT_00307210;
  uVar17 = 0;
  puVar4[0xb] = puVar7;
  do {
    func_00169608((uint *)puVar4[0xb],uVar17,(int *)(iVar8 + uVar17 * 8),
                  *(int *)(puVar4[-0x50] + 0x1c8));
    uVar5 = (undefined4)((ulonglong)lVar30 >> 0x20);
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 2);
  piVar15 = (int *)0x0;
  func_0016A02C(puVar4[0xb],-1,(int *)0xffffffff,0);
  pcVar13 = *(code **)(*(int *)puVar4[9] + 0x10);
  (*pcVar13)((int *)puVar4[9],0x24);
  piVar10 = DAT_00307214;
  puVar7 = extraout_r1;
  if (puVar4[0xd] != 0) {
    uVar14 = *(undefined4 *)(puVar4[0xf] + 0x5c);
    puVar4[0x27] = uVar14;
    puVar4[0x28] = uVar14;
    *(undefined2 *)(puVar4[0xf] + 0x28) = 0x2a4;
    objStack_f0[1] = CONCAT22((short)(objStack_f0[1] >> 0x10),0x2a4);
    *(undefined2 *)(puVar4[0x10] + 0x28) = 0x2a4;
    *(uint *)(*piVar20 + 0x2c) = *(uint *)(*piVar20 + 0x2c) | 2;
    *(uint *)(*local_44 + 0x2c) = *(uint *)(*local_44 + 0x2c) | 2;
    *(int *)(puVar4[0xd] + 0x18) = *piVar20;
    objStack_e8[0] = puVar4[-0x51];
    func_004EDAD0(*piVar19,objStack_e8);
    pcVar13 = (code *)0x2;
    *(undefined2 *)(*piVar19 + 0x2c) = *(undefined2 *)(puVar4 + -0xef);
    func_004A7F00(*piVar10,*piVar19,2);
    *(undefined4 **)(*piVar19 + 0x28) = local_e0;
    puVar7 = local_e0;
  }
  iVar8 = DAT_00307218;
  if (puVar4[0xe] == 0) goto LAB_003076bc;
  iVar9 = func_00588BE4((int)puVar16);
  if (iVar9 == *DAT_003071f4) {
    local_94 = s_Actor_JumpStandMoveCave_kcl_00307220;
    objStack_f0[1] = (uint)&local_e4;
    objStack_e8[0] = 0x40;
    uStack_a5 = 0;
    local_e4 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_e4) & 0xffffff00));
    objStack_f0[0] = DAT_0030721c;
    func_00111A20((int)objStack_f0,s_Actor_JumpStandMoveCave_kcl_00307220,&uStack_90);
    iVar9 = puVar4[0xe];
  }
  else {
    objStack_f0[1] = (uint)s_Actor_JumpStandMove_kcl_00307604;
    local_94 = local_8c;
    uStack_90 = 0x40;
    uStack_4d = 0;
    local_8c[0] = '\0';
    local_98 = DAT_0030721c;
    func_00111A20((int)&local_98,s_Actor_JumpStandMove_kcl_00307604,objStack_e8);
    iVar9 = puVar4[0xe];
    puVar21 = &local_98;
  }
  func_004EDB28(iVar9,(int)puVar21);
  piVar15 = (int *)param_2[9];
  func_00491624((float *)objStack_f0,param_2[7],param_2[8],(uint)piVar15);
  fVar27 = DAT_00307620;
  fVar29 = DAT_0030761c;
  iVar9 = *(int *)(puVar4[0xe] + 0x14);
  fVar26 = ALBW_AS_F32(objStack_f0[0]) - *(float *)(iVar9 + 0x18);
  bVar24 = DAT_00307620 == fVar26;
  bVar25 = fVar26 <= DAT_00307620;
  if (!bVar25 || bVar24) {
    bVar24 = fVar26 == DAT_0030761c;
    bVar25 = DAT_0030761c <= fVar26;
  }
  if (bVar25 && !bVar24) {
LAB_00307438:
    bVar24 = false;
  }
  else {
    fVar26 = ALBW_AS_F32(objStack_f0[1]) - *(float *)(iVar9 + 0x1c);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = ALBW_AS_F32(objStack_e8[0]) - *(float *)(iVar9 + 0x20);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_e4 - *(float *)(iVar9 + 0x24);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = ALBW_AS_F32(local_e0) - *(float *)(iVar9 + 0x28);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_dc - *(float *)(iVar9 + 0x2c);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_d8 - *(float *)(iVar9 + 0x30);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_d4 - *(float *)(iVar9 + 0x34);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    fVar26 = local_d0 - *(float *)(iVar9 + 0x38);
    bVar24 = DAT_00307620 == fVar26;
    bVar25 = fVar26 <= DAT_00307620;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == DAT_0030761c;
      bVar25 = DAT_0030761c <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_00307438;
    bVar24 = true;
  }
  if (!bVar24) {
    bVar2 = *(byte *)(iVar9 + 0xa8);
    *(byte *)(iVar9 + 0xa8) = bVar2 | 8;
    if ((((objStack_f0[0] == 0x3f800000 && ALBW_AS_F32(objStack_f0[1]) == fVar28) &&
         (ALBW_AS_F32(objStack_e8[0]) == fVar28 && local_e4 == fVar28)) &&
        (local_e0 == (undefined4 *)0x3f800000 && local_dc == fVar28)) &&
       ((local_d8 == fVar28 && local_d4 == fVar28) && local_d0 == 1.0)) {
      *(undefined4 *)(iVar9 + 0x18) = uVar5;
      *(float *)(iVar9 + 0x1c) = fVar28;
      *(float *)(iVar9 + 0x20) = fVar28;
      *(float *)(iVar9 + 0x24) = fVar28;
      *(undefined4 *)(iVar9 + 0x28) = uVar5;
      *(float *)(iVar9 + 0x2c) = fVar28;
      *(float *)(iVar9 + 0x30) = fVar28;
      *(float *)(iVar9 + 0x34) = fVar28;
      *(undefined4 *)(iVar9 + 0x38) = uVar5;
      bVar2 = bVar2 & 0xfb | 8;
    }
    else {
      func_001151CC((undefined4 *)(iVar9 + 0x18),objStack_f0);
      bVar2 = *(byte *)(iVar9 + 0xa8) | 4;
    }
    *(byte *)(iVar9 + 0xa8) = bVar2;
  }
  func_0043625C(*(int **)(puVar4[0xe] + 0x14),puVar4 + -0x10);
  iVar9 = *(int *)(*piVar3 + 0x14);
  fVar26 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar9 + 4);
  bVar24 = fVar27 == fVar26;
  bVar25 = fVar26 <= fVar27;
  if (!bVar25 || bVar24) {
    bVar24 = fVar26 == fVar29;
    bVar25 = fVar29 <= fVar26;
  }
  if (bVar25 && !bVar24) {
LAB_0030755c:
    bVar24 = false;
  }
  else {
    fVar26 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar9 + 8);
    bVar24 = fVar27 == fVar26;
    bVar25 = fVar26 <= fVar27;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == fVar29;
      bVar25 = fVar29 <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_0030755c;
    fVar26 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar9 + 0xc);
    bVar24 = fVar27 == fVar26;
    bVar25 = fVar26 <= fVar27;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == fVar29;
      bVar25 = fVar29 <= fVar26;
    }
    if (bVar25 && !bVar24) goto LAB_0030755c;
    bVar24 = true;
  }
  if (!bVar24) {
    *(byte *)(iVar9 + 0xa8) = *(byte *)(iVar9 + 0xa8) | 8;
    pfVar1 = DAT_00307624;
    fVar26 = ALBW_AS_F32(param_2[4]) - *DAT_00307624;
    bVar24 = fVar27 == fVar26;
    bVar25 = fVar26 <= fVar27;
    if (!bVar25 || bVar24) {
      bVar24 = fVar26 == fVar29;
      bVar25 = fVar29 <= fVar26;
    }
    if (bVar25 && !bVar24) {
LAB_00307654:
      *(uint *)(iVar9 + 4) = param_2[4];
      *(uint *)(iVar9 + 8) = param_2[5];
      *(uint *)(iVar9 + 0xc) = param_2[6];
      bVar2 = *(byte *)(iVar9 + 0xa8) | 2;
    }
    else {
      fVar26 = ALBW_AS_F32(param_2[5]) - DAT_00307624[1];
      bVar24 = fVar27 == fVar26;
      bVar25 = fVar26 <= fVar27;
      if (!bVar25 || bVar24) {
        bVar24 = fVar26 == fVar29;
        bVar25 = fVar29 <= fVar26;
      }
      if (bVar25 && !bVar24) goto LAB_00307654;
      fVar26 = ALBW_AS_F32(param_2[6]) - DAT_00307624[2];
      bVar24 = fVar27 == fVar26;
      bVar25 = fVar26 <= fVar27;
      if (!bVar25 || bVar24) {
        bVar24 = fVar26 == fVar29;
        bVar25 = fVar29 <= fVar26;
      }
      if (bVar25 && !bVar24) goto LAB_00307654;
      *(float *)(iVar9 + 4) = *DAT_00307624;
      piVar15 = (int *)ALBW_PTR_BITS(pfVar1[1]);
      *(int **)(iVar9 + 8) = piVar15;
      *(float *)(iVar9 + 0xc) = pfVar1[2];
      bVar2 = *(byte *)(iVar9 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar9 + 0xa8) = bVar2;
  }
  objStack_f0[0] = puVar4[-0x51];
  func_004EDAD0(puVar4[0xe],objStack_f0);
  pcVar13 = (code *)0x3;
  *(undefined2 *)(*piVar3 + 0x2c) = 0xffff;
  func_004A7F00(*piVar10,*piVar3,3);
  func_004ED9C8(*piVar3);
  *(undefined4 **)(*piVar3 + 0x28) = local_a4;
  puVar7 = local_a4;
LAB_003076bc:
  puVar4[-0x4c] = puVar4[-0x4c] | 1;
  func_00169A80((int *)puVar4[10],puVar7,pcVar13,piVar15);
  uVar5 = 0;
  func_00168E9C((int *)puVar4[10],puVar4[9],(int *)0x0);
  func_00169A80((int *)puVar4[0xb],extraout_r1_00,uVar5,piVar15);
  func_00168E9C((int *)puVar4[0xb],puVar4[9],(int *)0x0);
  func_004CEAF0(puVar4[9]);
  fVar29 = DAT_00307a24;
  if (puVar4[0xf] != 0) {
    local_d0 = ALBW_AS_F32(puVar4[0x27]);
    *(float *)(puVar4[0xf] + 0x5c) = local_d0;
    local_d0 = local_d0 * fVar29;
    iVar9 = *piVar20;
    local_d4 = fVar28;
    local_cc = fVar28;
    func_00115C54((float *)&local_e0,(float *)(puVar4 + -0x10),&local_d4);
    *(undefined4 **)(iVar9 + 4) = local_e0;
    *(float *)(iVar9 + 8) = local_dc;
    *(float *)(iVar9 + 0xc) = local_d8;
    func_004356B4((int *)*piVar20);
  }
  piVar19 = local_44;
  fVar29 = DAT_00307a28;
  if (puVar4[0x10] != 0) {
    fVar27 = ALBW_AS_F32(puVar4[0x27]);
    *(float *)(puVar4[0x10] + 0x5c) = fVar27;
    local_e0 = (undefined4 *)ALBW_PTR_BITS((fVar27 * fVar29));
    iVar9 = *local_44;
    local_e4 = fVar28;
    local_dc = fVar28;
    func_00115C54(&local_d8,(float *)(puVar4 + -0x10),&local_e4);
    *(float *)(iVar9 + 4) = local_d8;
    *(float *)(iVar9 + 8) = local_d4;
    *(float *)(iVar9 + 0xc) = local_d0;
    func_004356B4((int *)*piVar19);
  }
  if (puVar4[0xe] != 0) {
    func_0043625C(*(int **)(puVar4[0xe] + 0x14),puVar4 + -0x10);
    func_004ED9C8(*piVar3);
  }
  puVar4[5] = puVar16;
  *(undefined1 *)((int)puVar4 + 6) = 4;
  iVar9 = func_0010BA78(0x40);
  puVar7 = DAT_003071d0;
  puVar4[6] = iVar9;
  puVar4[7] = iVar9 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar12 = 4;
  puVar6 = (undefined4 *)(iVar9 + -8);
  do {
    uVar5 = puVar7[0x1b];
    iVar12 = iVar12 + -1;
    puVar6[2] = puVar7[0x1a];
    puVar6[3] = uVar5;
    uVar5 = puVar7[0x1b];
    puVar6[4] = puVar7[0x1a];
    puVar6[5] = uVar5;
    puVar6 = puVar6 + 4;
  } while (iVar12 != 0);
  bVar2 = *(byte *)((int)puVar4 + 6);
  uVar17 = (uint)bVar2;
  puVar6 = (undefined4 *)func_0010BA78(uVar17 << 3);
  puVar4[8] = puVar6;
  if (uVar17 != 0) {
    puVar11 = puVar6 + -2;
    if ((bVar2 & 1) != 0) {
      uVar5 = puVar7[0xd];
      *puVar6 = puVar7[0xc];
      puVar6[1] = uVar5;
      puVar11 = puVar6;
    }
    for (iVar9 = (int)uVar17 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
      uVar5 = puVar7[0xd];
      puVar11[2] = puVar7[0xc];
      puVar11[3] = uVar5;
      uVar5 = puVar7[0xd];
      puVar11[4] = puVar7[0xc];
      puVar11[5] = uVar5;
      puVar11 = puVar11 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar9 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar9 = func_00100118((int)(puVar7 + 2),DAT_00307a2c,0x24,4);
  }
  if (iVar9 != 0) {
    puVar4[2] = 4;
    puVar4[3] = iVar9;
  }
  iVar9 = DAT_00307a30;
  puVar4[-0x2f] = puVar4;
  *(undefined2 *)(iVar9 + (int)puVar16) = 4;
  local_9c = (uint *)s_cState_Wait_00307a34;
  local_a0 = iVar8;
  iVar9 = puVar4[3];
  puVar21 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307960;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307960:
  iVar9 = *(int *)(iVar9 + 8);
  if (iVar9 <= (int)uVar17) {
    uVar17 = iVar9 - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar14 = DAT_003071d0[0xc];
  uVar22 = DAT_003071d0[9];
  uVar23 = DAT_003071d0[10];
  uVar18 = DAT_003071d0[0xb];
  uVar5 = DAT_003071d0[0xd];
  *puVar7 = DAT_003071d0[8];
  puVar7[1] = uVar22;
  puVar7 = (undefined4 *)puVar4[7];
  puVar7[1] = uVar18;
  *puVar7 = uVar23;
  puVar7 = (undefined4 *)puVar4[8];
  puVar7[1] = uVar5;
  *puVar7 = uVar14;
  local_9c = (uint *)s_cState_GoDown_00307a40;
  local_a0 = iVar8;
  if ((uint)puVar4[2] < 2) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x24;
  }
  puVar21 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307a5c;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307a5c:
  if (*(int *)(iVar9 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  iVar9 = puVar4[6];
  uVar5 = *DAT_00307c94;
  uVar14 = DAT_00307c94[1];
  uVar22 = DAT_00307c94[3];
  uVar18 = DAT_00307c94[4];
  uVar23 = DAT_00307c94[5];
  *(undefined4 *)(iVar9 + 8) = DAT_00307c94[2];
  *(undefined4 *)(iVar9 + 0xc) = uVar22;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 8) = uVar18;
  *(undefined4 *)(iVar9 + 0xc) = uVar23;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 8) = uVar5;
  *(undefined4 *)(iVar9 + 0xc) = uVar14;
  local_9c = (uint *)s_cState_Down_00307c98;
  local_a0 = iVar8;
  if ((uint)puVar4[2] < 3) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x48;
  }
  puVar21 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307b20;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307b20:
  if (*(int *)(iVar9 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  puVar7 = DAT_003071d0;
  iVar9 = puVar4[6];
  uVar5 = DAT_003071d0[0xc];
  uVar14 = DAT_003071d0[0x14];
  uVar22 = DAT_003071d0[0x13];
  uVar18 = DAT_003071d0[0x15];
  uVar23 = DAT_003071d0[0xd];
  *(undefined4 *)(iVar9 + 0x10) = DAT_003071d0[0x12];
  *(undefined4 *)(iVar9 + 0x14) = uVar22;
  iVar9 = puVar4[7];
  *(undefined4 *)(iVar9 + 0x10) = uVar14;
  *(undefined4 *)(iVar9 + 0x14) = uVar18;
  iVar9 = puVar4[8];
  *(undefined4 *)(iVar9 + 0x10) = uVar5;
  *(undefined4 *)(iVar9 + 0x14) = uVar23;
  local_9c = (uint *)s_cState_Pushing_00307ca4;
  local_a0 = iVar8;
  if ((uint)puVar4[2] < 4) {
    iVar9 = puVar4[3];
  }
  else {
    iVar9 = puVar4[3] + 0x6c;
  }
  puVar21 = *(uint **)(iVar9 + 4);
  (**(code **)(iVar8 + 8))(&local_a0);
  uVar17 = 0;
  do {
    if (*(char *)((int)local_9c + uVar17) == '\0') {
      if ((int)uVar17 < 0x40001) goto LAB_00307bf8;
      break;
    }
    uVar17 = uVar17 + 1;
  } while ((int)uVar17 < 0x40001);
  uVar17 = 0;
LAB_00307bf8:
  if (*(int *)(iVar9 + 8) <= (int)uVar17) {
    uVar17 = *(int *)(iVar9 + 8) - 1;
  }
  (**(code **)(local_a0 + 8))(&local_a0);
  func_0010E3C4(puVar21,local_9c,uVar17);
  *(undefined1 *)((int)puVar21 + uVar17) = 0;
  iVar8 = puVar4[6];
  uVar5 = puVar7[0xc];
  uVar18 = puVar7[0x17];
  uVar23 = puVar7[0xd];
  uVar14 = puVar7[0x18];
  uVar22 = puVar7[0x19];
  *(undefined4 *)(iVar8 + 0x18) = puVar7[0x16];
  *(undefined4 *)(iVar8 + 0x1c) = uVar18;
  iVar8 = puVar4[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar14;
  *(undefined4 *)(iVar8 + 0x1c) = uVar22;
  iVar8 = puVar4[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar5;
  *(undefined4 *)(iVar8 + 0x1c) = uVar23;
  func_006649C8(puVar4,0);
  uVar17 = param_2[10];
  *(char *)(puVar4 + 0x2a) = (char)(ushort)uVar17;
  if (2 < ((ushort)uVar17 & 0xff)) {
    *(undefined1 *)(puVar4 + 0x2a) = 0;
  }
  return puVar16;
}

