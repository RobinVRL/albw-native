#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);

// USA 0017BDA8 <- EU 0017BDA8 (Ghidra, non-matching)

void func_0017BDA8(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  if (param_2 == 0) {
    return;
  }
  func_00115C70(afStack_18,(float *)(param_2 + 0x3d0),(float *)(param_1 + 0x3d0));
  *(undefined1 *)(param_1 + 0x885) = 1;
  iVar1 = func_0068C690(afStack_18);
  *(int *)(param_1 + 0x874) = iVar1;
  return;
}

