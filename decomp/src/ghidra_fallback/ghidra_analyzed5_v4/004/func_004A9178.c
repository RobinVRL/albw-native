#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0042E8C8(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0042E990(int param_1,float *param_2,undefined4 param_3,undefined4 *param_4);
extern int func_0042EFB0(int param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 *param_5);
extern int func_004342CC(int param_1,float *param_2,float *param_3);
extern int func_00434418(int param_1,float *param_2,float fparam_0);
extern float func_005706B0(int param_1);
extern int func_00589A64(int param_1);
extern int func_0068B200(float *param_1,float *param_2);
extern int DAT_004a94d8;
extern float DAT_004a94dc;
extern float DAT_004a94e0;
extern float DAT_004a94e4;

// USA 004A9178 <- EU 004A9150 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_004a94d8 int
// GLOBAL DAT_004a94dc float
// GLOBAL DAT_004a94e0 float
// GLOBAL DAT_004a94e4 float

void func_004A9178(undefined4 param_1,int param_2,float *param_3,undefined4 *param_4,
                  undefined4 param_5,int param_6,float fparam_0,float fparam_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(float *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(float *)(albw_frame + 0x28))
  #define local_64 (*(float *)(albw_frame + 0x2c))
  #define local_60 (*(float *)(albw_frame + 0x30))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define local_58 (*(float *)(albw_frame + 0x38))
  #define local_54 (*(float *)(albw_frame + 0x3c))
  #define local_50 (*(float *)(albw_frame + 0x40))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x48))
  #define local_44 (*(float *)(albw_frame + 0x4c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  if ((*(char *)(param_2 + 0x44) != '\0') &&
     (bVar2 = func_00589A64(param_2), iVar1 = DAT_004a94d8, bVar2)) {
    iVar3 = *(int *)(param_2 + 0x10);
    if (((*(float *)(iVar3 + 0x34) <= *param_3 + fparam_1) &&
        (((*(float *)(iVar3 + 0x3c) <= param_3[2] + fparam_1 &&
          (*param_3 - fparam_1 <= *(float *)(iVar3 + 0x40))) &&
         (param_3[2] - fparam_1 <= *(float *)(iVar3 + 0x48))))) &&
       ((*(float *)(iVar3 + 0x38) <= param_3[1] + fparam_1 &&
        (param_3[1] - fparam_1 <= *(float *)(iVar3 + 0x44))))) {
      *(int *)(DAT_004a94d8 + 8) = param_2;
      if (param_6 == 0) {
        if (*(int *)(param_2 + 0x14) == 0) {
          fVar5 = DAT_004a94e0;
          fVar6 = DAT_004a94dc;
          fVar7 = DAT_004a94e4;
          fVar4 = func_005706B0(iVar3);
          if (fVar4 <= fparam_0) {
            local_74 = param_3[1];
            local_70 = param_3[2];
            local_78 = *param_3 + fparam_0;
            local_68 = fVar6;
            local_64 = fVar6;
            local_60 = fVar6;
            local_5c = fVar5;
            local_58 = fVar5;
            local_54 = fVar5;
            func_0068B200(&local_68,&local_78);
            local_78 = local_78 - fparam_0 * fVar7;
            func_0068B200(&local_68,&local_78);
            local_78 = *param_3;
            local_74 = param_3[1];
            local_70 = param_3[2] + fparam_0;
            func_0068B200(&local_68,&local_78);
            local_70 = local_70 - fparam_0 * fVar7;
            func_0068B200(&local_68,&local_78);
            func_00115C70(&local_44,&local_68,(float *)(iVar3 + 4));
            local_50 = local_44;
            uStack_4c = uStack_40;
            uStack_48 = uStack_3c;
            func_00115C70(&local_44,&local_5c,(float *)(iVar3 + 4));
            local_84 = local_44;
            fStack_80 = ALBW_AS_F32(uStack_40);
            fStack_7c = ALBW_AS_F32(uStack_3c);
            func_0042EFB0(iVar3,&local_50,&local_84,param_5,param_4);
          }
          else {
            func_00115C70(&local_78,param_3,(float *)(iVar3 + 4));
            local_84 = local_78;
            fStack_80 = local_74;
            fStack_7c = local_70;
            func_0042E990(iVar3,&local_84,param_5,param_4);
          }
        }
        else {
          fVar5 = DAT_004a94e0;
          fVar6 = DAT_004a94dc;
          fVar7 = DAT_004a94e4;
          local_88 = fparam_0;
          func_00434418(iVar3,&local_88,fparam_0);
          fVar4 = func_005706B0(iVar3);
          if (fVar4 <= local_88) {
            func_004342CC(iVar3,&local_84,param_3);
            local_5c = fStack_80;
            local_58 = fStack_7c;
            local_60 = local_84 + fparam_0;
            local_78 = fVar6;
            local_74 = fVar6;
            local_70 = fVar6;
            local_6c = fVar5;
            local_68 = fVar5;
            local_64 = fVar5;
            func_0068B200(&local_78,&local_60);
            local_60 = local_60 - fparam_0 * fVar7;
            func_0068B200(&local_78,&local_60);
            local_60 = local_84;
            local_5c = fStack_80;
            local_58 = fStack_7c + fparam_0;
            func_0068B200(&local_78,&local_60);
            local_58 = local_58 - fparam_0 * fVar7;
            func_0068B200(&local_78,&local_60);
            func_0042EFB0(iVar3,&local_78,&local_6c,param_5,param_4);
          }
          else {
            func_004342CC(iVar3,&local_84,param_3);
            func_0042E990(iVar3,&local_84,param_5,param_4);
          }
        }
      }
      else if (*(short *)(iVar3 + 0x88) != 0) {
        func_0042E8C8(iVar3,param_4,param_5);
      }
      *(undefined4 *)(iVar1 + 8) = 0;
    }
  }
  return;
}

