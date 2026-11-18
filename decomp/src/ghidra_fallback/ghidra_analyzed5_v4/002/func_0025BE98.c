#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_001E035C(int param_1,int *param_2,int param_3);
extern int func_0025B970(int param_1,int param_2);
extern int func_002DEAC8(int param_1,int *param_2);
extern int func_002DEB34(int param_1);
extern int *DAT_0025bf88;

// USA 0025BE98 <- EU 0025BEC0 (Ghidra, non-matching)
// GLOBAL DAT_0025bf88 int *

int * func_0025BE98(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  
  cVar3 = func_0025B970((int)param_1,param_2);
  piVar2 = DAT_0025bf88;
  if (cVar3 == '\0') {
    return (int *)0x0;
  }
  piVar4 = (int *)func_002DEB34(*DAT_0025bf88);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar5 = (int *)(param_1[0x19] + (int)piVar4);
    piVar1 = piVar5 + 1;
    if (*piVar1 == 0) {
      piVar5 = (int *)*piVar5;
    }
    if (*piVar1 == 0 && piVar5 == (int *)0x0) break;
    func_002DEAC8(*piVar2,piVar4);
    piVar4 = (int *)func_002DEB34(*piVar2);
  }
  iVar6 = func_001E035C((int)piVar4,param_1,param_2);
  if (iVar6 == 0) {
    func_002DEAC8(*piVar2,piVar4);
    return (int *)0x0;
  }
  func_0010F1DC(param_1 + 0x16,(int *)(param_1[0x19] + (int)piVar4));
  param_1[0x18] = param_1[0x18] + 1;
  return piVar4;
}

