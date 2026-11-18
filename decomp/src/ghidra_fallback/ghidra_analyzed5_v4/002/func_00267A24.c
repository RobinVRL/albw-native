#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);

// USA 00267A24 <- EU 00267A4C (Ghidra, non-matching)

void func_00267A24(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  iVar1 = param_1 + 0x5a8;
  func_004FCD5C(iVar1,0);
  func_004CF478(*(int *)(*(int *)(param_1 + 0x8ec) + 0x18),0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
  func_004FCDF4(iVar1,0);
  func_004FABDC(param_1,0,0xffffffff,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(iVar1,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  return;
}

