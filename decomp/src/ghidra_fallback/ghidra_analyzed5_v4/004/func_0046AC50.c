#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_001B6CE4(int param_1);

// USA 0046AC50 <- EU 0046AC28 (Ghidra, non-matching)

undefined4 func_0046AC50(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = func_001B6CE4(param_1);
  uVar5 = 0;
  do {
    puVar2 = (uint *)(param_1 + 0xbc);
    if (uVar5 < 2) {
      puVar2 = puVar2 + uVar5;
    }
    uVar3 = *puVar2;
    bVar6 = *(char *)(uVar3 + 0xd) == '\0';
    if (bVar6) {
      uVar3 = (uint)*(byte *)(uVar3 + 0xe);
    }
    if (!bVar6 || uVar3 != 0) {
      puVar2 = (uint *)(param_1 + 0xbc);
      if (uVar5 < 2) {
        puVar2 = puVar2 + uVar5;
      }
      uVar1 = 0;
      uVar3 = *puVar2;
      bVar6 = *(char *)(uVar3 + 0xd) == '\x03';
      if (bVar6) {
        uVar3 = (uint)*(byte *)(uVar3 + 0xe);
      }
      if (bVar6 && uVar3 == 3) {
        piVar4 = (int *)(param_1 + 0xbc);
        if (uVar5 < 2) {
          piVar4 = piVar4 + uVar5;
        }
        func_0012C718(*piVar4);
      }
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 2);
  return uVar1;
}

