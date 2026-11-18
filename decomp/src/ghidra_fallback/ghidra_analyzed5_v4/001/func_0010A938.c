#include "ghidra_types.h"

extern int func_0010BE9C(void);
extern undefined4 DAT_0010a988;

// USA 0010A938 <- EU 0010A938 (Ghidra, non-matching)
// GLOBAL DAT_0010a988 undefined4

void func_0010A938(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  do {
    iVar3 = *param_1;
    iVar2 = -iVar3;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2;
  if (iVar3 != -1 && 0 < iVar2) {
    func_0010BE9C();
  }
  return;
}

