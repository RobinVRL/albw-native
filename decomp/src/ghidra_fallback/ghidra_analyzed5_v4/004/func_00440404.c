#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00199554(undefined4 *param_1,int *param_2,int *param_3);
extern int func_002313DC(int param_1);
extern int func_00232384(int param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_0031C064(int param_1,uint param_2);
extern int func_0031C7D4(undefined4 *param_1,int *param_2,int *param_3);
extern int func_0038A928(int param_1,int param_2,undefined2 param_3);
extern int func_0038AAF4(undefined4 *param_1,int *param_2,int param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004A50E8(int param_1,int *param_2,int *param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int func_0051E300(int param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int DAT_004407d0;
extern undefined *DAT_004407d4;
extern uint DAT_004407d8;
extern int DAT_004407f0;
extern undefined DAT_00440814;
extern undefined DAT_00440818;
extern undefined *DAT_0044084c;
extern undefined4 DAT_00440860;
extern undefined *DAT_00440864;
extern int DAT_00440bc8;
extern undefined4 DAT_00440bcc;
extern undefined4 DAT_00440bdc;
extern undefined4 DAT_00440be0;
extern undefined4 DAT_00440be4;
extern char s_AppearHangonGauge_004407f4[];
extern char s_Gm_MainGameSceneT_004407dc[];
extern char s_InOutArrow_00440834[];
extern char s_InOutMask_00440828[];
extern char s_InOut_00440820[];
extern char s_L_DoButton_00_00440bb8[];
extern char s_L_Effects__02d_00440868[];
extern char s_L_HangonGaugeL_00_00440ba4[];
extern char s_L_HangonGauge_00_00440b90[];
extern char s_L_Heart__02d_00440850[];
extern char s_L_Key__02d_00440bd0[];
extern char s_LoopArrow_00440840[];
extern char s_N_Position_00_00440be8[];
extern char s_Position_00440808[];
extern char s_cf_00440850[];
extern char s_cf_00440868[];
extern char s_cf_00440bd0[];

// USA 00440404 <- EU 004403E4 (Ghidra, non-matching)
// GLOBAL DAT_004407d0 int
// GLOBAL DAT_004407d4 undefined *
// GLOBAL DAT_004407d8 uint
// GLOBAL DAT_004407f0 int
// GLOBAL DAT_00440814 undefined
// GLOBAL DAT_00440818 undefined
// GLOBAL DAT_0044084c undefined *
// GLOBAL DAT_00440860 undefined4
// GLOBAL DAT_00440864 undefined *
// GLOBAL DAT_00440bc8 int
// GLOBAL DAT_00440bcc undefined4
// GLOBAL DAT_00440bdc undefined4
// GLOBAL DAT_00440be0 undefined4
// GLOBAL DAT_00440be4 undefined4
// GLOBAL s_AppearHangonGauge_004407f4 string
// GLOBAL s_Gm_MainGameSceneT_004407dc string
// GLOBAL s_InOutArrow_00440834 string
// GLOBAL s_InOutMask_00440828 string
// GLOBAL s_InOut_00440820 string
// GLOBAL s_L_DoButton_00_00440bb8 string
// GLOBAL s_cf_00440868 string
// GLOBAL s_L_HangonGaugeL_00_00440ba4 string
// GLOBAL s_L_HangonGauge_00_00440b90 string
// GLOBAL s_cf_00440850 string
// GLOBAL s_cf_00440bd0 string
// GLOBAL s_LoopArrow_00440840 string
// GLOBAL s_N_Position_00_00440be8 string
// GLOBAL s_Position_00440808 string

int * func_00440404(undefined4 *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x3d0];
  #define local_3c8 ((int *)(albw_frame + 0x8))
  #define local_3bc (*(char * *)(albw_frame + 0x14))
  #define local_3b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_3b0 (*(int * *)(albw_frame + 0x20))
  #define local_3ac (*(int * *)(albw_frame + 0x24))
  #define local_3a4 (*(int *)(albw_frame + 0x2c))
  #define local_3a0 (*(undefined1 * *)(albw_frame + 0x30))
  #define uStack_39c (*(undefined4 *)(albw_frame + 0x34))
  #define local_398 ((undefined1 *)(albw_frame + 0x38))
  #define uStack_389 (*(undefined1 *)(albw_frame + 0x47))
  #define local_388 (*(int *)(albw_frame + 0x48))
  #define local_384 (*(undefined1 * *)(albw_frame + 0x4c))
  #define local_37c (*(uint *)(albw_frame + 0x54))
  #define local_48 (*(int *)(albw_frame + 0x388))
  #define local_44 (*(char * *)(albw_frame + 0x38c))
  piVar2 = func_004B9A10(param_1,0);
  iVar7 = DAT_004407d0 + 0x54;
  *piVar2 = DAT_004407d0;
  piVar2[0xe] = iVar7;
  puVar1 = DAT_004407d4;
  piVar2[0x1d] = 0;
  iVar3 = func_00100118((int)(piVar2 + 0x1e),puVar1,0x2c,3);
  piVar11 = (int *)(iVar3 + -0x78);
  *(undefined2 *)(iVar3 + 0x98) = 0;
  uVar10 = DAT_004407d8;
  uVar13 = (ulonglong)DAT_004407d8;
  *(undefined2 *)(iVar3 + 0x9a) = 0xffff;
  *(uint *)(iVar3 + 0x9c) = uVar10;
  *(undefined4 *)(iVar3 + 0xa0) = 0;
  *(undefined2 *)(iVar3 + 0xa4) = 0;
  *(undefined2 *)(iVar3 + 0xa6) = 0xffff;
  *(uint *)(iVar3 + 0xa8) = uVar10;
  *(undefined4 *)(iVar3 + 0xac) = 0;
  *(undefined2 *)(iVar3 + 0xb0) = 0;
  *(undefined2 *)(iVar3 + 0xb2) = 0xffff;
  *(uint *)(iVar3 + 0xb4) = uVar10;
  *(undefined4 *)(iVar3 + 0xb8) = 0;
  *(undefined2 *)(iVar3 + 0xbc) = 0;
  *(undefined2 *)(iVar3 + 0xbe) = 0xffff;
  *(uint *)(iVar3 + 0xc0) = uVar10;
  *(undefined4 *)(iVar3 + 0xc4) = 0;
  *(undefined2 *)(iVar3 + 200) = 0;
  *(undefined2 *)(iVar3 + 0xca) = 0xffff;
  *(uint *)(iVar3 + 0xcc) = uVar10;
  *(undefined4 *)(iVar3 + 0xd0) = 0;
  *(undefined2 *)(iVar3 + 0xd4) = 0;
  *(undefined2 *)(iVar3 + 0xd6) = 0xffff;
  *(uint *)(iVar3 + 0xd8) = uVar10;
  *(undefined4 *)(iVar3 + 0xdc) = 0;
  *(undefined4 *)(iVar3 + 0xe0) = 0;
  *(undefined4 *)(iVar3 + 0xe4) = 0;
  *(undefined4 *)(iVar3 + 0xe8) = 0;
  func_0010B3EC((undefined4 *)(iVar3 + 0xe0),2,iVar3 + 0xec);
  *(undefined1 *)(iVar3 + 0xfc) = 0;
  *(undefined1 *)(iVar3 + 0xfd) = 0;
  *(undefined1 *)(iVar3 + 0xfe) = 0;
  *(undefined1 *)(iVar3 + 0xff) = 0x80;
  iVar7 = DAT_004407f0;
  *(undefined4 *)(iVar3 + 0x100) = 0;
  *(undefined1 *)(iVar3 + 0x104) = 0xff;
  local_44 = s_Gm_MainGameSceneT_004407dc;
  local_48 = iVar7;
  (**(code **)(*piVar11 + 0x38))(piVar11,&local_48,0);
  piVar2 = *(int **)(iVar3 + -0x5c);
  func_0016773C((int)piVar2,8);
  local_44 = s_AppearHangonGauge_004407f4;
  local_48 = iVar7;
  func_00166C20(piVar2,0,&local_48,0);
  local_44 = s_Position_00440808;
  local_48 = iVar7;
  func_00166C20(piVar2,1,&local_48,0);
  local_44 = &DAT_00440814;
  local_48 = iVar7;
  func_00166C20(piVar2,2,&local_48,0);
  local_44 = &DAT_00440818;
  local_48 = iVar7;
  func_00166C20(piVar2,3,&local_48,0);
  local_44 = s_InOut_00440820;
  local_48 = iVar7;
  func_00166C20(piVar2,4,&local_48,0);
  local_44 = s_InOutMask_00440828;
  local_48 = iVar7;
  func_00166C20(piVar2,5,&local_48,0);
  local_44 = s_InOutArrow_00440834;
  local_48 = iVar7;
  func_00166C20(piVar2,6,&local_48,0);
  local_44 = s_LoopArrow_00440840;
  local_48 = iVar7;
  func_00166C20(piVar2,7,&local_48,0);
  *(int **)(iVar3 + -0x50) = piVar2;
  *(undefined2 *)(iVar3 + -0x56) = 4;
  *(undefined2 *)(iVar3 + -0x58) = 2;
  func_002313DC(iVar3 + -0x58);
  *(int **)(iVar3 + -0x44) = piVar2;
  *(undefined2 *)(iVar3 + -0x4a) = 4;
  *(undefined2 *)(iVar3 + -0x4c) = 0;
  *(int **)(iVar3 + 0xdc) = piVar2;
  *(undefined2 *)(iVar3 + 0xd6) = 7;
  *(undefined2 *)(iVar3 + 0xd4) = 0;
  iVar4 = func_0051E300((int)piVar11);
  if (iVar4 != 0) {
    iVar4 = *(int *)(iVar3 + -0x24);
    for (piVar9 = (int *)(*(int *)(iVar3 + -0x2c) - iVar4);
        piVar9 != (int *)((iVar3 + -0x30) - *(int *)(iVar3 + -0x24));
        piVar9 = (int *)(*(int *)((int)piVar9 + iVar4 + 4) - iVar4)) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
    func_00232384((int)piVar11);
  }
  uVar8 = 0x14;
  func_00100118((int)local_3c8,DAT_0044084c,0x2c,0x14);
  uVar10 = 0;
  do {
    piVar9 = local_3c8 + uVar10 * 0xb;
    do {
      func_004994B0((int)piVar9,s_L_Heart__02d_00440850,uVar10,uVar8);
      uVar10 = uVar10 + 1;
      if (0x13 < (int)uVar10) {
        puVar5 = (undefined4 *)func_0010BAB4(0x198);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          puVar6 = func_0038AAF4(puVar5,piVar2,(int)local_3c8);
          *puVar6 = DAT_00440860;
          *(undefined1 *)((int)puVar6 + 0x195) = 1;
        }
        *(undefined4 **)(iVar3 + -4) = puVar6;
        func_0038A928((int)puVar6,(int)piVar2,1);
        func_004B948C((int)piVar11,*(int *)(iVar3 + -4));
        uVar8 = 0x14;
        func_00100950((int)local_3c8,DAT_00440864,0x2c,0x14);
        uVar10 = 0;
        uVar12 = 0;
        do {
          piVar9 = func_006896BC(local_3c8 + 1,s_L_Effects__02d_00440868,uVar10,uVar8);
          iVar4 = iVar3;
          if (uVar10 < 3) {
            iVar4 = iVar3 + uVar10 * 0x2c;
          }
          func_004A50E8(iVar4,piVar2,piVar9);
          iVar4 = iVar3;
          if (uVar10 < 3) {
            iVar4 = iVar3 + uVar10 * 0x2c;
          }
          func_004B948C((int)piVar11,iVar4);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < 3);
        *(int *)(*(int *)(iVar3 + -4) + 0x88) = iVar3;
        puVar5 = (undefined4 *)func_0010BAB4(0x130);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          local_3bc = s_L_HangonGauge_00_00440b90;
          local_3c8[2] = iVar7;
          puVar6 = func_0031C7D4(puVar5,*(int **)(iVar3 + -0x5c),local_3c8 + 2);
        }
        func_0031C064((int)puVar6,0);
        if (*(int *)(iVar3 + 0xe0) < *(int *)(iVar3 + 0xe4)) {
          *(undefined4 **)(*(int *)(iVar3 + 0xe8) + *(int *)(iVar3 + 0xe0) * 4) = puVar6;
          *(int *)(iVar3 + 0xe0) = *(int *)(iVar3 + 0xe0) + 1;
        }
        puVar6 = (undefined4 *)func_0010BAB4(0x130);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_3bc = s_L_HangonGaugeL_00_00440ba4;
          local_3c8[2] = iVar7;
          puVar6 = func_0031C7D4(puVar6,*(int **)(iVar3 + -0x5c),local_3c8 + 2);
        }
        func_0031C064((int)puVar6,0);
        if (*(int *)(iVar3 + 0xe0) < *(int *)(iVar3 + 0xe4)) {
          *(undefined4 **)(*(int *)(iVar3 + 0xe8) + *(int *)(iVar3 + 0xe0) * 4) = puVar6;
          *(int *)(iVar3 + 0xe0) = *(int *)(iVar3 + 0xe0) + 1;
        }
        puVar5 = (undefined4 *)func_0010BAB4(0x7c);
        puVar6 = (undefined4 *)0x0;
        if (puVar5 != (undefined4 *)0x0) {
          local_44 = s_L_DoButton_00_00440bb8;
          local_48 = iVar7;
          puVar6 = func_00199554(puVar5,*(int **)(iVar3 + -0x5c),&local_48);
        }
        *(undefined4 **)(iVar3 + 0xf8) = puVar6;
        func_004B948C((int)piVar11,(int)puVar6);
        local_3a0 = local_398;
        uStack_39c = 0x10;
        uStack_389 = 0;
        local_398[0] = 0;
        local_3a4 = DAT_00440bc8;
        local_37c = 5;
        local_3b4 = DAT_00440bcc;
        do {
          func_004994B0((int)&local_3a4,s_L_Key__02d_00440bd0,uVar12,uVar8);
          puVar6 = (undefined4 *)func_0010BAB4(0x44);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            local_3b0 = *(int **)(iVar3 + -0x5c);
            (**(code **)(local_3a4 + 8))(&local_3a4);
            local_388 = iVar7;
            local_384 = local_3a0;
            local_3ac = &local_388;
            puVar6 = func_00232540(puVar6);
            puVar6[8] = 0;
            *puVar6 = local_3b4;
            puVar6[9] = 0;
            *(undefined2 *)(puVar6 + 10) = 0;
            *(undefined2 *)((int)puVar6 + 0x2a) = 0xffff;
            puVar6[0xb] = (int)uVar13;
            puVar6[0xc] = 0;
            *(undefined2 *)(puVar6 + 0xd) = 0;
            *(undefined2 *)((int)puVar6 + 0x36) = 0xffff;
            puVar6[0xe] = (int)uVar13;
            puVar6[0xf] = 0;
            *(undefined1 *)(puVar6 + 0x10) = 2;
            puVar5 = (undefined4 *)func_0010BAB4(0x74);
            if (puVar5 == (undefined4 *)0x0) {
              piVar9 = (int *)0x0;
            }
            else {
              piVar9 = func_00168434(puVar5);
            }
            func_00168100(piVar9,local_3b0,local_3ac);
            puVar6[7] = piVar9;
            puVar6[6] = puVar6[6] | 0x10;
            func_0016773C((int)piVar9,3);
            local_3c8[1] = DAT_00440bdc;
            local_3c8[0] = iVar7;
            func_00166C20(piVar9,0,local_3c8,0);
            local_3c8[1] = DAT_00440be0;
            local_3c8[0] = iVar7;
            func_00166C20(piVar9,1,local_3c8,0);
            local_3c8[1] = DAT_00440be4;
            uVar8 = 0;
            local_3c8[0] = iVar7;
            func_00166C20(piVar9,2,local_3c8,0);
            iVar4 = *(int *)(*(int *)(*piVar9 + 0x10) + 0xc);
            puVar6[8] = iVar4;
            if (iVar4 != 0) {
              puVar6[9] = *(undefined4 *)(iVar4 + 0xc);
            }
            puVar6[0xf] = piVar9;
            *(undefined2 *)((int)puVar6 + 0x36) = 1;
            *(undefined2 *)(puVar6 + 0xd) = 0;
          }
          *(undefined4 **)(iVar3 + 0x84 + uVar12 * 4) = puVar6;
          func_004B948C((int)piVar11,(int)puVar6);
          uVar12 = uVar12 + 1;
        } while (uVar12 != local_37c);
        local_44 = s_N_Position_00_00440be8;
        local_48 = iVar7;
        uVar8 = func_005229AC(piVar2,&local_48);
        *(undefined4 *)(iVar3 + 0x100) = uVar8;
        *(uint *)(iVar3 + -0x60) = *(uint *)(iVar3 + -0x60) | 0x40;
        return piVar11;
      }
      piVar9 = local_3c8;
    } while (0x13 < uVar10);
  } while( true );
}

