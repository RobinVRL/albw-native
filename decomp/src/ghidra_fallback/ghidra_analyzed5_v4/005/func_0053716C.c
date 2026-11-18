#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00537224;
extern undefined4 *DAT_00537228;
extern undefined4 DAT_0053722c;
extern uint *DAT_00537230;
extern undefined4 *DAT_00537234;
extern undefined4 DAT_00537238;
extern uint *DAT_0053723c;
extern undefined4 *DAT_00537240;
extern undefined4 DAT_00537244;

// USA 0053716C <- EU 00537144 (Ghidra, non-matching)
// GLOBAL DAT_00537224 uint *
// GLOBAL DAT_00537228 undefined4 *
// GLOBAL DAT_0053722c undefined4
// GLOBAL DAT_00537230 uint *
// GLOBAL DAT_00537234 undefined4 *
// GLOBAL DAT_00537238 undefined4
// GLOBAL DAT_0053723c uint *
// GLOBAL DAT_00537240 undefined4 *
// GLOBAL DAT_00537244 undefined4

undefined4 func_0053716C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00537224 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537224), iVar1 != 0)) {
    *DAT_00537228 = DAT_0053722c;
  }
  if (DAT_00537228 != param_2) {
    if (((*DAT_00537230 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00537230), iVar1 != 0)) {
      *DAT_00537234 = DAT_00537238;
    }
    if (DAT_00537234 != param_2) {
      if (((*DAT_0053723c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053723c), iVar1 != 0)) {
        *DAT_00537240 = DAT_00537244;
      }
      if (DAT_00537240 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

