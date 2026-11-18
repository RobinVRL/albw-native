#include "ghidra_types.h"

extern int DAT_00676174;

// USA 006760E0 <- EU 006760B8 (Ghidra, non-matching)
// GLOBAL DAT_00676174 int

undefined4 func_006760E0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar3 = 0;
  uVar2 = 0;
  iVar4 = 0;
  do {
    uVar6 = (uint)*(char *)(param_1 + iVar4);
    if (uVar6 == 0x3a) goto LAB_006760fc;
    uVar1 = uVar3 >> 0x18;
    iVar4 = iVar4 + 1;
    uVar3 = uVar6 | uVar3 << 8;
    uVar2 = uVar1 | uVar2 << 8 | (int)uVar6 >> 0x1f;
  } while (iVar4 < 8);
  uVar3 = 0;
  uVar2 = 0;
LAB_006760fc:
  if (uVar3 != 0 || uVar2 != 0) {
    iVar4 = 0;
    do {
      puVar5 = (uint *)(DAT_00676174 + iVar4 * 0x10);
      if (uVar2 == puVar5[1] && uVar3 == *puVar5) {
        iVar4 = DAT_00676174 + iVar4 * 0x10;
LAB_0067614c:
        if (iVar4 == 0) {
          return 0;
        }
        return *(undefined4 *)(iVar4 + 8);
      }
      if (puVar5[5] == uVar2 && uVar3 == puVar5[4]) {
        iVar4 = DAT_00676174 + iVar4 * 0x10 + 0x10;
        goto LAB_0067614c;
      }
      iVar4 = iVar4 + 2;
    } while (iVar4 < 0x20);
  }
  return 0;
}

