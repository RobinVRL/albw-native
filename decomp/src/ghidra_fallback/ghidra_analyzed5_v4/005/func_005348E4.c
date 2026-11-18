#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0053495c;
extern undefined4 *DAT_00534960;
extern undefined4 DAT_00534964;
extern uint *DAT_00534968;
extern undefined4 *DAT_0053496c;
extern undefined4 DAT_00534970;

// USA 005348E4 <- EU 005348BC (Ghidra, non-matching)
// GLOBAL DAT_0053495c uint *
// GLOBAL DAT_00534960 undefined4 *
// GLOBAL DAT_00534964 undefined4
// GLOBAL DAT_00534968 uint *
// GLOBAL DAT_0053496c undefined4 *
// GLOBAL DAT_00534970 undefined4

undefined4 func_005348E4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053495c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053495c), iVar1 != 0)) {
    *DAT_00534960 = DAT_00534964;
  }
  if (DAT_00534960 != param_2) {
    if (((*DAT_00534968 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534968), iVar1 != 0)) {
      *DAT_0053496c = DAT_00534970;
    }
    if (DAT_0053496c != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

