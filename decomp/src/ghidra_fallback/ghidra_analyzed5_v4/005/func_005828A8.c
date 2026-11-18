#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005829e8;
extern undefined4 *DAT_005829ec;
extern undefined4 DAT_005829f0;
extern uint *DAT_005829f4;
extern undefined4 *DAT_005829f8;
extern undefined4 DAT_005829fc;
extern uint *DAT_00582a00;
extern undefined4 *DAT_00582a04;
extern undefined4 DAT_00582a08;
extern uint *DAT_00582a0c;
extern undefined4 *DAT_00582a10;
extern undefined4 DAT_00582a14;
extern uint *DAT_00582a18;
extern undefined4 *DAT_00582a1c;
extern undefined4 DAT_00582a20;

// USA 005828A8 <- EU 00582880 (Ghidra, non-matching)
// GLOBAL DAT_005829e8 uint *
// GLOBAL DAT_005829ec undefined4 *
// GLOBAL DAT_005829f0 undefined4
// GLOBAL DAT_005829f4 uint *
// GLOBAL DAT_005829f8 undefined4 *
// GLOBAL DAT_005829fc undefined4
// GLOBAL DAT_00582a00 uint *
// GLOBAL DAT_00582a04 undefined4 *
// GLOBAL DAT_00582a08 undefined4
// GLOBAL DAT_00582a0c uint *
// GLOBAL DAT_00582a10 undefined4 *
// GLOBAL DAT_00582a14 undefined4
// GLOBAL DAT_00582a18 uint *
// GLOBAL DAT_00582a1c undefined4 *
// GLOBAL DAT_00582a20 undefined4

undefined4 func_005828A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005829e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005829e8), iVar1 != 0)) {
    *DAT_005829ec = DAT_005829f0;
  }
  if (DAT_005829ec != param_2) {
    if (((*DAT_005829f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005829f4), iVar1 != 0)) {
      *DAT_005829f8 = DAT_005829fc;
    }
    if (DAT_005829f8 != param_2) {
      if (((*DAT_00582a00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00582a00), iVar1 != 0)) {
        *DAT_00582a04 = DAT_00582a08;
      }
      if (DAT_00582a04 != param_2) {
        if (((*DAT_00582a0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00582a0c), iVar1 != 0))
        {
          *DAT_00582a10 = DAT_00582a14;
        }
        if (DAT_00582a10 != param_2) {
          if (((*DAT_00582a18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00582a18), iVar1 != 0)
             ) {
            *DAT_00582a1c = DAT_00582a20;
          }
          if (DAT_00582a1c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

