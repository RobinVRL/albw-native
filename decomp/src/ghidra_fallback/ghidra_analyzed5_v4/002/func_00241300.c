#include "ghidra_types.h"

extern int func_001512B4(int param_1,float *param_2);
extern int func_0024100C(int param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004ED9C8(int param_1);
extern int func_0052FDCC(int param_1,undefined4 *param_2);
extern float DAT_002413f4;
extern float DAT_002413f8;

// USA 00241300 <- EU 00241300 (Ghidra, non-matching)
// GLOBAL DAT_002413f4 float
// GLOBAL DAT_002413f8 float

undefined4 func_00241300(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x4dc) + *(char *)(param_1 + 0x4c4) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x4dc) + *(char *)(param_1 + 0x4c4) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x4d4) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x4d4)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x4c0) + 1;
  *(int *)(param_1 + 0x4c0) = iVar2;
  if (*(int *)(param_1 + 0x4d0) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x4d0),1,fparam_0);
  }
  func_0052FDCC(param_1,&local_18);
  local_14 = local_14 + DAT_002413f4;
  local_10 = local_10 + DAT_002413f8;
  iVar2 = *(int *)(param_1 + 0x40c);
  *(undefined4 *)(iVar2 + 4) = local_18;
  *(float *)(iVar2 + 8) = local_14;
  *(float *)(iVar2 + 0xc) = local_10;
  func_0024100C(param_1);
  func_004ED9C8(*(int *)(param_1 + 0x4e4));
  func_004ED9C8(*(int *)(param_1 + 0x4e8));
  return func_001512B4(*(int *)(param_1 + 0x4b8),(float *)(param_1 + 0x3d0));
}

