#include "ghidra_types.h"

extern int DAT_00676240;

// USA 006761A0 <- EU 00676178 (Ghidra, non-matching)
// GLOBAL DAT_00676240 int

undefined4 func_006761A0(int param_1)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar3 = 0;
  uVar4 = 0;
  iVar5 = 0;
  do {
    sVar2 = *(short *)(param_1 + iVar5 * 2);
    if (sVar2 == 0x3a) goto LAB_006761c4;
    uVar1 = uVar3 >> 0x18;
    uVar7 = (uint)(char)sVar2;
    iVar5 = iVar5 + 1;
    uVar3 = uVar7 | uVar3 << 8;
    uVar4 = uVar1 | uVar4 << 8 | (int)uVar7 >> 0x1f;
  } while (iVar5 < 8);
  uVar3 = 0;
  uVar4 = 0;
LAB_006761c4:
  if (uVar3 != 0 || uVar4 != 0) {
    iVar5 = 0;
    do {
      puVar6 = (uint *)(DAT_00676240 + iVar5 * 0x10);
      if (*puVar6 == uVar3 && puVar6[1] == uVar4) {
        iVar5 = DAT_00676240 + iVar5 * 0x10;
LAB_00676218:
        if (iVar5 == 0) {
          return 0;
        }
        return *(undefined4 *)(iVar5 + 8);
      }
      if (puVar6[5] == uVar4 && puVar6[4] == uVar3) {
        iVar5 = DAT_00676240 + iVar5 * 0x10 + 0x10;
        goto LAB_00676218;
      }
      iVar5 = iVar5 + 2;
    } while (iVar5 < 0x20);
  }
  return 0;
}

