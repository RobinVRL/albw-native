#include "ghidra_types.h"


// USA 002C3DA4 <- EU 002C3D80 (Ghidra, non-matching)

void * func_002C3DA4(int param_1,undefined1 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  *(undefined1 *)(param_1 + 0x16a) = param_2;
  bVar1 = *(int *)(param_1 + 0x154) < 0x3f800000;
  uVar2 = 0;
  if (0 < *(int *)(param_1 + 0x178)) {
    do {
      bVar4 = *(byte *)(param_1 + 0x16a);
      if (uVar2 < *(uint *)(param_1 + 0x178)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x180) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      *(byte *)(iVar3 + 0x87) = bVar4;
      *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xf807ffff | (uint)bVar4 << 0x13;
      if (uVar2 < *(uint *)(param_1 + 0x178)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x180) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      *(bool *)(iVar3 + 0x88) = bVar1;
      if (bVar1) {
        uVar5 = *(uint *)(iVar3 + 0x7c) | 0x8000000;
      }
      else {
        uVar5 = *(uint *)(iVar3 + 0x7c) & 0xf7ffffff;
      }
      *(uint *)(iVar3 + 0x7c) = uVar5;
      if (uVar2 < *(uint *)(param_1 + 0x184)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x18c) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      bVar4 = *(char *)(param_1 + 0x16a) + 1;
      *(byte *)(iVar3 + 0x87) = bVar4;
      *(uint *)(iVar3 + 0x7c) = *(uint *)(iVar3 + 0x7c) & 0xf807ffff | (uint)bVar4 << 0x13;
      if (uVar2 < *(uint *)(param_1 + 0x184)) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x18c) + uVar2 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar2 = uVar2 + 1;
      *(bool *)(iVar3 + 0x88) = bVar1;
      if (bVar1) {
        uVar5 = *(uint *)(iVar3 + 0x7c) | 0x8000000;
      }
      else {
        uVar5 = *(uint *)(iVar3 + 0x7c) & 0xf7ffffff;
      }
      *(uint *)(iVar3 + 0x7c) = uVar5;
    } while ((int)uVar2 < *(int *)(param_1 + 0x178));
  }
  return (void *)param_1;
}

