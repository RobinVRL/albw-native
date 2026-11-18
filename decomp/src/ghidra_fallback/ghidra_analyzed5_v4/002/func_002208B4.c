#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);

// USA 002208B4 <- EU 002208B4 (Ghidra, non-matching)

void func_002208B4(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  *(undefined4 *)(param_1 + 0xa10) = 4;
  uVar1 = *(uint *)(param_1 + 0xa00);
  iVar2 = *(int *)(uVar1 + 0x28);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(uVar1 + 0x20);
  }
  if (iVar2 != 0 && 4 < uVar1) {
    iVar2 = *(int *)(iVar2 + 0x10);
  }
  else {
    iVar2 = 0;
  }
  local_10 = *(undefined4 *)(iVar2 + 0x20);
  local_18 = *(float *)(iVar2 + 0x18);
  uVar3 = *(undefined4 *)(iVar2 + 0x1c);
  *(float *)(param_1 + 0xa14) = local_18;
  *(undefined4 *)(param_1 + 0xa18) = uVar3;
  *(undefined4 *)(param_1 + 0xa1c) = local_10;
  local_14 = *(undefined4 *)(param_1 + 0x3d4);
  func_00115C70((float *)(param_1 + 0xa20),&local_18,(float *)(param_1 + 0x3d0));
  func_00115DC8((float *)(param_1 + 0xa20));
  return;
}

