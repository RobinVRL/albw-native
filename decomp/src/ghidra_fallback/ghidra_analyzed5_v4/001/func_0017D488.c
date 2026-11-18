#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_0017BFB0(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float DAT_0017d558;
extern undefined4 DAT_0017d55c;
extern undefined4 DAT_0017d560;

// USA 0017D488 <- EU 0017D488 (Ghidra, non-matching)
// GLOBAL DAT_0017d558 float
// GLOBAL DAT_0017d55c undefined4
// GLOBAL DAT_0017d560 undefined4

int func_0017D488(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  float *pfVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  piVar5 = (int *)(*(char *)(param_1 + 0x78c) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x7a4) + (int)piVar5);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x7a4) + *(char *)(param_1 + 0x78c) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x79c) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x79c)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x788) + 1;
  *(int *)(param_1 + 0x788) = iVar2;
  if (*(int *)(param_1 + 0x798) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x798),1,fparam_0);
  }
  pfVar4 = (float *)(param_1 + 0x3dc);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar4);
  func_0017BFB0(param_1,extraout_r1,pfVar4,piVar5);
  if (*(char *)(param_1 + 0x882) != '\x01') {
    local_18 = DAT_0017d55c;
    local_14 = DAT_0017d55c;
    local_10 = DAT_0017d55c;
    param_1 = func_0014EEB8(param_1,&local_18,DAT_0017d560,DAT_0017d558);
  }
  return param_1;
}

