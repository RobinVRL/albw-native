#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_0022a270;
extern int *DAT_0022a274;

// USA 0022A1D4 <- EU 0022A1D4 (Ghidra, non-matching)
// GLOBAL DAT_0022a270 undefined4
// GLOBAL DAT_0022a274 int *

void func_0022A1D4(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_c (*(undefined4 *)(albw_frame + 0x14))
  uVar1 = DAT_0022a270;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0022a270;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  func_004FC07C(param_1,4,0xffffffff,0);
  if (*(uint *)(param_1 + 0xa7c) < *(uint *)(param_1 + 0xa80)) {
    *(uint *)(param_1 + 0xa7c) = *(uint *)(param_1 + 0xa7c) + 1;
  }
  puVar2 = *(undefined4 **)(*DAT_0022a274 + 0x1c);
  *(undefined4 *)(param_1 + 0xaf8) = *puVar2;
  *(undefined4 *)(param_1 + 0xafc) = puVar2[1];
  *(undefined4 *)(param_1 + 0xb00) = puVar2[2];
  func_00115C70(&local_14,(float *)(param_1 + 0xaf8),(float *)(param_1 + 0x3d0));
  local_20 = local_14;
  uStack_1c = uStack_10;
  uStack_18 = uStack_c;
  iVar3 = func_0068C690(&local_20);
  *(int *)(param_1 + 0xab4) = iVar3;
  return;
}

