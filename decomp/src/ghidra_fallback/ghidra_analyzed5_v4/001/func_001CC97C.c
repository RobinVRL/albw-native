#include "ghidra_types.h"

extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_004C00F4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00583B1C(int param_1);

// USA 001CC97C <- EU 001CC97C (Ghidra, non-matching)

undefined4 func_001CC97C(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  
  piVar6 = (int *)((char)param_1[0x259] * 8 + 4);
  uVar1 = *(uint *)(param_1[0x25f] + (int)piVar6);
  pcVar3 = *(code **)(param_1[0x25f] + (char)param_1[0x259] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[0x25d] + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(param_1[0x25d]) + ((int)uVar1 >> 1));
  iVar5 = param_1[0x25c];
  iVar2 = param_1[600] + 1;
  param_1[600] = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_004C00F4((int)param_1,uVar4,iVar5,piVar6);
  func_004BCAA8((int)param_1);
  if ((*(char *)((int)param_1 + 0x852) == '\x05') &&
     (iVar2 = func_00583B1C((int)param_1), iVar2 != 0)) {
    (**(code **)(*param_1 + 0xac))(param_1,6,0xffffffff);
  }
  return func_004BC8D8((int)param_1);
}

