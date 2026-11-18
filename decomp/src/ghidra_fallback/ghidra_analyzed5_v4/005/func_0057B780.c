#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0012CCE0(undefined4 *param_1);
extern uint *DAT_0057b7f8;
extern undefined4 *DAT_0057b7fc;
extern undefined4 DAT_0057b800;
extern uint *DAT_0057b804;
extern undefined4 *DAT_0057b808;
extern undefined4 DAT_0057b80c;

// USA 0057B780 <- EU 0057B758 (Ghidra, non-matching)
// GLOBAL DAT_0057b7f8 uint *
// GLOBAL DAT_0057b7fc undefined4 *
// GLOBAL DAT_0057b800 undefined4
// GLOBAL DAT_0057b804 uint *
// GLOBAL DAT_0057b808 undefined4 *
// GLOBAL DAT_0057b80c undefined4

undefined4 func_0057B780(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0057b7f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b7f8), iVar1 != 0)) {
    *DAT_0057b7fc = DAT_0057b800;
  }
  if (DAT_0057b7fc != param_2) {
    if (((*DAT_0057b804 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b804), iVar1 != 0)) {
      *DAT_0057b808 = DAT_0057b80c;
    }
    if (DAT_0057b808 != param_2) {
      uVar2 = func_0012CCE0(param_2);
      return uVar2;
    }
  }
  return 1;
}

