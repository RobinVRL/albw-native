// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0030C710(int *param_1,int param_2);
extern int func_0030DAE0(int *param_1,int param_2);
extern int func_00361640();
extern int *DAT_0030e078;

// USA 0030DFA0 <- EU 0030DF7C (Ghidra, non-matching)
// GLOBAL DAT_0030e078 int *

void func_0030DFA0(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    piVar4 = (int *)param_1[8];
    piVar3 = (int *)(param_1[0x55] + (int)piVar4);
    piVar1 = piVar3 + 1;
    if (*piVar1 == 0) {
      piVar3 = (int *)*piVar3;
    }
    if (*piVar1 != 0 || piVar3 != (int *)0x0) {
      return;
    }
  }
  else {
    if (param_2 != 100) {
      puVar2 = func_0030DAE0(param_1,param_2);
      if ((puVar2 == (undefined4 *)0x0) &&
         (puVar2 = func_0030C710(param_1,param_2), puVar2 != (undefined4 *)0x0)) {
        piVar4 = puVar2 + 0x1d7;
        if (*(char *)((int)param_1 + 0x147) != '\0') {
          param_1[8] = (int)(puVar2 + 0x1d7);
        }
        piVar3 = (int *)(param_1[0x55] + (int)piVar4);
        piVar1 = piVar3 + 1;
        if (*piVar1 == 0) {
          piVar3 = (int *)*piVar3;
        }
        if (*piVar1 == 0 && piVar3 == (int *)0x0) goto LAB_0030e010;
      }
      return;
    }
    piVar4 = (int *)func_00361640(*DAT_0030e078);
    piVar3 = (int *)(param_1[0x55] + (int)piVar4);
    piVar1 = piVar3 + 1;
    if (*piVar1 == 0) {
      piVar3 = (int *)*piVar3;
    }
    if (*piVar1 != 0 || piVar3 != (int *)0x0) {
      return;
    }
  }
LAB_0030e010:
  piVar4[5] = (int)param_1;
  (**(code **)(*piVar4 + 0x18))(piVar4);
  func_0010F1DC(param_1 + 0x52,(int *)(param_1[0x55] + (int)piVar4));
  param_1[0x54] = param_1[0x54] + 1;
  return;
}

