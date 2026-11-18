#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053cf9c;
extern undefined4 *DAT_0053cfa0;
extern undefined4 DAT_0053cfa4;
extern uint *DAT_0053cfa8;
extern undefined4 *DAT_0053cfac;
extern undefined4 DAT_0053cfb0;
extern uint *DAT_0053cfb4;
extern undefined4 *DAT_0053cfb8;
extern undefined4 DAT_0053cfbc;
extern uint *DAT_0053cfc0;
extern undefined4 *DAT_0053cfc4;
extern undefined4 DAT_0053cfc8;
extern uint *DAT_0053cfcc;
extern undefined4 *DAT_0053cfd0;
extern undefined4 DAT_0053cfd4;
extern uint *DAT_0053cfd8;
extern undefined4 *DAT_0053cfdc;
extern undefined4 DAT_0053cfe0;
extern uint *DAT_0053cfe4;
extern undefined4 *DAT_0053cfe8;
extern undefined4 DAT_0053cfec;

// USA 0053CDD4 <- EU 0053CDAC (Ghidra, non-matching)
// GLOBAL DAT_0053cf9c uint *
// GLOBAL DAT_0053cfa0 undefined4 *
// GLOBAL DAT_0053cfa4 undefined4
// GLOBAL DAT_0053cfa8 uint *
// GLOBAL DAT_0053cfac undefined4 *
// GLOBAL DAT_0053cfb0 undefined4
// GLOBAL DAT_0053cfb4 uint *
// GLOBAL DAT_0053cfb8 undefined4 *
// GLOBAL DAT_0053cfbc undefined4
// GLOBAL DAT_0053cfc0 uint *
// GLOBAL DAT_0053cfc4 undefined4 *
// GLOBAL DAT_0053cfc8 undefined4
// GLOBAL DAT_0053cfcc uint *
// GLOBAL DAT_0053cfd0 undefined4 *
// GLOBAL DAT_0053cfd4 undefined4
// GLOBAL DAT_0053cfd8 uint *
// GLOBAL DAT_0053cfdc undefined4 *
// GLOBAL DAT_0053cfe0 undefined4
// GLOBAL DAT_0053cfe4 uint *
// GLOBAL DAT_0053cfe8 undefined4 *
// GLOBAL DAT_0053cfec undefined4

undefined4 func_0053CDD4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053cf9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cf9c), iVar1 != 0)) {
    *DAT_0053cfa0 = DAT_0053cfa4;
  }
  if (DAT_0053cfa0 != param_2) {
    if (((*DAT_0053cfa8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cfa8), iVar1 != 0)) {
      *DAT_0053cfac = DAT_0053cfb0;
    }
    if (DAT_0053cfac != param_2) {
      if (((*DAT_0053cfb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cfb4), iVar1 != 0)) {
        *DAT_0053cfb8 = DAT_0053cfbc;
      }
      if (DAT_0053cfb8 != param_2) {
        if (((*DAT_0053cfc0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cfc0), iVar1 != 0))
        {
          *DAT_0053cfc4 = DAT_0053cfc8;
        }
        if (DAT_0053cfc4 != param_2) {
          if (((*DAT_0053cfcc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053cfcc), iVar1 != 0)
             ) {
            *DAT_0053cfd0 = DAT_0053cfd4;
          }
          if (DAT_0053cfd0 != param_2) {
            if (((*DAT_0053cfd8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0053cfd8), iVar1 != 0)) {
              *DAT_0053cfdc = DAT_0053cfe0;
            }
            if (DAT_0053cfdc != param_2) {
              if (((*DAT_0053cfe4 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0053cfe4), iVar1 != 0)) {
                *DAT_0053cfe8 = DAT_0053cfec;
              }
              if (DAT_0053cfe8 != param_2) {
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

