#include "ghidra_types.h"

extern int func_004A1CC8(int param_1,undefined4 param_2,int param_3);
extern int func_004A66FC(int param_1,undefined4 param_2,int param_3);

// USA 00352210 <- EU 003521EC (Ghidra, non-matching)

undefined4 func_00352210(int param_1,uint param_2,float fparam_0)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  uVar2 = param_2;
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x3b);
  }
  if (iVar1 != 0 && uVar2 != 0) {
    func_004A1CC8(iVar1,(int)fparam_0,param_2);
    uVar2 = extraout_r1;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0x3c);
  }
  if (iVar1 == 0 || uVar2 == 0) {
    return 0;
  }
  return func_004A66FC(iVar1,(int)fparam_0,param_2);
}

