#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00542618;
extern undefined4 *DAT_0054261c;
extern undefined4 DAT_00542620;
extern uint *DAT_00542624;
extern undefined4 *DAT_00542628;
extern undefined4 DAT_0054262c;
extern uint *DAT_00542630;
extern undefined4 *DAT_00542634;
extern undefined4 DAT_00542638;
extern uint *DAT_0054263c;
extern undefined4 *DAT_00542640;
extern undefined4 DAT_00542644;

// USA 0054251C <- EU 005424F4 (Ghidra, non-matching)
// GLOBAL DAT_00542618 uint *
// GLOBAL DAT_0054261c undefined4 *
// GLOBAL DAT_00542620 undefined4
// GLOBAL DAT_00542624 uint *
// GLOBAL DAT_00542628 undefined4 *
// GLOBAL DAT_0054262c undefined4
// GLOBAL DAT_00542630 uint *
// GLOBAL DAT_00542634 undefined4 *
// GLOBAL DAT_00542638 undefined4
// GLOBAL DAT_0054263c uint *
// GLOBAL DAT_00542640 undefined4 *
// GLOBAL DAT_00542644 undefined4

undefined4 func_0054251C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00542618 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542618), iVar1 != 0)) {
    *DAT_0054261c = DAT_00542620;
  }
  if (DAT_0054261c != param_2) {
    if (((*DAT_00542624 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542624), iVar1 != 0)) {
      *DAT_00542628 = DAT_0054262c;
    }
    if (DAT_00542628 != param_2) {
      if (((*DAT_00542630 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00542630), iVar1 != 0)) {
        *DAT_00542634 = DAT_00542638;
      }
      if (DAT_00542634 != param_2) {
        if (((*DAT_0054263c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054263c), iVar1 != 0))
        {
          *DAT_00542640 = DAT_00542644;
        }
        if (DAT_00542640 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

