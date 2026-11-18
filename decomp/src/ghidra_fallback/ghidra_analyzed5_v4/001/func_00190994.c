// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B61C(int param_1,int param_2,float fparam_0);
extern int func_0025B7B0(int param_1,uint param_2);
extern int func_00260FA4(int param_1,int param_2,ushort *param_3);
extern int func_00392E48(undefined4 *param_1,int param_2,undefined4 *param_3,undefined1 param_4);
extern int func_00520ED8(int param_1);
extern int func_00520EE4(int param_1);
extern int func_00520FF8(int param_1);
extern int func_00521018(int param_1);
extern int func_0052107C(int param_1);
extern int func_006597CC(undefined4 *param_1,undefined1 param_2);
extern float DAT_00190c40;
extern float DAT_00190c44;
extern float DAT_00190c48;
extern float DAT_00190c4c;
extern float DAT_00190c50;
extern float DAT_00190c54;
extern float *DAT_00190c58;
extern undefined4 DAT_00190c5c;
extern int DAT_00190c60;
extern undefined4 DAT_00190c64;
extern int *DAT_00190c68;
extern float DAT_00190c6c;
extern char s_SE_IceBlock_SLIDE_00190c88[];
extern char s_SE_OBJ_FALL_WATER_FLAT_00190c70[];

// USA 00190994 <- EU 00190994 (Ghidra, non-matching)
// GLOBAL DAT_00190c40 float
// GLOBAL DAT_00190c44 float
// GLOBAL DAT_00190c48 float
// GLOBAL DAT_00190c4c float
// GLOBAL DAT_00190c50 float
// GLOBAL DAT_00190c54 float
// GLOBAL DAT_00190c58 float *
// GLOBAL DAT_00190c5c undefined4
// GLOBAL DAT_00190c60 int
// GLOBAL DAT_00190c64 undefined4
// GLOBAL DAT_00190c68 int *
// GLOBAL DAT_00190c6c float
// GLOBAL s_SE_IceBlock_SLIDE_00190c88 string
// GLOBAL s_SE_OBJ_FALL_WATER_FLAT_00190c70 string

undefined4 func_00190994(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define local_5c ((ushort *)(albw_frame + 0x14))
  #define local_58 (*(int *)(albw_frame + 0x18))
  #define local_54 (*(int *)(albw_frame + 0x1c))
  #define local_50 (*(int *)(albw_frame + 0x20))
  #define local_4c (*(undefined4 *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define fStack_44 (*(float *)(albw_frame + 0x2c))
  #define fStack_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(int *)(albw_frame + 0x40))
  #define local_2c (*(char * *)(albw_frame + 0x44))
  #define local_28 (*(int *)(albw_frame + 0x48))
  #define local_24 (*(char * *)(albw_frame + 0x4c))
  param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - DAT_00190c40));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  piVar4 = param_1 + 0x13e;
  if ((uint)param_1[0x16a] < (uint)param_1[0x16b]) {
    param_1[0x16a] = param_1[0x16a] + 1;
    fVar7 = DAT_00190c44;
    fVar6 = (DAT_00190c50 * ((ALBW_AS_F32(param_1[0xf5]) - ALBW_AS_F32(param_1[0x163])) - DAT_00190c44)) /
            DAT_00190c4c + DAT_00190c48;
    fVar5 = DAT_00190c48;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar6)) {
      fVar5 = fVar6;
    }
    param_1[0x164] = (int)ALBW_AS_U32(fVar6);
    param_1[0x164] = (int)ALBW_AS_U32(fVar5);
    if (*(char *)((int)param_1 + 0x589) == '\0') {
      *(undefined1 *)((int)param_1 + 0x589) = 1;
      iVar2 = func_00392E48(param_1 + 0xf4,1,(undefined4 *)0x0,0);
      if (iVar2 == 0) goto LAB_00190b48;
    }
    local_38 = DAT_00190c54;
    local_68 = *DAT_00190c58;
    local_64 = DAT_00190c58[1];
    fStack_60 = DAT_00190c58[2];
    local_3c = fVar7;
    local_34 = fVar7;
    iVar3 = func_0014EEC8((int)param_1,(uint)&local_68,&local_3c,DAT_00190c5c,DAT_00190c54);
    iVar2 = DAT_00190c60;
    if (iVar3 != 0) {
      local_48 = local_68;
      fStack_44 = local_64;
      fStack_40 = fStack_60;
      func_00115DC8(&local_48);
      local_5c[0] = 1;
      local_5c[1] = 1;
      local_58 = param_1[0xf4];
      local_54 = param_1[0xf5];
      local_50 = param_1[0xf6];
      local_4c = DAT_00190c64;
      func_00260FA4(*DAT_00190c68,(int)param_1,local_5c);
      iVar3 = func_00520EE4((int)param_1);
      if ((iVar3 != 0) && (bVar1 = func_0052107C((int)param_1), !bVar1)) {
LAB_00190b48:
        return func_006597CC(piVar4,6);
      }
      iVar3 = func_00520FF8((int)param_1);
      if (iVar3 != 0) {
        return func_006597CC(piVar4,7);
      }
      iVar3 = func_00520ED8((int)param_1);
      if (iVar3 != 0) {
        func_006597CC(piVar4,5);
        piVar4 = param_1 + 0x17d;
        func_0025B61C((int)piVar4,0,DAT_00190c6c);
        local_24 = s_SE_OBJ_FALL_WATER_FLAT_00190c70;
        local_28 = iVar2;
        func_00150A84(param_1,&local_28,(int)piVar4);
        return func_0025B7B0((int)piVar4,5);
      }
      bVar1 = func_00521018((int)param_1);
      if (bVar1) goto LAB_00190be0;
      if (local_64 != fVar7) {
        param_1[0xf8] = (int)ALBW_AS_U32(fVar7);
        param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + local_64));
      }
    }
    local_2c = s_SE_IceBlock_SLIDE_00190c88;
    local_30 = iVar2;
    return func_001507D8((int)param_1,&local_30,0);
  }
LAB_00190be0:
  return func_006597CC(piVar4,5);
}

