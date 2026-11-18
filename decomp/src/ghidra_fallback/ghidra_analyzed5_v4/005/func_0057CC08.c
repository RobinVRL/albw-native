#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_0057cc80;
extern undefined4 *DAT_0057cc84;
extern undefined4 DAT_0057cc88;
extern uint *DAT_0057cc8c;
extern undefined4 *DAT_0057cc90;
extern undefined4 DAT_0057cc94;

// USA 0057CC08 <- EU 0057CBE0 (Ghidra, non-matching)
// GLOBAL DAT_0057cc80 uint *
// GLOBAL DAT_0057cc84 undefined4 *
// GLOBAL DAT_0057cc88 undefined4
// GLOBAL DAT_0057cc8c uint *
// GLOBAL DAT_0057cc90 undefined4 *
// GLOBAL DAT_0057cc94 undefined4

undefined4 func_0057CC08(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0057cc80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cc80), iVar1 != 0)) {
    *DAT_0057cc84 = DAT_0057cc88;
  }
  if (DAT_0057cc84 != param_2) {
    if (((*DAT_0057cc8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cc8c), iVar1 != 0)) {
      *DAT_0057cc90 = DAT_0057cc94;
    }
    if (DAT_0057cc90 != param_2) {
      uVar2 = func_004B9748(param_2);
      return uVar2;
    }
  }
  return 1;
}

