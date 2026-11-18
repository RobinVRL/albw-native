#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6CE4(int param_1);
extern int func_00532C78(int param_1);

// USA 00438E0C <- EU 00438DEC (Ghidra, non-matching)

undefined4 func_00438E0C(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint in_r2;
  bool bVar5;
  
  uVar2 = func_001B6CE4(param_1);
  if (*(int *)(param_1 + 0x1b4) == -1) {
    iVar3 = *(int *)(param_1 + 0x1a4);
    uVar4 = (uint)*(char *)(iVar3 + 0xd);
    if (uVar4 == 0) {
      in_r2 = (uint)*(byte *)(iVar3 + 0xe);
    }
    if (uVar4 != 0 || in_r2 != 0) {
      bVar5 = uVar4 == 3;
      if (bVar5) {
        uVar4 = (uint)*(byte *)(iVar3 + 0xe);
      }
      if (bVar5 && uVar4 == 3) {
        func_0012C718(iVar3);
      }
      uVar2 = 0;
    }
    uVar4 = *(uint *)(param_1 + 0x1a4);
    bVar5 = *(char *)(uVar4 + 0xd) == '\0';
    if (bVar5) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (!bVar5 || uVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x1a8);
      cVar1 = *(char *)(iVar3 + 0xd);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(iVar3 + 0xe);
      }
      if (bVar5 && cVar1 == '\x03') {
        func_0012C718(iVar3);
      }
      uVar2 = 0;
    }
    uVar4 = *(uint *)(param_1 + 0x1a4);
    bVar5 = *(char *)(uVar4 + 0xd) == '\0';
    if (bVar5) {
      uVar4 = (uint)*(byte *)(uVar4 + 0xe);
    }
    if (!bVar5 || uVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x1ac);
      cVar1 = *(char *)(iVar3 + 0xd);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(iVar3 + 0xe);
      }
      if (bVar5 && cVar1 == '\x03') {
        func_0012C718(iVar3);
      }
      uVar2 = 0;
    }
    bVar5 = func_00532C78(param_1 + 0x98);
    if (((bVar5) || (bVar5 = func_00532C78(param_1 + 0xa4), bVar5)) ||
       (bVar5 = func_00532C78(param_1 + 0xb0), bVar5)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

