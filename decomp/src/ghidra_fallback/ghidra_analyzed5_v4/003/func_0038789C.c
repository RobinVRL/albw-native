#include "ghidra_types.h"

extern int DAT_00387914;

// USA 0038789C <- EU 00387878 (Ghidra, non-matching)
// GLOBAL DAT_00387914 int

void * func_0038789C(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_00387914;
  uVar5 = *(uint *)(param_2[1] + 8);
  uVar2 = 0;
  do {
    if (*(char *)(param_1 + uVar2 * 5 + 0x3d) != '\0') {
      uVar3 = 0;
      do {
        if ((uVar5 >> ((uVar3 & 0x3f) << 2) & 0xf) == uVar2) {
          uVar6 = *(uint *)(iVar1 + uVar3 * 4);
          puVar4 = (undefined4 *)*param_2;
          puVar7 = (undefined4 *)*puVar4;
          *puVar7 = *(undefined4 *)(uVar2 * 5 + param_1 + 0x39);
          puVar7[1] = (uVar6 & 0xffff) + 3 | 0xf0000;
          *puVar4 = puVar7 + 2;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 6);
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 6);
  return (void *)param_1;
}

