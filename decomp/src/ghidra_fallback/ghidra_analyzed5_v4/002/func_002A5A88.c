#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_002A45FC(int param_1,int param_2);
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern float *DAT_002a5adc;
extern undefined4 DAT_002a5ae0;

// USA 002A5A88 <- EU 002A5A64 (Ghidra, non-matching)
// GLOBAL DAT_002a5adc float *
// GLOBAL DAT_002a5ae0 undefined4

void func_002A5A88(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0xb91) = 0;
  func_002A45FC(param_1,0);
  func_00115C54((float *)(param_1 + 0xa84),(float *)(param_1 + 0x3d0),DAT_002a5adc);
  *(undefined1 *)(param_1 + 0x9c8) = 2;
  *(float **)(param_1 + 0x8fc) = (float *)(param_1 + 0xa84);
  func_0036C058(param_1 + 0x8d4,0xffffffff,0xffffffff,0);
  uVar1 = DAT_002a5ae0;
  *(undefined4 *)(param_1 + 0xb64) = 0x1e;
  *(undefined4 *)(param_1 + 0xb68) = uVar1;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  return;
}

