#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C43E0(int param_1,int *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern uint *DAT_00358274;
extern float DAT_00358278;
extern undefined4 DAT_0035827c;
extern float DAT_00358280;
extern int *DAT_00358284;
extern int *DAT_00358288;

// USA 003581DC <- EU 003581B8 (Ghidra, non-matching)
// GLOBAL DAT_00358274 uint *
// GLOBAL DAT_00358278 float
// GLOBAL DAT_0035827c undefined4
// GLOBAL DAT_00358280 float
// GLOBAL DAT_00358284 int *
// GLOBAL DAT_00358288 int *

undefined4 func_003581DC(float *param_1,uint *param_2,undefined4 param_3)

{
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x320];
  #define local_318 (*(int *)(albw_frame + 0x8))
  #define afStack_314 ((float *)(albw_frame + 0xc))
  #define local_2fc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2f8 (*(uint *)(albw_frame + 0x28))
  #define local_2f4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x50))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x54))
  #define local_58 (*(undefined4 *)(albw_frame + 0x2c8))
  #define fStack_54 (*(float *)(albw_frame + 0x2cc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x2d0))
  #define afStack_48 ((float *)(albw_frame + 0x2d8))
  #define afStack_24 ((float *)(albw_frame + 0x2fc))
  local_2f8 = 0;
  local_2f4 = 0;
  local_2fc = 0;
  local_2d0 = 0;
  local_2cc = 0;
  local_58 = 0;
  func_002DFF7C(&local_318);
  local_318 = func_0019B04C(*DAT_00358274);
  fparam_0 = DAT_00358278;
  local_2cc = param_3;
  func_004D80A4(&fStack_54,*param_2,DAT_00358278);
  local_50 = DAT_0035827c;
  func_0051E5F8(*DAT_00358284,afStack_48,&fStack_54,fparam_0,DAT_00358280);
  func_00115C54(afStack_314,afStack_24,param_1);
  local_2f8 = *param_2;
  return func_004C43E0(*DAT_00358288,&local_318);
}

