#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005362f4;
extern undefined4 *DAT_005362f8;
extern undefined4 DAT_005362fc;
extern uint *DAT_00536300;
extern undefined4 *DAT_00536304;
extern undefined4 DAT_00536308;
extern uint *DAT_0053630c;
extern undefined4 *DAT_00536310;
extern undefined4 DAT_00536314;
extern uint *DAT_00536318;
extern undefined4 *DAT_0053631c;
extern undefined4 DAT_00536320;
extern uint *DAT_00536324;
extern undefined4 *DAT_00536328;
extern undefined4 DAT_0053632c;
extern uint *DAT_00536330;
extern undefined4 *DAT_00536334;
extern undefined4 DAT_00536338;
extern uint *DAT_0053633c;
extern undefined4 *DAT_00536340;
extern undefined4 DAT_00536344;

// USA 0053612C <- EU 00536104 (Ghidra, non-matching)
// GLOBAL DAT_005362f4 uint *
// GLOBAL DAT_005362f8 undefined4 *
// GLOBAL DAT_005362fc undefined4
// GLOBAL DAT_00536300 uint *
// GLOBAL DAT_00536304 undefined4 *
// GLOBAL DAT_00536308 undefined4
// GLOBAL DAT_0053630c uint *
// GLOBAL DAT_00536310 undefined4 *
// GLOBAL DAT_00536314 undefined4
// GLOBAL DAT_00536318 uint *
// GLOBAL DAT_0053631c undefined4 *
// GLOBAL DAT_00536320 undefined4
// GLOBAL DAT_00536324 uint *
// GLOBAL DAT_00536328 undefined4 *
// GLOBAL DAT_0053632c undefined4
// GLOBAL DAT_00536330 uint *
// GLOBAL DAT_00536334 undefined4 *
// GLOBAL DAT_00536338 undefined4
// GLOBAL DAT_0053633c uint *
// GLOBAL DAT_00536340 undefined4 *
// GLOBAL DAT_00536344 undefined4

undefined4 func_0053612C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005362f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005362f4), iVar1 != 0)) {
    *DAT_005362f8 = DAT_005362fc;
  }
  if (DAT_005362f8 != param_2) {
    if (((*DAT_00536300 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536300), iVar1 != 0)) {
      *DAT_00536304 = DAT_00536308;
    }
    if (DAT_00536304 != param_2) {
      if (((*DAT_0053630c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053630c), iVar1 != 0)) {
        *DAT_00536310 = DAT_00536314;
      }
      if (DAT_00536310 != param_2) {
        if (((*DAT_00536318 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536318), iVar1 != 0))
        {
          *DAT_0053631c = DAT_00536320;
        }
        if (DAT_0053631c != param_2) {
          if (((*DAT_00536324 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536324), iVar1 != 0)
             ) {
            *DAT_00536328 = DAT_0053632c;
          }
          if (DAT_00536328 != param_2) {
            if (((*DAT_00536330 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00536330), iVar1 != 0)) {
              *DAT_00536334 = DAT_00536338;
            }
            if (DAT_00536334 != param_2) {
              if (((*DAT_0053633c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0053633c), iVar1 != 0)) {
                *DAT_00536340 = DAT_00536344;
              }
              if (DAT_00536340 != param_2) {
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

