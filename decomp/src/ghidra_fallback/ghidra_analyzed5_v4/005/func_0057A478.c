#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057a5b8;
extern undefined4 *DAT_0057a5bc;
extern undefined4 DAT_0057a5c0;
extern uint *DAT_0057a5c4;
extern undefined4 *DAT_0057a5c8;
extern undefined4 DAT_0057a5cc;
extern uint *DAT_0057a5d0;
extern undefined4 *DAT_0057a5d4;
extern undefined4 DAT_0057a5d8;
extern uint *DAT_0057a5dc;
extern undefined4 *DAT_0057a5e0;
extern undefined4 DAT_0057a5e4;
extern uint *DAT_0057a5e8;
extern undefined4 *DAT_0057a5ec;
extern undefined4 DAT_0057a5f0;

// USA 0057A478 <- EU 0057A450 (Ghidra, non-matching)
// GLOBAL DAT_0057a5b8 uint *
// GLOBAL DAT_0057a5bc undefined4 *
// GLOBAL DAT_0057a5c0 undefined4
// GLOBAL DAT_0057a5c4 uint *
// GLOBAL DAT_0057a5c8 undefined4 *
// GLOBAL DAT_0057a5cc undefined4
// GLOBAL DAT_0057a5d0 uint *
// GLOBAL DAT_0057a5d4 undefined4 *
// GLOBAL DAT_0057a5d8 undefined4
// GLOBAL DAT_0057a5dc uint *
// GLOBAL DAT_0057a5e0 undefined4 *
// GLOBAL DAT_0057a5e4 undefined4
// GLOBAL DAT_0057a5e8 uint *
// GLOBAL DAT_0057a5ec undefined4 *
// GLOBAL DAT_0057a5f0 undefined4

undefined4 func_0057A478(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057a5b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a5b8), iVar1 != 0)) {
    *DAT_0057a5bc = DAT_0057a5c0;
  }
  if (DAT_0057a5bc != param_2) {
    if (((*DAT_0057a5c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a5c4), iVar1 != 0)) {
      *DAT_0057a5c8 = DAT_0057a5cc;
    }
    if (DAT_0057a5c8 != param_2) {
      if (((*DAT_0057a5d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a5d0), iVar1 != 0)) {
        *DAT_0057a5d4 = DAT_0057a5d8;
      }
      if (DAT_0057a5d4 != param_2) {
        if (((*DAT_0057a5dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a5dc), iVar1 != 0))
        {
          *DAT_0057a5e0 = DAT_0057a5e4;
        }
        if (DAT_0057a5e0 != param_2) {
          if (((*DAT_0057a5e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a5e8), iVar1 != 0)
             ) {
            *DAT_0057a5ec = DAT_0057a5f0;
          }
          if (DAT_0057a5ec != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

