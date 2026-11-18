#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern uint *DAT_005113d4;
extern float DAT_005113d8;
extern float DAT_005113dc;
extern float DAT_005113e0;
extern int *DAT_005113e4;
extern int *DAT_005113e8;

// USA 0051131C <- EU 005112F4 (Ghidra, non-matching)
// GLOBAL DAT_005113d4 uint *
// GLOBAL DAT_005113d8 float
// GLOBAL DAT_005113dc float
// GLOBAL DAT_005113e0 float
// GLOBAL DAT_005113e4 int *
// GLOBAL DAT_005113e8 int *

int func_0051131C(undefined4 *param_1,uint param_2,int param_3)

{
  int *piVar1;
  float fparam_0;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x310];
  #define local_310 (*(int *)(albw_frame + 0x0))
  #define local_30c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_308 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_304 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2f0 (*(uint *)(albw_frame + 0x20))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x24))
  #define local_2cc (*(float *)(albw_frame + 0x44))
  #define local_2c8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2c4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2c0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_50 (*(uint *)(albw_frame + 0x2c0))
  #define fStack_4c (*(float *)(albw_frame + 0x2c4))
  #define local_48 (*(float *)(albw_frame + 0x2c8))
  #define afStack_40 ((float *)(albw_frame + 0x2d0))
  local_2f0 = 0;
  local_2ec = 0;
  local_2f4 = 0;
  local_2c8 = 0;
  local_2c4 = 0;
  local_50 = 0;
  func_002DFF7C(&local_310);
  local_310 = func_0019B04C(*DAT_005113d4);
  local_30c = *param_1;
  uStack_308 = param_1[1];
  uStack_304 = param_1[2];
  local_2cc = DAT_005113d8;
  if (param_3 == 0) {
    local_2cc = DAT_005113dc;
  }
  local_2c0 = 0xffff;
  local_2c4 = 0;
  local_50 = local_50 | 1;
  fparam_0 = DAT_005113d8;
  fVar2 = DAT_005113dc;
  local_2f0 = param_2;
  func_004D80A4(&fStack_4c,param_2,DAT_005113d8);
  local_48 = fVar2;
  func_0051E5F8(*DAT_005113e4,afStack_40,&fStack_4c,fparam_0,DAT_005113e0);
  piVar1 = func_004C4AF4(*DAT_005113e8,&local_310,0);
  return piVar1[0xb3];
}

