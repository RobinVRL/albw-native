#include "ghidra_types.h"

extern int func_003DA464(int *param_1,int param_2,int param_3);
extern int func_003DA498(int *param_1,int param_2);

// USA 00676878 <- EU 00676850 (Ghidra, non-matching)

undefined4 func_00676878(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\x01') {
    uVar5 = *param_3;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = uVar5;
    return 1;
  }
  if (cVar1 == '\x02') {
    uVar3 = *(undefined2 *)(param_2 + 6);
    uVar5 = *param_3;
    *(undefined1 *)(param_1 + 1) = 2;
    *(undefined2 *)((int)param_1 + 6) = uVar3;
  }
  else {
    if (cVar1 == '\x03') {
      uVar5 = *param_3;
      *(undefined1 *)(param_1 + 1) = 3;
      *param_1 = uVar5;
      piVar6 = param_1 + 2;
      param_1[4] = param_4;
      if (param_4 != 0) {
        piVar4 = (int *)param_1[3];
        while (piVar4 != piVar6) {
          piVar7 = (int *)piVar4[1];
          func_003DA464((int *)param_1[4],(int)piVar4,1);
          piVar4 = piVar7;
        }
        param_1[4] = 0;
        *piVar6 = (int)piVar6;
        param_1[3] = piVar6;
      }
      param_1[4] = *(undefined4 *)(param_2 + 0x10);
      iVar8 = *(int *)(param_2 + 0xc);
      while( true ) {
        if (iVar8 == param_2 + 8) {
          return 1;
        }
        piVar4 = (int *)func_003DA498((int *)param_1[4],1);
        if (piVar4 == (int *)0x0) break;
        *piVar4 = *piVar6;
        piVar4[1] = (int)piVar6;
        *piVar6 = (int)piVar4;
        *(int **)(*piVar4 + 4) = piVar4;
        piVar4[2] = *(int *)(iVar8 + 8);
        iVar8 = *(int *)(iVar8 + 4);
      }
      return 0;
    }
    if (cVar1 != '\x04') {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_2 + 6);
    uVar5 = *param_3;
    *(undefined1 *)(param_1 + 1) = 4;
    *(undefined1 *)((int)param_1 + 6) = uVar2;
  }
  *param_1 = uVar5;
  return 1;
}

