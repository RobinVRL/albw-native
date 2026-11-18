#include "ghidra_types.h"

extern int func_0031080C(int *param_1);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);

// USA 00310154 <- EU 00310130 (Ghidra, non-matching)

undefined4 func_00310154(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  
  param_1[0xd3] = param_1[0x1e8];
  *(undefined1 *)((int)param_1 + 0x361) = 1;
  uVar1 = *(uint *)(param_1[0x25f] + (char)param_1[0x259] * 8 + 4);
  pcVar3 = *(code **)(param_1[0x25f] + (char)param_1[0x259] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(param_1[0x25d] + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(param_1[0x25d]) + ((int)uVar1 >> 1));
  iVar2 = param_1[600] + 1;
  param_1[600] = iVar2;
  if (param_1[0x25c] != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(param_1[0x25c],1,fparam_0);
  }
  func_004BCAA8((int)param_1);
  func_0031080C(param_1);
  return func_004BC8D8((int)param_1);
}

