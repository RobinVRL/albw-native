#include "ghidra_types.h"


// USA 004FC8D8 <- EU 004FC8B0 (Ghidra, non-matching)

undefined4 func_004FC8D8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    uVar2 = (uint)*(byte *)(param_1 + 0xa9);
    if (uVar2 < 7) {
      if (uVar2 != 0) {
        uVar1 = uVar2 & 1;
        uVar3 = 0;
        if ((*(byte *)(param_1 + 0xa9) & 1) != 0) {
          do {
            if (*(int *)(param_1 + uVar3 * 4 + 0x54) == param_2) {
              return 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar1);
        }
        for (; uVar1 < uVar2; uVar1 = uVar1 + 2) {
          iVar4 = param_1 + uVar1 * 4;
          bVar5 = *(int *)(iVar4 + 0x54) != param_2;
          if (bVar5) {
            iVar4 = *(int *)(iVar4 + 0x58);
          }
          if (!bVar5 || iVar4 == param_2) {
            return 1;
          }
        }
      }
      *(int *)(param_1 + uVar2 * 4 + 0x54) = param_2;
      *(char *)(param_1 + 0xa9) = *(char *)(param_1 + 0xa9) + '\x01';
      return 1;
    }
  }
  return 0;
}

