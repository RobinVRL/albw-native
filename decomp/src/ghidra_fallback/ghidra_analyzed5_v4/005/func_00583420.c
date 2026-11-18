#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058351c;
extern undefined4 *DAT_00583520;
extern undefined4 DAT_00583524;
extern uint *DAT_00583528;
extern undefined4 *DAT_0058352c;
extern undefined4 DAT_00583530;
extern uint *DAT_00583534;
extern undefined4 *DAT_00583538;
extern undefined4 DAT_0058353c;
extern uint *DAT_00583540;
extern undefined4 *DAT_00583544;
extern undefined4 DAT_00583548;

// USA 00583420 <- EU 005833F8 (Ghidra, non-matching)
// GLOBAL DAT_0058351c uint *
// GLOBAL DAT_00583520 undefined4 *
// GLOBAL DAT_00583524 undefined4
// GLOBAL DAT_00583528 uint *
// GLOBAL DAT_0058352c undefined4 *
// GLOBAL DAT_00583530 undefined4
// GLOBAL DAT_00583534 uint *
// GLOBAL DAT_00583538 undefined4 *
// GLOBAL DAT_0058353c undefined4
// GLOBAL DAT_00583540 uint *
// GLOBAL DAT_00583544 undefined4 *
// GLOBAL DAT_00583548 undefined4

undefined4 func_00583420(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058351c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058351c), iVar1 != 0)) {
    *DAT_00583520 = DAT_00583524;
  }
  if (DAT_00583520 != param_2) {
    if (((*DAT_00583528 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583528), iVar1 != 0)) {
      *DAT_0058352c = DAT_00583530;
    }
    if (DAT_0058352c != param_2) {
      if (((*DAT_00583534 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583534), iVar1 != 0)) {
        *DAT_00583538 = DAT_0058353c;
      }
      if (DAT_00583538 != param_2) {
        if (((*DAT_00583540 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583540), iVar1 != 0))
        {
          *DAT_00583544 = DAT_00583548;
        }
        if (DAT_00583544 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

