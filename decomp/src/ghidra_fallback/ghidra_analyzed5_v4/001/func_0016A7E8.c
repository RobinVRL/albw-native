#include "ghidra_types.h"


// USA 0016A7E8 <- EU 0016A7E8 (Ghidra, non-matching)

void * func_0016A7E8(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint *puVar7;
  
  iVar3 = 0;
  do {
    puVar2 = (uint *)(param_1 + iVar3 * 8);
    puVar7 = (uint *)(param_2 + iVar3 * 8);
    uVar1 = 0;
    if (0 < (int)*puVar2) {
      do {
        if (uVar1 < *puVar7) {
          uVar4 = puVar7[1] + uVar1 * 4;
        }
        else {
          uVar4 = puVar7[1];
        }
        if (*(char *)(uVar4 + 3) != -1) {
          if (uVar1 < *puVar2) {
            puVar5 = (undefined4 *)(puVar2[1] + uVar1 * 4);
          }
          else {
            puVar5 = (undefined4 *)puVar2[1];
          }
          if (uVar1 < *puVar7) {
            puVar6 = (undefined4 *)(puVar7[1] + uVar1 * 4);
          }
          else {
            puVar6 = (undefined4 *)puVar7[1];
          }
          *puVar5 = *puVar6;
        }
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)*puVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return (void *)param_1;
}

