#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00621830(int *param_1);
extern int *DAT_00285a38;
extern int DAT_00285a3c;
extern uint *DAT_00285a40;
extern undefined4 DAT_00285a44;
extern undefined4 *DAT_00285a48;

// USA 00285950 <- EU 00285978 (Ghidra, non-matching)
// GLOBAL DAT_00285a38 int *
// GLOBAL DAT_00285a3c int
// GLOBAL DAT_00285a40 uint *
// GLOBAL DAT_00285a44 undefined4
// GLOBAL DAT_00285a48 undefined4 *

undefined4 func_00285950(int *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar2 = DAT_00285a44;
  puVar1 = DAT_00285a40;
  puVar4 = *(undefined4 **)(DAT_00285a3c + *DAT_00285a38);
  puVar6 = *(undefined4 **)(*DAT_00285a38 + 0x3dbc8);
  if (puVar4 != puVar6) {
    do {
      puVar5 = (undefined4 *)*puVar4;
      if (puVar5 != (undefined4 *)0x0) {
        if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00285a40), iVar3 != 0)) {
          *DAT_00285a48 = uVar2;
        }
        iVar3 = (**(code **)*puVar5)(puVar5,DAT_00285a48);
        if (iVar3 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        if ((puVar5 != (undefined4 *)0x0) && (puVar5[0x12] == 0x3f800000)) {
          puVar5[0x107] = param_1 + 0x263;
        }
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar6);
  }
  return func_00621830(param_1);
}

