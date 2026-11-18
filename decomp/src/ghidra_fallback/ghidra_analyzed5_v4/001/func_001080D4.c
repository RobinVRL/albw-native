#include "ghidra_types.h"

extern int func_0010A938(int *param_1);
extern int func_0010BE9C(void);
extern int func_0010BFD4(int *param_1);
extern undefined4 DAT_00108188;

// USA 001080D4 <- EU 001080D4 (Ghidra, non-matching)
// GLOBAL DAT_00108188 undefined4

undefined4 func_001080D4(int *param_1)

{
  bool bVar1;
  
  if (*param_1 == -1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
    func_0010BE9C();
  }
  else if (*param_1 == -2) {
    func_0010BFD4(param_1 + 1);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 1;
    func_0010BE9C();
    return func_0010A938(param_1 + 1);
  }
  return 0;
}

