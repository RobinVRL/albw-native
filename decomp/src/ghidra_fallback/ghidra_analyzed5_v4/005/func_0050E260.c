#include "ghidra_types.h"

extern int func_0050E674(int param_1,undefined4 param_2);
extern int func_0050E868(int param_1,undefined4 param_2);
extern int func_0050EEEC(int param_1,int param_2);

// USA 0050E260 <- EU 0050E238 (Ghidra, non-matching)

int func_0050E260(int param_1,int param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  
  sVar1 = *(short *)(param_1 + 0x2e);
  if (sVar1 == 0) {
    iVar3 = func_0050E674(param_1,param_2);
    return iVar3;
  }
  if (sVar1 == 1) {
    cVar2 = func_0050E868(param_1,param_2);
    return (int)cVar2;
  }
  if (sVar1 == 2) {
    iVar3 = func_0050EEEC(param_1,param_2);
    return iVar3;
  }
  return 1;
}

