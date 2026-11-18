#include "ghidra_types.h"


// USA 004FCF20 <- EU 004FCEF8 (Ghidra, non-matching)

undefined4 func_004FCF20(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar5 = param_1 + 0x8c;
  pbVar4 = (byte *)(param_1 + 0xab);
  if (param_2 != 0) {
    uVar2 = (uint)*pbVar4;
    if (uVar2 < 7) {
      if (uVar2 != 0) {
        uVar1 = uVar2 & 1;
        uVar3 = 0;
        if ((*pbVar4 & 1) != 0) {
          do {
            if (*(int *)(iVar5 + uVar3 * 4) == param_2) {
              return 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < uVar1);
        }
        for (; uVar1 < uVar2; uVar1 = uVar1 + 2) {
          if (*(int *)(iVar5 + uVar1 * 4) == param_2) {
            return 1;
          }
          if (*(int *)(iVar5 + uVar1 * 4 + 4) == param_2) {
            return 1;
          }
        }
      }
      *(int *)(iVar5 + uVar2 * 4) = param_2;
      *pbVar4 = *pbVar4 + 1;
      return 1;
    }
  }
  return 0;
}

