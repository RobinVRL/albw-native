#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_003E23A4(int param_1,float *param_2);
extern int func_003E27CC(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, int param_6,float fparam_0,float fparam_1);
extern int func_003E2B04(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, int param_6,float fparam_0,float fparam_1);
extern int func_0048A2C4(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5, float *param_6,float *param_7);
extern int func_00493EE0(int param_1,undefined4 *param_2,undefined4 param_3);
extern float func_00564688(int param_1);
extern int func_0057D258(int *param_1);

// USA 0048E924 <- EU 0048E8FC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// PARAM param_6 Stack[0x4]:4 int *
// PARAM param_7 Stack[0x8]:4 int
// PARAM param_8 Stack[0xc]:4 int

void func_0048E924(float *param_1,int param_2,int *param_3,int param_4,int *param_5,int *param_6,
                  int param_7,int param_8,float fparam_0,float fparam_1)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define local_124 (*(float *)(albw_frame + 0xc))
  #define afStack_120 ((float *)(albw_frame + 0x10))
  #define local_100 (*(float *)(albw_frame + 0x30))
  #define local_fc (*(float *)(albw_frame + 0x34))
  #define local_f8 (*(float *)(albw_frame + 0x38))
  #define local_f4 (*(float *)(albw_frame + 0x3c))
  #define afStack_e0 ((float *)(albw_frame + 0x50))
  #define local_c0 (*(float *)(albw_frame + 0x70))
  #define local_bc (*(float *)(albw_frame + 0x74))
  #define local_b8 (*(float *)(albw_frame + 0x78))
  #define local_b4 (*(float *)(albw_frame + 0x7c))
  #define afStack_a0 ((float *)(albw_frame + 0x90))
  #define afStack_70 ((float *)(albw_frame + 0xc0))
  #define local_40 (*(float *)(albw_frame + 0xf0))
  #define local_3c (*(float *)(albw_frame + 0xf4))
  #define local_38 (*(float *)(albw_frame + 0xf8))
  #define fStack_34 (*(float *)(albw_frame + 0xfc))
  #define local_30 ((float *)(albw_frame + 0x100))
  pfVar1 = (float *)func_0057D258(param_6);
  func_0048A2C4(&local_40,&local_3c,&local_38,&fStack_34,local_30,&local_124,pfVar1);
  *param_1 = local_38;
  param_1[1] = fStack_34;
  param_1[2] = local_3c;
  param_1[3] = local_40;
  param_1[4] = local_30[0];
  param_1[5] = local_124;
  func_003E23A4((int)param_1,(float *)(param_7 + 4));
  if (param_8 == 0) {
    func_003E27CC(param_1,afStack_120,afStack_70,afStack_e0,afStack_a0,0,fparam_0,fparam_1);
  }
  else {
    func_003E2B04(param_1,afStack_120,afStack_70,afStack_e0,afStack_a0,0,fparam_0,fparam_1);
  }
  local_100 = -local_100;
  local_fc = -local_fc;
  local_f8 = -local_f8;
  local_f4 = -local_f4;
  func_00493EE0(param_2,afStack_120,0);
  local_c0 = -local_c0;
  local_bc = -local_bc;
  local_b8 = -local_b8;
  local_b4 = -local_b4;
  func_00493EE0(param_4,afStack_e0,0);
  func_001151EC(param_3 + 0xd,afStack_70);
  (**(code **)(*param_3 + 0x10))(param_3,param_3 + 1);
  func_001151EC(param_5 + 0xd,afStack_a0);
  (**(code **)(*param_5 + 0x10))(param_5,param_5 + 1);
  func_00564688(param_1);
  return;
}

