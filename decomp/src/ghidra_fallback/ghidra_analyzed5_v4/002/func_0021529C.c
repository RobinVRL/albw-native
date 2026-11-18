#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0014E904(int param_1,int param_2,int param_3);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FC8D8(int param_1,int param_2);
extern int func_005330A8(int param_1,int param_2,int *param_3);
extern int DAT_002154fc;
extern undefined4 DAT_00215500;
extern uint DAT_00215504;
extern int DAT_00215508;
extern uint DAT_0021550c;
extern uint DAT_00215510;
extern undefined4 DAT_00215514;
extern undefined8 *DAT_00215518;
extern char s_HockBock_Body_002154ec[];

// USA 0021529C <- EU 0021529C (Ghidra, non-matching)
// GLOBAL DAT_002154fc int
// GLOBAL DAT_00215500 undefined4
// GLOBAL DAT_00215504 uint
// GLOBAL DAT_00215508 int
// GLOBAL DAT_0021550c uint
// GLOBAL DAT_00215510 uint
// GLOBAL DAT_00215514 undefined4
// GLOBAL DAT_00215518 undefined8 *
// GLOBAL s_HockBock_Body_002154ec string

void func_0021529C(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint unaff_r10;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define local_104 (*(float *)(albw_frame + 0xc))
  #define iStack_100 (*(int *)(albw_frame + 0x10))
  #define iStack_fc (*(int *)(albw_frame + 0x14))
  #define local_ec ((uint *)(albw_frame + 0x24))
  #define local_e4 (*(undefined4 * *)(albw_frame + 0x2c))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_dc (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_d8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_cc (*(uint *)(albw_frame + 0x44))
  #define local_98 (*(undefined4 *)(albw_frame + 0x78))
  #define local_94 (*(undefined1 *)(albw_frame + 0x7c))
  #define local_90 (*(int *)(albw_frame + 0x80))
  #define local_74 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_64 (*(uint *)(albw_frame + 0xac))
  #define local_60 (*(int *)(albw_frame + 0xb0))
  #define local_5c (*(char * *)(albw_frame + 0xb4))
  local_60 = DAT_002154fc;
  local_5c = s_HockBock_Body_002154ec;
  local_64 = func_005330A8(param_1,0,&local_60);
  iVar1 = DAT_00215508;
  uVar15 = (ulonglong)DAT_00215504;
  uVar10 = (ulonglong)DAT_0021550c;
  lVar13 = (ulonglong)DAT_00215510 << 0x20;
  uVar14 = CONCAT44(DAT_00215514,DAT_00215500);
  local_90 = param_1 + 0x5a8;
  iVar9 = 0;
  do {
    uVar10 = CONCAT44(*(undefined4 *)DAT_00215518,(int)uVar10);
    local_74 = 0;
    uVar11 = *(undefined8 *)((int)DAT_00215518 + 4);
    uVar12 = *DAT_00215518;
    lVar13 = CONCAT44((int)((ulonglong)lVar13 >> 0x20),(int)((ulonglong)uVar11 >> 0x20));
    piVar2 = func_0014DF18(*(int *)(param_1 + 0x2d0),0,0,local_64,0,0);
    puVar3 = (undefined4 *)func_0010BAB4(0x20);
    if (puVar3 == (undefined4 *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = func_0015137C(puVar3,param_1,0);
    }
    piVar6[4] = (int)uVar10;
    piVar6[5] = (int)uVar14;
    piVar6[6] = (int)uVar10;
    func_00151358(piVar6);
    func_004FC8D8(local_90,(int)piVar6);
    func_004FC1CC(param_1,(int)piVar2,0xb,ALBW_AS_F32(((ulonglong)lVar13 >> 0x20)));
    func_00115D70(&local_104,(float *)(*(int *)(param_1 + 0x40c) + 0x74),ALBW_AS_F32(uVar15));
    piVar2[0x59] = piVar2[0x59] | 0x40000000;
    piVar2[0x1d] = (int)ALBW_AS_U32(local_104);
    piVar2[0x1e] = iStack_100;
    piVar2[0x1f] = iStack_fc;
    puVar4 = (uint *)func_0014E904(param_1,7,1);
    uVar8 = 0;
    do {
      func_00169688(puVar4,uVar8,(int *)(iVar1 + uVar8 * 8),
                    *(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < 7);
    func_0016A02C((int)puVar4,-1,(int *)0xffffffff,0);
    local_ec[1] = 3;
    uStack_d8 = (undefined4)uVar10;
    local_e4 = &local_e0;
    local_d4 = (undefined4)((ulonglong)lVar13 >> 0x20);
    local_94 = 0;
    local_e0 = 0;
    local_ec[0] = 1;
    local_dc = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_98 = 10;
    unaff_r10 = unaff_r10 | 0xff;
    local_d0 = uStack_d8;
    local_cc = unaff_r10;
    func_0016898C((int)puVar4,local_ec);
    iVar5 = *(int *)(param_1 + 0x968);
    iVar7 = *(int *)(param_1 + 0x960);
    if (iVar5 < iVar7) {
      *(int *)(param_1 + 0x968) = iVar5 + 1;
      iVar5 = iVar5 + *(int *)(param_1 + 0x964);
      if (iVar7 <= iVar5) {
        iVar5 = iVar5 - iVar7;
      }
      puVar3 = (undefined4 *)(*(int *)(param_1 + 0x95c) + iVar5 * 0x28);
      *puVar3 = (int)(uVar10 >> 0x20);
      puVar3[1] = (int)uVar11;
      puVar3[2] = (int)((ulonglong)uVar11 >> 0x20);
      puVar3[3] = (int)uVar12;
      puVar3[4] = (int)((ulonglong)uVar12 >> 0x20);
      puVar3[5] = (int)lVar13;
      puVar3[7] = puVar4;
      puVar3[6] = piVar2;
      puVar3[8] = piVar6;
      puVar3[9] = local_74;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 3);
  return;
}

