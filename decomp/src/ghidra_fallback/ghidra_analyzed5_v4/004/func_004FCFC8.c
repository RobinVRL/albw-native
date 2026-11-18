#include "ghidra_types.h"

extern int func_004CF478(int param_1,int param_2);
extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);

// USA 004FCFC8 <- EU 004FCFA0 (Ghidra, non-matching)

void func_004FCFC8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 1;
  iVar2 = param_1 + 0x5a8;
  func_004FCD5C(iVar2,1);
  func_004CF478(*(int *)(*(int *)(param_1 + 0x8ec) + 0x18),1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  func_004FCDF4(iVar2,1);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 4;
  uVar3 = 0;
  if (*(char *)(param_1 + 0x652) != '\0') {
    do {
      iVar1 = uVar3 * 4;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(*(int *)(iVar2 + iVar1 + 0x70) + 0x61) = 1;
    } while (uVar3 < *(byte *)(param_1 + 0x652));
  }
  return;
}

