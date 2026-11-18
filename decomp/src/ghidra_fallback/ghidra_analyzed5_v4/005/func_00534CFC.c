#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534df8;
extern undefined4 *DAT_00534dfc;
extern undefined4 DAT_00534e00;
extern uint *DAT_00534e04;
extern undefined4 *DAT_00534e08;
extern undefined4 DAT_00534e0c;
extern uint *DAT_00534e10;
extern undefined4 *DAT_00534e14;
extern undefined4 DAT_00534e18;
extern uint *DAT_00534e1c;
extern undefined4 *DAT_00534e20;
extern undefined4 DAT_00534e24;

// USA 00534CFC <- EU 00534CD4 (Ghidra, non-matching)
// GLOBAL DAT_00534df8 uint *
// GLOBAL DAT_00534dfc undefined4 *
// GLOBAL DAT_00534e00 undefined4
// GLOBAL DAT_00534e04 uint *
// GLOBAL DAT_00534e08 undefined4 *
// GLOBAL DAT_00534e0c undefined4
// GLOBAL DAT_00534e10 uint *
// GLOBAL DAT_00534e14 undefined4 *
// GLOBAL DAT_00534e18 undefined4
// GLOBAL DAT_00534e1c uint *
// GLOBAL DAT_00534e20 undefined4 *
// GLOBAL DAT_00534e24 undefined4

undefined4 func_00534CFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534df8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534df8), iVar1 != 0)) {
    *DAT_00534dfc = DAT_00534e00;
  }
  if (DAT_00534dfc != param_2) {
    if (((*DAT_00534e04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534e04), iVar1 != 0)) {
      *DAT_00534e08 = DAT_00534e0c;
    }
    if (DAT_00534e08 != param_2) {
      if (((*DAT_00534e10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534e10), iVar1 != 0)) {
        *DAT_00534e14 = DAT_00534e18;
      }
      if (DAT_00534e14 != param_2) {
        if (((*DAT_00534e1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534e1c), iVar1 != 0))
        {
          *DAT_00534e20 = DAT_00534e24;
        }
        if (DAT_00534e20 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

