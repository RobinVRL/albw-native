#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D18(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001b23b4;
extern float DAT_001b23b8;
extern float *DAT_001b23bc;
extern uint *DAT_001b23c0;
extern float DAT_001b23c4;
extern int *DAT_001b23c8;
extern float *DAT_001b23cc;
extern int *DAT_001b23d0;
extern int DAT_001b23ec;
extern char s_SE_Stalfos_THROW_BONE_001b23d4[];

// USA 001B2130 <- EU 001B2130 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b23b4 float
// GLOBAL DAT_001b23b8 float
// GLOBAL DAT_001b23bc float *
// GLOBAL DAT_001b23c0 uint *
// GLOBAL DAT_001b23c4 float
// GLOBAL DAT_001b23c8 int *
// GLOBAL DAT_001b23cc float *
// GLOBAL DAT_001b23d0 int *
// GLOBAL DAT_001b23ec int
// GLOBAL s_SE_Stalfos_THROW_BONE_001b23d4 string

undefined4 func_001B2130(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x370];
  #define local_368 (*(float *)(albw_frame + 0x8))
  #define fStack_364 (*(float *)(albw_frame + 0xc))
  #define uStack_360 (*(undefined4 *)(albw_frame + 0x10))
  #define local_34c (*(undefined4 *)(albw_frame + 0x24))
  #define local_348 (*(uint *)(albw_frame + 0x28))
  #define local_344 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_320 (*(undefined4 *)(albw_frame + 0x50))
  #define local_31c (*(undefined4 *)(albw_frame + 0x54))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_a4 (*(float *)(albw_frame + 0x2cc))
  #define fStack_a0 (*(float *)(albw_frame + 0x2d0))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x2d4))
  #define fStack_88 (*(float *)(albw_frame + 0x2e8))
  #define local_84 (*(float *)(albw_frame + 0x2ec))
  #define local_7c (*(float *)(albw_frame + 0x2f4))
  #define fStack_78 (*(float *)(albw_frame + 0x2f8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2fc))
  #define local_70 (*(int *)(albw_frame + 0x300))
  #define local_6c (*(char * *)(albw_frame + 0x304))
  #define afStack_68 ((float *)(albw_frame + 0x308))
  #define afStack_5c ((float *)(albw_frame + 0x314))
  #define afStack_34 ((float *)(albw_frame + 0x33c))
  fVar4 = func_004F898C();
  func_004F8964((float *)(param_1 + 0xf8),1,fVar4);
  if (param_1[0x242] == 0) {
    fVar4 = DAT_001b23b4;
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_368,pfVar2,(float *)(param_1 + 0xf4));
    local_7c = local_368;
    fStack_78 = fStack_364;
    uStack_74 = uStack_360;
    iVar1 = func_0068C690(&local_7c);
    func_0051D39C(param_1 + 0xfa,iVar1,0x1b - param_1[0x22f]);
    iVar1 = *(int *)(param_1[0x104] + 0x14);
    fVar5 = *(float *)(iVar1 + 8);
    fVar6 = *(float *)(iVar1 + 0xc);
    if (fVar5 < fVar6) {
      if (*(float *)(iVar1 + 0x14) <= fVar6) {
        if (fVar5 < DAT_001b23b8) {
          return 0;
        }
        goto LAB_001b2288;
      }
      if ((fVar6 < DAT_001b23b8) && (DAT_001b23b8 <= *(float *)(iVar1 + 0x14))) goto LAB_001b2288;
    }
    else if (DAT_001b23b8 <= fVar6) {
      return 0;
    }
    if (DAT_001b23b8 <= fVar5) {
LAB_001b2288:
      func_00115D18(afStack_68,(float *)(param_1[0x103] + 0x104),DAT_001b23bc);
      func_00115C54(&local_368,(float *)(param_1 + 0xf4),afStack_68);
      local_a4 = local_368;
      fStack_a0 = fStack_364;
      uStack_9c = uStack_360;
      iVar1 = param_1[1];
      uVar3 = param_1[0xfa];
      local_348 = 0;
      local_344 = 0;
      local_34c = 0;
      local_320 = 0;
      local_31c = 0;
      local_a8 = 0;
      func_002DFF7C(&local_368);
      local_368 = ALBW_AS_F32(func_0019B04C(*DAT_001b23c0));
      func_004D80A4(&fStack_88,uVar3,DAT_001b23c4);
      local_84 = fVar4;
      func_0051E5F8(*DAT_001b23c8,afStack_5c,&fStack_88,*(float *)(iVar1 + 0x2c),
                    *(float *)(iVar1 + 0x30));
      func_00115CE4(afStack_34,afStack_5c,DAT_001b23cc);
      func_00115C54(&fStack_364,afStack_34,&local_a4);
      local_348 = uVar3;
      func_004C43E0(*DAT_001b23d0,(int *)&local_368);
      local_6c = s_SE_Stalfos_THROW_BONE_001b23d4;
      local_70 = DAT_001b23ec;
      func_00150A84(param_1,&local_70,0);
      param_1[0x242] = param_1[0x242] + 1;
      return 0;
    }
  }
  else if ((param_1[0x242] == 1) &&
          (iVar1 = *(int *)(param_1[0x104] + 0x14), *(char *)(iVar1 + 0x1c) == '\0')) {
    if (*(float *)(iVar1 + 0x10) < DAT_001b23b4) {
      if (*(float *)(iVar1 + 8) <= DAT_001b23b4) goto LAB_001b239c;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_001b239c:
      return func_0065B158(param_1 + 0x22f,2);
    }
  }
  return 0;
}

