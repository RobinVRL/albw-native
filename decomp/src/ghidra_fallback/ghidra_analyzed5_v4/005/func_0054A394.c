#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054a518;
extern undefined4 *DAT_0054a51c;
extern undefined4 DAT_0054a520;
extern uint *DAT_0054a524;
extern undefined4 *DAT_0054a528;
extern undefined4 DAT_0054a52c;
extern uint *DAT_0054a530;
extern undefined4 *DAT_0054a534;
extern undefined4 DAT_0054a538;
extern uint *DAT_0054a53c;
extern undefined4 *DAT_0054a540;
extern undefined4 DAT_0054a544;
extern uint *DAT_0054a548;
extern undefined4 *DAT_0054a54c;
extern undefined4 DAT_0054a550;
extern uint *DAT_0054a554;
extern undefined4 *DAT_0054a558;
extern undefined4 DAT_0054a55c;

// USA 0054A394 <- EU 0054A36C (Ghidra, non-matching)
// GLOBAL DAT_0054a518 uint *
// GLOBAL DAT_0054a51c undefined4 *
// GLOBAL DAT_0054a520 undefined4
// GLOBAL DAT_0054a524 uint *
// GLOBAL DAT_0054a528 undefined4 *
// GLOBAL DAT_0054a52c undefined4
// GLOBAL DAT_0054a530 uint *
// GLOBAL DAT_0054a534 undefined4 *
// GLOBAL DAT_0054a538 undefined4
// GLOBAL DAT_0054a53c uint *
// GLOBAL DAT_0054a540 undefined4 *
// GLOBAL DAT_0054a544 undefined4
// GLOBAL DAT_0054a548 uint *
// GLOBAL DAT_0054a54c undefined4 *
// GLOBAL DAT_0054a550 undefined4
// GLOBAL DAT_0054a554 uint *
// GLOBAL DAT_0054a558 undefined4 *
// GLOBAL DAT_0054a55c undefined4

undefined4 func_0054A394(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a518 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a518), iVar1 != 0)) {
    *DAT_0054a51c = DAT_0054a520;
  }
  if (DAT_0054a51c != param_2) {
    if (((*DAT_0054a524 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a524), iVar1 != 0)) {
      *DAT_0054a528 = DAT_0054a52c;
    }
    if (DAT_0054a528 != param_2) {
      if (((*DAT_0054a530 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a530), iVar1 != 0)) {
        *DAT_0054a534 = DAT_0054a538;
      }
      if (DAT_0054a534 != param_2) {
        if (((*DAT_0054a53c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a53c), iVar1 != 0))
        {
          *DAT_0054a540 = DAT_0054a544;
        }
        if (DAT_0054a540 != param_2) {
          if (((*DAT_0054a548 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a548), iVar1 != 0)
             ) {
            *DAT_0054a54c = DAT_0054a550;
          }
          if (DAT_0054a54c != param_2) {
            if (((*DAT_0054a554 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0054a554), iVar1 != 0)) {
              *DAT_0054a558 = DAT_0054a55c;
            }
            if (DAT_0054a558 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

