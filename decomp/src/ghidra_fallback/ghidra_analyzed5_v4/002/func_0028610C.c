#include "ghidra_types.h"

extern int func_0014DDEC(int *param_1,undefined4 param_2,int param_3);

// USA 0028610C <- EU 00286134 (Ghidra, non-matching)

bool func_0028610C(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 0x34))(param_1);
  iVar1 = func_0014DDEC(param_1,(int)((ulonglong)uVar3 >> 0x20),param_3);
  bVar2 = (int)uVar3 != 0;
  if (iVar1 == 0 || !bVar2) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return iVar1 != 0 && bVar2;
}

