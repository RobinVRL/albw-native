#include "ghidra_types.h"

extern uint *DAT_001b9754;
extern int DAT_001b9758;

// USA 001B9688 <- EU 001B9688 (Ghidra, non-matching)
// GLOBAL DAT_001b9754 uint *
// GLOBAL DAT_001b9758 int

void func_001B9688(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  iVar2 = DAT_001b9758;
  puVar1 = DAT_001b9754;
  if (DAT_001b9754[1] == 0) {
    puVar5 = DAT_001b9754 + 6;
    uVar3 = 0x28;
    *DAT_001b9754 = 0x28;
    puVar1[1] = (uint)puVar5;
    uVar6 = 0;
    do {
      uVar4 = puVar1[1];
      if (uVar6 < uVar3) {
        uVar4 = uVar4 + uVar6 * 0x18;
      }
      if (*(char *)(uVar4 + 0xf) == '\0') {
        if (*(char *)(uVar4 + 0xe) == '\0') {
          *(uint *)(iVar2 + (uint)*(byte *)(uVar4 + 0xc) * 0x20 + (uint)*(byte *)(uVar4 + 0xd) * 4)
               = uVar4;
        }
        else {
          *(uint *)(iVar2 + (uint)*(byte *)(uVar4 + 0xc) * 0x20 + (uint)*(byte *)(uVar4 + 0xd) * 4)
               = uVar4;
          *(uint *)(iVar2 + (uint)*(byte *)(uVar4 + 0xc) * 0x20 + (*(byte *)(uVar4 + 0xd) + 1) * 4)
               = uVar4;
          *(uint *)(iVar2 + (*(byte *)(uVar4 + 0xc) + 1) * 0x20 + (uint)*(byte *)(uVar4 + 0xd) * 4)
               = uVar4;
          *(uint *)(iVar2 + (*(byte *)(uVar4 + 0xc) + 1) * 0x20 + (*(byte *)(uVar4 + 0xd) + 1) * 4)
               = uVar4;
        }
      }
      uVar3 = *puVar1;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar3);
  }
  return;
}

