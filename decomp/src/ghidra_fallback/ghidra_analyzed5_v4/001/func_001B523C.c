#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_005292FC(int param_1);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_001b52b4;

// USA 001B523C <- EU 001B523C (Ghidra, non-matching)
// GLOBAL DAT_001b52b4 undefined4

void func_001B523C(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  uVar1 = DAT_001b52b4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001b52b4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  *(undefined4 *)(param_1 + 0x950) = uVar1;
  func_004FC07C(param_1,0xb,0xffffffff,0);
  puVar2 = func_005292FC(param_1);
  if (puVar2 != (undefined4 *)0x0) {
    func_00115C70(afStack_18,(float *)(puVar2 + 0xf4),(float *)(param_1 + 0x3d0));
    iVar3 = func_0068C690(afStack_18);
    *(int *)(param_1 + 0x954) = iVar3;
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  return;
}

