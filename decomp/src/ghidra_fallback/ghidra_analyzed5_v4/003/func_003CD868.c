#include "ghidra_types.h"

extern int func_0010BE9C(void);
extern undefined4 DAT_003cd8b8;

// USA 003CD868 <- EU 003CD844 (Ghidra, non-matching)
// GLOBAL DAT_003cd8b8 undefined4

int func_003CD868(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = *param_1;
    iVar2 = (int)*(short *)((int)param_1 + 6);
    if (iVar3 <= *(short *)((int)param_1 + 6) - param_2) {
      iVar2 = iVar3 + param_2;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2;
  if ((iVar3 < 1) || (0 < (short)param_1[1])) {
    func_0010BE9C();
  }
  return iVar3;
}

