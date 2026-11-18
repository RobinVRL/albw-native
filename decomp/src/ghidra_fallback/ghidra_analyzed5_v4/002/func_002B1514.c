#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00352128(int param_1,int *param_2,uint *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern float DAT_002b15fc;
extern int *DAT_002b1600;
extern undefined4 DAT_002b1604;
extern char s_ReactCut_002b1608[];

// USA 002B1514 <- EU 002B14F0 (Ghidra, non-matching)
// GLOBAL DAT_002b15fc float
// GLOBAL DAT_002b1600 int *
// GLOBAL DAT_002b1604 undefined4
// GLOBAL s_ReactCut_002b1608 string

void func_002B1514(int param_1,float *param_2,float fparam_0)

{
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define fStack_90 (*(float *)(albw_frame + 0x10))
  #define local_8c (*(uint *)(albw_frame + 0x14))
  #define local_88 (*(int *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_7c (*(int *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define fStack_60 (*(float *)(albw_frame + 0x40))
  #define afStack_58 ((float *)(albw_frame + 0x48))
  #define local_28 ((float *)(albw_frame + 0x78))
  #define local_20 (*(float *)(albw_frame + 0x80))
  local_98 = *param_2;
  fStack_90 = param_2[2];
  local_94 = param_2[1] + DAT_002b15fc;
  func_00115C70(local_28,*(float **)(*DAT_002b1600 + 0x1c),&local_98);
  local_78 = local_28[0];
  local_70 = local_20;
  local_74 = DAT_002b1604;
  func_00115DC8(&local_78);
  local_68 = local_78;
  uStack_64 = local_74;
  fStack_60 = local_70;
  func_00115D70(&local_68,&local_68,fparam_0);
  func_00115C54(&local_98,&local_98,&local_68);
  local_80 = 0;
  func_00352128(param_1 + 0x324,&local_80,(uint *)s_ReactCut_002b1608);
  local_88 = func_004904CC(local_78,local_70);
  local_8c = 0;
  uStack_84 = 0;
  func_0049216C(afStack_58,&local_8c,&local_98);
  if ((local_80 != 0) && (*(int *)(local_80 + 0x1c) == local_7c)) {
    func_004A2D1C(local_80,afStack_58);
  }
  return;
}

