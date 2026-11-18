#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0068C690(float *param_1);
extern float DAT_0017c71c;
extern undefined4 DAT_0017c720;

// USA 0017C6AC <- EU 0017C6AC (Ghidra, non-matching)
// GLOBAL DAT_0017c71c float
// GLOBAL DAT_0017c720 undefined4

void func_0017C6AC(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_18 ((float *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x878) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x87c) = 0xffffffff;
  *(float *)(param_1 + 0x838) = *(float *)(param_1 + 0x844);
  *(undefined4 *)(param_1 + 0x83c) = *(undefined4 *)(param_1 + 0x848);
  *(undefined4 *)(param_1 + 0x840) = *(undefined4 *)(param_1 + 0x84c);
  uVar1 = DAT_0017c720;
  *(float *)(param_1 + 0x83c) = *(float *)(param_1 + 0x83c) + DAT_0017c71c;
  *(undefined4 *)(param_1 + 0x868) = 0;
  *(undefined4 *)(param_1 + 0x888) = uVar1;
  func_00115C70(afStack_18,(float *)(param_1 + 0x838),(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(afStack_18);
  *(int *)(param_1 + 0x870) = iVar2;
  return;
}

