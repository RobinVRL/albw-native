#include "ghidra_types.h"

extern int func_004FCD5C(int param_1,int param_2);
extern int func_004FCDF4(int param_1,int param_2);
extern int func_004FD038(int param_1,undefined1 param_2);

// USA 004FD1A8 <- EU 004FD180 (Ghidra, non-matching)

void func_004FD1A8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x59c) & 0xfffffffe;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x59c) | 1;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  iVar3 = param_1 + 0x5a8;
  func_004FCD5C(iVar3,param_2);
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x59c) & 0xfffffffd;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x59c) | 2;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  func_004FCDF4(iVar3,param_2);
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x59c) & 0xfffffffb;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x59c) | 4;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  func_004FD038(iVar3,(char)param_2);
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0x59c) & 0xfffffff7;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x59c) | 8;
  }
  *(uint *)(param_1 + 0x59c) = uVar2;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x653) != '\0') {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(char *)(*(int *)(iVar3 + iVar1 + 0x8c) + 0x61) = (char)param_2;
    } while (uVar2 < *(byte *)(param_1 + 0x653));
  }
  return;
}

