#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_0014FF58(undefined4 *param_1,int param_2);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_0068C690(float *param_1);
extern float DAT_00309420;
extern int *DAT_00309424;
extern float DAT_00309428;
extern int DAT_00309458;
extern float DAT_0030945c;
extern float DAT_00309460;
extern float DAT_00309464;
extern int DAT_00309468;
extern float DAT_0030946c;
extern float DAT_00309470;
extern int DAT_00309474;
extern float DAT_00309478;
extern char s_ReactInvalid_00309448[];
extern char s_SE_WallBreak_REFLECT_SWORD_0030942c[];

// USA 00309128 <- EU 00309104 (Ghidra, non-matching)
// GLOBAL DAT_00309420 float
// GLOBAL DAT_00309424 int *
// GLOBAL DAT_00309428 float
// GLOBAL DAT_00309458 int
// GLOBAL DAT_0030945c float
// GLOBAL DAT_00309460 float
// GLOBAL DAT_00309464 float
// GLOBAL DAT_00309468 int
// GLOBAL DAT_0030946c float
// GLOBAL DAT_00309470 float
// GLOBAL DAT_00309474 int
// GLOBAL DAT_00309478 float
// GLOBAL s_ReactInvalid_00309448 string
// GLOBAL s_SE_WallBreak_REFLECT_SWORD_0030942c string

undefined4 func_00309128(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar9;
  longlong lVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define local_8c (*(char * *)(albw_frame + 0x4))
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 ((float *)(albw_frame + 0x30))
  #define local_48 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x50))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x58))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  if (((*(int *)(param_2 + 0x2c) != 0) && (*(char *)((int)param_1 + 0x435) == '\0')) &&
     (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x05')) {
    iVar1 = func_002917A4(*DAT_00309424,param_1 + 0xf4,0,DAT_00309420);
    if (iVar1 != 0) {
      local_8c = s_SE_WallBreak_REFLECT_SWORD_0030942c;
      local_90 = DAT_00309428;
      func_0014DBF4(param_1,(int *)&local_90,param_2 + 0x10,0);
      func_0014FF58((undefined4 *)(param_2 + 0x10),(*(uint *)(param_2 + 0x30) & 0xc000000) >> 0x1a);
    }
    if (param_1[0x10c] < 1) {
      if (param_1[0xd1] == 0) {
        fVar4 = 0.0;
        fVar5 = 0.0;
      }
      else {
        func_004A1B9C((int *)&local_78,param_1[0xd1],(uint *)s_ReactInvalid_00309448);
        fVar4 = local_78;
        fVar5 = local_74;
      }
      local_60[0] = *(float *)(DAT_00309458 + 0x370);
      local_60[1] = ALBW_AS_F32(*(undefined4 *)(DAT_00309458 + 0x374));
      local_60[2] = ALBW_AS_F32(*(undefined4 *)(DAT_00309458 + 0x378));
      local_60[3] = ALBW_AS_F32(*(undefined4 *)(DAT_00309458 + 0x37c));
      local_60[4] = ALBW_AS_F32(*(undefined4 *)(DAT_00309458 + 0x380));
      local_60[5] = ALBW_AS_F32(*(undefined4 *)(DAT_00309458 + 900));
      local_48 = *(undefined4 *)(DAT_00309458 + 0x388);
      uStack_44 = *(undefined4 *)(DAT_00309458 + 0x38c);
      uStack_40 = *(undefined4 *)(DAT_00309458 + 0x390);
      local_34 = *(undefined4 *)(DAT_00309458 + 0x39c);
      local_3c = *(undefined4 *)(DAT_00309458 + 0x394);
      uStack_38 = *(undefined4 *)(DAT_00309458 + 0x398);
      uVar2 = (uint)*(byte *)(param_1 + 0x10d);
      local_6c = local_60[uVar2 * 3];
      local_68 = local_60[uVar2 * 3 + 1];
      local_64 = local_60[uVar2 * 3 + 2];
      func_00115C70(&local_90,(float *)(param_2 + 0x10),(float *)(param_1 + 0x109));
      uVar2 = func_0068C690(&local_90);
      lVar8 = (ulonglong)(uint)ALBW_AS_U32(DAT_0030945c) << 0x20;
      func_004D80A4(&local_90,uVar2,DAT_0030945c);
      local_8c = (char *)ALBW_PTR_BITS(DAT_00309460);
      fVar7 = DAT_00309460;
      func_004D80A4(&local_84,param_1[0xfa],ALBW_AS_F32(((ulonglong)lVar8 >> 0x20)));
      iVar1 = DAT_00309468;
      uVar9 = (undefined4)((ulonglong)lVar8 >> 0x20);
      local_80 = fVar7;
      if ((char)param_1[0x10d] == '\x03') {
        fVar6 = local_90 * local_84 + local_88 * local_7c;
        if (fVar7 <= fVar6) {
          func_00115C70(&local_78,(float *)(param_2 + 0x10),(float *)(param_1 + 0xf4));
          uVar2 = func_0068C690(&local_78);
          func_004D80A4(&local_78,uVar2,ALBW_AS_F32(((ulonglong)lVar8 >> 0x20)));
          local_74 = fVar7;
          if (DAT_00309474 < (int)ALBW_AS_U32((local_78 * local_84 + local_70 * local_7c))) {
            local_6c = fVar7;
          }
        }
        else if ((uint)ALBW_AS_U32(DAT_00309464) < (uint)ALBW_AS_U32(fVar6)) {
          fVar3 = *(float *)(DAT_00309468 + 4);
          fVar6 = fVar7;
          local_64 = func_0054DE3C(param_1,0,2);
          local_64 = local_64 * DAT_0030946c;
          local_6c = fVar6;
          local_68 = fVar3;
        }
        else {
          fVar6 = func_0054DE3C(param_1,0,0);
          lVar8 = CONCAT44(uVar9,*(undefined4 *)(iVar1 + 4));
          fVar6 = fVar6 + DAT_00309470;
          local_64 = func_0054DE3C(param_1,0,2);
          local_64 = -local_64;
          local_68 = ALBW_AS_F32(lVar8);
          local_6c = fVar6;
        }
      }
      fVar6 = ALBW_AS_F32(((ulonglong)lVar8 >> 0x20));
      func_00115E10(&local_78,&local_84,&local_90);
      if (local_74 < fVar7) {
        fVar6 = DAT_00309478;
      }
      local_6c = fVar6 * local_6c;
      func_004D7F70(&local_6c,param_1[0xfa]);
      func_00115C54(&local_6c,&local_6c,(float *)(param_1 + 0x109));
      if ((fVar4 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar4) + 0x1c) == fVar5)) {
        func_004A2F38((int)ALBW_AS_U32(fVar4),&local_6c);
      }
      param_1[0x10c] = 0x1e;
    }
    return 0;
  }
  return 1;
}

