#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DE70C(int param_1,int param_2,undefined2 param_3);
extern int DAT_003de010;

// USA 003DDFC8 <- EU 003DDFA8 (Ghidra, non-matching)
// GLOBAL DAT_003de010 int

undefined4 func_003DDFC8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  func_0010C0C0((int *)(param_1 + 0x34));
  iVar1 = param_1 + param_2 * 4;
  *(int *)(iVar1 + 0x14) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  if (param_3 == 0) {
    func_003DE70C(DAT_003de010,param_2,(short)*(char *)(param_1 + param_2 + 0x30));
  }
  else {
    func_003DE70C(DAT_003de010,param_2,1);
  }
  return func_0010C160((int *)(param_1 + 0x34));
}

