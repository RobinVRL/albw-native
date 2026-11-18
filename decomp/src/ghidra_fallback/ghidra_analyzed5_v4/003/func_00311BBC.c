#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00312754(int param_1);
extern int func_004BC550(int param_1,uint param_2,int param_3);
extern float DAT_00311c30;
extern undefined4 DAT_00311c34;
extern undefined4 DAT_00311c38;

// USA 00311BBC <- EU 00311B98 (Ghidra, non-matching)
// GLOBAL DAT_00311c30 float
// GLOBAL DAT_00311c34 undefined4
// GLOBAL DAT_00311c38 undefined4

void func_00311BBC(int param_1,uint param_2,int param_3)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(float *)(albw_frame + 0x14))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  func_004BC550(param_1,param_2,param_3);
  iVar1 = func_00312754(param_1);
  if (iVar1 != 0) {
    local_28 = *(float *)(param_1 + 0x3d0);
    uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
    local_1c = DAT_00311c30;
    uStack_18 = DAT_00311c34;
    uStack_14 = DAT_00311c38;
    func_00115C54(&local_28,&local_28,&local_1c);
    *(undefined4 *)(iVar1 + 1000) = *(undefined4 *)(param_1 + 1000);
    *(float *)(iVar1 + 0x368) = local_28;
    *(undefined4 *)(iVar1 + 0x36c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x370) = uStack_20;
    *(float *)(iVar1 + 0x3d0) = local_28;
    *(undefined4 *)(iVar1 + 0x3d4) = uStack_24;
    *(undefined4 *)(iVar1 + 0x3d8) = uStack_20;
    *(float *)(iVar1 + 0x844) = local_28;
    *(undefined4 *)(iVar1 + 0x848) = uStack_24;
    *(undefined4 *)(iVar1 + 0x84c) = uStack_20;
    *(float *)(iVar1 + 0x838) = local_28;
    *(undefined4 *)(iVar1 + 0x83c) = uStack_24;
    *(undefined4 *)(iVar1 + 0x840) = uStack_20;
  }
  return;
}

