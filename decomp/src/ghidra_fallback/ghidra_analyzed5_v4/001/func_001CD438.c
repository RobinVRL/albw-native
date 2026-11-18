#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_0037CDA8(int *param_1);
extern int func_0037D530(int param_1,uint param_2,float *param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);

// USA 001CD438 <- EU 001CD438 (Ghidra, non-matching)

undefined4 func_001CD438(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint in_fpscr;
  float fparam_0;
  
  uVar1 = *(uint *)(param_1[0x13c] + (char)param_1[0x136] * 8 + 4);
  pcVar4 = *(code **)(param_1[0x13c] + (char)param_1[0x136] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(int *)(param_1[0x13a] + ((int)uVar1 >> 1)));
  }
  (*pcVar4)((int)(param_1[0x13a]) + ((int)uVar1 >> 1));
  iVar2 = param_1[0x135] + 1;
  param_1[0x135] = iVar2;
  if (param_1[0x139] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x139],1,fparam_0);
  }
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
  func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0x132));
  func_0037CDA8(param_1);
  if ((char)param_1[0x13e] != '\x02') {
    return func_0037D530((int)param_1,param_1[0xfa],(float *)(param_1 + 0xf4));
  }
  iVar2 = param_1[8];
  iVar3 = param_1[0x103];
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  if (iVar2 == 0) {
    func_004D8AEC((float *)(iVar3 + 0x80),param_1[0xfa],(float *)(param_1 + 0xf4));
  }
  else {
    func_004D7EB0((float *)(iVar3 + 0x80),param_1[8],param_1[0xfa],(float *)(param_1 + 0xf4));
  }
  return func_004CEAF0(param_1[0x103]);
}

