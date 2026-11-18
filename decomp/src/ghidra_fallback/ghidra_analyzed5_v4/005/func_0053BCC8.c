#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0053bd40;
extern undefined4 *DAT_0053bd44;
extern undefined4 DAT_0053bd48;
extern uint *DAT_0053bd4c;
extern undefined4 *DAT_0053bd50;
extern undefined4 DAT_0053bd54;

// USA 0053BCC8 <- EU 0053BCA0 (Ghidra, non-matching)
// GLOBAL DAT_0053bd40 uint *
// GLOBAL DAT_0053bd44 undefined4 *
// GLOBAL DAT_0053bd48 undefined4
// GLOBAL DAT_0053bd4c uint *
// GLOBAL DAT_0053bd50 undefined4 *
// GLOBAL DAT_0053bd54 undefined4

undefined4 func_0053BCC8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0053bd40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bd40), iVar1 != 0)) {
    *DAT_0053bd44 = DAT_0053bd48;
  }
  if (DAT_0053bd44 != param_2) {
    if (((*DAT_0053bd4c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bd4c), iVar1 != 0)) {
      *DAT_0053bd50 = DAT_0053bd54;
    }
    if (DAT_0053bd50 != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

