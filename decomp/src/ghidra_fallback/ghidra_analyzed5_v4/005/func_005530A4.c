#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005299E4(int param_1);
extern int func_00581D60(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_005531b0;
extern int *DAT_005531b4;
extern int *DAT_005531b8;
extern undefined4 *DAT_005531bc;
extern int DAT_005531c0;
extern uint *DAT_005531c4;
extern undefined4 DAT_005531c8;
extern undefined4 *DAT_005531cc;

// USA 005530A4 <- EU 0055307C (Ghidra, non-matching)
// GLOBAL DAT_005531b0 int *
// GLOBAL DAT_005531b4 int *
// GLOBAL DAT_005531b8 int *
// GLOBAL DAT_005531bc undefined4 *
// GLOBAL DAT_005531c0 int
// GLOBAL DAT_005531c4 uint *
// GLOBAL DAT_005531c8 undefined4
// GLOBAL DAT_005531cc undefined4 *

undefined4 func_005530A4(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (*(int *)(*(int *)(param_1 + 0x4c) + 4) == 0x3f800000) {
    pcVar6 = (char *)(*DAT_005531b0 + 0x18);
    cVar1 = *pcVar6;
    if (cVar1 == '\n') {
      pcVar6 = *(char **)(*DAT_005531b0 + 0x1c);
    }
    if (((cVar1 == '\n' && pcVar6 == (char *)0x0) &&
        (iVar7 = func_00581D60(*DAT_005531b4), puVar3 = DAT_005531bc, piVar2 = DAT_005531b8,
        iVar7 == 3)) &&
       (puVar8 = (undefined4 *)
                 func_005841A8(*DAT_005531b8,*DAT_005531bc,*(int **)(DAT_005531c0 + *DAT_005531b8)),
       uVar5 = DAT_005531c8, puVar4 = DAT_005531c4, *(undefined4 **)(*piVar2 + 0x3dbc8) != puVar8))
    {
      do {
        puVar9 = (undefined4 *)*puVar8;
        if (((*puVar4 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_005531c4), iVar7 != 0)) {
          *DAT_005531cc = uVar5;
        }
        if ((puVar9 == (undefined4 *)0x0) ||
           (iVar7 = (**(code **)*puVar9)(puVar9,DAT_005531cc), iVar7 == 0)) {
          puVar9 = (undefined4 *)0x0;
        }
        if ((puVar9 != (undefined4 *)0x0) && (iVar7 = func_005299E4((int)puVar9), iVar7 != 0)) {
          return 1;
        }
        puVar8 = (undefined4 *)func_005841A8(*piVar2,*puVar3,puVar8 + 1);
      } while (*(undefined4 **)(*piVar2 + 0x3dbc8) != puVar8);
    }
  }
  return 0;
}

