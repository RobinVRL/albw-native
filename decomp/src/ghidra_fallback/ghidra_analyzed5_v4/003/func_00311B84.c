#include "ghidra_types.h"

extern int func_00312018(int param_1,int param_2,undefined4 param_3,int param_4);
extern int func_00312CA0(int param_1,undefined4 param_2);
extern int func_00313418(int *param_1,undefined4 param_2,uint param_3);

// USA 00311B84 <- EU 00311B60 (Ghidra, non-matching)

bool func_00311B84(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (*(byte *)((int)param_1 + 0x9d1) != 0) {
    bVar1 = func_00312018((int)param_1,param_2,(uint)*(byte *)((int)param_1 + 0x9d1),param_4);
    return bVar1;
  }
  if (*(char *)((int)param_1 + 0xa36) == '\0') {
    uVar2 = func_00313418(param_1,param_2,0);
    return (bool)uVar2;
  }
  if (*(char *)((int)param_1 + 0xa36) == '\x01') {
    uVar2 = func_00312CA0((int)param_1,param_2);
    return (bool)uVar2;
  }
  return true;
}

