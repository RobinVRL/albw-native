#include "ghidra_types.h"

extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0052F654(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065E254(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0021db48;
extern uint DAT_0021db4c;
extern float DAT_0021db50;

// USA 0021DAA0 <- EU 0021DAA0 (Ghidra, non-matching)
// GLOBAL DAT_0021db48 undefined4
// GLOBAL DAT_0021db4c uint
// GLOBAL DAT_0021db50 float

void func_0021DAA0(int param_1)

{
  uint uVar1;
  float *pfVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),*(float *)(param_1 + 0xa28));
  *(undefined4 *)(param_1 + 0x3e0) = DAT_0021db48;
  pfVar2 = *(float **)(param_1 + 0xa14);
  fVar3 = func_0051CF68(pfVar2 + 3,*pfVar2,pfVar2[1],pfVar2[2]);
  pfVar2[4] = fVar3;
  local_18 = func_0052F654(*(int *)(param_1 + 0xa14));
  *(int *)(param_1 + 1000) = local_18;
  local_18 = local_18 - *(int *)(param_1 + 0xa10);
  uVar1 = func_0058E2B8(&local_18);
  fVar3 = DAT_0021db50;
  if (uVar1 < DAT_0021db4c) {
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xa18);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0xa1c);
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0xa20);
    func_004FB4E0(param_1,fVar3);
    func_0065E254((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

