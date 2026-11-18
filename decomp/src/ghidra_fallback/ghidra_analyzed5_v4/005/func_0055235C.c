#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00552524;
extern undefined4 *DAT_00552528;
extern undefined4 DAT_0055252c;
extern uint *DAT_00552530;
extern undefined4 *DAT_00552534;
extern undefined4 DAT_00552538;
extern uint *DAT_0055253c;
extern undefined4 *DAT_00552540;
extern undefined4 DAT_00552544;
extern uint *DAT_00552548;
extern undefined4 *DAT_0055254c;
extern undefined4 DAT_00552550;
extern uint *DAT_00552554;
extern undefined4 *DAT_00552558;
extern undefined4 DAT_0055255c;
extern uint *DAT_00552560;
extern undefined4 *DAT_00552564;
extern undefined4 DAT_00552568;
extern uint *DAT_0055256c;
extern undefined4 *DAT_00552570;
extern undefined4 DAT_00552574;

// USA 0055235C <- EU 00552334 (Ghidra, non-matching)
// GLOBAL DAT_00552524 uint *
// GLOBAL DAT_00552528 undefined4 *
// GLOBAL DAT_0055252c undefined4
// GLOBAL DAT_00552530 uint *
// GLOBAL DAT_00552534 undefined4 *
// GLOBAL DAT_00552538 undefined4
// GLOBAL DAT_0055253c uint *
// GLOBAL DAT_00552540 undefined4 *
// GLOBAL DAT_00552544 undefined4
// GLOBAL DAT_00552548 uint *
// GLOBAL DAT_0055254c undefined4 *
// GLOBAL DAT_00552550 undefined4
// GLOBAL DAT_00552554 uint *
// GLOBAL DAT_00552558 undefined4 *
// GLOBAL DAT_0055255c undefined4
// GLOBAL DAT_00552560 uint *
// GLOBAL DAT_00552564 undefined4 *
// GLOBAL DAT_00552568 undefined4
// GLOBAL DAT_0055256c uint *
// GLOBAL DAT_00552570 undefined4 *
// GLOBAL DAT_00552574 undefined4

undefined4 func_0055235C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00552524 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552524), iVar1 != 0)) {
    *DAT_00552528 = DAT_0055252c;
  }
  if (DAT_00552528 != param_2) {
    if (((*DAT_00552530 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552530), iVar1 != 0)) {
      *DAT_00552534 = DAT_00552538;
    }
    if (DAT_00552534 != param_2) {
      if (((*DAT_0055253c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055253c), iVar1 != 0)) {
        *DAT_00552540 = DAT_00552544;
      }
      if (DAT_00552540 != param_2) {
        if (((*DAT_00552548 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552548), iVar1 != 0))
        {
          *DAT_0055254c = DAT_00552550;
        }
        if (DAT_0055254c != param_2) {
          if (((*DAT_00552554 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00552554), iVar1 != 0)
             ) {
            *DAT_00552558 = DAT_0055255c;
          }
          if (DAT_00552558 != param_2) {
            if (((*DAT_00552560 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00552560), iVar1 != 0)) {
              *DAT_00552564 = DAT_00552568;
            }
            if (DAT_00552564 != param_2) {
              if (((*DAT_0055256c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0055256c), iVar1 != 0)) {
                *DAT_00552570 = DAT_00552574;
              }
              if (DAT_00552570 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

