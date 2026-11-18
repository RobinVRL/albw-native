#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005398d8;
extern undefined4 *DAT_005398dc;
extern undefined4 DAT_005398e0;
extern uint *DAT_005398e4;
extern undefined4 *DAT_005398e8;
extern undefined4 DAT_005398ec;
extern uint *DAT_005398f0;
extern undefined4 *DAT_005398f4;
extern undefined4 DAT_005398f8;
extern uint *DAT_005398fc;
extern undefined4 *DAT_00539900;
extern undefined4 DAT_00539904;
extern uint *DAT_00539908;
extern undefined4 *DAT_0053990c;
extern undefined4 DAT_00539910;

// USA 00539798 <- EU 00539770 (Ghidra, non-matching)
// GLOBAL DAT_005398d8 uint *
// GLOBAL DAT_005398dc undefined4 *
// GLOBAL DAT_005398e0 undefined4
// GLOBAL DAT_005398e4 uint *
// GLOBAL DAT_005398e8 undefined4 *
// GLOBAL DAT_005398ec undefined4
// GLOBAL DAT_005398f0 uint *
// GLOBAL DAT_005398f4 undefined4 *
// GLOBAL DAT_005398f8 undefined4
// GLOBAL DAT_005398fc uint *
// GLOBAL DAT_00539900 undefined4 *
// GLOBAL DAT_00539904 undefined4
// GLOBAL DAT_00539908 uint *
// GLOBAL DAT_0053990c undefined4 *
// GLOBAL DAT_00539910 undefined4

undefined4 func_00539798(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005398d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005398d8), iVar1 != 0)) {
    *DAT_005398dc = DAT_005398e0;
  }
  if (DAT_005398dc != param_2) {
    if (((*DAT_005398e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005398e4), iVar1 != 0)) {
      *DAT_005398e8 = DAT_005398ec;
    }
    if (DAT_005398e8 != param_2) {
      if (((*DAT_005398f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005398f0), iVar1 != 0)) {
        *DAT_005398f4 = DAT_005398f8;
      }
      if (DAT_005398f4 != param_2) {
        if (((*DAT_005398fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005398fc), iVar1 != 0))
        {
          *DAT_00539900 = DAT_00539904;
        }
        if (DAT_00539900 != param_2) {
          if (((*DAT_00539908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539908), iVar1 != 0)
             ) {
            *DAT_0053990c = DAT_00539910;
          }
          if (DAT_0053990c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

