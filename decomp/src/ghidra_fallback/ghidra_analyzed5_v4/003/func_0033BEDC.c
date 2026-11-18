#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0033CA24(int param_1,int *param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2E80(int param_1,float *param_2,float fparam_0);
extern int func_005527F8(int param_1,undefined4 *param_2,float *param_3,float *param_4);
extern int func_005811E8(int *param_1);
extern float DAT_0033c130;
extern undefined4 DAT_0033c134;
extern undefined4 DAT_0033c138;
extern undefined4 DAT_0033c13c;
extern undefined4 DAT_0033c140;
extern undefined4 DAT_0033c144;
extern undefined DAT_0033c148;
extern int DAT_0033c150;
extern float DAT_0033c15c;
extern undefined4 DAT_0033c160;
extern char s_Locus_0033c154[];

// USA 0033BEDC <- EU 0033BEB8 (Ghidra, non-matching)
// GLOBAL DAT_0033c130 float
// GLOBAL DAT_0033c134 undefined4
// GLOBAL DAT_0033c138 undefined4
// GLOBAL DAT_0033c13c undefined4
// GLOBAL DAT_0033c140 undefined4
// GLOBAL DAT_0033c144 undefined4
// GLOBAL DAT_0033c148 undefined
// GLOBAL DAT_0033c150 int
// GLOBAL DAT_0033c15c float
// GLOBAL DAT_0033c160 undefined4
// GLOBAL s_Locus_0033c154 string

void func_0033BEDC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 uVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 (*(float *)(albw_frame + 0x8))
  #define local_b4 (*(float *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_98 (*(undefined4 *)(albw_frame + 0x28))
  #define local_94 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(undefined4 *)(albw_frame + 0x34))
  #define local_88 (*(undefined4 *)(albw_frame + 0x38))
  #define local_84 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(undefined4 *)(albw_frame + 0x44))
  #define local_78 (*(undefined4 *)(albw_frame + 0x48))
  #define local_74 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x50))
  #define local_6c (*(float *)(albw_frame + 0x54))
  #define local_68 (*(undefined4 *)(albw_frame + 0x58))
  #define local_64 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_60 (*(float *)(albw_frame + 0x60))
  #define local_5c (*(undefined4 *)(albw_frame + 0x64))
  #define local_58 (*(undefined4 *)(albw_frame + 0x68))
  #define local_48 (*(float *)(albw_frame + 0x78))
  #define local_44 (*(float *)(albw_frame + 0x7c))
  #define local_40 (*(float *)(albw_frame + 0x80))
  #define local_3c (*(float *)(albw_frame + 0x84))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x88))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x8c))
  #define afStack_30 ((float *)(albw_frame + 0x90))
  uVar1 = DAT_0033c13c;
  uVar7 = CONCAT44(DAT_0033c144,DAT_0033c130);
  uVar5 = DAT_0033c134;
  if (*(float *)(param_1 + 0x464) <= DAT_0033c130) {
    uVar5 = DAT_0033c138;
  }
  *(undefined4 *)(param_1 + 0x3dc) = uVar5;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  uVar1 = DAT_0033c140;
  *(undefined4 *)(param_1 + 0x524) = 0x3c;
  *(undefined4 *)(param_1 + 0x528) = uVar1;
  *(undefined4 *)(param_1 + 0x520) = 0;
  func_005527F8(param_1,&local_78,&local_b8,afStack_30);
  if (*(int *)(param_1 + 0x344) == 0) {
    fVar6 = 0.0;
    fVar3 = 0.0;
  }
  else {
    func_004A1B9C((int *)&local_a8,*(int *)(param_1 + 0x344),(uint *)&DAT_0033c148);
    fVar6 = local_a4;
    fVar3 = local_a8;
  }
  fparam_0 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
  if ((fVar3 != 0.0) && (*(float *)((int)ALBW_AS_U32(fVar3) + 0x1c) == fVar6)) {
    local_40 = ALBW_AS_F32(uVar7);
    fVar6 = local_b8 * local_40 + local_b4 * fparam_0 + local_b0 * local_40;
    if (fVar6 <= local_40) {
      fVar6 = -fVar6;
    }
    local_48 = local_40;
    local_44 = fparam_0;
    if (DAT_0033c150 < (int)ALBW_AS_U32(fVar6)) {
      local_48 = fparam_0;
      local_44 = local_40;
    }
    func_00115E10(&local_3c,&local_48,&local_b8);
    local_60 = local_3c;
    local_5c = uStack_38;
    local_58 = uStack_34;
    func_00115DC8(&local_60);
    func_00115E10(&local_3c,&local_b8,&local_60);
    local_6c = local_3c;
    local_68 = uStack_38;
    local_64 = uStack_34;
    func_00115DC8(&local_6c);
    local_a8 = local_60;
    local_98 = local_5c;
    local_88 = local_58;
    local_a4 = local_6c;
    local_94 = local_68;
    local_84 = local_64;
    local_a0 = local_b8;
    local_90 = local_b4;
    local_80 = local_b0;
    local_9c = local_78;
    local_8c = local_74;
    local_7c = local_70;
    func_004A2E80((int)ALBW_AS_U32(fVar3),&local_a8,fparam_0);
  }
  pfVar4 = (float *)(param_1 + 0x4fc);
  if (*(int *)(param_1 + 0x344) == 0) {
    *pfVar4 = 0.0;
    *(undefined4 *)(param_1 + 0x500) = 0;
  }
  else {
    fVar6 = *pfVar4;
    if ((fVar6 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar6) + 0x1c) == *(int *)(param_1 + 0x500))) {
      func_00110848((int)ALBW_AS_U32(fVar6));
    }
    func_004A1B9C((int *)&local_b0,*(int *)(param_1 + 0x344),(uint *)s_Locus_0033c154);
    *pfVar4 = local_b0;
    *(undefined4 *)(param_1 + 0x500) = uStack_ac;
  }
  iVar2 = func_005811E8((int *)pfVar4);
  if (iVar2 != 0) {
    func_0033CA24(param_1,(int *)pfVar4,DAT_0033c15c);
  }
  uVar1 = DAT_0033c160;
  if (*(int *)(param_1 + 0x478) - *(int *)(param_1 + 0x474) < 0xb4) {
    *(undefined4 *)(param_1 + 0x478) = 0xb4;
    *(undefined4 *)(param_1 + 0x47c) = uVar1;
    *(undefined4 *)(param_1 + 0x474) = 0;
  }
  return;
}

