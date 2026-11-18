#include "ghidra_types.h"

extern int func_001B6D40(int param_1);

// USA 00453A34 <- EU 00453A0C (Ghidra, non-matching)

void func_00453A34(int param_1)

{
  int iVar1;
  uint uVar2;
  
  func_001B6D40(param_1);
  uVar2 = 0;
  do {
    if (((uVar2 < 6) && (iVar1 = *(int *)(*(int *)(param_1 + 0x88) + uVar2 * 4), iVar1 != 0)) &&
       ((*(byte *)(iVar1 + 0x44) & 1) != 0)) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return;
}

