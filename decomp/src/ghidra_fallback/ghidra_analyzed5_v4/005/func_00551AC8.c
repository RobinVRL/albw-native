#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00551c08;
extern undefined4 *DAT_00551c0c;
extern undefined4 DAT_00551c10;
extern uint *DAT_00551c14;
extern undefined4 *DAT_00551c18;
extern undefined4 DAT_00551c1c;
extern uint *DAT_00551c20;
extern undefined4 *DAT_00551c24;
extern undefined4 DAT_00551c28;
extern uint *DAT_00551c2c;
extern undefined4 *DAT_00551c30;
extern undefined4 DAT_00551c34;
extern uint *DAT_00551c38;
extern undefined4 *DAT_00551c3c;
extern undefined4 DAT_00551c40;

// USA 00551AC8 <- EU 00551AA0 (Ghidra, non-matching)
// GLOBAL DAT_00551c08 uint *
// GLOBAL DAT_00551c0c undefined4 *
// GLOBAL DAT_00551c10 undefined4
// GLOBAL DAT_00551c14 uint *
// GLOBAL DAT_00551c18 undefined4 *
// GLOBAL DAT_00551c1c undefined4
// GLOBAL DAT_00551c20 uint *
// GLOBAL DAT_00551c24 undefined4 *
// GLOBAL DAT_00551c28 undefined4
// GLOBAL DAT_00551c2c uint *
// GLOBAL DAT_00551c30 undefined4 *
// GLOBAL DAT_00551c34 undefined4
// GLOBAL DAT_00551c38 uint *
// GLOBAL DAT_00551c3c undefined4 *
// GLOBAL DAT_00551c40 undefined4

undefined4 func_00551AC8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00551c08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551c08), iVar1 != 0)) {
    *DAT_00551c0c = DAT_00551c10;
  }
  if (DAT_00551c0c != param_2) {
    if (((*DAT_00551c14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551c14), iVar1 != 0)) {
      *DAT_00551c18 = DAT_00551c1c;
    }
    if (DAT_00551c18 != param_2) {
      if (((*DAT_00551c20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551c20), iVar1 != 0)) {
        *DAT_00551c24 = DAT_00551c28;
      }
      if (DAT_00551c24 != param_2) {
        if (((*DAT_00551c2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551c2c), iVar1 != 0))
        {
          *DAT_00551c30 = DAT_00551c34;
        }
        if (DAT_00551c30 != param_2) {
          if (((*DAT_00551c38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551c38), iVar1 != 0)
             ) {
            *DAT_00551c3c = DAT_00551c40;
          }
          if (DAT_00551c3c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

