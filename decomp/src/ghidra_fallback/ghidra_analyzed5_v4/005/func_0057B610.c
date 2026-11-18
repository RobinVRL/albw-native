#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0012CCE0(undefined4 *param_1);
extern uint *DAT_0057b688;
extern undefined4 *DAT_0057b68c;
extern undefined4 DAT_0057b690;
extern uint *DAT_0057b694;
extern undefined4 *DAT_0057b698;
extern undefined4 DAT_0057b69c;

// USA 0057B610 <- EU 0057B5E8 (Ghidra, non-matching)
// GLOBAL DAT_0057b688 uint *
// GLOBAL DAT_0057b68c undefined4 *
// GLOBAL DAT_0057b690 undefined4
// GLOBAL DAT_0057b694 uint *
// GLOBAL DAT_0057b698 undefined4 *
// GLOBAL DAT_0057b69c undefined4

undefined4 func_0057B610(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0057b688 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b688), iVar1 != 0)) {
    *DAT_0057b68c = DAT_0057b690;
  }
  if (DAT_0057b68c != param_2) {
    if (((*DAT_0057b694 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b694), iVar1 != 0)) {
      *DAT_0057b698 = DAT_0057b69c;
    }
    if (DAT_0057b698 != param_2) {
      uVar2 = func_0012CCE0(param_2);
      return uVar2;
    }
  }
  return 1;
}

