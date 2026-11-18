#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037CDA8(int *param_1);
extern int func_0037D530(int param_1,uint param_2,float *param_3);

// USA 0028838C <- EU 002883B4 (Ghidra, non-matching)

undefined4 func_0028838C(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  uVar1 = *(uint *)(param_1[0x13e] + (char)param_1[0x138] * 8 + 4);
  pcVar3 = *(code **)(param_1[0x13e] + (char)param_1[0x138] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[0x13c] + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(param_1[0x13c]) + ((int)uVar1 >> 1));
  iVar2 = param_1[0x137] + 1;
  param_1[0x137] = iVar2;
  if (param_1[0x13b] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x13b],1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  if (((char)param_1[0x138] != '\0') || ((uint)param_1[0x14d] < (uint)param_1[0x14e])) {
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0x132));
  }
  func_0037CDA8(param_1);
  local_18 = ALBW_AS_F32(param_1[0xf4]);
  iStack_10 = param_1[0xf6];
  local_14 = ALBW_AS_F32(param_1[0xf5]) + ALBW_AS_F32(param_1[0x147]);
  return func_0037D530((int)param_1,param_1[0xfa],&local_18);
}

