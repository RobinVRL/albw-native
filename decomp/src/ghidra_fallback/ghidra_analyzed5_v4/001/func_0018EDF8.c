#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_00581D60(int param_1);
extern uint *DAT_0018ef10;
extern int *DAT_0018ef14;
extern float DAT_0018ef18;
extern float DAT_0018ef1c;
extern float DAT_0018ef20;
extern int *DAT_0018ef24;
extern float DAT_0018ef28;
extern int *DAT_0018ef2c;

// USA 0018EDF8 <- EU 0018EDF8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_0018ef10 uint *
// GLOBAL DAT_0018ef14 int *
// GLOBAL DAT_0018ef18 float
// GLOBAL DAT_0018ef1c float
// GLOBAL DAT_0018ef20 float
// GLOBAL DAT_0018ef24 int *
// GLOBAL DAT_0018ef28 float
// GLOBAL DAT_0018ef2c int *

int func_0018EDF8(undefined4 param_1,float *param_2,uint param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x330];
  #define local_328 (*(int *)(albw_frame + 0x8))
  #define afStack_324 ((float *)(albw_frame + 0xc))
  #define local_30c (*(undefined4 *)(albw_frame + 0x24))
  #define local_308 (*(uint *)(albw_frame + 0x28))
  #define local_304 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2e4 (*(float *)(albw_frame + 0x4c))
  #define local_2e0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2dc (*(undefined4 *)(albw_frame + 0x54))
  #define local_2d8 (*(undefined2 *)(albw_frame + 0x58))
  #define local_68 (*(uint *)(albw_frame + 0x2c8))
  #define local_64 (*(float *)(albw_frame + 0x2cc))
  #define local_60 (*(float *)(albw_frame + 0x2d0))
  #define local_5c (*(float *)(albw_frame + 0x2d4))
  #define afStack_58 ((float *)(albw_frame + 0x2d8))
  #define fStack_2c (*(float *)(albw_frame + 0x304))
  #define local_28 (*(float *)(albw_frame + 0x308))
  local_308 = 0;
  local_304 = 0;
  local_30c = 0;
  local_2e0 = 0;
  local_2dc = 0;
  local_68 = 0;
  func_002DFF7C(&local_328);
  local_328 = func_0019B04C(*DAT_0018ef10);
  uVar1 = func_00581D60(*DAT_0018ef14);
  local_2d8 = (undefined2)uVar1;
  fparam_0 = DAT_0018ef18;
  local_2dc = param_1;
  func_004D80A4(&fStack_2c,param_3,DAT_0018ef18);
  local_28 = DAT_0018ef1c;
  fVar3 = DAT_0018ef1c;
  func_0051E5F8(*DAT_0018ef24,afStack_58,&fStack_2c,fparam_0,DAT_0018ef20);
  local_64 = fVar3;
  local_60 = fVar3;
  local_5c = fVar3;
  func_00115CE4(&local_64,afStack_58,&local_64);
  func_00115C54(afStack_324,&local_64,param_2);
  if (param_4 == 0) {
    fparam_0 = fVar3;
  }
  if (param_5 != 0) {
    fVar3 = DAT_0018ef28;
  }
  local_2e4 = fparam_0 + fVar3;
  local_68 = local_68 | 1;
  local_308 = param_3;
  piVar2 = func_004C4AF4(*DAT_0018ef2c,&local_328,0);
  return piVar2[0xb3];
}

