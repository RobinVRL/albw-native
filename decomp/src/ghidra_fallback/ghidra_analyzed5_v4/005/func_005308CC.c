#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005309c8;
extern undefined4 *DAT_005309cc;
extern undefined4 DAT_005309d0;
extern uint *DAT_005309d4;
extern undefined4 *DAT_005309d8;
extern undefined4 DAT_005309dc;
extern uint *DAT_005309e0;
extern undefined4 *DAT_005309e4;
extern undefined4 DAT_005309e8;
extern uint *DAT_005309ec;
extern undefined4 *DAT_005309f0;
extern undefined4 DAT_005309f4;

// USA 005308CC <- EU 005308A4 (Ghidra, non-matching)
// GLOBAL DAT_005309c8 uint *
// GLOBAL DAT_005309cc undefined4 *
// GLOBAL DAT_005309d0 undefined4
// GLOBAL DAT_005309d4 uint *
// GLOBAL DAT_005309d8 undefined4 *
// GLOBAL DAT_005309dc undefined4
// GLOBAL DAT_005309e0 uint *
// GLOBAL DAT_005309e4 undefined4 *
// GLOBAL DAT_005309e8 undefined4
// GLOBAL DAT_005309ec uint *
// GLOBAL DAT_005309f0 undefined4 *
// GLOBAL DAT_005309f4 undefined4

undefined4 func_005308CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005309c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005309c8), iVar1 != 0)) {
    *DAT_005309cc = DAT_005309d0;
  }
  if (DAT_005309cc != param_2) {
    if (((*DAT_005309d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005309d4), iVar1 != 0)) {
      *DAT_005309d8 = DAT_005309dc;
    }
    if (DAT_005309d8 != param_2) {
      if (((*DAT_005309e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005309e0), iVar1 != 0)) {
        *DAT_005309e4 = DAT_005309e8;
      }
      if (DAT_005309e4 != param_2) {
        if (((*DAT_005309ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005309ec), iVar1 != 0))
        {
          *DAT_005309f0 = DAT_005309f4;
        }
        if (DAT_005309f0 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

