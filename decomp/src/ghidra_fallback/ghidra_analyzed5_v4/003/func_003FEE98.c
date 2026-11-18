#include "ghidra_types.h"


// USA 003FEE98 <- EU 003FEE78 (Ghidra, non-matching)

void func_003FEE98(int *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if ((char)param_1[5] != '\0') {
    uVar1 = *(ushort *)(param_1 + 8);
    iVar3 = 0;
    if (uVar1 != 0) {
      do {
        puVar2 = (undefined4 *)(param_1[7] + iVar3 * 8);
        if (*(char *)(puVar2[1] + 0x1d) == '\0') {
          (**(code **)(*param_1 + 0x48))(param_1,*puVar2);
        }
        else {
          (**(code **)(*param_1 + 0x4c))(param_1,*puVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)uVar1);
    }
  }
  return;
}

