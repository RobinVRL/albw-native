#include "ghidra_types.h"

extern float DAT_00325db4;
extern int *DAT_00325db8;

// USA 00325CF4 <- EU 00325CD0 (Ghidra, non-matching)
// GLOBAL DAT_00325db4 float
// GLOBAL DAT_00325db8 int *

undefined4 func_00325CF4(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  float *pfVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fVar4 = DAT_00325db4;
  pfVar1 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
  local_20 = *pfVar1;
  fStack_1c = pfVar1[1];
  local_18 = pfVar1[2];
  if (param_2 == 0) {
    local_18 = local_18 + fVar4;
  }
  else if (param_2 == 1) {
    local_20 = local_20 + fVar4;
  }
  else if (param_2 == 2) {
    local_18 = local_18 - fVar4;
  }
  else if (param_2 == 3) {
    local_20 = local_20 - fVar4;
  }
  uVar2 = **(int **)(*DAT_00325db8 + 0x24) + 0x20000000U >> 0x1e;
  if (uVar2 == param_2) {
    *(undefined1 *)((int)param_1 + 0x4eb) = 1;
  }
  else {
    if (uVar2 < 4) {
      uVar2 = uVar2 + 2 & 3;
    }
    else {
      uVar2 = 0xffffffff;
    }
    if (uVar2 == param_2) {
      *(undefined1 *)(param_1 + 0x13b) = 1;
    }
  }
  uVar3 = (**(code **)(*param_1 + 0x5c))(param_1,&local_20);
  return uVar3;
}

