#include "ghidra_types.h"

extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0013F1D0(int param_1,int param_2);
extern int func_00657580(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0013fd58;

// USA 0013FC48 <- EU 0013FC48 (Ghidra, non-matching)
// GLOBAL DAT_0013fd58 undefined4

undefined4 func_0013FC48(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_10 (*(undefined4 *)(albw_frame + 0x10))
  func_0013F1D0(param_1,0);
  iVar1 = *(int *)(param_1 + 0x40c);
  piVar2 = *(int **)(iVar1 + 0x28);
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)(iVar1 + 0x20);
  }
  if ((piVar2 == (int *)0x0 || iVar1 == 0) || (iVar1 = *piVar2, iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x522) = 1;
  uVar3 = *(undefined4 *)(iVar1 + 0x18);
  fVar4 = *(float *)(iVar1 + 0x1c);
  uVar5 = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x368) = uVar3;
  fVar4 = fVar4 + *(float *)(param_1 + 0x43c);
  *(float *)(param_1 + 0x36c) = fVar4;
  *(undefined4 *)(param_1 + 0x370) = uVar5;
  *(undefined4 *)(param_1 + 0x3d0) = uVar3;
  *(float *)(param_1 + 0x3d4) = fVar4;
  *(undefined4 *)(param_1 + 0x3d8) = uVar5;
  *(undefined4 *)(param_1 + 0x4c0) = uVar3;
  *(undefined4 *)(param_1 + 0x4f8) = 1;
  *(float *)(param_1 + 0x4c4) = fVar4;
  *(undefined4 *)(param_1 + 0x4c8) = uVar5;
  if (*(short *)(param_1 + 0x30) != 0) {
    return func_00657580((undefined4 *)(param_1 + 0x460),3);
  }
  func_00657580((undefined4 *)(param_1 + 0x460),0);
  if (*(short *)(param_1 + 0x32) == 0) {
    func_00115D70(&local_18,(float *)(param_1 + 0x4b4),*(float *)(*(int *)(param_1 + 0x42c) + 0x18))
    ;
    *(float *)(param_1 + 0x3dc) = local_18;
    *(undefined4 *)(param_1 + 0x3e0) = uStack_14;
    *(undefined4 *)(param_1 + 0x3e4) = uStack_10;
    return 0;
  }
  *(undefined1 *)(param_1 + 0x523) = 1;
  uVar3 = DAT_0013fd58;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0013fd58;
  *(undefined4 *)(param_1 + 0x3e0) = uVar3;
  *(undefined4 *)(param_1 + 0x3e4) = uVar3;
  return 0;
}

