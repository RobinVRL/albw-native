#include "ghidra_types.h"

extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);
extern undefined4 DAT_001abc48;

// USA 001ABBC0 <- EU 001ABBC0 (Ghidra, non-matching)
// GLOBAL DAT_001abc48 undefined4

void func_001ABBC0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_001abc48;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001abc48;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  iVar1 = param_1 + 0x5a8;
  func_004FCD5C(iVar1,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
  func_004FCDF4(iVar1,0);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  func_004FD038(iVar1,0);
  if (*(int *)(param_1 + 0x40c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x9b8) = uVar2;
  return;
}

