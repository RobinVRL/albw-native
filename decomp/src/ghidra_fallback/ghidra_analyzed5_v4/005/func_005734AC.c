#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005735ec;
extern undefined4 *DAT_005735f0;
extern undefined4 DAT_005735f4;
extern uint *DAT_005735f8;
extern undefined4 *DAT_005735fc;
extern undefined4 DAT_00573600;
extern uint *DAT_00573604;
extern undefined4 *DAT_00573608;
extern undefined4 DAT_0057360c;
extern uint *DAT_00573610;
extern undefined4 *DAT_00573614;
extern undefined4 DAT_00573618;
extern uint *DAT_0057361c;
extern undefined4 *DAT_00573620;
extern undefined4 DAT_00573624;

// USA 005734AC <- EU 00573484 (Ghidra, non-matching)
// GLOBAL DAT_005735ec uint *
// GLOBAL DAT_005735f0 undefined4 *
// GLOBAL DAT_005735f4 undefined4
// GLOBAL DAT_005735f8 uint *
// GLOBAL DAT_005735fc undefined4 *
// GLOBAL DAT_00573600 undefined4
// GLOBAL DAT_00573604 uint *
// GLOBAL DAT_00573608 undefined4 *
// GLOBAL DAT_0057360c undefined4
// GLOBAL DAT_00573610 uint *
// GLOBAL DAT_00573614 undefined4 *
// GLOBAL DAT_00573618 undefined4
// GLOBAL DAT_0057361c uint *
// GLOBAL DAT_00573620 undefined4 *
// GLOBAL DAT_00573624 undefined4

undefined4 func_005734AC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005735ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005735ec), iVar1 != 0)) {
    *DAT_005735f0 = DAT_005735f4;
  }
  if (DAT_005735f0 != param_2) {
    if (((*DAT_005735f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005735f8), iVar1 != 0)) {
      *DAT_005735fc = DAT_00573600;
    }
    if (DAT_005735fc != param_2) {
      if (((*DAT_00573604 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573604), iVar1 != 0)) {
        *DAT_00573608 = DAT_0057360c;
      }
      if (DAT_00573608 != param_2) {
        if (((*DAT_00573610 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00573610), iVar1 != 0))
        {
          *DAT_00573614 = DAT_00573618;
        }
        if (DAT_00573614 != param_2) {
          if (((*DAT_0057361c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057361c), iVar1 != 0)
             ) {
            *DAT_00573620 = DAT_00573624;
          }
          if (DAT_00573620 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

