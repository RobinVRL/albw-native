#include "ghidra_types.h"

extern int func_001B6C04(int param_1);
extern int func_00660208(undefined4 *param_1,undefined1 param_2);

// USA 0037BA40 <- EU 0037BA1C (Ghidra, non-matching)

undefined4 func_0037BA40(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  
  (**(code **)(*param_1 + 0x4c))(param_1,1);
  func_001B6C04((int)param_1);
  uVar4 = (**(code **)(param_1[0xf] + 0xc))(param_1 + 0xf);
  iVar3 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if (iVar1 != -1) {
    iVar3 = param_1[0x1c];
  }
  if (iVar1 != -1 && iVar3 != -1) {
    if (iVar3 == iVar1) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
  }
  else {
    bVar2 = 0;
    param_1[0x1c] = iVar1;
  }
  return func_00660208(param_1 + 0x12,bVar2 ^ 1);
}

