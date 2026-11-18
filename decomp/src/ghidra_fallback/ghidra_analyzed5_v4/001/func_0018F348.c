#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0018CFAC(int param_1);
extern int func_0018D524(int param_1);
extern int func_0018FAD0(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern float DAT_0018f60c;
extern float DAT_0018f620;
extern float DAT_0018f624;
extern int DAT_0018f628;
extern char s_IntoLavaUpSide_0018f610[];

// USA 0018F348 <- EU 0018F348 (Ghidra, non-matching)
// GLOBAL DAT_0018f60c float
// GLOBAL DAT_0018f620 float
// GLOBAL DAT_0018f624 float
// GLOBAL DAT_0018f628 int
// GLOBAL s_IntoLavaUpSide_0018f610 string

void func_0018F348(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 (*(float *)(albw_frame + 0x0))
  #define local_bc (*(float *)(albw_frame + 0x4))
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define fStack_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define fStack_ac (*(float *)(albw_frame + 0x14))
  #define fStack_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(undefined4 *)(albw_frame + 0x48))
  #define local_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_70 (*(float *)(albw_frame + 0x50))
  #define local_6c (*(undefined4 *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(float *)(albw_frame + 0x68))
  #define local_54 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x70))
  #define local_44 (*(float *)(albw_frame + 0x7c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x80))
  #define local_3c (*(undefined4 *)(albw_frame + 0x84))
  #define local_38 (*(float *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x90))
  *(undefined1 *)(param_1 + 0x55f) = 0;
  func_0018FAD0(param_1);
  func_0018CFAC(param_1);
  *(undefined1 *)(param_1 + 0x560) = *(undefined1 *)(param_1 + 0x561);
  *(undefined1 *)(param_1 + 0x561) = 0;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4b8) + *(char *)(param_1 + 0x4a0) * 8 + 4);
  piVar3 = (int *)(*(int *)(param_1 + 0x4b8) + *(char *)(param_1 + 0x4a0) * 8);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x4b0) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x49c) + 1;
  *(int *)(param_1 + 0x49c) = iVar2;
  if (*(int *)(param_1 + 0x4ac) != 0) {
    fVar5 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x4ac),1,fVar5);
  }
  fVar5 = DAT_0018f60c;
  if ((*(char *)(param_1 + 0x560) == '\0') && (*(char *)(param_1 + 0x561) != '\0')) {
    fVar4 = 0.0;
    fVar6 = 0.0;
    if (*(int *)(param_1 + 0x344) != 0) {
      func_004A1B9C((int *)&local_c0,*(int *)(param_1 + 0x344),(uint *)s_IntoLavaUpSide_0018f610);
      fVar4 = local_c0;
      fVar6 = local_bc;
    }
    func_00115D70(&local_c0,(float *)(param_1 + 0x564),fVar5);
    local_a4 = local_c0;
    local_a0 = local_bc;
    local_9c = local_b8;
    if ((fVar4 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar4) + 0x1c) == fVar6)) {
      local_98 = DAT_0018f624;
      local_94 = DAT_0018f620;
      local_90 = DAT_0018f624;
      fVar6 = local_c0 * DAT_0018f624 + local_bc * DAT_0018f620 + local_b8 * DAT_0018f624;
      if (fVar6 <= DAT_0018f624) {
        fVar6 = -fVar6;
      }
      if (DAT_0018f628 < (int)ALBW_AS_U32(fVar6)) {
        local_98 = DAT_0018f620;
        local_94 = DAT_0018f624;
      }
      fVar6 = DAT_0018f620;
      func_00115E10(&local_38,&local_98,&local_a4);
      local_44 = local_38;
      local_40 = uStack_34;
      local_3c = uStack_30;
      func_00115DC8(&local_44);
      func_00115E10(&local_38,&local_a4,&local_44);
      local_58 = local_38;
      local_54 = uStack_34;
      local_50 = uStack_30;
      func_00115DC8(&local_58);
      local_88 = local_44;
      local_78 = local_40;
      local_68 = local_3c;
      local_84 = local_58;
      local_74 = local_54;
      local_64 = local_50;
      local_80 = local_a4;
      local_70 = local_a0;
      local_60 = local_9c;
      local_7c = *(undefined4 *)(param_1 + 0x570);
      local_6c = *(undefined4 *)(param_1 + 0x574);
      local_5c = *(undefined4 *)(param_1 + 0x578);
      func_004A2E80((int)ALBW_AS_U32(fVar4),&local_88,fVar6);
    }
  }
  if (*(char *)(param_1 + 0x55f) != '\0') {
    func_00115D70(&local_a4,(float *)(param_1 + 0x3dc),fVar5);
    local_bc = local_a4;
    local_b8 = local_a0;
    fStack_b4 = local_9c;
    func_00115DC8(&local_bc);
    func_00115D70(&local_a4,&local_bc,*(float *)(param_1 + 0x4f8));
    local_b0 = local_a4;
    fStack_ac = local_a0;
    fStack_a8 = local_9c;
    func_00115C54((float *)(param_1 + 0x4cc),(float *)(param_1 + 0x4cc),&local_b0);
    func_00115C54((float *)(param_1 + 0x4d8),(float *)(param_1 + 0x4d8),&local_b0);
    func_0018D524(param_1);
  }
  return;
}

