#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004905E0(float fparam_0);
extern int func_00520FC0(void);
extern undefined4 DAT_0025404c;
extern float DAT_00254050;

// USA 00253E94 <- EU 00253EBC (Ghidra, non-matching)
// GLOBAL DAT_0025404c undefined4
// GLOBAL DAT_00254050 float

void func_00253E94(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define aiStack_70 ((int *)(albw_frame + 0x0))
  #define local_14 ((float *)(albw_frame + 0x5c))
  #define local_c (*(float *)(albw_frame + 0x64))
  puVar2 = (uint *)func_002C11E8(aiStack_70,4,0,0);
  func_0016898C(*(int *)(param_1 + 0x444),puVar2);
  uVar1 = DAT_0025404c;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x7e8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x7ec);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x7f0);
  *(undefined4 *)(param_1 + 0x4b4) = uVar1;
  *(undefined4 *)(param_1 + 0x458) = 0;
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(local_14,pfVar3,(float *)(param_1 + 0x3d0));
  if (local_c == DAT_00254050 && local_14[0] == DAT_00254050) {
    iVar4 = 0;
  }
  else if (local_c < DAT_00254050) {
    if (local_14[0] < DAT_00254050) {
      if (local_14[0] < local_c) {
        iVar4 = func_004905E0(local_c / local_14[0]);
        iVar4 = -0x40000000 - iVar4;
      }
      else {
        iVar4 = func_004905E0(local_14[0] / local_c);
        iVar4 = iVar4 + -0x80000000;
      }
    }
    else {
      local_c = -local_c;
      if (local_c < local_14[0]) {
        iVar4 = func_004905E0(local_c / local_14[0]);
        iVar4 = iVar4 + 0x40000000;
      }
      else {
        iVar4 = func_004905E0(local_14[0] / local_c);
        iVar4 = -0x80000000 - iVar4;
      }
    }
  }
  else if (local_14[0] < DAT_00254050) {
    local_14[0] = -local_14[0];
    if (local_c < local_14[0]) {
      iVar4 = func_004905E0(local_c / local_14[0]);
      iVar4 = iVar4 + -0x40000000;
    }
    else {
      iVar4 = func_004905E0(local_14[0] / local_c);
      iVar4 = -iVar4;
    }
  }
  else if (local_c < local_14[0]) {
    iVar4 = func_004905E0(local_c / local_14[0]);
    iVar4 = 0x40000000 - iVar4;
  }
  else {
    iVar4 = func_004905E0(local_14[0] / local_c);
  }
  *(int *)(param_1 + 1000) = iVar4;
  return;
}

