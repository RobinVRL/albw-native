#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_003167D4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int param_4, undefined4 param_5);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern float DAT_002120f0;
extern float DAT_002120f4;
extern float DAT_002120f8;
extern float DAT_002120fc;
extern float DAT_00212100;
extern float DAT_00212104;

// USA 00211F44 <- EU 00211F44 (Ghidra, non-matching)
// GLOBAL DAT_002120f0 float
// GLOBAL DAT_002120f4 float
// GLOBAL DAT_002120f8 float
// GLOBAL DAT_002120fc float
// GLOBAL DAT_00212100 float
// GLOBAL DAT_00212104 float

undefined4 func_00211F44(int param_1)

{
  int iVar1;
  float fparam_1;
  float fparam_0;
  undefined8 uVar2;
  longlong lVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 ((undefined4 *)(albw_frame + 0x10))
  fparam_1 = DAT_002120f0;
  iVar1 = func_005211F4(param_1,DAT_002120f4,DAT_002120f0);
  fparam_0 = DAT_002120f8;
  if ((iVar1 == 0) && (iVar1 = func_005211F4(param_1,DAT_002120f8,fparam_1), iVar1 != 0))
  goto LAB_002120d8;
  iVar1 = func_005211F4(param_1,fparam_0,fparam_1);
  if (iVar1 == 0) {
    return func_0065D774((undefined4 *)(param_1 + 0x8bc),2);
  }
  func_0014EB3C(param_1);
  if ((0x5a < *(int *)(param_1 + 0x8bc)) || (*(char *)(param_1 + 0x8c1) == '\f')) {
    uVar2 = func_0058AB74(param_1);
    if ((int)uVar2 == 1) {
LAB_002120b8:
      func_004FABDC(param_1,3,0,0);
    }
    else {
      lVar3 = func_0058ACC8(param_1,DAT_002120fc);
      if ((int)lVar3 == 0) {
        iVar1 = func_0058A8F0(param_1);
        if (iVar1 != 0) goto LAB_002120b8;
      }
      else {
        iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                *(int *)(param_1 + 0x968) * 0x30;
        local_2c = *(float *)(iVar1 + 0xc);
        local_28 = *(float *)(iVar1 + 0x1c);
        local_24 = *(undefined4 *)(iVar1 + 0x2c);
        func_00115DAC(&local_2c,(float *)(param_1 + 0x374),&local_2c,DAT_00212100);
        local_28 = local_28 - DAT_00212104;
        local_20[0] = *(undefined4 *)(param_1 + 0x2cc);
        func_003167D4(&local_2c,*(undefined4 *)(param_1 + 1000),local_20,0,0);
        *(int *)(param_1 + 0x96c) = *(int *)(param_1 + 0x96c) + 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x96c) < 3) {
    return 0;
  }
LAB_002120d8:
  return func_0065D774((undefined4 *)(param_1 + 0x8bc),1);
}

