#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00535a00;
extern undefined4 *DAT_00535a04;
extern undefined4 DAT_00535a08;
extern uint *DAT_00535a0c;
extern undefined4 *DAT_00535a10;
extern undefined4 DAT_00535a14;
extern uint *DAT_00535a18;
extern undefined4 *DAT_00535a1c;
extern undefined4 DAT_00535a20;
extern uint *DAT_00535a24;
extern undefined4 *DAT_00535a28;
extern undefined4 DAT_00535a2c;
extern uint *DAT_00535a30;
extern undefined4 *DAT_00535a34;
extern undefined4 DAT_00535a38;
extern uint *DAT_00535a3c;
extern undefined4 *DAT_00535a40;
extern undefined4 DAT_00535a44;
extern uint *DAT_00535a48;
extern undefined4 *DAT_00535a4c;
extern undefined4 DAT_00535a50;

// USA 00535838 <- EU 00535810 (Ghidra, non-matching)
// GLOBAL DAT_00535a00 uint *
// GLOBAL DAT_00535a04 undefined4 *
// GLOBAL DAT_00535a08 undefined4
// GLOBAL DAT_00535a0c uint *
// GLOBAL DAT_00535a10 undefined4 *
// GLOBAL DAT_00535a14 undefined4
// GLOBAL DAT_00535a18 uint *
// GLOBAL DAT_00535a1c undefined4 *
// GLOBAL DAT_00535a20 undefined4
// GLOBAL DAT_00535a24 uint *
// GLOBAL DAT_00535a28 undefined4 *
// GLOBAL DAT_00535a2c undefined4
// GLOBAL DAT_00535a30 uint *
// GLOBAL DAT_00535a34 undefined4 *
// GLOBAL DAT_00535a38 undefined4
// GLOBAL DAT_00535a3c uint *
// GLOBAL DAT_00535a40 undefined4 *
// GLOBAL DAT_00535a44 undefined4
// GLOBAL DAT_00535a48 uint *
// GLOBAL DAT_00535a4c undefined4 *
// GLOBAL DAT_00535a50 undefined4

undefined4 func_00535838(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00535a00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535a00), iVar1 != 0)) {
    *DAT_00535a04 = DAT_00535a08;
  }
  if (DAT_00535a04 != param_2) {
    if (((*DAT_00535a0c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535a0c), iVar1 != 0)) {
      *DAT_00535a10 = DAT_00535a14;
    }
    if (DAT_00535a10 != param_2) {
      if (((*DAT_00535a18 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535a18), iVar1 != 0)) {
        *DAT_00535a1c = DAT_00535a20;
      }
      if (DAT_00535a1c != param_2) {
        if (((*DAT_00535a24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535a24), iVar1 != 0))
        {
          *DAT_00535a28 = DAT_00535a2c;
        }
        if (DAT_00535a28 != param_2) {
          if (((*DAT_00535a30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535a30), iVar1 != 0)
             ) {
            *DAT_00535a34 = DAT_00535a38;
          }
          if (DAT_00535a34 != param_2) {
            if (((*DAT_00535a3c & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00535a3c), iVar1 != 0)) {
              *DAT_00535a40 = DAT_00535a44;
            }
            if (DAT_00535a40 != param_2) {
              if (((*DAT_00535a48 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00535a48), iVar1 != 0)) {
                *DAT_00535a4c = DAT_00535a50;
              }
              if (DAT_00535a4c != param_2) {
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

