#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00531fec;
extern undefined4 *DAT_00531ff0;
extern undefined4 DAT_00531ff4;
extern uint *DAT_00531ff8;
extern undefined4 *DAT_00531ffc;
extern undefined4 DAT_00532000;
extern uint *DAT_00532004;
extern undefined4 *DAT_00532008;
extern undefined4 DAT_0053200c;
extern uint *DAT_00532010;
extern undefined4 *DAT_00532014;
extern undefined4 DAT_00532018;

// USA 00531EF0 <- EU 00531EC8 (Ghidra, non-matching)
// GLOBAL DAT_00531fec uint *
// GLOBAL DAT_00531ff0 undefined4 *
// GLOBAL DAT_00531ff4 undefined4
// GLOBAL DAT_00531ff8 uint *
// GLOBAL DAT_00531ffc undefined4 *
// GLOBAL DAT_00532000 undefined4
// GLOBAL DAT_00532004 uint *
// GLOBAL DAT_00532008 undefined4 *
// GLOBAL DAT_0053200c undefined4
// GLOBAL DAT_00532010 uint *
// GLOBAL DAT_00532014 undefined4 *
// GLOBAL DAT_00532018 undefined4

undefined4 func_00531EF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531fec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531fec), iVar1 != 0)) {
    *DAT_00531ff0 = DAT_00531ff4;
  }
  if (DAT_00531ff0 != param_2) {
    if (((*DAT_00531ff8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531ff8), iVar1 != 0)) {
      *DAT_00531ffc = DAT_00532000;
    }
    if (DAT_00531ffc != param_2) {
      if (((*DAT_00532004 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532004), iVar1 != 0)) {
        *DAT_00532008 = DAT_0053200c;
      }
      if (DAT_00532008 != param_2) {
        if (((*DAT_00532010 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00532010), iVar1 != 0))
        {
          *DAT_00532014 = DAT_00532018;
        }
        if (DAT_00532014 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

