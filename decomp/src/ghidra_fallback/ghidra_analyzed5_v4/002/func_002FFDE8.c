#include "ghidra_types.h"

extern int func_0011558C(float *param_1,float *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004916EC(float *param_1,float *param_2,float *param_3);
extern int func_004D8A88(float *param_1,uint param_2);
extern float DAT_002fff88;
extern float DAT_002fff8c;
extern undefined4 DAT_002fff90;
extern undefined4 DAT_002fff94;
extern undefined4 DAT_002fff98;

// USA 002FFDE8 <- EU 002FFDC4 (Ghidra, non-matching)
// GLOBAL DAT_002fff88 float
// GLOBAL DAT_002fff8c float
// GLOBAL DAT_002fff90 undefined4
// GLOBAL DAT_002fff94 undefined4
// GLOBAL DAT_002fff98 undefined4

void func_002FFDE8(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define afStack_44 ((float *)(albw_frame + 0x1c))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  if (-1 < *(int *)(param_1 + 0x188) << 1) {
    iVar2 = *(int *)(param_1 + 0x184);
    if (iVar2 != 0) {
      func_004D8A88(afStack_44,*(uint *)(param_1 + 0x168));
      func_004916EC(afStack_44,(float *)(iVar2 + 0x104),afStack_44);
      func_00115CA8(&local_50,(float *)(iVar2 + 0x104),(float *)(param_1 + 0x16c));
      local_5c = local_3c;
      local_58 = local_30;
      local_54 = local_24;
      func_00115C70(&local_20,&local_50,&local_5c);
      local_5c = local_20;
      local_58 = uStack_1c;
      local_54 = uStack_18;
      uVar4 = *(undefined4 *)(iVar2 + 0x108);
      uVar5 = *(undefined4 *)(iVar2 + 0x118);
      uVar6 = *(undefined4 *)(iVar2 + 0x128);
      *(float *)(param_1 + 0x100) = local_20;
      *(undefined4 *)(param_1 + 0x104) = uStack_1c;
      *(undefined4 *)(param_1 + 0x108) = uStack_18;
      *(float *)(param_1 + 0x10c) = local_50;
      *(undefined4 *)(param_1 + 0x110) = local_4c;
      *(undefined4 *)(param_1 + 0x114) = local_48;
      *(undefined4 *)(param_1 + 0x118) = uVar4;
      *(undefined4 *)(param_1 + 0x11c) = uVar5;
      *(undefined4 *)(param_1 + 0x120) = uVar6;
      func_00115DC8((float *)(param_1 + 0x118));
      (**(code **)(*(int *)(param_1 + 0xcc) + 0x10))(param_1 + 0xcc,param_1 + 0xd0);
      func_0011558C((float *)(param_1 + 0x9c),(float *)(param_1 + 0xd0));
    }
    if ((int)(*(uint *)(param_1 + 0x188) << 0x1c) < 0) {
      *(uint *)(param_1 + 0x188) = *(uint *)(param_1 + 0x188) & 0xfffffff7;
      uVar4 = DAT_002fff90;
      fVar1 = DAT_002fff8c;
      fVar10 = DAT_002fff88;
      iVar2 = *(int *)(param_1 + 0x98);
      fVar3 = DAT_002fff88 / *(float *)(param_1 + 0x164);
      fVar7 = (*(float *)(iVar2 + 0xc) - *(float *)(iVar2 + 4)) /
              (*(float *)(iVar2 + 0x10) - *(float *)(iVar2 + 8));
      *(undefined4 *)(param_1 + 0x128) = DAT_002fff90;
      *(undefined4 *)(param_1 + 300) = uVar4;
      *(undefined4 *)(param_1 + 0x134) = uVar4;
      fVar9 = fVar7 * fVar3;
      fVar7 = -(fVar7 * fVar3);
      *(undefined4 *)(param_1 + 0x13c) = uVar4;
      *(undefined4 *)(param_1 + 0x144) = uVar4;
      *(undefined4 *)(param_1 + 0x148) = uVar4;
      *(undefined4 *)(param_1 + 0x154) = uVar4;
      *(undefined4 *)(param_1 + 0x158) = uVar4;
      *(undefined4 *)(param_1 + 0x15c) = uVar4;
      *(float *)(param_1 + 0x160) = fVar10;
      uVar5 = DAT_002fff98;
      uVar4 = DAT_002fff94;
      fVar8 = fVar10 / (fVar3 - -fVar3);
      fVar10 = fVar10 / (fVar9 - fVar7);
      *(float *)(param_1 + 0x124) = fVar10 * fVar1;
      *(float *)(param_1 + 0x130) = -((fVar9 + fVar7) * fVar10);
      *(float *)(param_1 + 0x138) = fVar8 * fVar1;
      *(float *)(param_1 + 0x140) = -((fVar3 + -fVar3) * fVar8);
      *(undefined4 *)(param_1 + 0x14c) = uVar4;
      *(undefined4 *)(param_1 + 0x150) = uVar5;
    }
  }
  return;
}

