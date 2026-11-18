#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int *DAT_00545a7c;
extern float DAT_00545a80;
extern undefined4 DAT_00545a84;

// USA 00545A08 <- EU 005459E0 (Ghidra, non-matching)
// GLOBAL DAT_00545a7c int *
// GLOBAL DAT_00545a80 float
// GLOBAL DAT_00545a84 undefined4

undefined4 func_00545A08(int param_1,float *param_2)

{
  float fparam_0;
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define auStack_48 ((undefined4 *)(albw_frame + 0x18))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_1c (*(float *)(albw_frame + 0x44))
  #define fStack_18 (*(float *)(albw_frame + 0x48))
  #define local_14 (*(undefined4 *)(albw_frame + 0x4c))
  pfVar1 = *(float **)(*DAT_00545a7c + 0x1c);
  local_58 = *pfVar1;
  fStack_54 = pfVar1[1];
  fStack_50 = pfVar1[2];
  func_001119F4(auStack_48,
                (undefined4 *)
                (*(int *)(*(int *)(*(int *)(param_1 + 0x7a0) + 0x24) + 0x14) +
                *(int *)(param_1 + 0x840) * 0x30));
  fparam_0 = DAT_00545a80;
  *param_2 = local_3c;
  param_2[1] = local_2c;
  param_2[2] = local_1c;
  func_004D80A4(&fStack_18,*(uint *)(param_1 + 1000),fparam_0);
  local_14 = DAT_00545a84;
  func_00115C54(param_2,param_2,&fStack_18);
  return func_00115C70(param_2,param_2,&local_58);
}

