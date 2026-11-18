#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002E1904(int param_1,undefined4 *param_2,undefined4 *param_3);
extern uint *DAT_001e8434;
extern undefined4 DAT_001e8438;
extern undefined4 *DAT_001e843c;

// USA 001E8348 <- EU 001E8348 (Ghidra, non-matching)
// GLOBAL DAT_001e8434 uint *
// GLOBAL DAT_001e8438 undefined4
// GLOBAL DAT_001e843c undefined4 *

undefined4 func_001E8348(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  uVar2 = DAT_001e8438;
  puVar1 = DAT_001e8434;
  iVar3 = *(int *)(param_1 + 0x1c8);
  iVar7 = *(int *)(iVar3 + 0xe30);
  if (iVar7 != 0) {
    iVar5 = iVar7 + -1;
    while (iVar7 = iVar7 + -1, -1 < iVar7) {
      puVar6 = (undefined4 *)(iVar3 + 0x14 + iVar7 * 0x2d0);
      if (puVar6[1] == *(int *)(iVar3 + iVar5 * 0x2d0 + 0x18)) {
        if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001e8434), iVar4 != 0)) {
          *DAT_001e843c = uVar2;
        }
        if ((puVar6 == (undefined4 *)0x0) ||
           (iVar4 = (**(code **)*puVar6)(puVar6,DAT_001e843c), iVar4 == 0)) {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 != (undefined4 *)0x0) {
          func_002E1904((int)puVar6,param_2,param_3);
          return 1;
        }
      }
    }
  }
  return 0;
}

