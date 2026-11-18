#include "ghidra_types.h"

extern int func_0010C238(int param_1,int param_2,int param_3);
extern int func_0010C398(int param_1,undefined2 param_2);
extern int func_0010C3A8(int param_1,ushort param_2);
extern int func_0010C3C8(int param_1,undefined1 param_2);

// USA 0010AC54 <- EU 0010AC54 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:2 ushort
// PARAM param_6 Stack[0x4]:1 undefined1

int func_0010AC54(int param_1,int param_2,int param_3,undefined2 param_4,ushort param_5,
                 undefined1 param_6)

{
  int iVar1;
  
  func_0010C398(param_1 + 0x18,param_4);
  func_0010C3A8(param_1 + 0x18,param_5);
  func_0010C3C8(param_1 + 0x18,param_6);
  iVar1 = func_0010C238(param_1 + 0x18,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  return iVar1;
}

