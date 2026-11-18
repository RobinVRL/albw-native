#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002E1904(int param_1,undefined4 *param_2,undefined4 *param_3);
extern uint *DAT_001e8434;
extern undefined4 DAT_001e8438;
extern undefined4 *DAT_001e843c;

// USA 001E8350 <- EU 001E8350 (Ghidra, non-matching)
// GLOBAL DAT_001e8434 uint *
// GLOBAL DAT_001e8438 undefined4
// GLOBAL DAT_001e843c undefined4 *

undefined4 func_001E8350(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  uVar2 = DAT_001e8438;
  puVar1 = DAT_001e8434;
  iVar6 = *(int *)(param_1 + 0xe30);
  if (iVar6 != 0) {
    iVar4 = iVar6 + -1;
    while (iVar6 = iVar6 + -1, -1 < iVar6) {
      puVar5 = (undefined4 *)(param_1 + 0x14 + iVar6 * 0x2d0);
      if (puVar5[1] == *(int *)(param_1 + iVar4 * 0x2d0 + 0x18)) {
        if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_001e8434), iVar3 != 0)) {
          *DAT_001e843c = uVar2;
        }
        if ((puVar5 == (undefined4 *)0x0) ||
           (iVar3 = (**(code **)*puVar5)(puVar5,DAT_001e843c), iVar3 == 0)) {
          puVar5 = (undefined4 *)0x0;
        }
        if (puVar5 != (undefined4 *)0x0) {
          func_002E1904((int)puVar5,param_2,param_3);
          return 1;
        }
      }
    }
  }
  return 0;
}

