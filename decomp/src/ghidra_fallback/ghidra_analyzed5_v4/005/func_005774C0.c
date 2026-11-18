#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005775bc;
extern undefined4 *DAT_005775c0;
extern undefined4 DAT_005775c4;
extern uint *DAT_005775c8;
extern undefined4 *DAT_005775cc;
extern undefined4 DAT_005775d0;
extern uint *DAT_005775d4;
extern undefined4 *DAT_005775d8;
extern undefined4 DAT_005775dc;
extern uint *DAT_005775e0;
extern undefined4 *DAT_005775e4;
extern undefined4 DAT_005775e8;

// USA 005774C0 <- EU 00577498 (Ghidra, non-matching)
// GLOBAL DAT_005775bc uint *
// GLOBAL DAT_005775c0 undefined4 *
// GLOBAL DAT_005775c4 undefined4
// GLOBAL DAT_005775c8 uint *
// GLOBAL DAT_005775cc undefined4 *
// GLOBAL DAT_005775d0 undefined4
// GLOBAL DAT_005775d4 uint *
// GLOBAL DAT_005775d8 undefined4 *
// GLOBAL DAT_005775dc undefined4
// GLOBAL DAT_005775e0 uint *
// GLOBAL DAT_005775e4 undefined4 *
// GLOBAL DAT_005775e8 undefined4

undefined4 func_005774C0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005775bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005775bc), iVar1 != 0)) {
    *DAT_005775c0 = DAT_005775c4;
  }
  if (DAT_005775c0 != param_2) {
    if (((*DAT_005775c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005775c8), iVar1 != 0)) {
      *DAT_005775cc = DAT_005775d0;
    }
    if (DAT_005775cc != param_2) {
      if (((*DAT_005775d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005775d4), iVar1 != 0)) {
        *DAT_005775d8 = DAT_005775dc;
      }
      if (DAT_005775d8 != param_2) {
        if (((*DAT_005775e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005775e0), iVar1 != 0))
        {
          *DAT_005775e4 = DAT_005775e8;
        }
        if (DAT_005775e4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

