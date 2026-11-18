#include "ghidra_types.h"

extern int func_0010BE9C(void);
extern undefined4 DAT_003cd840;

// USA 003CD7B4 <- EU 003CD790 (Ghidra, non-matching)
// GLOBAL DAT_003cd840 undefined4

void func_003CD7B4(int *param_1)

{
  bool bVar1;
  int *piVar2;
  
  do {
    while (*param_1 < 1) {
      ClearExclusiveLocal();
      piVar2 = param_1 + 1;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *(short *)piVar2 = (short)*piVar2 + 1;
      func_0010BE9C();
      piVar2 = param_1 + 1;
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar1);
      *(short *)piVar2 = (short)*piVar2 + -1;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return;
}

