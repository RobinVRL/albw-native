#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00543058;
extern undefined4 *DAT_0054305c;
extern undefined4 DAT_00543060;
extern uint *DAT_00543064;
extern undefined4 *DAT_00543068;
extern undefined4 DAT_0054306c;
extern uint *DAT_00543070;
extern undefined4 *DAT_00543074;
extern undefined4 DAT_00543078;
extern uint *DAT_0054307c;
extern undefined4 *DAT_00543080;
extern undefined4 DAT_00543084;

// USA 00542F5C <- EU 00542F34 (Ghidra, non-matching)
// GLOBAL DAT_00543058 uint *
// GLOBAL DAT_0054305c undefined4 *
// GLOBAL DAT_00543060 undefined4
// GLOBAL DAT_00543064 uint *
// GLOBAL DAT_00543068 undefined4 *
// GLOBAL DAT_0054306c undefined4
// GLOBAL DAT_00543070 uint *
// GLOBAL DAT_00543074 undefined4 *
// GLOBAL DAT_00543078 undefined4
// GLOBAL DAT_0054307c uint *
// GLOBAL DAT_00543080 undefined4 *
// GLOBAL DAT_00543084 undefined4

undefined4 func_00542F5C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00543058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543058), iVar1 != 0)) {
    *DAT_0054305c = DAT_00543060;
  }
  if (DAT_0054305c != param_2) {
    if (((*DAT_00543064 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543064), iVar1 != 0)) {
      *DAT_00543068 = DAT_0054306c;
    }
    if (DAT_00543068 != param_2) {
      if (((*DAT_00543070 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00543070), iVar1 != 0)) {
        *DAT_00543074 = DAT_00543078;
      }
      if (DAT_00543074 != param_2) {
        if (((*DAT_0054307c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054307c), iVar1 != 0))
        {
          *DAT_00543080 = DAT_00543084;
        }
        if (DAT_00543080 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

