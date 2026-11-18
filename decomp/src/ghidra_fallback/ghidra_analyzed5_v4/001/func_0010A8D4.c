#include "ghidra_types.h"

extern int func_0010BE9C(void);
extern int func_0010BFD4(int *param_1);
extern undefined4 DAT_0010a988;

// USA 0010A8D4 <- EU 0010A8D4 (Ghidra, non-matching)
// GLOBAL DAT_0010a988 undefined4

int * func_0010A8D4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (*param_1 != 1) {
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      do {
        piVar3 = (int *)*param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = -1;
    }
    return piVar3;
  }
  piVar3 = param_1 + 1;
  func_0010BFD4(piVar3);
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -2;
  do {
    iVar4 = *piVar3;
    iVar2 = -iVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2;
  if (iVar4 != -1 && 0 < iVar2) {
    piVar3 = (int *)func_0010BE9C();
  }
  return piVar3;
}

