#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037CDA8(int *param_1);
extern int func_0037D62C(int param_1,undefined4 *param_2,float *param_3);
extern int func_00491B3C(float *param_1,float *param_2);

// USA 004E0EF4 <- EU 004E0ECC (Ghidra, non-matching)

undefined4 func_004E0EF4(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_40 ((float *)(albw_frame + 0x0))
  uVar1 = *(uint *)(param_1[0x13c] + (char)param_1[0x136] * 8 + 4);
  pcVar3 = *(code **)(param_1[0x13c] + (char)param_1[0x136] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[0x13a] + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(param_1[0x13a]) + ((int)uVar1 >> 1));
  iVar2 = param_1[0x135] + 1;
  param_1[0x135] = iVar2;
  if (param_1[0x139] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x139],1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_0037CDA8(param_1);
  func_00491B3C(afStack_40,(float *)(param_1 + 0x14a));
  return func_0037D62C((int)param_1,afStack_40,(float *)(param_1 + 0xf4));
}

