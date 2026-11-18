#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3FD8(int param_1);
extern int func_001E40F4(int param_1,int param_2);
extern void func_001E4378(int param_1);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_003030CC(int param_1);
extern int func_00303420(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00581D60(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00664740(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_00000040;
extern int DAT_00303b04;
extern float DAT_00303b08;
extern int *DAT_00303b0c;
extern float DAT_00303b10;
extern uint *DAT_00303b14;
extern int DAT_00303b18;
extern int *DAT_00303b34;
extern undefined4 DAT_003041a4;
extern int DAT_003041a8;
extern int *DAT_003041ac;
extern int DAT_003041b0;
extern int DAT_003041b4;
extern int DAT_003041b8;
extern undefined4 *DAT_003041bc;
extern undefined *DAT_003041c0;
extern int DAT_003041c4;
extern undefined4 *DAT_003041e8;
extern undefined DAT_00304208;
extern char s_Actor_DoorBossGanon_kcl_00303b1c[];
extern char s_Actor_DoorBossGanon_open_kcl_00303b38[];
extern char s_cState_OpenDoor_003041ec[];
extern char s_cState_Stay_003041fc[];
extern char s_cState_UnlockKey_003041d4[];
extern char s_cState_Wait_003041c8[];
extern char s_cf_00303b1c[];
extern char s_cf_00303b38[];

// USA 0030372C <- EU 00303708 (Ghidra, non-matching)
// GLOBAL DAT_00000040 undefined
// GLOBAL DAT_00303b04 int
// GLOBAL DAT_00303b08 float
// GLOBAL DAT_00303b0c int *
// GLOBAL DAT_00303b10 float
// GLOBAL DAT_00303b14 uint *
// GLOBAL DAT_00303b18 int
// GLOBAL DAT_00303b34 int *
// GLOBAL DAT_003041a4 undefined4
// GLOBAL DAT_003041a8 int
// GLOBAL DAT_003041ac int *
// GLOBAL DAT_003041b0 int
// GLOBAL DAT_003041b4 int
// GLOBAL DAT_003041b8 int
// GLOBAL DAT_003041bc undefined4 *
// GLOBAL DAT_003041c0 undefined *
// GLOBAL DAT_003041c4 int
// GLOBAL DAT_003041e8 undefined4 *
// GLOBAL DAT_00304208 undefined
// GLOBAL s_cf_00303b1c string
// GLOBAL s_cf_00303b38 string
// GLOBAL s_cState_OpenDoor_003041ec string
// GLOBAL s_cState_Stay_003041fc string
// GLOBAL s_cState_UnlockKey_003041d4 string
// GLOBAL s_cState_Wait_003041c8 string

undefined4 * func_0030372C(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int extraout_r1;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  undefined1 *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined4 uVar20;
  float fparam_0;
  float fVar21;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define afStack_ec ((float *)(albw_frame + 0x4))
  #define local_c8 (*(int *)(albw_frame + 0x28))
  #define local_c4 (*(uint * *)(albw_frame + 0x2c))
  #define local_c0 (*(uint * *)(albw_frame + 0x30))
  #define local_bc (*(uint * *)(albw_frame + 0x34))
  #define local_b8 (*(uint * *)(albw_frame + 0x38))
  #define local_b4 (*(uint *)(albw_frame + 0x3c))
  #define local_b0 ((uint *)(albw_frame + 0x40))
  #define uStack_75 (*(undefined1 *)(albw_frame + 0x7b))
  #define local_74 (*(float *)(albw_frame + 0x7c))
  #define local_70 (*(float *)(albw_frame + 0x80))
  #define local_6c (*(float *)(albw_frame + 0x84))
  #define local_68 (*(float *)(albw_frame + 0x88))
  #define local_64 (*(float *)(albw_frame + 0x8c))
  #define local_60 (*(float *)(albw_frame + 0x90))
  #define local_5c (*(float *)(albw_frame + 0x94))
  #define local_58 (*(float *)(albw_frame + 0x98))
  #define local_54 (*(float *)(albw_frame + 0x9c))
  #define fStack_50 (*(float *)(albw_frame + 0xa0))
  #define local_40 (*(int *)(albw_frame + 0xb0))
  #define local_3c (*(uint * *)(albw_frame + 0xb4))
  #define local_38 ((uint *)(albw_frame + 0xb8))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xc4))
  #define local_28 (*(uint * *)(albw_frame + 0xc8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = func_001E4414(param_1,param_2);
  iVar2 = DAT_00303b04;
  *piVar4 = DAT_00303b04;
  piVar4[200] = iVar2 + 0x5c;
  puVar5 = func_0010A794(piVar4 + 0x126);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  *(undefined1 *)(puVar5 + 0xf) = 4;
  puVar5[0x10] = 0;
  fVar21 = DAT_00303b08;
  puVar5[0x11] = 6;
  puVar5[0x12] = ALBW_AS_U32(fVar21);
  puVar5[0x13] = 0;
  *(undefined1 *)(puVar5 + 0x14) = 0;
  puVar12 = puVar5 + -0x126;
  *(undefined1 *)((int)puVar5 + 0x51) = 0;
  bVar3 = func_00588BF0((int)puVar12,0);
  if (bVar3) {
    *(undefined1 *)((int)puVar5 + -0x1c1) = 1;
  }
  else {
    piVar4 = (int *)0x0;
    uVar6 = func_0014E428((int)puVar12,1,0,0,1,0,0);
    puVar5[-7] = uVar6;
    uVar6 = func_00581D60(*DAT_00303b0c);
    puVar5[0x13] = uVar6;
    func_001E3FD8((int)puVar12);
    puVar7 = (undefined4 *)func_0010BAB4(0x48);
    puVar8 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = func_004EDC9C(puVar7);
    }
    iVar2 = DAT_00303b18;
    puVar19 = DAT_00303b14;
    fparam_0 = DAT_00303b10;
    piVar13 = puVar5 + -5;
    puVar5[-5] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      local_b4 = 0x40;
      local_74 = ALBW_AS_F32(((uint)ALBW_AS_U32(local_74) & 0xffffff));
      (*(undefined1 *)((char *)&local_b0[0] + 0)) = 0;
      local_bc = puVar19;
      local_3c = (uint *)s_Actor_DoorBossGanon_kcl_00303b1c;
      local_40 = iVar2;
      local_b8 = local_b0;
      (**(code **)(iVar2 + 8))(&local_40);
      uVar14 = 0;
      do {
        if (*(char *)((int)local_3c + uVar14) == '\0') {
          if ((int)uVar14 < 0x40001) goto LAB_00303880;
          break;
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < 0x40001);
      uVar14 = 0;
LAB_00303880:
      if ((int)local_b4 <= (int)uVar14) {
        uVar14 = local_b4 - 1;
      }
      (**(code **)(local_40 + 8))(&local_40);
      func_0010E3C4(local_b0,local_3c,uVar14);
      *(undefined1 *)((int)local_b0 + uVar14) = 0;
      func_004EDB28(puVar5[-5],(int)&local_bc);
      piVar4 = (int *)0x0;
      local_70 = fVar21;
      local_6c = fparam_0;
      local_68 = fparam_0;
      local_64 = fparam_0;
      local_60 = fVar21;
      local_5c = fparam_0;
      local_58 = fparam_0;
      local_54 = fparam_0;
      fStack_50 = fVar21;
      func_00491624(afStack_ec,0,puVar5[-0x2c],0);
      func_0011549C(&local_70,&local_70,afStack_ec);
      func_00435ED0(*(int *)(*piVar13 + 0x14),&local_70);
      func_0043625C(*(int **)(*piVar13 + 0x14),puVar5 + -0x32);
      func_0043610C(*(int *)(*piVar13 + 0x14),(float *)(local_28 + 4));
      local_38[0] = puVar5[-0x73];
      func_004EDAD0(*piVar13,local_38);
      *(undefined2 *)(*piVar13 + 0x2c) = *(undefined2 *)(puVar5 + -0x111);
      func_004ED9C8(*piVar13);
      func_004A879C(*DAT_00303b34,*piVar13,0);
    }
    puVar7 = (undefined4 *)func_0010BAB4(0x48);
    puVar8 = (undefined4 *)0x0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar8 = func_004EDC9C(puVar7);
    }
    piVar13 = puVar5 + 0xe;
    puVar5[0xe] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      local_b8 = (uint *)&DAT_00000040;
      uStack_75 = 0;
      local_b4 = local_b4 & 0xffffff00;
      local_c0 = puVar19;
      local_3c = (uint *)s_Actor_DoorBossGanon_open_kcl_00303b38;
      local_40 = iVar2;
      local_bc = &local_b4;
      (**(code **)(iVar2 + 8))(&local_40);
      puVar15 = (undefined1 *)0x0;
      do {
        if (*(char *)((int)local_3c + (int)puVar15) == '\0') {
          if ((int)puVar15 < 0x40001) goto LAB_00303a04;
          break;
        }
        puVar15 = puVar15 + 1;
      } while ((int)puVar15 < 0x40001);
      puVar15 = (undefined1 *)0x0;
LAB_00303a04:
      if ((int)local_b8 <= (int)puVar15) {
        puVar15 = (undefined1 *)((int)local_b8 + -1);
      }
      (**(code **)(local_40 + 8))(&local_40);
      func_0010E3C4(&local_b4,local_3c,(uint)puVar15);
      *(undefined1 *)((int)&local_b4 + (int)puVar15) = 0;
      func_004EDB28(puVar5[0xe],(int)&local_c0);
      piVar4 = (int *)0x0;
      local_74 = fVar21;
      local_70 = fparam_0;
      local_6c = fparam_0;
      local_68 = fparam_0;
      local_64 = fVar21;
      local_60 = fparam_0;
      local_5c = fparam_0;
      local_58 = fparam_0;
      local_54 = fVar21;
      func_00491624(afStack_ec,0,puVar5[-0x2c],0);
      func_0011549C(&local_74,&local_74,afStack_ec);
      func_00435ED0(*(int *)(*piVar13 + 0x14),&local_74);
      func_0043625C(*(int **)(*piVar13 + 0x14),puVar5 + -0x32);
      func_0043610C(*(int *)(*piVar13 + 0x14),(float *)(local_28 + 4));
      local_38[0] = puVar5[-0x73];
      func_004EDAD0(*piVar13,local_38);
      *(undefined2 *)(*piVar13 + 0x2c) = *(undefined2 *)(puVar5 + -0x111);
      func_004ED9C8(*piVar13);
      func_004A879C(*DAT_00303b34,*piVar13,0);
      *(undefined1 *)(*piVar13 + 0x44) = 0;
    }
    func_001E40F4((int)puVar12,1);
    uVar6 = DAT_003041a4;
    func_00169678((int)puVar12,0,DAT_003041a4);
    func_001E4378((int)puVar12);
    func_001E43F8((int)puVar12,fparam_0);
    func_003030CC((int)puVar12);
    piVar13 = DAT_003041ac;
    bVar3 = func_00584B94(*DAT_003041ac,DAT_003041a8);
    if (bVar3) {
      *(float *)(*(int *)(puVar5[9] + 0x14) + 0x10) = fVar21;
      iVar10 = *(int *)(puVar5[9] + 0x14);
      if (*(float *)(iVar10 + 8) != *(float *)(iVar10 + 0x14)) {
        *(float *)(iVar10 + 8) = *(float *)(iVar10 + 0x14);
        *(undefined1 *)(iVar10 + 0x26) = 1;
      }
    }
    bVar3 = func_00584B94(*piVar13,DAT_003041b0);
    if (bVar3) {
      *(float *)(*(int *)(puVar5[10] + 0x14) + 0x10) = fVar21;
      iVar10 = *(int *)(puVar5[10] + 0x14);
      if (*(float *)(iVar10 + 8) != *(float *)(iVar10 + 0x14)) {
        *(float *)(iVar10 + 8) = *(float *)(iVar10 + 0x14);
        *(undefined1 *)(iVar10 + 0x26) = 1;
      }
    }
    bVar3 = func_00584B94(*piVar13,DAT_003041b4);
    if (bVar3) {
      *(float *)(*(int *)(puVar5[0xb] + 0x14) + 0x10) = fVar21;
      iVar10 = *(int *)(puVar5[0xb] + 0x14);
      if (*(float *)(iVar10 + 8) != *(float *)(iVar10 + 0x14)) {
        *(float *)(iVar10 + 8) = *(float *)(iVar10 + 0x14);
        *(undefined1 *)(iVar10 + 0x26) = 1;
      }
    }
    bVar3 = func_00584B94(*piVar13,DAT_003041b8);
    iVar10 = extraout_r1;
    if (bVar3) {
      *(float *)(*(int *)(puVar5[0xc] + 0x14) + 0x10) = fVar21;
      iVar11 = *(int *)(puVar5[0xc] + 0x14);
      iVar10 = iVar11;
      if (*(float *)(iVar11 + 8) != *(float *)(iVar11 + 0x14)) {
        iVar10 = 1;
        *(float *)(iVar11 + 8) = *(float *)(iVar11 + 0x14);
        *(undefined1 *)(iVar11 + 0x26) = 1;
      }
    }
    func_00303420((int)puVar12,iVar10,uVar6,piVar4);
    puVar5[5] = puVar12;
    *(undefined1 *)((int)puVar5 + 6) = 4;
    iVar10 = func_0010BA78(0x40);
    puVar8 = DAT_003041bc;
    puVar5[6] = iVar10;
    puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
    iVar11 = 4;
    puVar7 = (undefined4 *)(iVar10 + -8);
    do {
      uVar6 = puVar8[0xf];
      iVar11 = iVar11 + -1;
      puVar7[2] = puVar8[0xe];
      puVar7[3] = uVar6;
      uVar6 = puVar8[0xf];
      puVar7[4] = puVar8[0xe];
      puVar7[5] = uVar6;
      puVar7 = puVar7 + 4;
    } while (iVar11 != 0);
    bVar1 = *(byte *)((int)puVar5 + 6);
    uVar14 = (uint)bVar1;
    puVar7 = (undefined4 *)func_0010BA78(uVar14 << 3);
    puVar5[8] = puVar7;
    if (uVar14 != 0) {
      puVar9 = puVar7 + -2;
      if ((bVar1 & 1) != 0) {
        uVar6 = puVar8[5];
        *puVar7 = puVar8[4];
        puVar7[1] = uVar6;
        puVar9 = puVar7;
      }
      for (iVar10 = (int)uVar14 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar6 = puVar8[5];
        puVar9[2] = puVar8[4];
        puVar9[3] = uVar6;
        uVar6 = puVar8[5];
        puVar9[4] = puVar8[4];
        puVar9[5] = uVar6;
        puVar9 = puVar9 + 4;
      }
    }
    puVar8 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
    iVar10 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = 0x24;
      puVar8[1] = 4;
      iVar10 = func_00100118((int)(puVar8 + 2),DAT_003041c0,0x24,4);
    }
    if (iVar10 != 0) {
      puVar5[3] = iVar10;
      puVar5[2] = 4;
    }
    iVar10 = DAT_003041c4;
    puVar5[-0x51] = puVar5;
    *(undefined2 *)(iVar10 + (int)puVar12) = 4;
    local_c4 = (uint *)s_cState_Wait_003041c8;
    local_c8 = iVar2;
    iVar10 = puVar5[3];
    puVar19 = *(uint **)(iVar10 + 4);
    (**(code **)(iVar2 + 8))(&local_c8);
    uVar14 = 0;
    do {
      if (*(char *)((int)local_c4 + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_00303e80;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_00303e80:
    iVar10 = *(int *)(iVar10 + 8);
    if (iVar10 <= (int)uVar14) {
      uVar14 = iVar10 - 1;
    }
    (**(code **)(local_c8 + 8))(&local_c8);
    func_0010E3C4(puVar19,local_c4,uVar14);
    *(undefined1 *)((int)puVar19 + uVar14) = 0;
    puVar8 = (undefined4 *)puVar5[6];
    uVar6 = DAT_003041bc[1];
    uVar16 = DAT_003041bc[2];
    uVar17 = DAT_003041bc[3];
    uVar18 = DAT_003041bc[4];
    uVar20 = DAT_003041bc[5];
    *puVar8 = *DAT_003041bc;
    puVar8[1] = uVar6;
    puVar8 = (undefined4 *)puVar5[7];
    *puVar8 = uVar16;
    puVar8[1] = uVar17;
    puVar8 = (undefined4 *)puVar5[8];
    *puVar8 = uVar18;
    puVar8[1] = uVar20;
    local_c4 = (uint *)s_cState_UnlockKey_003041d4;
    local_c8 = iVar2;
    if ((uint)puVar5[2] < 2) {
      iVar10 = puVar5[3];
    }
    else {
      iVar10 = puVar5[3] + 0x24;
    }
    puVar19 = *(uint **)(iVar10 + 4);
    (**(code **)(iVar2 + 8))(&local_c8);
    uVar14 = 0;
    do {
      if (*(char *)((int)local_c4 + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_00303f38;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_00303f38:
    if (*(int *)(iVar10 + 8) <= (int)uVar14) {
      uVar14 = *(int *)(iVar10 + 8) - 1;
    }
    (**(code **)(local_c8 + 8))(&local_c8);
    func_0010E3C4(puVar19,local_c4,uVar14);
    *(undefined1 *)((int)puVar19 + uVar14) = 0;
    iVar10 = puVar5[6];
    uVar6 = *DAT_003041e8;
    uVar16 = DAT_003041e8[1];
    uVar17 = DAT_003041e8[3];
    uVar18 = DAT_003041e8[4];
    uVar20 = DAT_003041e8[5];
    *(undefined4 *)(iVar10 + 8) = DAT_003041e8[2];
    *(undefined4 *)(iVar10 + 0xc) = uVar17;
    iVar10 = puVar5[7];
    *(undefined4 *)(iVar10 + 8) = uVar18;
    *(undefined4 *)(iVar10 + 0xc) = uVar20;
    iVar10 = puVar5[8];
    *(undefined4 *)(iVar10 + 8) = uVar6;
    *(undefined4 *)(iVar10 + 0xc) = uVar16;
    local_c4 = (uint *)s_cState_OpenDoor_003041ec;
    local_c8 = iVar2;
    if ((uint)puVar5[2] < 3) {
      iVar10 = puVar5[3];
    }
    else {
      iVar10 = puVar5[3] + 0x48;
    }
    puVar19 = *(uint **)(iVar10 + 4);
    (**(code **)(iVar2 + 8))(&local_c8);
    uVar14 = 0;
    do {
      if (*(char *)((int)local_c4 + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_00303ffc;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_00303ffc:
    if (*(int *)(iVar10 + 8) <= (int)uVar14) {
      uVar14 = *(int *)(iVar10 + 8) - 1;
    }
    (**(code **)(local_c8 + 8))(&local_c8);
    func_0010E3C4(puVar19,local_c4,uVar14);
    puVar8 = DAT_003041bc;
    *(undefined1 *)((int)puVar19 + uVar14) = 0;
    iVar10 = puVar5[6];
    uVar16 = puVar8[0xc];
    uVar6 = puVar8[4];
    uVar17 = puVar8[0xb];
    uVar20 = puVar8[0xd];
    uVar18 = puVar8[5];
    *(undefined4 *)(iVar10 + 0x10) = puVar8[10];
    *(undefined4 *)(iVar10 + 0x14) = uVar17;
    iVar10 = puVar5[7];
    *(undefined4 *)(iVar10 + 0x10) = uVar16;
    *(undefined4 *)(iVar10 + 0x14) = uVar20;
    iVar10 = puVar5[8];
    *(undefined4 *)(iVar10 + 0x10) = uVar6;
    *(undefined4 *)(iVar10 + 0x14) = uVar18;
    local_c4 = (uint *)s_cState_Stay_003041fc;
    local_c8 = iVar2;
    if ((uint)puVar5[2] < 4) {
      iVar10 = puVar5[3];
    }
    else {
      iVar10 = puVar5[3] + 0x6c;
    }
    puVar19 = *(uint **)(iVar10 + 4);
    (**(code **)(iVar2 + 8))(&local_c8);
    uVar14 = 0;
    do {
      if (*(char *)((int)local_c4 + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_003040d0;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_003040d0:
    if (*(int *)(iVar10 + 8) <= (int)uVar14) {
      uVar14 = *(int *)(iVar10 + 8) - 1;
    }
    (**(code **)(local_c8 + 8))(&local_c8);
    func_0010E3C4(puVar19,local_c4,uVar14);
    puVar8 = DAT_003041bc;
    *(undefined1 *)((int)puVar19 + uVar14) = 0;
    iVar10 = puVar5[6];
    uVar6 = puVar8[0x11];
    uVar17 = puVar8[0xf];
    uVar18 = puVar8[0x10];
    uVar20 = puVar8[4];
    uVar16 = puVar8[5];
    *(undefined4 *)(iVar10 + 0x18) = puVar8[0xe];
    *(undefined4 *)(iVar10 + 0x1c) = uVar17;
    iVar10 = puVar5[7];
    *(undefined4 *)(iVar10 + 0x18) = uVar18;
    *(undefined4 *)(iVar10 + 0x1c) = uVar6;
    iVar10 = puVar5[8];
    *(undefined4 *)(iVar10 + 0x18) = uVar20;
    *(undefined4 *)(iVar10 + 0x1c) = uVar16;
    func_00664740(puVar5,0);
    puVar8 = (undefined4 *)func_0010BAB4(0x108);
    uVar6 = 0;
    if (puVar8 != (undefined4 *)0x0) {
      local_c4 = (uint *)&DAT_00304208;
      local_c8 = iVar2;
      uVar6 = func_001663BC(puVar8,&local_c8,puVar5[-0x73],2,1);
    }
    puVar5[0xd] = uVar6;
    func_004ECF6C((int)puVar12);
  }
  return puVar12;
}

