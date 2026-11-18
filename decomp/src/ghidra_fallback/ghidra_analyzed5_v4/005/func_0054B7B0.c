#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00610AB4(undefined4 *param_1);
extern uint *DAT_0054b828;
extern undefined4 *DAT_0054b82c;
extern undefined4 DAT_0054b830;
extern uint *DAT_0054b834;
extern undefined4 *DAT_0054b838;
extern undefined4 DAT_0054b83c;

// USA 0054B7B0 <- EU 0054B788 (Ghidra, non-matching)
// GLOBAL DAT_0054b828 uint *
// GLOBAL DAT_0054b82c undefined4 *
// GLOBAL DAT_0054b830 undefined4
// GLOBAL DAT_0054b834 uint *
// GLOBAL DAT_0054b838 undefined4 *
// GLOBAL DAT_0054b83c undefined4

undefined4 func_0054B7B0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0054b828 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b828), iVar1 != 0)) {
    *DAT_0054b82c = DAT_0054b830;
  }
  if (DAT_0054b82c != param_2) {
    if (((*DAT_0054b834 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054b834), iVar1 != 0)) {
      *DAT_0054b838 = DAT_0054b83c;
    }
    if (DAT_0054b838 != param_2) {
      uVar2 = func_00610AB4(param_2);
      return uVar2;
    }
  }
  return 1;
}

