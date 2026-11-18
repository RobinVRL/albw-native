// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_00260FA4(int param_1,int param_2,ushort *param_3);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052107C(int param_1);
extern int func_006597CC(undefined4 *param_1,undefined1 param_2);
extern float DAT_00190fb4;
extern float DAT_00190fb8;
extern float DAT_00190fbc;
extern float DAT_00190fc0;
extern float DAT_00190fc4;
extern float DAT_00190fc8;
extern undefined4 DAT_00190fcc;
extern undefined4 DAT_00190fd0;
extern int *DAT_00190fd4;
extern int DAT_00190fd8;
extern float DAT_00190fdc;
extern char s_SE_IceBlock_LAND_00190ff8[];
extern char s_SE_OBJ_FALL_WATER_FLAT_00190fe0[];

// USA 00190D4C <- EU 00190D4C (Ghidra, non-matching)
// GLOBAL DAT_00190fb4 float
// GLOBAL DAT_00190fb8 float
// GLOBAL DAT_00190fbc float
// GLOBAL DAT_00190fc0 float
// GLOBAL DAT_00190fc4 float
// GLOBAL DAT_00190fc8 float
// GLOBAL DAT_00190fcc undefined4
// GLOBAL DAT_00190fd0 undefined4
// GLOBAL DAT_00190fd4 int *
// GLOBAL DAT_00190fd8 int
// GLOBAL DAT_00190fdc float
// GLOBAL s_SE_IceBlock_LAND_00190ff8 string
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_00190fe0 string

undefined4 func_00190D4C(int *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_44 ((ushort *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  fVar7 = DAT_00190fb4;
  if ((uint)param_1[0x167] < (uint)param_1[0x168]) {
    param_1[0x167] = param_1[0x167] + 1;
  }
  param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - fVar7));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  uVar1 = DAT_00190fcc;
  fVar7 = DAT_00190fb8;
  fVar6 = (DAT_00190fc4 * ((ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x163])) - DAT_00190fb8)) /
          DAT_00190fc0 + DAT_00190fbc;
  fVar5 = DAT_00190fbc;
  if (0x3f800000 < (int)ALBW_AS_U32(fVar6)) {
    fVar5 = fVar6;
  }
  param_1[0x164] = (int)ALBW_AS_U32(fVar6);
  param_1[0x164] = (int)ALBW_AS_U32(fVar5);
  local_28 = fVar7;
  local_24 = DAT_00190fc8;
  local_20 = fVar7;
  iVar3 = func_0014EEC8((int)param_1,0,&local_28,uVar1,DAT_00190fc8);
  piVar4 = param_1 + 0x13e;
  if (iVar3 == 0) {
    if ((uint)param_1[0x16a] < (uint)param_1[0x16b]) {
      param_1[0x16a] = param_1[0x16a] + 1;
      return 0;
    }
  }
  else {
    local_44[0] = 1;
    local_44[1] = 1;
    local_40 = param_1[0xf4];
    local_3c = param_1[0xf5];
    local_38 = param_1[0xf6];
    local_34 = DAT_00190fd0;
    func_00260FA4(*DAT_00190fd4,(int)param_1,local_44);
    iVar3 = func_00520EE4((int)param_1);
    if ((iVar3 != 0) && (bVar2 = func_0052107C((int)param_1), !bVar2)) {
      return func_006597CC(piVar4,6);
    }
    iVar3 = func_00520FF8((int)param_1);
    if (iVar3 != 0) {
      return func_006597CC(piVar4,7);
    }
    iVar3 = func_00520ED8((int)param_1);
    local_30 = DAT_00190fd8;
    if (iVar3 != 0) {
      func_006597CC(piVar4,5);
      piVar4 = param_1 + 0x17d;
      func_0025B61C((int)piVar4,0,DAT_00190fdc);
      local_2c = s_SE_OBJ_FALL_WATER_FLAT_00190fe0;
      func_00150A84(param_1,&local_30,(int)piVar4);
      return func_0025B7B0((int)piVar4,5);
    }
    bVar2 = false;
    if (ALBW_AS_F32(param_1[0xf7]) == fVar7) {
      bVar2 = ALBW_AS_F32(param_1[0xf9]) == fVar7;
    }
    if (!bVar2) {
      local_2c = s_SE_IceBlock_LAND_00190ff8;
      func_00150A84(param_1,&local_30,0);
      return func_006597CC(piVar4,3);
    }
  }
  return func_006597CC(piVar4,5);
}

