#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00577cf4;
extern undefined4 *DAT_00577cf8;
extern undefined4 DAT_00577cfc;
extern uint *DAT_00577d00;
extern undefined4 *DAT_00577d04;
extern undefined4 DAT_00577d08;
extern uint *DAT_00577d0c;
extern undefined4 *DAT_00577d10;
extern undefined4 DAT_00577d14;
extern uint *DAT_00577d18;
extern undefined4 *DAT_00577d1c;
extern undefined4 DAT_00577d20;
extern uint *DAT_00577d24;
extern undefined4 *DAT_00577d28;
extern undefined4 DAT_00577d2c;

// USA 00577BB4 <- EU 00577B8C (Ghidra, non-matching)
// GLOBAL DAT_00577cf4 uint *
// GLOBAL DAT_00577cf8 undefined4 *
// GLOBAL DAT_00577cfc undefined4
// GLOBAL DAT_00577d00 uint *
// GLOBAL DAT_00577d04 undefined4 *
// GLOBAL DAT_00577d08 undefined4
// GLOBAL DAT_00577d0c uint *
// GLOBAL DAT_00577d10 undefined4 *
// GLOBAL DAT_00577d14 undefined4
// GLOBAL DAT_00577d18 uint *
// GLOBAL DAT_00577d1c undefined4 *
// GLOBAL DAT_00577d20 undefined4
// GLOBAL DAT_00577d24 uint *
// GLOBAL DAT_00577d28 undefined4 *
// GLOBAL DAT_00577d2c undefined4

undefined4 func_00577BB4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00577cf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577cf4), iVar1 != 0)) {
    *DAT_00577cf8 = DAT_00577cfc;
  }
  if (DAT_00577cf8 != param_2) {
    if (((*DAT_00577d00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577d00), iVar1 != 0)) {
      *DAT_00577d04 = DAT_00577d08;
    }
    if (DAT_00577d04 != param_2) {
      if (((*DAT_00577d0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577d0c), iVar1 != 0)) {
        *DAT_00577d10 = DAT_00577d14;
      }
      if (DAT_00577d10 != param_2) {
        if (((*DAT_00577d18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577d18), iVar1 != 0))
        {
          *DAT_00577d1c = DAT_00577d20;
        }
        if (DAT_00577d1c != param_2) {
          if (((*DAT_00577d24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577d24), iVar1 != 0)
             ) {
            *DAT_00577d28 = DAT_00577d2c;
          }
          if (DAT_00577d28 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

