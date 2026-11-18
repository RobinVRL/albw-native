// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D88(float *param_1,float *param_2,float fparam_0);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00291A68(int param_1,undefined4 *param_2,int param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00556D48(int param_1);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern int *DAT_00177860;
extern float DAT_00177864;
extern float DAT_00177868;
extern float DAT_0017786c;
extern float DAT_00177870;
extern float DAT_00177874;

// USA 001774B4 <- EU 001774B4 (Ghidra, non-matching)
// GLOBAL DAT_00177860 int *
// GLOBAL DAT_00177864 float
// GLOBAL DAT_00177868 float
// GLOBAL DAT_0017786c float
// GLOBAL DAT_00177870 float
// GLOBAL DAT_00177874 float

/* WARNING: Variable defined which should be unmapped: objStack_94 */

undefined4 func_001774B4(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  float *pfVar7;
  int *piVar8;
  undefined1 uVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_94 ((uint *)(albw_frame + 0xc))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(uint *)(albw_frame + 0x1c))
  #define piStack_80 (*(int * *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define uStack_6c (*(uint *)(albw_frame + 0x34))
  #define piStack_68 (*(int * *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_60 (*(float *)(albw_frame + 0x40))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_48 ((float *)(albw_frame + 0x58))
  #define local_40 (*(float *)(albw_frame + 0x60))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x68))
  #define local_34 (*(float *)(albw_frame + 0x6c))
  #define fStack_30 (*(float *)(albw_frame + 0x70))
  #define fStack_2c (*(float *)(albw_frame + 0x74))
  #define local_28 (*(float *)(albw_frame + 0x78))
  #define fStack_24 (*(float *)(albw_frame + 0x7c))
  #define fStack_20 (*(float *)(albw_frame + 0x80))
  piVar8 = (int *)(*(char *)(param_1 + 0x410) * 8 + 4);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x428) + (int)piVar8);
  pcVar6 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar2 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar2 >> 1)));
  }
  (*pcVar6)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar2 >> 1));
  uVar2 = *(uint *)(param_1 + 0x41c);
  iVar3 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar3;
  if (uVar2 != 0) {
    fVar11 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(uVar2,1,fVar11);
  }
  piVar1 = DAT_00177860;
  iVar3 = func_00556D48(*DAT_00177860);
  uVar4 = extraout_r1;
  if (iVar3 == 0) {
    if (*(char *)(param_1 + 0x410) == '\0') {
      uVar9 = 0;
      uVar4 = 0;
    }
    else {
      objStack_94[0] = 0;
      piVar8 = (int *)0x100;
      uVar2 = param_1 + 0x500;
      uVar4 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x43c),uVar2,0x100,0,0);
      uVar9 = (undefined1)uVar4;
      uVar4 = extraout_r1_00;
    }
    *(undefined1 *)(param_1 + 0x4c8) = uVar9;
  }
  bVar10 = *(char *)(param_1 + 0x4c8) != '\0';
  iVar3 = 0;
  if (bVar10) {
    iVar3 = *piVar1;
  }
  fVar11 = DAT_00177864;
  if (bVar10 && iVar3 != 0) {
    local_64 = *(float *)(param_1 + 0x4bc);
    local_60 = *(float *)(param_1 + 0x4c0);
    uStack_5c = *(undefined4 *)(param_1 + 0x4c4);
    local_78 = *(float *)(param_1 + 0x4b8);
    local_7c = DAT_00177864;
    local_74 = DAT_00177864;
    func_00115CE4(&local_7c,(float *)(param_1 + 0x4cc),&local_7c);
    func_00115C54(&local_7c,&local_7c,(float *)(param_1 + 0x3d0));
    pfVar7 = *(float **)(*piVar1 + 0x1c);
    local_28 = *pfVar7;
    fStack_24 = pfVar7[1];
    fStack_20 = pfVar7[2];
    local_40 = *(float *)(param_1 + 0x3d0);
    uStack_3c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_38 = *(undefined4 *)(param_1 + 0x3d8);
    local_34 = local_7c;
    fStack_30 = local_78;
    fStack_2c = local_74;
    local_48[0] = fVar11;
    func_0049EF80(&local_28,&local_40,local_48);
    local_58 = *(float *)(param_1 + 0x3d0) + (local_7c - *(float *)(param_1 + 0x3d0)) * local_48[0];
    local_54 = *(float *)(param_1 + 0x3d4) + (local_78 - *(float *)(param_1 + 0x3d4)) * local_48[0];
    local_50 = *(float *)(param_1 + 0x3d8) + (local_74 - *(float *)(param_1 + 0x3d8)) * local_48[0];
    if (*(char *)(param_1 + 0x4b0) == '\x01') {
      func_00115C70(&local_70,&local_58,&local_28);
      local_88 = ALBW_AS_U32(local_70);
      uStack_84 = uStack_6c;
      piStack_80 = piStack_68;
      func_00115D88(&local_70,(float *)&local_88,DAT_00177874);
      objStack_94[0] = (uint)ALBW_AS_U32(local_70);
      objStack_94[1] = uStack_6c;
      objStack_94[2] = (uint)piStack_68;
      piVar8 = piStack_68;
      func_00115C54(&local_64,&local_64,(float *)objStack_94);
    }
    else {
      func_00115C70((float *)&local_88,&local_58,&local_28);
      local_70 = ALBW_AS_F32(local_88);
      uStack_6c = uStack_84;
      piStack_68 = piStack_80;
      func_00115D88((float *)&local_88,&local_70,DAT_00177868);
      objStack_94[0] = (uint)ALBW_AS_U32(local_88);
      objStack_94[1] = uStack_84;
      objStack_94[2] = (uint)piStack_80;
      piVar8 = piStack_80;
      func_00115C54(&local_64,&local_64,(float *)objStack_94);
    }
    local_60 = local_60 + DAT_0017786c;
    uVar2 = (uint)(*(char *)(param_1 + 0x4b0) == '\x01');
    func_00291A68(*piVar1,&local_64,uVar2);
    uVar4 = extraout_r1_01;
  }
  if (*(int *)(param_1 + 0x430) != 0) {
    if (*(int **)(param_1 + 0x434) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x434),uVar4,uVar2,piVar8);
      uVar2 = 0;
      func_00168E9C(*(int **)(param_1 + 0x434),*(int *)(param_1 + 0x430),(int *)0x0);
      uVar4 = extraout_r1_02;
    }
    if (*(int **)(param_1 + 0x438) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x438),uVar4,uVar2,piVar8);
      func_00168E9C(*(int **)(param_1 + 0x438),*(int *)(param_1 + 0x430),(int *)0x0);
    }
    func_004CEAF0(*(int *)(param_1 + 0x430));
    iVar3 = *(int *)(param_1 + 0x430);
    if (iVar3 != 0) {
      fVar12 = *(float *)(param_1 + 0x4b4);
      if (fVar12 <= fVar11) {
        return func_004CF478(iVar3,0);
      }
      if ((int)ALBW_AS_U32(fVar12) < 0x3f800000) {
        uVar4 = VectorFloatToUnsigned(fVar12 * DAT_00177870,3);
        uVar9 = (undefined1)uVar4;
      }
      else {
        uVar9 = 0xff;
      }
      func_004CF478(iVar3,1);
      for (iVar3 = 0; iVar3 < *(int *)(*(int *)(*(int *)(param_1 + 0x430) + 0x20) + 4);
          iVar3 = iVar3 + 1) {
        puVar5 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x430),iVar3,1);
        local_88 = ALBW_AS_U32(ALBW_AS_F32(CONCAT13(uVar9,(int3)*puVar5)));
        func_004CF5DC(*(int *)(param_1 + 0x430),iVar3,1,&local_88);
      }
    }
  }
  return 0;
}

