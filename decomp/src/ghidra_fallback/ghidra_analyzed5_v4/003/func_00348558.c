#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001DCE44(int param_1,int param_2,int param_3);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_00361A20(int param_1,undefined4 param_2,uint param_3);
extern int func_00362104(int param_1,uint param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_004EBA20(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005462EC(int param_1);
extern int func_0054A588(int param_1);
extern int func_00553720(int param_1,int param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_003488a8;
extern uint DAT_003488ac;
extern undefined4 DAT_003488b0;
extern undefined4 DAT_003488b4;
extern uint *DAT_003488b8;
extern undefined4 *DAT_003488bc;
extern int *DAT_003488c0;
extern float *DAT_003488c4;
extern uint DAT_003488c8;
extern undefined4 *DAT_003488cc;
extern int *DAT_003488d0;
extern float DAT_003488d4;
extern float DAT_003488d8;
extern uint *DAT_00348e30;
extern undefined4 *DAT_00348e34;
extern undefined4 DAT_00348e38;
extern int DAT_00348e58;
extern int *DAT_00348e5c;
extern int *DAT_00348e78;
extern int *DAT_00348e7c;
extern char s_SE_PL_OPEN_DOOR_NG_HOUSE_00348e3c[];
extern char s_SE_PV_CALL_00349108[];
extern char s_SE_PV_WAIT_00349114[];
extern char s_SE_S_DECIDE_DO_BUTTON_00348e60[];
extern char s_SE_S_NG_00349120[];
extern char s_SE_S_TOUCH_TELEPHONE_00348e80[];

// USA 00348558 <- EU 00348534 (Ghidra, non-matching)
// GLOBAL DAT_003488a8 int *
// GLOBAL DAT_003488ac uint
// GLOBAL DAT_003488b0 undefined4
// GLOBAL DAT_003488b4 undefined4
// GLOBAL DAT_003488b8 uint *
// GLOBAL DAT_003488bc undefined4 *
// GLOBAL DAT_003488c0 int *
// GLOBAL DAT_003488c4 float *
// GLOBAL DAT_003488c8 uint
// GLOBAL DAT_003488cc undefined4 *
// GLOBAL DAT_003488d0 int *
// GLOBAL DAT_003488d4 float
// GLOBAL DAT_003488d8 float
// GLOBAL DAT_00348e30 uint *
// GLOBAL DAT_00348e34 undefined4 *
// GLOBAL DAT_00348e38 undefined4
// GLOBAL DAT_00348e58 int
// GLOBAL DAT_00348e5c int *
// GLOBAL DAT_00348e78 int *
// GLOBAL DAT_00348e7c int *
// GLOBAL s_SE_PL_OPEN_DOOR_NG_HOUSE_00348e3c string
// GLOBAL s_SE_PV_CALL_00349108 string
// GLOBAL s_SE_PV_WAIT_00349114 string
// GLOBAL s_SE_S_DECIDE_DO_BUTTON_00348e60 string
// GLOBAL s_SE_S_NG_00349120 string
// GLOBAL s_SE_S_TOUCH_TELEPHONE_00348e80 string

undefined4 func_00348558(int param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint extraout_r1;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int *piVar13;
  int *piVar14;
  float fVar15;
  ulonglong uVar16;
  _Alignas(8) unsigned char albw_frame[0xf0];
  #define local_f0 (*(int *)(albw_frame + 0x0))
  #define local_ec (*(char * *)(albw_frame + 0x4))
  #define local_e8 (*(int *)(albw_frame + 0x8))
  #define local_e4 (*(char * *)(albw_frame + 0xc))
  #define local_e0 (*(float *)(albw_frame + 0x10))
  #define uStack_dc (*(undefined4 *)(albw_frame + 0x14))
  #define local_d8 (*(float *)(albw_frame + 0x18))
  #define local_d4 (*(float *)(albw_frame + 0x1c))
  #define local_d0 (*(float *)(albw_frame + 0x20))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_b8 (*(float * *)(albw_frame + 0x38))
  #define local_b4 (*(float * *)(albw_frame + 0x3c))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_9c (*(undefined4 *)(albw_frame + 0x54))
  #define local_98 (*(undefined4 *)(albw_frame + 0x58))
  #define local_94 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x60))
  #define local_8c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_88 (*(uint *)(albw_frame + 0x68))
  #define local_84 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x70))
  #define local_7c (*(undefined4 *)(albw_frame + 0x74))
  #define local_78 (*(undefined4 *)(albw_frame + 0x78))
  #define local_74 (*(undefined4 *)(albw_frame + 0x7c))
  #define local_70 (*(undefined1 *)(albw_frame + 0x80))
  #define local_6f (*(undefined1 *)(albw_frame + 0x81))
  #define local_6c (*(float *)(albw_frame + 0x84))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x88))
  #define fStack_64 (*(float *)(albw_frame + 0x8c))
  #define local_58 (*(float * *)(albw_frame + 0x98))
  #define local_50 (*(float *)(albw_frame + 0xa0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0xa4))
  #define fStack_48 (*(float *)(albw_frame + 0xa8))
  #define fStack_44 (*(float *)(albw_frame + 0xac))
  #define local_40 (*(undefined4 *)(albw_frame + 0xb0))
  #define local_38 (*(float *)(albw_frame + 0xb8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xbc))
  #define fStack_30 (*(float *)(albw_frame + 0xc0))
  iVar3 = *(int *)(param_1 + 0x2c);
  pbVar12 = (byte *)(iVar3 + 0x20);
  bVar2 = func_00361A20(*(int *)(param_1 + 0x54),param_2,param_3);
  uVar10 = DAT_003488b0;
  uVar5 = DAT_003488ac;
  piVar7 = DAT_003488a8;
  uVar16 = (ulonglong)DAT_003488ac;
  if (bVar2) {
    iVar9 = *(int *)(param_1 + 0x54);
    *(undefined4 *)(iVar3 + 0x3c) = 0;
    piVar13 = *(int **)(iVar9 + 0x39c);
    piVar14 = piVar13 + *(int *)(iVar9 + 0x394);
    if (piVar13 != piVar14) {
      uVar16 = CONCAT44(DAT_003488b4,uVar5);
      do {
        piVar4 = (int *)func_0052FBA0(*piVar7 + 0x3dbbc,*(uint *)*piVar13);
        if (piVar4 != (int *)0x0) {
          if (((*DAT_003488b8 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_003488b8), iVar9 != 0)
             ) {
            *DAT_003488bc = uVar10;
          }
          iVar9 = (**(code **)*piVar4)(piVar4,DAT_003488bc);
          if (iVar9 == 0) {
            piVar4 = (int *)0x0;
          }
          if (piVar4 != (int *)0x0) {
            *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(*piVar13 + 8);
            iVar9 = (**(code **)(*piVar4 + 0x4c))(piVar4,iVar3 + 0x28);
            *pbVar12 = (byte)iVar9;
            uVar5 = func_00553720(param_1,iVar9);
            if (uVar5 != 0) {
              bVar1 = *pbVar12;
              if (bVar1 == 0xb) {
LAB_00348678:
                if ((bVar1 != 0xb) || (*(char *)(*DAT_003488c0 + 0x18) == '\x10')) {
                  local_58 = *(float **)(param_1 + 0x30);
                  func_00115D70(&local_38,DAT_003488c4,ALBW_AS_F32((uVar16 >> 0x20)));
                  local_e0 = local_38;
                  uStack_dc = uStack_34;
                  local_d8 = fStack_30;
                  func_00115C54(&local_38,local_58,&local_e0);
                  local_6c = local_38;
                  uStack_68 = uStack_34;
                  fStack_64 = fStack_30;
                  func_004D80A4(&fStack_44,**(uint **)(param_1 + 0x3c),ALBW_AS_F32((uVar16 >> 0x20)));
                  local_40 = (undefined4)uVar16;
                  func_00115C54(&local_38,&local_6c,&fStack_44);
                  local_50 = local_38;
                  uStack_4c = uStack_34;
                  fStack_48 = fStack_30;
                  uStack_88 = (uint)pbVar12 & 0xffff0000 | DAT_003488c8;
                  local_98 = 0;
                  local_84 = 0xff;
                  local_94 = 0;
                  local_90 = 0;
                  local_8c = 0;
                  local_80 = 0;
                  local_7c = 0;
                  local_78 = 0;
                  local_74 = (undefined4)uVar16;
                  local_70 = 0;
                  local_6f = 1;
                  func_00110D44(&local_d4,(byte *)&local_98,0x2a);
                  local_a8 = (undefined4)uVar16;
                  local_a4 = *DAT_003488cc;
                  uStack_a0 = DAT_003488cc[1];
                  local_9c = DAT_003488cc[2];
                  local_b4 = &local_6c;
                  local_b8 = &local_50;
                  local_c0 = 0x38;
                  iVar9 = func_004A8030(*DAT_003488d0,(int *)&local_d4,3);
                  if (iVar9 != 0) goto LAB_003487c0;
                }
              }
              else if (bVar1 < 0xb) {
                if ((bVar1 == 1 || bVar1 == 4) || bVar1 == 5) goto LAB_00348678;
              }
              else if (bVar1 == 0xc || bVar1 == 0x14) goto LAB_00348678;
              *(int *)(iVar3 + 0x24) = piVar4[0xb3];
              break;
            }
LAB_003487c0:
            *pbVar12 = 0;
          }
        }
        piVar13 = piVar13 + 1;
      } while (piVar13 != piVar14);
    }
  }
  fVar15 = ALBW_AS_F32(uVar16);
  if (*pbVar12 == 0) {
    uVar5 = func_00553720(param_1,7);
    if (uVar5 == 0) {
      uVar5 = func_00553720(param_1,8);
      if (uVar5 == 0) {
        uVar5 = func_00553720(param_1,9);
        goto joined_r0x003488f0;
      }
      uVar5 = func_00362104(*(int *)(param_1 + 0x54),extraout_r1);
      func_004D80A4(&local_d8,**(uint **)(param_1 + 0x3c),DAT_003488d4);
      iVar9 = *(int *)(*(int *)(param_1 + 0x28) + 0x5f4);
      local_d4 = fVar15;
      if ((uVar5 & ~((uint)ALBW_AS_U32(DAT_003488d8) <
                     (uint)ALBW_AS_U32((*(float *)(iVar9 + 0x3b64) * local_d8 +
                            *(float *)(iVar9 + 0x3b68) * fVar15 +
                           *(float *)(iVar9 + 0x3b6c) * local_d0)) & uVar5)) == 0) goto LAB_003488a0;
    }
    else {
      *pbVar12 = 7;
    }
  }
  else if (*pbVar12 == 0x17) {
    uVar5 = func_00553720(param_1,8);
    if (uVar5 == 0) {
      uVar5 = func_00553720(param_1,9);
joined_r0x003488f0:
      if (uVar5 != 0) {
        *pbVar12 = 9;
      }
    }
    else {
LAB_003488a0:
      *pbVar12 = 8;
    }
  }
  if ((**(uint **)(*(int *)(param_1 + 0x48) + 0x14) & 1) == 0) {
    return 0;
  }
  switch(*pbVar12) {
  case 0:
    uVar5 = func_00553720(param_1,4);
    if ((uVar5 != 0) &&
       (puVar6 = (undefined4 *)func_002D55D0(param_1,0x6b), puVar6 != (undefined4 *)0x0)) {
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 5) = 0;
      return 1;
    }
    break;
  case 1:
  case 0x18:
    uVar10 = *(undefined4 *)(iVar3 + 0x24);
    uVar11 = *(undefined4 *)(iVar3 + 0x28);
    *(undefined1 *)(param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0x7c) = uVar10;
    *(undefined4 *)(param_1 + 0x78) = uVar11;
    break;
  case 2:
    puVar6 = (undefined4 *)func_0052FBA0(*piVar7 + 0x3dbbc,*(uint *)(iVar3 + 0x24));
    if (((*DAT_00348e30 & 1) == 0) && (iVar9 = func_00100174((int *)DAT_00348e30), iVar9 != 0)) {
      *DAT_00348e34 = DAT_00348e38;
    }
    if ((puVar6 == (undefined4 *)0x0) ||
       (iVar9 = (**(code **)*puVar6)(puVar6,DAT_00348e34), iVar9 == 0)) {
      puVar6 = (undefined4 *)0x0;
    }
    if ((puVar6 != (undefined4 *)0x0) && (iVar9 = func_0054A588((int)puVar6), iVar9 != 0)) {
      puVar6 = (undefined4 *)func_002D55D0(param_1,0x78);
      if (puVar6 != (undefined4 *)0x0) {
        local_e4 = s_SE_PL_OPEN_DOOR_NG_HOUSE_00348e3c;
        local_e8 = DAT_00348e58;
        func_004EA104(*DAT_00348e5c,&local_e8,0);
        *puVar6 = *(undefined4 *)(iVar3 + 0x24);
        return 1;
      }
      break;
    }
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x78);
    goto joined_r0x00348b24;
  case 3:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x79);
joined_r0x00348b24:
    if (puVar6 != (undefined4 *)0x0) {
LAB_00348b28:
      *puVar6 = *(undefined4 *)(iVar3 + 0x24);
      return 1;
    }
    break;
  case 4:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x6b);
    goto joined_r0x00348b64;
  case 5:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x70);
joined_r0x00348b64:
    if (puVar6 != (undefined4 *)0x0) {
LAB_00348b68:
      *puVar6 = *(undefined4 *)(iVar3 + 0x24);
      puVar6[1] = *(undefined4 *)(iVar3 + 0x3c);
      puVar6[2] = *(undefined4 *)(iVar3 + 0x30);
      puVar6[3] = *(undefined4 *)(iVar3 + 0x34);
      puVar6[4] = *(undefined4 *)(iVar3 + 0x38);
      *(undefined1 *)(puVar6 + 5) = 1;
      return 1;
    }
    break;
  case 6:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x72);
    goto joined_r0x00348bc8;
  case 7:
    iVar3 = func_002D55D0(param_1,0x6e);
    goto joined_r0x00349044;
  case 8:
    bVar2 = func_005462EC(*(int *)(*(int *)(param_1 + 0x28) + 0x5f8));
    if (!bVar2) {
      local_e4 = s_SE_S_NG_00349120;
      local_e8 = DAT_00348e58;
      func_00587F74(*DAT_00348e5c,&local_e8,0);
      uVar5 = func_00553720(param_1,4);
      if ((uVar5 != 0) &&
         (puVar6 = (undefined4 *)func_002D55D0(param_1,0x6b), puVar6 != (undefined4 *)0x0)) {
        *puVar6 = 0;
        *(undefined1 *)(puVar6 + 5) = 0;
        return 1;
      }
      break;
    }
    iVar3 = func_001DCE44(*(int *)(param_1 + 0x28),0,0);
    goto joined_r0x00349044;
  case 9:
    iVar3 = func_001DCE44(*(int *)(param_1 + 0x28),0,0);
joined_r0x00349044:
    if (iVar3 != 0) {
      return 1;
    }
    break;
  case 0xb:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x91);
    if (puVar6 != (undefined4 *)0x0) {
      local_e4 = s_SE_S_DECIDE_DO_BUTTON_00348e60;
      local_e8 = DAT_00348e58;
      func_00587F74(*DAT_00348e5c,&local_e8,0);
      *puVar6 = *(undefined4 *)(iVar3 + 0x24);
      return 1;
    }
    break;
  case 0xc:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x92);
    if (puVar6 == (undefined4 *)0x0) break;
    goto LAB_00348c4c;
  case 0xd:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x93);
    goto joined_r0x00348c98;
  case 0xe:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x94);
joined_r0x00348c98:
    if (puVar6 != (undefined4 *)0x0) {
LAB_00348c4c:
      piVar7 = DAT_00348e5c;
      func_004EBA20(*DAT_00348e5c);
      local_e4 = s_SE_S_DECIDE_DO_BUTTON_00348e60;
      local_e8 = DAT_00348e58;
      func_00587F74(*piVar7,&local_e8,0);
      *puVar6 = *(undefined4 *)(iVar3 + 0x24);
      return 1;
    }
    break;
  case 0xf:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x73);
    goto joined_r0x00349060;
  case 0x10:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x95);
    if (puVar6 != (undefined4 *)0x0) {
      iVar9 = func_0052FBA0(*piVar7 + 0x3dbbc,*(uint *)(iVar3 + 0x24));
      if ((iVar9 != 0) &&
         ((iVar8 = func_00588BE4(iVar9), iVar8 == *DAT_00348e78 ||
          (iVar9 = func_00588BE4(iVar9), iVar9 == *DAT_00348e7c)))) {
        piVar7 = DAT_00348e5c;
        func_004EBA20(*DAT_00348e5c);
        local_e4 = s_SE_S_TOUCH_TELEPHONE_00348e80;
        local_e8 = DAT_00348e58;
        func_00587F74(*piVar7,&local_e8,0);
      }
      *puVar6 = *(undefined4 *)(iVar3 + 0x24);
      return 1;
    }
    break;
  case 0x11:
    piVar7 = (int *)func_0052FBA0(*piVar7 + 0x3dbbc,*(uint *)(iVar3 + 0x24));
    if (((*DAT_003488b8 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_003488b8), iVar3 != 0)) {
      *DAT_003488bc = uVar10;
    }
    if ((piVar7 == (int *)0x0) || (iVar3 = (**(code **)*piVar7)(piVar7,DAT_003488bc), iVar3 == 0)) {
      piVar7 = (int *)0x0;
    }
    if (piVar7 != (int *)0x0) {
      local_e8 = 0;
      local_e4 = (char *)0x0;
      local_d4 = ALBW_NAN_NEG;
      iVar3 = (**(code **)(*piVar7 + 0x50))(piVar7,&local_e8);
      if (iVar3 == 0) {
        func_002D55D0(param_1,(uint)(fVar15 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
        return 1;
      }
    }
    break;
  case 0x12:
    iVar9 = func_002D55D0(param_1,0x80);
    if (iVar9 == 0) break;
    goto LAB_00348ecc;
  case 0x13:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x76);
joined_r0x00349060:
    if (puVar6 == (undefined4 *)0x0) break;
    goto LAB_00348b28;
  case 0x14:
    puVar6 = (undefined4 *)func_002D55D0(param_1,0x6f);
joined_r0x00348bc8:
    if (puVar6 == (undefined4 *)0x0) break;
    goto LAB_00348b68;
  case 0x15:
    iVar9 = func_002D55D0(param_1,0x81);
    goto joined_r0x00349094;
  case 0x16:
    iVar8 = func_002D55D0(param_1,0x82);
    iVar9 = DAT_00348e58;
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 0x24);
      local_e4 = s_SE_PV_CALL_00349108;
      local_e8 = iVar9;
      func_004EAF8C(*DAT_00348e5c,&local_e8,0);
      return 1;
    }
    break;
  case 0x17:
    iVar8 = func_002D55D0(param_1,0x81);
    iVar9 = DAT_00348e58;
    if (iVar8 != 0) {
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar3 + 0x24);
      local_e4 = s_SE_PV_WAIT_00349114;
      local_e8 = iVar9;
      func_004EAF8C(*DAT_00348e5c,&local_e8,0);
      return 1;
    }
    break;
  case 0x1a:
    iVar9 = func_002D55D0(param_1,0x81);
joined_r0x00349094:
    if (iVar9 != 0) {
LAB_00348ecc:
      *(undefined4 *)(iVar9 + 8) = *(undefined4 *)(iVar3 + 0x24);
      return 1;
    }
    break;
  case 0x1b:
    iVar9 = func_002D55D0(param_1,0xaa);
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 4) = *(undefined4 *)(iVar3 + 0x24);
      return 1;
    }
  }
  if ((*(int *)(*(int *)(param_1 + 0x40) + 4) != 0x3f800000) && (*pbVar12 == 0)) {
    local_ec = s_SE_S_NG_00349120;
    local_f0 = DAT_00348e58;
    func_00587F74(*DAT_00348e5c,&local_f0,0);
  }
  return 0;
}

