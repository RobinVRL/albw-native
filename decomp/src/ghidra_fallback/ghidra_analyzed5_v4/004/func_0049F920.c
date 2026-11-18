#include "ghidra_types.h"

extern int func_001031B4(undefined4 *param_1,undefined4 *param_2);
extern uint *DAT_0049f984;

// USA 0049F920 <- EU 0049F8F8 (Ghidra, non-matching)
// GLOBAL DAT_0049f984 uint *

void func_0049F920(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  iVar3 = func_001031B4(param_1,param_2);
  puVar2 = DAT_0049f984;
  uVar4 = *DAT_0049f984;
  if (0 < (int)uVar4) {
    iVar5 = 0;
    do {
      uVar4 = uVar4 - 1;
      iVar1 = iVar5 * 0x14;
      iVar5 = iVar5 + 1;
      *(undefined1 *)(iVar3 + 8 + iVar1 + 0x10) = 1;
    } while (uVar4 != 0);
  }
  uVar7 = *(uint *)(iVar3 + 0x58);
  uVar4 = *puVar2;
  if (uVar7 < uVar4) {
    if (0 < (int)uVar4) {
      uVar6 = 0;
      do {
        bVar8 = uVar7 != uVar6;
        iVar5 = uVar6 * 0x14;
        uVar4 = uVar4 - 1;
        uVar6 = uVar6 + 1;
        *(bool *)(iVar3 + 8 + iVar5 + 0x12) = bVar8;
      } while (uVar4 != 0);
    }
    *(uint *)(iVar3 + 0x58) = uVar7;
  }
  *(undefined1 *)(iVar3 + 0x78) = 0;
  return;
}

