#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052cf24;
extern undefined4 *DAT_0052cf28;
extern undefined4 DAT_0052cf2c;
extern uint *DAT_0052cf30;
extern undefined4 *DAT_0052cf34;
extern undefined4 DAT_0052cf38;
extern uint *DAT_0052cf3c;
extern undefined4 *DAT_0052cf40;
extern undefined4 DAT_0052cf44;
extern uint *DAT_0052cf48;
extern undefined4 *DAT_0052cf4c;
extern undefined4 DAT_0052cf50;
extern uint *DAT_0052cf54;
extern undefined4 *DAT_0052cf58;
extern undefined4 DAT_0052cf5c;
extern uint *DAT_0052cf60;
extern undefined4 *DAT_0052cf64;
extern undefined4 DAT_0052cf68;
extern uint *DAT_0052cf6c;
extern undefined4 *DAT_0052cf70;
extern undefined4 DAT_0052cf74;

// USA 0052CD5C <- EU 0052CD34 (Ghidra, non-matching)
// GLOBAL DAT_0052cf24 uint *
// GLOBAL DAT_0052cf28 undefined4 *
// GLOBAL DAT_0052cf2c undefined4
// GLOBAL DAT_0052cf30 uint *
// GLOBAL DAT_0052cf34 undefined4 *
// GLOBAL DAT_0052cf38 undefined4
// GLOBAL DAT_0052cf3c uint *
// GLOBAL DAT_0052cf40 undefined4 *
// GLOBAL DAT_0052cf44 undefined4
// GLOBAL DAT_0052cf48 uint *
// GLOBAL DAT_0052cf4c undefined4 *
// GLOBAL DAT_0052cf50 undefined4
// GLOBAL DAT_0052cf54 uint *
// GLOBAL DAT_0052cf58 undefined4 *
// GLOBAL DAT_0052cf5c undefined4
// GLOBAL DAT_0052cf60 uint *
// GLOBAL DAT_0052cf64 undefined4 *
// GLOBAL DAT_0052cf68 undefined4
// GLOBAL DAT_0052cf6c uint *
// GLOBAL DAT_0052cf70 undefined4 *
// GLOBAL DAT_0052cf74 undefined4

undefined4 func_0052CD5C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052cf24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cf24), iVar1 != 0)) {
    *DAT_0052cf28 = DAT_0052cf2c;
  }
  if (DAT_0052cf28 != param_2) {
    if (((*DAT_0052cf30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cf30), iVar1 != 0)) {
      *DAT_0052cf34 = DAT_0052cf38;
    }
    if (DAT_0052cf34 != param_2) {
      if (((*DAT_0052cf3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cf3c), iVar1 != 0)) {
        *DAT_0052cf40 = DAT_0052cf44;
      }
      if (DAT_0052cf40 != param_2) {
        if (((*DAT_0052cf48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cf48), iVar1 != 0))
        {
          *DAT_0052cf4c = DAT_0052cf50;
        }
        if (DAT_0052cf4c != param_2) {
          if (((*DAT_0052cf54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052cf54), iVar1 != 0)
             ) {
            *DAT_0052cf58 = DAT_0052cf5c;
          }
          if (DAT_0052cf58 != param_2) {
            if (((*DAT_0052cf60 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0052cf60), iVar1 != 0)) {
              *DAT_0052cf64 = DAT_0052cf68;
            }
            if (DAT_0052cf64 != param_2) {
              if (((*DAT_0052cf6c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0052cf6c), iVar1 != 0)) {
                *DAT_0052cf70 = DAT_0052cf74;
              }
              if (DAT_0052cf70 != param_2) {
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

