#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004ca568;
extern int DAT_004ca56c;
extern uint *DAT_004ca570;
extern undefined4 DAT_004ca574;
extern undefined4 *DAT_004ca578;

// USA 004CA48C <- EU 004CA464 (Ghidra, non-matching)
// GLOBAL DAT_004ca568 int *
// GLOBAL DAT_004ca56c int
// GLOBAL DAT_004ca570 uint *
// GLOBAL DAT_004ca574 undefined4
// GLOBAL DAT_004ca578 undefined4 *

void func_004CA48C(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  uVar2 = DAT_004ca574;
  puVar1 = DAT_004ca570;
  iVar9 = 0;
  uVar8 = 0;
  uVar7 = 0;
  piVar5 = *(int **)(DAT_004ca56c + *DAT_004ca568);
  piVar4 = *(int **)(*DAT_004ca568 + 0x3dbc0);
  if (piVar4 != piVar5) {
    do {
      puVar6 = (undefined4 *)*piVar4;
      if ((puVar6 != (undefined4 *)0x0) && (*(char *)((int)puVar6 + 0x2d7) == '\0')) {
        if (((*puVar1 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_004ca570), iVar3 != 0)) {
          *DAT_004ca578 = uVar2;
        }
        iVar3 = (**(code **)*puVar6)(puVar6,DAT_004ca578);
        if (iVar3 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 != (undefined4 *)0x0) {
          if (uVar8 < (uint)puVar6[0x268]) {
            iVar9 = *(int *)(*piVar4 + 0x2cc);
            uVar8 = puVar6[0x268];
          }
          uVar7 = uVar7 + 1;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar5);
    if ((8 < uVar7) && (iVar9 == *(int *)(param_1 + 0x2cc))) {
      func_0066A284((undefined4 *)(param_1 + 0x8bc),5);
    }
  }
  return;
}

