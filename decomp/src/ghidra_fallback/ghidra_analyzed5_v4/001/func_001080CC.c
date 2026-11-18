#include "ghidra_types.h"

extern int func_0010A938(int *param_1);
extern int func_0010BE9C(void);
extern int func_0010BFD4(int *param_1);
extern undefined4 DAT_00108188;

// USA 001080CC <- EU 001080CC (Ghidra, non-matching)
// GLOBAL DAT_00108188 undefined4

undefined4 func_001080CC(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 4);
  if (*piVar2 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 0;
    func_0010BE9C();
  }
  else if (*piVar2 == -2) {
    func_0010BFD4((int *)(param_1 + 8));
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = 1;
    func_0010BE9C();
    return func_0010A938((int *)(param_1 + 8));
  }
  return 0;
}

