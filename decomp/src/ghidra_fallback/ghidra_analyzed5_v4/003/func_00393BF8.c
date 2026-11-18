#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_003616E4(int param_1);
extern int func_00393850(int param_1);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_004D8548(float *param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3,float fparam_4);
extern int func_00518F90(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0058DB88(int param_1);
extern int *DAT_00393d38;
extern int DAT_00393d3c;
extern int *DAT_00393d40;
extern float DAT_00393d44;
extern float DAT_00393d48;
extern undefined4 *DAT_00393d4c;
extern int *DAT_00393d50;
extern int *DAT_00393d54;

// USA 00393BF8 <- EU 00393BD4 (Ghidra, non-matching)
// GLOBAL DAT_00393d38 int *
// GLOBAL DAT_00393d3c int
// GLOBAL DAT_00393d40 int *
// GLOBAL DAT_00393d44 float
// GLOBAL DAT_00393d48 float
// GLOBAL DAT_00393d4c undefined4 *
// GLOBAL DAT_00393d50 int *
// GLOBAL DAT_00393d54 int *

undefined4 func_00393BF8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  float in_s0;
  float fparam_0;
  
  switch(param_2) {
  case 0:
    if (*(short *)(DAT_00393d3c + param_1) == 0) {
      func_003616E4(*DAT_00393d40);
      return 1;
    }
    break;
  case 1:
    fparam_0 = (float)VectorUnsignedToFloat
                                (*(undefined4 *)(param_1 + 0xb50),(byte)(in_fpscr >> 0x15) & 3);
    func_004D8548((float *)(param_1 + 0xb30),(float *)(param_1 + 0xb18),(float *)(param_1 + 0xb24),
                  fparam_0,DAT_00393d44,DAT_00393d44,DAT_00393d48,DAT_00393d44);
    if (*(int *)(*DAT_00393d50 + 0x18) != 0) {
      func_001E8268(*(int *)(*DAT_00393d50 + 0x18),(int *)(param_1 + 0xb10),
                    (undefined4 *)(param_1 + 0xb30),DAT_00393d4c);
    }
    if (*(uint *)(param_1 + 0xb54) <= *(uint *)(param_1 + 0xb50)) {
      return 1;
    }
    *(uint *)(param_1 + 0xb50) = *(uint *)(param_1 + 0xb50) + 1;
    break;
  case 2:
    uVar2 = func_00393850(param_1);
    return uVar2;
  case 3:
    if (*(int *)(param_1 + 0xb68) == 800) {
      func_004AD9E8(*DAT_00393d54,2,0,1,in_s0);
    }
    uVar3 = *(uint *)(param_1 + 0xb68);
    if (*(uint *)(param_1 + 0xb6c) <= uVar3) {
      return 1;
    }
    goto LAB_00393cec;
  case 4:
    uVar3 = *(uint *)(param_1 + 0xb68);
    if (*(uint *)(param_1 + 0xb6c) <= uVar3) {
      func_00518F90(*DAT_00393d38,uVar3,*(uint *)(param_1 + 0xb6c),param_4);
      return 1;
    }
LAB_00393cec:
    *(uint *)(param_1 + 0xb68) = uVar3 + 1;
    break;
  case 5:
    bVar1 = func_0058DB88(*DAT_00393d38);
    if (!bVar1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0xbb9) = 1;
  default:
    return 1;
  case 6:
    break;
  }
  return 0;
}

