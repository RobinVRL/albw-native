#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_00302404;
extern int DAT_00302408;
extern int DAT_0030240c;
extern undefined4 DAT_00302410;
extern undefined4 DAT_00302414;
extern undefined DAT_00302418;
extern int DAT_00302430;
extern char s_cf_0030241c[];
extern undefined4 _DAT_00302418;

// USA 00302348 <- EU 00302324 (Ghidra, non-matching)
// GLOBAL DAT_00302404 float
// GLOBAL DAT_00302408 int
// GLOBAL DAT_0030240c int
// GLOBAL DAT_00302410 undefined4
// GLOBAL DAT_00302414 undefined4
// GLOBAL DAT_00302418 undefined
// GLOBAL DAT_00302430 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00302348(int *param_1)

{
  int iVar1;
  uint unaff_r6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  func_004D80A4((float *)(param_1 + 0xf7),param_1[0xfa],DAT_00302404);
  local_68 = DAT_00302408;
  param_1[0xf8] = DAT_00302408;
  iVar1 = DAT_0030240c;
  param_1[0x239] = 600;
  param_1[0x23a] = iVar1;
  param_1[0x238] = 0;
  local_78[1] = 3;
  local_70 = &local_6c;
  local_20 = 1;
  local_78[0] = 1;
  local_24 = 10;
  local_6c = 2;
  local_64 = DAT_00302410;
  local_60 = DAT_00302414;
  local_58 = unaff_r6 | 0xff;
  local_5c = DAT_00302410;
  func_0016898C(param_1[0x104],local_78);
  local_18 = DAT_00302430;
  *(undefined4 *)(*(int *)(param_1[0x104] + 0x14) + 0x10) = _DAT_00302418;
  local_14 = s_cf_0030241c;
  return func_00150A84(param_1,&local_18,0);
}

