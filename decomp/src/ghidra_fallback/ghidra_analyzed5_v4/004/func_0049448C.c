#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);

// USA 0049448C <- EU 00494464 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint

undefined8 func_0049448C(undefined4 param_1,uint *param_2,int param_3,uint *param_4,uint param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_3 + 0x24);
  if (*(uint *)(param_3 + 0x20) < iVar1 + param_5) {
    param_5 = *(uint *)(param_3 + 0x20) - iVar1;
  }
  uVar2 = func_0010E3C4(param_4,(uint *)(iVar1 + *(int *)(param_3 + 0x18)),param_5);
  *(uint *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + param_5;
  if (param_2 != (uint *)0x0) {
    *param_2 = param_5;
  }
  return CONCAT44((int)((ulonglong)uVar2 >> 0x20),1);
}

