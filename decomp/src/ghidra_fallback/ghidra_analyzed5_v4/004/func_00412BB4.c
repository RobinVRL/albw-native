#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00412FD4(int param_1);
extern uint *DAT_00412bdc;
extern int DAT_00412be0;
extern undefined4 DAT_00412be4;
extern undefined4 DAT_00412be8;

// USA 00412BB4 <- EU 00412B94 (Ghidra, non-matching)
// GLOBAL DAT_00412bdc uint *
// GLOBAL DAT_00412be0 int
// GLOBAL DAT_00412be4 undefined4
// GLOBAL DAT_00412be8 undefined4

int func_00412BB4(void)

{
  int iVar1;
  
  if (((*DAT_00412bdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00412bdc), iVar1 != 0)) {
    func_00412FD4(DAT_00412be0);
  }
  return DAT_00412be0;
}

