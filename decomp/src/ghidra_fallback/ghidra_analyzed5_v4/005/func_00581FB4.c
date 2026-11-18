#include "ghidra_types.h"

extern int *DAT_00581fe8;

// USA 00581FB4 <- EU 00581F8C (Ghidra, non-matching)
// GLOBAL DAT_00581fe8 int *

int func_00581FB4(int param_1)

{
  uint uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if ((int)*(char *)(*DAT_00581fe8 + 0x18) - 9U < 0xd) {
    sVar2 = *(short *)(*(int *)(param_1 + 0x40) + 6);
    iVar5 = (int)sVar2;
    sVar3 = *(short *)(*(int *)(param_1 + 0x40) + 4);
    uVar6 = (uint)sVar3;
    iVar4 = (int)sVar2 * (int)sVar3;
    if (iVar4 != 0) {
      uVar1 = (int)uVar6 >> 0x1f;
      if (-1 < iVar4) {
        if (iVar5 < 1) {
          iVar5 = (uVar6 ^ uVar1) - uVar1;
        }
        return iVar5;
      }
      return iVar5 + ((uVar6 ^ uVar1) - uVar1);
    }
  }
  return 1;
}

