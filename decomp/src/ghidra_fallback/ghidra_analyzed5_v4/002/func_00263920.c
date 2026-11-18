#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052F654(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00263a00;
extern uint DAT_00263a04;

// USA 00263920 <- EU 00263948 (Ghidra, non-matching)
// GLOBAL DAT_00263a00 undefined4
// GLOBAL DAT_00263a04 uint

void func_00263920(int param_1)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((int *)(albw_frame + 0x0))
  pfVar2 = *(float **)(param_1 + 0xa14);
  fVar3 = func_0051CF68(pfVar2 + 3,*pfVar2,pfVar2[1],pfVar2[2]);
  pfVar2[4] = fVar3;
  uVar1 = func_0052F654(*(int *)(param_1 + 0xa14));
  *(uint *)(param_1 + 1000) = uVar1;
  func_004D80A4((float *)(param_1 + 0x3dc),uVar1,*(float *)(param_1 + 0xa28));
  uVar4 = DAT_00263a00;
  *(undefined4 *)(param_1 + 0x3e0) = DAT_00263a00;
  local_20[0] = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0xa10);
  uVar1 = func_0058E2B8(local_20);
  if (uVar1 < DAT_00263a04) {
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xa18);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0xa1c);
    *(undefined4 *)(param_1 + 0x3dc) = uVar4;
    *(undefined4 *)(param_1 + 0x3e4) = uVar4;
    *(undefined4 *)(param_1 + 0xa3c) = 3;
    *(undefined4 *)(param_1 + 0xa38) = 3;
    func_00660490((undefined4 *)(param_1 + 0x8bc),0xb);
  }
  return;
}

