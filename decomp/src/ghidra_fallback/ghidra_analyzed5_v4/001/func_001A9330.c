#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0058A8F0(int param_1);
extern int func_0065A984(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a93b4;
extern float DAT_001a93b8;

// USA 001A9330 <- EU 001A9330 (Ghidra, non-matching)
// GLOBAL DAT_001a93b4 float
// GLOBAL DAT_001a93b8 float

undefined4 func_001A9330(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (0x14 < *(int *)(param_1 + 0x8bc)) {
    fVar2 = *(float *)(param_1 + 0x91c);
    *(float *)(param_1 + 0x91c) = fVar2 + (DAT_001a93b4 - fVar2) * DAT_001a93b8;
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7b;
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    return func_0065A984((undefined4 *)(param_1 + 0x8bc),0);
  }
  return func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
}

