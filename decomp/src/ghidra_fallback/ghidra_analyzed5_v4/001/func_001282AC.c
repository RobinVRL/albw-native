#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0068C690(float *param_1);
extern undefined4 DAT_00128390;
extern int DAT_00128394;
extern undefined4 DAT_00128398;
extern float DAT_0012839c;
extern undefined4 DAT_001283a0;
extern undefined4 DAT_001283a4;

// USA 001282AC <- EU 001282AC (Ghidra, non-matching)
// GLOBAL DAT_00128390 undefined4
// GLOBAL DAT_00128394 int
// GLOBAL DAT_00128398 undefined4
// GLOBAL DAT_0012839c float
// GLOBAL DAT_001283a0 undefined4
// GLOBAL DAT_001283a4 undefined4

/* WARNING: Removing unreachable block (ram,0x00128368) */
/* WARNING: Removing unreachable block (ram,0x0012836c) */

void func_001282AC(int param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  *(undefined4 *)(param_1 + 0x8f0) = DAT_00128390;
  *(undefined4 *)(param_1 + 0x8f4) = *(undefined4 *)(param_1 + 1000);
  func_00115C70(afStack_28,param_2,(float *)(param_1 + 0x3d0));
  iVar3 = func_0068C690(afStack_28);
  uVar5 = func_0058A474(param_1,0x32);
  fVar2 = DAT_0012839c;
  uVar1 = DAT_00128398;
  iVar4 = *(int *)(DAT_00128394 + 0xc);
  if ((int)uVar5 == 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0x8f4) = iVar4 + iVar3;
  *(undefined4 *)(param_1 + 0x8e4) = 0x78;
  *(undefined4 *)(param_1 + 0x8e8) = uVar1;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(float *)(param_1 + 0x8f8) = *param_2;
  *(float *)(param_1 + 0x8fc) = param_2[1];
  *(float *)(param_1 + 0x900) = param_2[2];
  *(float *)(param_1 + 0x8fc) = *(float *)(param_1 + 0x8fc) + fVar2;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_001283a0;
  *(int *)(param_1 + 0x8ec) = *(int *)(param_1 + 0x8ec) + 1;
  return;
}

