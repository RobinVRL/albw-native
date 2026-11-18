#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern uint DAT_001b2800;
extern float DAT_001b2804;
extern undefined4 DAT_001b2808;

// USA 001B278C <- EU 001B278C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b2800 uint
// GLOBAL DAT_001b2804 float
// GLOBAL DAT_001b2808 undefined4

void func_001B278C(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  func_004FC07C(param_1,1,0xffffffff,0);
  puVar1 = (uint *)func_0058A7D4();
  uVar3 = DAT_001b2800;
  uVar2 = func_00111A64(puVar1);
  func_004D80A4((float *)(param_1 + 0x8e0),(uint)((ulonglong)uVar3 * (ulonglong)uVar2 >> 0x20),
                DAT_001b2804);
  *(undefined4 *)(param_1 + 0x8e4) = DAT_001b2808;
  func_00115C54((float *)(param_1 + 0x8e0),(float *)(param_1 + 0x8e0),(float *)(param_1 + 8));
  puVar1 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar1);
  *(int *)(param_1 + 0x908) = (int)((ulonglong)uVar3 * 0xf0 >> 0x20) + 0xb4;
  return;
}

