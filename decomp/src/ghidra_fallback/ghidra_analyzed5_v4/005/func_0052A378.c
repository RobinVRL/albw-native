#include "ghidra_types.h"


// USA 0052A378 <- EU 0052A350 (Ghidra, non-matching)

int func_0052A378(int param_1,int *param_2,char *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  if ((param_2 != (int *)0x0) && ((int)*param_3 - 9U < 0xd)) {
    iVar2 = 0;
    *param_2 = 0;
    iVar4 = *(int *)(param_1 + 0x118);
    if (iVar4 != 0) {
      iVar3 = *(int *)(param_1 + 0x114);
      uVar1 = 0;
      if (iVar3 != 0) {
        do {
          psVar6 = (short *)(iVar4 + iVar2 * 4);
          if ((*psVar6 == param_4) &&
             ((*(uint *)(param_1 + 0x15c + (uVar1 >> 5) * 4) & 1 << (uVar1 & 0x1f)) != 0)) {
            iVar5 = *param_2;
            if (param_2[1] <= iVar5) {
              return iVar5;
            }
            *(short **)(param_2[2] + iVar5 * 4) = psVar6;
            *param_2 = *param_2 + 1;
          }
          iVar2 = iVar2 + 1;
          uVar1 = uVar1 + 1;
        } while (iVar2 != iVar3);
      }
      return *param_2;
    }
  }
  return 0;
}

