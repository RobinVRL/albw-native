#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_005555ac;
extern undefined4 *DAT_005555b0;
extern undefined4 DAT_005555b4;
extern uint *DAT_005555b8;
extern undefined4 *DAT_005555bc;
extern undefined4 DAT_005555c0;

// USA 00555534 <- EU 0055550C (Ghidra, non-matching)
// GLOBAL DAT_005555ac uint *
// GLOBAL DAT_005555b0 undefined4 *
// GLOBAL DAT_005555b4 undefined4
// GLOBAL DAT_005555b8 uint *
// GLOBAL DAT_005555bc undefined4 *
// GLOBAL DAT_005555c0 undefined4

undefined4 func_00555534(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005555ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005555ac), iVar1 != 0)) {
    *DAT_005555b0 = DAT_005555b4;
  }
  if (DAT_005555b0 != param_2) {
    if (((*DAT_005555b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005555b8), iVar1 != 0)) {
      *DAT_005555bc = DAT_005555c0;
    }
    if (DAT_005555bc != param_2) {
      uVar2 = func_001E41C4(param_2);
      return uVar2;
    }
  }
  return 1;
}

