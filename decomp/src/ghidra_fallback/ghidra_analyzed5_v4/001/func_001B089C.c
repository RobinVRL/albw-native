#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_001b09a8;
extern float DAT_001b09ac;
extern int *DAT_001b09b0;

// USA 001B089C <- EU 001B089C (Ghidra, non-matching)
// GLOBAL DAT_001b09a8 float
// GLOBAL DAT_001b09ac float
// GLOBAL DAT_001b09b0 int *

void func_001B089C(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  iVar2 = func_0068C690((float *)(param_1 + 0x960));
  fVar1 = DAT_001b09ac;
  fVar5 = DAT_001b09a8;
  *(int *)(param_1 + 0xa2c) = iVar2;
  if (*(int *)(param_1 + 0xa20) == 1) {
    uVar3 = iVar2 + 0xc0000000;
    *(undefined4 *)(param_1 + 0xa20) = 3;
  }
  else if (*(int *)(param_1 + 0xa20) == 2) {
    uVar3 = iVar2 + 0x40000000;
    *(undefined4 *)(param_1 + 0xa20) = 3;
  }
  else {
    fVar5 = fVar1;
    uVar3 = func_00111A64((uint *)(*DAT_001b09b0 + 0x660));
    if ((uint)((ulonglong)uVar3 * 100 >> 0x20) < 0x32) {
      uVar3 = iVar2 + 0x40000000;
      uVar4 = 1;
    }
    else {
      uVar4 = 2;
      uVar3 = iVar2 + 0xc0000000;
    }
    *(undefined4 *)(param_1 + 0xa20) = uVar4;
  }
  func_004D80A4(&local_28,uVar3,fVar5);
  func_00115C54(&local_28,&local_28,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x8d0) = local_28;
  *(undefined4 *)(param_1 + 0x8d4) = local_24;
  *(undefined4 *)(param_1 + 0x8d8) = local_20;
  fVar5 = *(float *)(*(int *)(param_1 + 0x9b8) + 4);
  *(float *)(param_1 + 0x8e4) = fVar5;
  func_0014FAFC(param_1,uVar3,fVar5);
  *(undefined1 *)(param_1 + 0x909) = 0;
  *(undefined4 *)(param_1 + 0xa1c) = 0;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 8;
  *(undefined4 *)(param_1 + 0x97c) = 0;
  return;
}

