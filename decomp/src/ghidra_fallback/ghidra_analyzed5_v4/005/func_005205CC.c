#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052070c;
extern undefined4 *DAT_00520710;
extern undefined4 DAT_00520714;
extern uint *DAT_00520718;
extern undefined4 *DAT_0052071c;
extern undefined4 DAT_00520720;
extern uint *DAT_00520724;
extern undefined4 *DAT_00520728;
extern undefined4 DAT_0052072c;
extern uint *DAT_00520730;
extern undefined4 *DAT_00520734;
extern undefined4 DAT_00520738;
extern uint *DAT_0052073c;
extern undefined4 *DAT_00520740;
extern undefined4 DAT_00520744;

// USA 005205CC <- EU 005205A4 (Ghidra, non-matching)
// GLOBAL DAT_0052070c uint *
// GLOBAL DAT_00520710 undefined4 *
// GLOBAL DAT_00520714 undefined4
// GLOBAL DAT_00520718 uint *
// GLOBAL DAT_0052071c undefined4 *
// GLOBAL DAT_00520720 undefined4
// GLOBAL DAT_00520724 uint *
// GLOBAL DAT_00520728 undefined4 *
// GLOBAL DAT_0052072c undefined4
// GLOBAL DAT_00520730 uint *
// GLOBAL DAT_00520734 undefined4 *
// GLOBAL DAT_00520738 undefined4
// GLOBAL DAT_0052073c uint *
// GLOBAL DAT_00520740 undefined4 *
// GLOBAL DAT_00520744 undefined4

undefined4 func_005205CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052070c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052070c), iVar1 != 0)) {
    *DAT_00520710 = DAT_00520714;
  }
  if (DAT_00520710 != param_2) {
    if (((*DAT_00520718 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520718), iVar1 != 0)) {
      *DAT_0052071c = DAT_00520720;
    }
    if (DAT_0052071c != param_2) {
      if (((*DAT_00520724 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520724), iVar1 != 0)) {
        *DAT_00520728 = DAT_0052072c;
      }
      if (DAT_00520728 != param_2) {
        if (((*DAT_00520730 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00520730), iVar1 != 0))
        {
          *DAT_00520734 = DAT_00520738;
        }
        if (DAT_00520734 != param_2) {
          if (((*DAT_0052073c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052073c), iVar1 != 0)
             ) {
            *DAT_00520740 = DAT_00520744;
          }
          if (DAT_00520740 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

