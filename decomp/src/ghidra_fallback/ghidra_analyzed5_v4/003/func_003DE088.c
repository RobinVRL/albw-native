#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DE70C(int param_1,int param_2,undefined2 param_3);
extern int DAT_003de0c8;

// USA 003DE088 <- EU 003DE068 (Ghidra, non-matching)
// GLOBAL DAT_003de0c8 int

undefined4 func_003DE088(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  func_0010C0C0((int *)(param_1 + 0x34));
  *(char *)(param_1 + param_2 + 0x30) = (char)param_3;
  if ((param_3 == 0) && (*(int *)(param_1 + param_2 * 4 + 0x14) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  func_003DE70C(DAT_003de0c8,param_2,uVar1);
  return func_0010C160((int *)(param_1 + 0x34));
}

