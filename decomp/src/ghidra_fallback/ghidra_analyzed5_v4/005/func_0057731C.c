#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057745c;
extern undefined4 *DAT_00577460;
extern undefined4 DAT_00577464;
extern uint *DAT_00577468;
extern undefined4 *DAT_0057746c;
extern undefined4 DAT_00577470;
extern uint *DAT_00577474;
extern undefined4 *DAT_00577478;
extern undefined4 DAT_0057747c;
extern uint *DAT_00577480;
extern undefined4 *DAT_00577484;
extern undefined4 DAT_00577488;
extern uint *DAT_0057748c;
extern undefined4 *DAT_00577490;
extern undefined4 DAT_00577494;

// USA 0057731C <- EU 005772F4 (Ghidra, non-matching)
// GLOBAL DAT_0057745c uint *
// GLOBAL DAT_00577460 undefined4 *
// GLOBAL DAT_00577464 undefined4
// GLOBAL DAT_00577468 uint *
// GLOBAL DAT_0057746c undefined4 *
// GLOBAL DAT_00577470 undefined4
// GLOBAL DAT_00577474 uint *
// GLOBAL DAT_00577478 undefined4 *
// GLOBAL DAT_0057747c undefined4
// GLOBAL DAT_00577480 uint *
// GLOBAL DAT_00577484 undefined4 *
// GLOBAL DAT_00577488 undefined4
// GLOBAL DAT_0057748c uint *
// GLOBAL DAT_00577490 undefined4 *
// GLOBAL DAT_00577494 undefined4

undefined4 func_0057731C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057745c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057745c), iVar1 != 0)) {
    *DAT_00577460 = DAT_00577464;
  }
  if (DAT_00577460 != param_2) {
    if (((*DAT_00577468 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577468), iVar1 != 0)) {
      *DAT_0057746c = DAT_00577470;
    }
    if (DAT_0057746c != param_2) {
      if (((*DAT_00577474 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577474), iVar1 != 0)) {
        *DAT_00577478 = DAT_0057747c;
      }
      if (DAT_00577478 != param_2) {
        if (((*DAT_00577480 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577480), iVar1 != 0))
        {
          *DAT_00577484 = DAT_00577488;
        }
        if (DAT_00577484 != param_2) {
          if (((*DAT_0057748c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057748c), iVar1 != 0)
             ) {
            *DAT_00577490 = DAT_00577494;
          }
          if (DAT_00577490 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

