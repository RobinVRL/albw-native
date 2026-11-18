#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00263C30(undefined4 *param_1);
extern uint *DAT_0051dd1c;
extern undefined4 *DAT_0051dd20;
extern undefined4 DAT_0051dd24;

// USA 0051DCF0 <- EU 0051DCC8 (Ghidra, non-matching)
// GLOBAL DAT_0051dd1c uint *
// GLOBAL DAT_0051dd20 undefined4 *
// GLOBAL DAT_0051dd24 undefined4

void func_0051DCF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051dd1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dd1c), iVar1 != 0)) {
    *DAT_0051dd20 = DAT_0051dd24;
  }
  if (DAT_0051dd20 != param_2) {
    func_00263C30(param_2);
  }
  return;
}

