#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E4908(undefined4 *param_1);
extern uint *DAT_0052d91c;
extern undefined4 *DAT_0052d920;
extern undefined4 DAT_0052d924;

// USA 0052D8F0 <- EU 0052D8C8 (Ghidra, non-matching)
// GLOBAL DAT_0052d91c uint *
// GLOBAL DAT_0052d920 undefined4 *
// GLOBAL DAT_0052d924 undefined4

void func_0052D8F0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052d91c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052d91c), iVar1 != 0)) {
    *DAT_0052d920 = DAT_0052d924;
  }
  if (DAT_0052d920 != param_2) {
    func_001E4908(param_2);
  }
  return;
}

