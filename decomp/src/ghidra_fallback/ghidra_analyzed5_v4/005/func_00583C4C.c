#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00583e14;
extern undefined4 *DAT_00583e18;
extern undefined4 DAT_00583e1c;
extern uint *DAT_00583e20;
extern undefined4 *DAT_00583e24;
extern undefined4 DAT_00583e28;
extern uint *DAT_00583e2c;
extern undefined4 *DAT_00583e30;
extern undefined4 DAT_00583e34;
extern uint *DAT_00583e38;
extern undefined4 *DAT_00583e3c;
extern undefined4 DAT_00583e40;
extern uint *DAT_00583e44;
extern undefined4 *DAT_00583e48;
extern undefined4 DAT_00583e4c;
extern uint *DAT_00583e50;
extern undefined4 *DAT_00583e54;
extern undefined4 DAT_00583e58;
extern uint *DAT_00583e5c;
extern undefined4 *DAT_00583e60;
extern undefined4 DAT_00583e64;

// USA 00583C4C <- EU 00583C24 (Ghidra, non-matching)
// GLOBAL DAT_00583e14 uint *
// GLOBAL DAT_00583e18 undefined4 *
// GLOBAL DAT_00583e1c undefined4
// GLOBAL DAT_00583e20 uint *
// GLOBAL DAT_00583e24 undefined4 *
// GLOBAL DAT_00583e28 undefined4
// GLOBAL DAT_00583e2c uint *
// GLOBAL DAT_00583e30 undefined4 *
// GLOBAL DAT_00583e34 undefined4
// GLOBAL DAT_00583e38 uint *
// GLOBAL DAT_00583e3c undefined4 *
// GLOBAL DAT_00583e40 undefined4
// GLOBAL DAT_00583e44 uint *
// GLOBAL DAT_00583e48 undefined4 *
// GLOBAL DAT_00583e4c undefined4
// GLOBAL DAT_00583e50 uint *
// GLOBAL DAT_00583e54 undefined4 *
// GLOBAL DAT_00583e58 undefined4
// GLOBAL DAT_00583e5c uint *
// GLOBAL DAT_00583e60 undefined4 *
// GLOBAL DAT_00583e64 undefined4

undefined4 func_00583C4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00583e14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583e14), iVar1 != 0)) {
    *DAT_00583e18 = DAT_00583e1c;
  }
  if (DAT_00583e18 != param_2) {
    if (((*DAT_00583e20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583e20), iVar1 != 0)) {
      *DAT_00583e24 = DAT_00583e28;
    }
    if (DAT_00583e24 != param_2) {
      if (((*DAT_00583e2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583e2c), iVar1 != 0)) {
        *DAT_00583e30 = DAT_00583e34;
      }
      if (DAT_00583e30 != param_2) {
        if (((*DAT_00583e38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583e38), iVar1 != 0))
        {
          *DAT_00583e3c = DAT_00583e40;
        }
        if (DAT_00583e3c != param_2) {
          if (((*DAT_00583e44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00583e44), iVar1 != 0)
             ) {
            *DAT_00583e48 = DAT_00583e4c;
          }
          if (DAT_00583e48 != param_2) {
            if (((*DAT_00583e50 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00583e50), iVar1 != 0)) {
              *DAT_00583e54 = DAT_00583e58;
            }
            if (DAT_00583e54 != param_2) {
              if (((*DAT_00583e5c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00583e5c), iVar1 != 0)) {
                *DAT_00583e60 = DAT_00583e64;
              }
              if (DAT_00583e60 != param_2) {
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

