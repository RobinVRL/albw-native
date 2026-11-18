#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0058E2B8(int *param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_002688dc;

// USA 00268830 <- EU 00268858 (Ghidra, non-matching)
// GLOBAL DAT_002688dc int

undefined4 func_00268830(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 ((int *)(albw_frame + 0x18))
  fVar4 = param_2[1];
  fVar6 = param_2[2];
  *(float *)(param_1 + 0x984) = *param_2;
  *(float *)(param_1 + 0x988) = fVar4;
  *(float *)(param_1 + 0x98c) = fVar6;
  iVar1 = DAT_002688dc;
  *(undefined4 *)(param_1 + 0xb9c) = param_3;
  uVar5 = *(uint *)(iVar1 + 0x40);
  func_00115C70(&local_24,param_2,(float *)(param_1 + 0x3d0));
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  local_18[0] = func_0068C690(&local_30);
  local_18[0] = *(int *)(param_1 + 1000) - local_18[0];
  uVar2 = func_0058E2B8(local_18);
  if (uVar2 < uVar5) {
    uVar3 = (undefined1)param_3;
  }
  else {
    uVar3 = 1;
  }
  return func_00660718((undefined4 *)(param_1 + 0x8c8),uVar3);
}

