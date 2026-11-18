#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0055a7f0;
extern undefined4 *DAT_0055a7f4;
extern undefined4 DAT_0055a7f8;
extern uint *DAT_0055a7fc;
extern undefined4 *DAT_0055a800;
extern undefined4 DAT_0055a804;
extern uint *DAT_0055a808;
extern undefined4 *DAT_0055a80c;
extern undefined4 DAT_0055a810;

// USA 0055A734 <- EU 0055A70C (Ghidra, non-matching)
// GLOBAL DAT_0055a7f0 uint *
// GLOBAL DAT_0055a7f4 undefined4 *
// GLOBAL DAT_0055a7f8 undefined4
// GLOBAL DAT_0055a7fc uint *
// GLOBAL DAT_0055a800 undefined4 *
// GLOBAL DAT_0055a804 undefined4
// GLOBAL DAT_0055a808 uint *
// GLOBAL DAT_0055a80c undefined4 *
// GLOBAL DAT_0055a810 undefined4

undefined4 func_0055A734(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055a7f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a7f0), iVar1 != 0)) {
    *DAT_0055a7f4 = DAT_0055a7f8;
  }
  if (DAT_0055a7f4 != param_2) {
    if (((*DAT_0055a7fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a7fc), iVar1 != 0)) {
      *DAT_0055a800 = DAT_0055a804;
    }
    if (DAT_0055a800 != param_2) {
      if (((*DAT_0055a808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a808), iVar1 != 0)) {
        *DAT_0055a80c = DAT_0055a810;
      }
      if (DAT_0055a80c != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

