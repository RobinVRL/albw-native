#include "ghidra_types.h"

extern int func_001110BC(int *param_1,int param_2);
extern int func_0040D80C(int param_1);
extern int func_0040D9C8(int param_1,int param_2);

// USA 00409100 <- EU 004090E0 (Ghidra, non-matching)

char func_00409100(int *param_1,int *param_2,int param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = *param_2;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xac) != param_3)) {
    cVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,1,param_4);
    if (cVar1 != '\0') {
      return cVar1;
    }
    if (*param_2 != 0) {
      func_0040D80C(*param_2);
    }
    func_0040D9C8(*param_2,1);
    if (param_4 == (uint *)0x0) {
      return '\0';
    }
    if ((*param_4 & 0x80) == 0) {
      return '\0';
    }
    piVar3 = (int *)*param_2;
    uVar4 = param_4[0x10];
  }
  else {
    func_0040D9C8(iVar2,1);
    if (param_4 == (uint *)0x0) {
      return '\0';
    }
    if ((*param_4 & 0x80) == 0) {
      return '\0';
    }
    piVar3 = (int *)*param_2;
    uVar4 = param_4[0x10];
  }
  if (piVar3 != (int *)0x0) {
    func_001110BC(piVar3,uVar4);
  }
  return '\0';
}

