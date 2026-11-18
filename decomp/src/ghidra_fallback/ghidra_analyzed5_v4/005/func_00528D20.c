#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00528e60;
extern undefined4 *DAT_00528e64;
extern undefined4 DAT_00528e68;
extern uint *DAT_00528e6c;
extern undefined4 *DAT_00528e70;
extern undefined4 DAT_00528e74;
extern uint *DAT_00528e78;
extern undefined4 *DAT_00528e7c;
extern undefined4 DAT_00528e80;
extern uint *DAT_00528e84;
extern undefined4 *DAT_00528e88;
extern undefined4 DAT_00528e8c;
extern uint *DAT_00528e90;
extern undefined4 *DAT_00528e94;
extern undefined4 DAT_00528e98;

// USA 00528D20 <- EU 00528CF8 (Ghidra, non-matching)
// GLOBAL DAT_00528e60 uint *
// GLOBAL DAT_00528e64 undefined4 *
// GLOBAL DAT_00528e68 undefined4
// GLOBAL DAT_00528e6c uint *
// GLOBAL DAT_00528e70 undefined4 *
// GLOBAL DAT_00528e74 undefined4
// GLOBAL DAT_00528e78 uint *
// GLOBAL DAT_00528e7c undefined4 *
// GLOBAL DAT_00528e80 undefined4
// GLOBAL DAT_00528e84 uint *
// GLOBAL DAT_00528e88 undefined4 *
// GLOBAL DAT_00528e8c undefined4
// GLOBAL DAT_00528e90 uint *
// GLOBAL DAT_00528e94 undefined4 *
// GLOBAL DAT_00528e98 undefined4

undefined4 func_00528D20(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00528e60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528e60), iVar1 != 0)) {
    *DAT_00528e64 = DAT_00528e68;
  }
  if (DAT_00528e64 != param_2) {
    if (((*DAT_00528e6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528e6c), iVar1 != 0)) {
      *DAT_00528e70 = DAT_00528e74;
    }
    if (DAT_00528e70 != param_2) {
      if (((*DAT_00528e78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528e78), iVar1 != 0)) {
        *DAT_00528e7c = DAT_00528e80;
      }
      if (DAT_00528e7c != param_2) {
        if (((*DAT_00528e84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528e84), iVar1 != 0))
        {
          *DAT_00528e88 = DAT_00528e8c;
        }
        if (DAT_00528e88 != param_2) {
          if (((*DAT_00528e90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528e90), iVar1 != 0)
             ) {
            *DAT_00528e94 = DAT_00528e98;
          }
          if (DAT_00528e94 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

