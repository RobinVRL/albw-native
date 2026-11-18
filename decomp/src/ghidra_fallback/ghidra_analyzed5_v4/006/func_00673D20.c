#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_002F8DE4(int *param_1,int param_2,uint param_3,int param_4);
extern int func_002F93C8(uint param_1,int param_2);
extern int func_003931EC(undefined4 *param_1,uint param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_0065B098(int param_1,undefined4 param_2);
extern int func_0065B104(int param_1);
extern int DAT_00673de0;

// USA 00673D20 <- EU 00673CF8 (Ghidra, non-matching)
// GLOBAL DAT_00673de0 int

void func_00673D20(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_002F8DE4(param_1,1,0xffffffff,1);
  param_1[0x262] = 0;
  if (*(char *)((int)param_1 + 0x90a) == '\0') {
    param_1[0x25f] = 300;
  }
  else {
    param_1[0x25f] = 0;
  }
  iVar1 = func_002F93C8((uint)param_1,1);
  if (iVar1 == 0) {
    piVar3 = param_1 + 0x243;
    func_0065B098((int)piVar3,0);
    func_003931EC(piVar3,0);
    func_0065B104((int)piVar3);
  }
  else {
    func_00115C70(local_20,(float *)(param_1 + 0x234),(float *)(param_1 + 0xf4));
    uVar2 = func_004904CC(local_20[0],local_18);
    param_1[0x237] = uVar2;
    iVar1 = DAT_00673de0;
    if (param_1[0xfa] == uVar2) {
      func_0014FAFC((int)param_1,param_1[0xfa],ALBW_AS_F32(param_1[0x239]));
    }
    else {
      param_1[0xf7] = DAT_00673de0;
      param_1[0xf9] = iVar1;
    }
  }
  *(undefined1 *)((int)param_1 + 0x98d) = 0;
  *(undefined1 *)((int)param_1 + 0x98f) = 1;
  *(undefined1 *)(param_1 + 0x264) = 0;
  return;
}

