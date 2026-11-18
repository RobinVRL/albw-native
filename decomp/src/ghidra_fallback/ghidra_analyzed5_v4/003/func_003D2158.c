#include "ghidra_types.h"

extern undefined4 DAT_003d21e4;
extern undefined4 DAT_003d21e8;

// USA 003D2158 <- EU 003D2134 (Ghidra, non-matching)
// GLOBAL DAT_003d21e4 undefined4
// GLOBAL DAT_003d21e8 undefined4

undefined4 func_003D2158(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x2000 < param_3) {
    return DAT_003d21e4;
  }
  if (param_4 != 0) {
    iVar2 = 0;
    iVar1 = (int)*(char *)(param_1 + 0x130);
    if (0 < iVar1) {
      do {
        if (*(int *)(param_1 + iVar2 * 0xc + 0x70) == param_2) {
          iVar1 = param_1 + iVar2 * 0xc;
          *(uint *)(iVar1 + 0x74) = param_3;
          *(int *)(iVar1 + 0x78) = param_4;
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    *(int *)(param_1 + iVar1 * 0xc + 0x70) = param_2;
    *(uint *)(param_1 + *(char *)(param_1 + 0x130) * 0xc + 0x74) = param_3;
    *(int *)(param_1 + *(char *)(param_1 + 0x130) * 0xc + 0x78) = param_4;
    *(char *)(param_1 + 0x130) = *(char *)(param_1 + 0x130) + '\x01';
    return 0;
  }
  return DAT_003d21e8;
}

