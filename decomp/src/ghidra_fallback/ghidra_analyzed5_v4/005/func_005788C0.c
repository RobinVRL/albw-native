#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00578a00;
extern undefined4 *DAT_00578a04;
extern undefined4 DAT_00578a08;
extern uint *DAT_00578a0c;
extern undefined4 *DAT_00578a10;
extern undefined4 DAT_00578a14;
extern uint *DAT_00578a18;
extern undefined4 *DAT_00578a1c;
extern undefined4 DAT_00578a20;
extern uint *DAT_00578a24;
extern undefined4 *DAT_00578a28;
extern undefined4 DAT_00578a2c;
extern uint *DAT_00578a30;
extern undefined4 *DAT_00578a34;
extern undefined4 DAT_00578a38;

// USA 005788C0 <- EU 00578898 (Ghidra, non-matching)
// GLOBAL DAT_00578a00 uint *
// GLOBAL DAT_00578a04 undefined4 *
// GLOBAL DAT_00578a08 undefined4
// GLOBAL DAT_00578a0c uint *
// GLOBAL DAT_00578a10 undefined4 *
// GLOBAL DAT_00578a14 undefined4
// GLOBAL DAT_00578a18 uint *
// GLOBAL DAT_00578a1c undefined4 *
// GLOBAL DAT_00578a20 undefined4
// GLOBAL DAT_00578a24 uint *
// GLOBAL DAT_00578a28 undefined4 *
// GLOBAL DAT_00578a2c undefined4
// GLOBAL DAT_00578a30 uint *
// GLOBAL DAT_00578a34 undefined4 *
// GLOBAL DAT_00578a38 undefined4

undefined4 func_005788C0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00578a00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578a00), iVar1 != 0)) {
    *DAT_00578a04 = DAT_00578a08;
  }
  if (DAT_00578a04 != param_2) {
    if (((*DAT_00578a0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578a0c), iVar1 != 0)) {
      *DAT_00578a10 = DAT_00578a14;
    }
    if (DAT_00578a10 != param_2) {
      if (((*DAT_00578a18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578a18), iVar1 != 0)) {
        *DAT_00578a1c = DAT_00578a20;
      }
      if (DAT_00578a1c != param_2) {
        if (((*DAT_00578a24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578a24), iVar1 != 0))
        {
          *DAT_00578a28 = DAT_00578a2c;
        }
        if (DAT_00578a28 != param_2) {
          if (((*DAT_00578a30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578a30), iVar1 != 0)
             ) {
            *DAT_00578a34 = DAT_00578a38;
          }
          if (DAT_00578a34 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

