#include "ghidra_types.h"

extern int func_0012C718(int param_1);

// USA 00439AA8 <- EU 00439A88 (Ghidra, non-matching)

undefined4 func_00439AA8(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  bVar6 = true;
  uVar4 = 0;
  if (*(int *)(param_1 + 0x1b4) == -1) {
    do {
      puVar1 = (uint *)(param_1 + 0xec);
      if (uVar4 < 0xd) {
        puVar1 = puVar1 + uVar4;
      }
      uVar2 = *puVar1;
      bVar5 = *(char *)(uVar2 + 0xd) == '\0';
      if (bVar5) {
        uVar2 = (uint)*(byte *)(uVar2 + 0xe);
      }
      if (bVar5 && uVar2 == 0) {
        piVar3 = (int *)(param_1 + 0xec);
        if (uVar4 < 0xd) {
          piVar3 = piVar3 + uVar4;
        }
        if (-1 < *(int *)(*piVar3 + 0x84)) {
          piVar3 = (int *)(param_1 + 0xec);
          if (uVar4 < 0xd) {
            piVar3 = piVar3 + uVar4;
          }
          *(undefined4 *)(*piVar3 + 0x84) = 0xffffffff;
        }
      }
      else {
        puVar1 = (uint *)(param_1 + 0xec);
        if (uVar4 < 0xd) {
          puVar1 = puVar1 + uVar4;
        }
        uVar2 = *puVar1;
        bVar6 = *(char *)(uVar2 + 0xd) == '\x03';
        if (bVar6) {
          uVar2 = (uint)*(byte *)(uVar2 + 0xe);
        }
        if (bVar6 && uVar2 == 3) {
          piVar3 = (int *)(param_1 + 0xec);
          if (uVar4 < 0xd) {
            piVar3 = piVar3 + uVar4;
          }
          func_0012C718(*piVar3);
        }
        bVar6 = false;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0xd);
  }
  else {
    do {
      puVar1 = (uint *)(param_1 + 0x120);
      if (uVar4 < 0xd) {
        puVar1 = puVar1 + uVar4;
      }
      uVar2 = *puVar1;
      bVar5 = *(char *)(uVar2 + 0xd) == '\0';
      if (bVar5) {
        uVar2 = (uint)*(byte *)(uVar2 + 0xe);
      }
      if (!bVar5 || uVar2 != 0) {
        puVar1 = (uint *)(param_1 + 0x120);
        if (uVar4 < 0xd) {
          puVar1 = puVar1 + uVar4;
        }
        uVar2 = *puVar1;
        bVar6 = *(char *)(uVar2 + 0xd) == '\x03';
        if (bVar6) {
          uVar2 = (uint)*(byte *)(uVar2 + 0xe);
        }
        if (bVar6 && uVar2 == 3) {
          piVar3 = (int *)(param_1 + 0x120);
          if (uVar4 < 0xd) {
            piVar3 = piVar3 + uVar4;
          }
          func_0012C718(*piVar3);
        }
        bVar6 = false;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0xd);
  }
  uVar4 = 0;
  do {
    puVar1 = (uint *)(param_1 + 0x198);
    if (uVar4 < 2) {
      puVar1 = puVar1 + uVar4;
    }
    uVar2 = *puVar1;
    bVar5 = *(char *)(uVar2 + 0xd) == '\0';
    if (bVar5) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xe);
    }
    if (!bVar5 || uVar2 != 0) {
      puVar1 = (uint *)(param_1 + 0x198);
      if (uVar4 < 2) {
        puVar1 = puVar1 + uVar4;
      }
      uVar2 = *puVar1;
      bVar6 = *(char *)(uVar2 + 0xd) == '\x03';
      if (bVar6) {
        uVar2 = (uint)*(byte *)(uVar2 + 0xe);
      }
      if (bVar6 && uVar2 == 3) {
        piVar3 = (int *)(param_1 + 0x198);
        if (uVar4 < 2) {
          piVar3 = piVar3 + uVar4;
        }
        func_0012C718(*piVar3);
      }
      bVar6 = false;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  if (bVar6) {
    return func_0012C718(param_1);
  }
  return 0;
}

