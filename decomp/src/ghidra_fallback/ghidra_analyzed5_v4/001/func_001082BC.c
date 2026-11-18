#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);

// USA 001082BC <- EU 001082BC (Ghidra, non-matching)

int func_001082BC(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  
  piVar1 = param_1 + 3;
  func_0010C0C0(piVar1);
  piVar5 = (int *)param_1[2];
  piVar3 = (int *)0x0;
  if (piVar5 == (int *)0x0) {
LAB_0010833c:
    if (piVar3 == (int *)0x0) goto LAB_001083ec;
    iVar2 = piVar3[2] + piVar3[3] + param_4;
    if (piVar5 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)*piVar5;
    }
    bVar6 = piVar4 != piVar3;
    if (bVar6) {
      piVar4 = (int *)piVar3[1];
    }
    if (bVar6 && piVar4 != (int *)0x0) {
      if (piVar5 == piVar4) {
        if (piVar5 == (int *)0x0) {
          param_2[1] = (int)param_2;
          *param_2 = (int)param_2;
        }
        else {
          param_2[1] = (int)piVar5;
          *(int **)(*piVar5 + 4) = param_2;
          *param_2 = *piVar5;
          *piVar5 = (int)param_2;
        }
        param_1[2] = (int)param_2;
      }
      else {
        param_2[1] = (int)piVar4;
        *(int **)(*piVar4 + 4) = param_2;
        *param_2 = *piVar4;
        *piVar4 = (int)param_2;
      }
      goto LAB_00108458;
    }
    if (piVar5 != (int *)0x0) {
      param_2[1] = (int)piVar5;
      *(int **)(*piVar5 + 4) = param_2;
      *param_2 = *piVar5;
      *piVar5 = (int)param_2;
      goto LAB_00108458;
    }
  }
  else {
    piVar4 = (int *)*piVar5;
    iVar2 = param_1[1];
    if (piVar4 != (int *)0x0) {
      do {
        piVar3 = piVar4;
        if (((uint)(param_3 + param_4) <= (uint)(iVar2 - (piVar4[3] + piVar4[2]))) ||
           (iVar2 = piVar4[2] - param_4, piVar3 = (int *)0x0, piVar5 == piVar4)) goto LAB_0010833c;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)0x0);
    }
LAB_001083ec:
    iVar2 = *param_1;
    if (piVar5 != (int *)0x0) {
      if ((uint)piVar5[2] < (uint)(iVar2 + param_3 + param_4)) goto LAB_0010843c;
      param_2[1] = (int)piVar5;
      *(int **)(*piVar5 + 4) = param_2;
      *param_2 = *piVar5;
      *piVar5 = (int)param_2;
      param_1[2] = (int)param_2;
      goto LAB_00108458;
    }
    if ((uint)param_1[1] < (uint)(iVar2 + param_3)) {
LAB_0010843c:
      func_0010C160(piVar1);
      return 0;
    }
  }
  param_2[1] = (int)param_2;
  *param_2 = (int)param_2;
  param_1[2] = (int)param_2;
LAB_00108458:
  param_2[2] = iVar2;
  param_2[3] = param_3;
  func_0010C160(piVar1);
  return iVar2;
}

