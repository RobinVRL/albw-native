#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_001E035C(int param_1,int *param_2,int param_3);
extern int func_0025B970(int param_1,int param_2);
extern int func_002DEAC8(int param_1,int *param_2);
extern int func_002DEB34(int param_1);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_0025bebc;

// USA 0025BDA4 <- EU 0025BDCC (Ghidra, non-matching)
// GLOBAL DAT_0025bebc int *

int * func_0025BDA4(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar2 = DAT_0025bebc;
  iVar4 = func_00587FCC(*DAT_0025bebc,param_2);
  if ((iVar4 != -1) && (cVar3 = func_0025B970((int)param_1,iVar4), cVar3 != '\0')) {
    piVar5 = (int *)func_002DEB34(*piVar2);
    while (piVar5 != (int *)0x0) {
      piVar6 = (int *)(param_1[0x19] + (int)piVar5);
      piVar1 = piVar6 + 1;
      if (*piVar1 == 0) {
        piVar6 = (int *)*piVar6;
      }
      if (*piVar1 == 0 && piVar6 == (int *)0x0) {
        iVar4 = func_001E035C((int)piVar5,param_1,iVar4);
        if (iVar4 == 0) {
          func_002DEAC8(*piVar2,piVar5);
          return (int *)0x0;
        }
        func_0010F1DC(param_1 + 0x16,(int *)(param_1[0x19] + (int)piVar5));
        param_1[0x18] = param_1[0x18] + 1;
        return piVar5;
      }
      func_002DEAC8(*piVar2,piVar5);
      piVar5 = (int *)func_002DEB34(*piVar2);
    }
  }
  return (int *)0x0;
}

