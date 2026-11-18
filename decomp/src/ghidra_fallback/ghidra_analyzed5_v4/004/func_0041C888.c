#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0041c96c;
extern int *DAT_0041c970;
extern undefined4 *DAT_0041c974;

// USA 0041C888 <- EU 0041C868 (Ghidra, non-matching)
// GLOBAL DAT_0041c96c uint *
// GLOBAL DAT_0041c970 int *
// GLOBAL DAT_0041c974 undefined4 *

void func_0041C888(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = DAT_0041c970;
  puVar1 = DAT_0041c96c;
  if (((*DAT_0041c96c & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0041c96c), iVar4 != 0)) {
    *piVar2 = (int)piVar2;
    piVar2[1] = (int)piVar2;
    piVar2[-1] = 0;
  }
  piVar5 = (int *)DAT_0041c974[1];
  if (((*puVar1 & 1) == 0) &&
     (iVar4 = func_00100174((int *)DAT_0041c96c), puVar3 = DAT_0041c974, iVar4 != 0)) {
    DAT_0041c974[1] = piVar2;
    puVar3[2] = piVar2;
    *puVar3 = 0;
  }
  if (piVar5 != DAT_0041c970) {
    do {
      piVar6 = (int *)*piVar5;
      (**(code **)(piVar5[-1] + 8))(piVar5 + -1,param_2,param_2 + param_3);
      if (((*puVar1 & 1) == 0) &&
         (iVar4 = func_00100174((int *)DAT_0041c96c), puVar3 = DAT_0041c974, iVar4 != 0)) {
        DAT_0041c974[1] = piVar2;
        puVar3[2] = piVar2;
        *puVar3 = 0;
      }
      piVar5 = piVar6;
    } while (piVar6 != DAT_0041c970);
  }
  return;
}

