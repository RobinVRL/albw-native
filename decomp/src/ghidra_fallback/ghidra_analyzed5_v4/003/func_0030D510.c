// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0030DC44(int *param_1,int param_2);
extern int func_00361640();
extern int func_00556068(int param_1);
extern uint *DAT_0030d69c;
extern undefined4 DAT_0030d6a0;
extern undefined4 *DAT_0030d6a4;
extern int *DAT_0030d6a8;

// USA 0030D510 <- EU 0030D4EC (Ghidra, non-matching)
// GLOBAL DAT_0030d69c uint *
// GLOBAL DAT_0030d6a0 undefined4
// GLOBAL DAT_0030d6a4 undefined4 *
// GLOBAL DAT_0030d6a8 int *

uint * func_0030D510(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  
  uVar1 = DAT_0030d6a0;
  puVar7 = DAT_0030d69c;
  if (param_2 == 0) {
    *(undefined4 *)(param_1[7] + 0x18) = 0;
    piVar6 = func_00556068(param_1[7]);
    if (((*puVar7 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0030d69c), iVar2 != 0)) {
      *DAT_0030d6a4 = uVar1;
    }
    if ((piVar6 == (int *)0x0) || (iVar2 = (**(code **)*piVar6)(piVar6,DAT_0030d6a4), iVar2 == 0)) {
      piVar6 = (int *)0x0;
    }
    puVar4 = (uint *)0x0;
    if (piVar6 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar7 = (uint *)(**(code **)(*piVar6 + 0x8c))(piVar6,0);
      return puVar7;
    }
  }
  else if (param_2 == 100) {
    puVar4 = (uint *)func_00361640(*DAT_0030d6a8);
    puVar4[6] = 0;
  }
  else {
    iVar2 = func_0030DC44(param_1,param_2);
    puVar4 = (uint *)0x0;
    if (iVar2 != 0) {
      puVar3 = func_00556068(iVar2);
      puVar4 = (uint *)*puVar7;
      if (((*puVar7 & 1) == 0) &&
         (iVar5 = func_00100174((int *)DAT_0030d69c), puVar4 = (uint *)0x0, iVar5 != 0)) {
        *DAT_0030d6a4 = uVar1;
        puVar4 = DAT_0030d69c;
      }
      if ((puVar3 != (undefined4 *)0x0) &&
         (iVar5 = (**(code **)*puVar3)(puVar3,DAT_0030d6a4), puVar4 = (uint *)0x0, iVar5 != 0)) {
        piVar6 = func_00556068(iVar2);
        if (((*puVar7 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0030d69c), iVar5 != 0)) {
          *DAT_0030d6a4 = uVar1;
        }
        if ((piVar6 == (int *)0x0) ||
           (iVar5 = (**(code **)*piVar6)(piVar6,DAT_0030d6a4), iVar5 == 0)) {
          piVar6 = (int *)0x0;
        }
        puVar7 = (uint *)(**(code **)(*piVar6 + 0x8c))(piVar6,0);
        *(undefined4 *)(iVar2 + 0x18) = 0;
        return puVar7;
      }
    }
  }
  return puVar4;
}

