#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052556c;
extern undefined4 *DAT_00525570;
extern undefined4 DAT_00525574;
extern uint *DAT_00525578;
extern undefined4 *DAT_0052557c;
extern undefined4 DAT_00525580;
extern uint *DAT_00525584;
extern undefined4 *DAT_00525588;
extern undefined4 DAT_0052558c;
extern uint *DAT_00525590;
extern undefined4 *DAT_00525594;
extern undefined4 DAT_00525598;
extern uint *DAT_0052559c;
extern undefined4 *DAT_005255a0;
extern undefined4 DAT_005255a4;
extern uint *DAT_005255a8;
extern undefined4 *DAT_005255ac;
extern undefined4 DAT_005255b0;
extern uint *DAT_005255b4;
extern undefined4 *DAT_005255b8;
extern undefined4 DAT_005255bc;

// USA 005253A4 <- EU 0052537C (Ghidra, non-matching)
// GLOBAL DAT_0052556c uint *
// GLOBAL DAT_00525570 undefined4 *
// GLOBAL DAT_00525574 undefined4
// GLOBAL DAT_00525578 uint *
// GLOBAL DAT_0052557c undefined4 *
// GLOBAL DAT_00525580 undefined4
// GLOBAL DAT_00525584 uint *
// GLOBAL DAT_00525588 undefined4 *
// GLOBAL DAT_0052558c undefined4
// GLOBAL DAT_00525590 uint *
// GLOBAL DAT_00525594 undefined4 *
// GLOBAL DAT_00525598 undefined4
// GLOBAL DAT_0052559c uint *
// GLOBAL DAT_005255a0 undefined4 *
// GLOBAL DAT_005255a4 undefined4
// GLOBAL DAT_005255a8 uint *
// GLOBAL DAT_005255ac undefined4 *
// GLOBAL DAT_005255b0 undefined4
// GLOBAL DAT_005255b4 uint *
// GLOBAL DAT_005255b8 undefined4 *
// GLOBAL DAT_005255bc undefined4

undefined4 func_005253A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052556c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052556c), iVar1 != 0)) {
    *DAT_00525570 = DAT_00525574;
  }
  if (DAT_00525570 != param_2) {
    if (((*DAT_00525578 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525578), iVar1 != 0)) {
      *DAT_0052557c = DAT_00525580;
    }
    if (DAT_0052557c != param_2) {
      if (((*DAT_00525584 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525584), iVar1 != 0)) {
        *DAT_00525588 = DAT_0052558c;
      }
      if (DAT_00525588 != param_2) {
        if (((*DAT_00525590 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525590), iVar1 != 0))
        {
          *DAT_00525594 = DAT_00525598;
        }
        if (DAT_00525594 != param_2) {
          if (((*DAT_0052559c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052559c), iVar1 != 0)
             ) {
            *DAT_005255a0 = DAT_005255a4;
          }
          if (DAT_005255a0 != param_2) {
            if (((*DAT_005255a8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005255a8), iVar1 != 0)) {
              *DAT_005255ac = DAT_005255b0;
            }
            if (DAT_005255ac != param_2) {
              if (((*DAT_005255b4 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_005255b4), iVar1 != 0)) {
                *DAT_005255b8 = DAT_005255bc;
              }
              if (DAT_005255b8 != param_2) {
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

