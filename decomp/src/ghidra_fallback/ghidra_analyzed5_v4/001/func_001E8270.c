#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002E1904(int param_1,undefined4 *param_2,undefined4 *param_3);
extern uint *DAT_001e833c;
extern undefined4 DAT_001e8340;
extern undefined4 *DAT_001e8344;

// USA 001E8270 <- EU 001E8270 (Ghidra, non-matching)
// GLOBAL DAT_001e833c uint *
// GLOBAL DAT_001e8340 undefined4
// GLOBAL DAT_001e8344 undefined4 *

undefined4 func_001E8270(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar2 = DAT_001e8340;
  puVar1 = DAT_001e833c;
  iVar3 = *(int *)(param_1 + 0xe30);
  do {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
      puVar5 = (undefined4 *)(param_1 + 0x14 + iVar3 * 0x2d0);
    } while (puVar5[1] != *param_2);
    if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001e833c), iVar4 != 0)) {
      *DAT_001e8344 = uVar2;
    }
    if ((puVar5 == (undefined4 *)0x0) ||
       (iVar4 = (**(code **)*puVar5)(puVar5,DAT_001e8344), iVar4 == 0)) {
      puVar5 = (undefined4 *)0x0;
    }
  } while (puVar5 == (undefined4 *)0x0);
  func_002E1904((int)puVar5,param_3,param_4);
  return 1;
}

