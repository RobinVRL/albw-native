#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern float DAT_004e6bc8;
extern int *DAT_004e6bcc;
extern float *DAT_004e6bd0;

// USA 004E6AD8 <- EU 004E6AB0 (Ghidra, non-matching)
// GLOBAL DAT_004e6bc8 float
// GLOBAL DAT_004e6bcc int *
// GLOBAL DAT_004e6bd0 float *

void func_004E6AD8(int param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define fStack_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 ((int *)(albw_frame + 0x10))
  uVar3 = **(uint **)(*DAT_004e6bcc + 0x24);
  fVar4 = DAT_004e6bc8;
  func_004D80A4(&fStack_30,uVar3,DAT_004e6bc8);
  local_2c = fVar4;
  pfVar1 = (float *)func_00520FC0();
  func_00115C54((float *)(param_1 + 0x3d0),pfVar1,&fStack_30);
  uVar2 = uVar3 + 0x20000000 >> 0x1e;
  if (uVar2 == 1) {
LAB_004e6b48:
    *(undefined4 *)(param_1 + 0x510) = 0x40000000;
    *(undefined4 *)(param_1 + 1000) = 0x40000000;
  }
  else {
    if (uVar2 != 3) {
      local_24 = uVar3 + 0xc0000000;
      uVar2 = func_0058E2B8(&local_24);
      local_20[0] = uVar3 + 0x40000000;
      uVar3 = func_0058E2B8(local_20);
      if (uVar2 < uVar3) goto LAB_004e6b48;
    }
    *(undefined4 *)(param_1 + 0x510) = 0xc0000000;
    *(undefined4 *)(param_1 + 1000) = 0xc0000000;
  }
  *(undefined4 *)(param_1 + 0x528) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x530) = *(undefined4 *)(param_1 + 0x3d8);
  pfVar1 = DAT_004e6bd0;
  fVar4 = *DAT_004e6bd0;
  if (*(int *)(param_1 + 1000) != 0x40000000) {
    fVar4 = -fVar4;
  }
  *(float *)(param_1 + 0x528) = *(float *)(param_1 + 0x528) + fVar4;
  *(float *)(param_1 + 0x52c) = *(float *)(param_1 + 0x52c) + pfVar1[1];
  *(float *)(param_1 + 0x530) = *(float *)(param_1 + 0x530) + pfVar1[2];
  return;
}

