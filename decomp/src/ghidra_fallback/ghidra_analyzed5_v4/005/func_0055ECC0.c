#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_0055ecec;
extern undefined4 *DAT_0055ecf0;
extern undefined4 DAT_0055ecf4;

// USA 0055ECC0 <- EU 0055EC98 (Ghidra, non-matching)
// GLOBAL DAT_0055ecec uint *
// GLOBAL DAT_0055ecf0 undefined4 *
// GLOBAL DAT_0055ecf4 undefined4

void func_0055ECC0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055ecec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055ecec), iVar1 != 0)) {
    *DAT_0055ecf0 = DAT_0055ecf4;
  }
  if (DAT_0055ecf0 != param_2) {
    func_001E5578(param_2);
  }
  return;
}

