#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058b2ec;
extern undefined4 *DAT_0058b2f0;
extern undefined4 DAT_0058b2f4;
extern uint *DAT_0058b2f8;
extern undefined4 *DAT_0058b2fc;
extern undefined4 DAT_0058b300;
extern uint *DAT_0058b304;
extern undefined4 *DAT_0058b308;
extern undefined4 DAT_0058b30c;
extern uint *DAT_0058b310;
extern undefined4 *DAT_0058b314;
extern undefined4 DAT_0058b318;

// USA 0058B1F0 <- EU 0058B1C8 (Ghidra, non-matching)
// GLOBAL DAT_0058b2ec uint *
// GLOBAL DAT_0058b2f0 undefined4 *
// GLOBAL DAT_0058b2f4 undefined4
// GLOBAL DAT_0058b2f8 uint *
// GLOBAL DAT_0058b2fc undefined4 *
// GLOBAL DAT_0058b300 undefined4
// GLOBAL DAT_0058b304 uint *
// GLOBAL DAT_0058b308 undefined4 *
// GLOBAL DAT_0058b30c undefined4
// GLOBAL DAT_0058b310 uint *
// GLOBAL DAT_0058b314 undefined4 *
// GLOBAL DAT_0058b318 undefined4

undefined4 func_0058B1F0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058b2ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b2ec), iVar1 != 0)) {
    *DAT_0058b2f0 = DAT_0058b2f4;
  }
  if (DAT_0058b2f0 != param_2) {
    if (((*DAT_0058b2f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b2f8), iVar1 != 0)) {
      *DAT_0058b2fc = DAT_0058b300;
    }
    if (DAT_0058b2fc != param_2) {
      if (((*DAT_0058b304 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b304), iVar1 != 0)) {
        *DAT_0058b308 = DAT_0058b30c;
      }
      if (DAT_0058b308 != param_2) {
        if (((*DAT_0058b310 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058b310), iVar1 != 0))
        {
          *DAT_0058b314 = DAT_0058b318;
        }
        if (DAT_0058b314 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

