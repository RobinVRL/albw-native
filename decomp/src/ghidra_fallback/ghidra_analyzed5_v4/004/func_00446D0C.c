#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6CE4(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);

// USA 00446D0C <- EU 00446CE4 (Ghidra, non-matching)

uint func_00446D0C(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint in_r3;
  
  uVar2 = func_001B6CE4(param_1);
  if (*(char *)(param_1 + 0x15c) == '\x01') {
    func_0066CC58((undefined4 *)(param_1 + 0x158),2);
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x15c) == '\x03') {
    func_0066CC58((undefined4 *)(param_1 + 0x158),0);
    uVar2 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x20c);
  cVar1 = *(char *)(iVar3 + 0xd);
  if (cVar1 == '\0') {
    in_r3 = (uint)*(byte *)(iVar3 + 0xe);
  }
  if (cVar1 != '\0' || in_r3 != 0) {
    if (cVar1 == '\x03') {
      uVar2 = (uint)*(byte *)(iVar3 + 0xe);
    }
    if (cVar1 == '\x03' && uVar2 == 3) {
      func_0012C718(iVar3);
    }
    uVar2 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x210);
  cVar1 = *(char *)(iVar3 + 0xd);
  if (cVar1 == '\0') {
    in_r3 = (uint)*(byte *)(iVar3 + 0xe);
  }
  if (cVar1 != '\0' || in_r3 != 0) {
    if (cVar1 == '\x03') {
      uVar2 = (uint)*(byte *)(iVar3 + 0xe);
    }
    if (cVar1 == '\x03' && uVar2 == 3) {
      func_0012C718(iVar3);
    }
    uVar2 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x214);
  cVar1 = *(char *)(iVar3 + 0xd);
  if (cVar1 == '\0') {
    in_r3 = (uint)*(byte *)(iVar3 + 0xe);
  }
  if (cVar1 != '\0' || in_r3 != 0) {
    if (cVar1 == '\x03') {
      uVar2 = (uint)*(byte *)(iVar3 + 0xe);
    }
    if (cVar1 == '\x03' && uVar2 == 3) {
      func_0012C718(iVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}

