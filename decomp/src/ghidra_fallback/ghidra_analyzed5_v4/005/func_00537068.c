#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537120;
extern undefined4 *DAT_00537124;
extern undefined4 DAT_00537128;
extern uint *DAT_0053712c;
extern undefined4 *DAT_00537130;
extern undefined4 DAT_00537134;
extern uint *DAT_00537138;
extern undefined4 *DAT_0053713c;
extern undefined4 DAT_00537140;

// USA 00537068 <- EU 00537040 (Ghidra, non-matching)
// GLOBAL DAT_00537120 uint *
// GLOBAL DAT_00537124 undefined4 *
// GLOBAL DAT_00537128 undefined4
// GLOBAL DAT_0053712c uint *
// GLOBAL DAT_00537130 undefined4 *
// GLOBAL DAT_00537134 undefined4
// GLOBAL DAT_00537138 uint *
// GLOBAL DAT_0053713c undefined4 *
// GLOBAL DAT_00537140 undefined4

undefined4 func_00537068(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537120 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537120), iVar1 != 0)) {
    *DAT_00537124 = DAT_00537128;
  }
  if (DAT_00537124 != param_2) {
    if (((*DAT_0053712c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053712c), iVar1 != 0)) {
      *DAT_00537130 = DAT_00537134;
    }
    if (DAT_00537130 != param_2) {
      if (((*DAT_00537138 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537138), iVar1 != 0)) {
        *DAT_0053713c = DAT_00537140;
      }
      if (DAT_0053713c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

