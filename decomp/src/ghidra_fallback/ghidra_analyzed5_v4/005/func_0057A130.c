#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057a270;
extern undefined4 *DAT_0057a274;
extern undefined4 DAT_0057a278;
extern uint *DAT_0057a27c;
extern undefined4 *DAT_0057a280;
extern undefined4 DAT_0057a284;
extern uint *DAT_0057a288;
extern undefined4 *DAT_0057a28c;
extern undefined4 DAT_0057a290;
extern uint *DAT_0057a294;
extern undefined4 *DAT_0057a298;
extern undefined4 DAT_0057a29c;
extern uint *DAT_0057a2a0;
extern undefined4 *DAT_0057a2a4;
extern undefined4 DAT_0057a2a8;

// USA 0057A130 <- EU 0057A108 (Ghidra, non-matching)
// GLOBAL DAT_0057a270 uint *
// GLOBAL DAT_0057a274 undefined4 *
// GLOBAL DAT_0057a278 undefined4
// GLOBAL DAT_0057a27c uint *
// GLOBAL DAT_0057a280 undefined4 *
// GLOBAL DAT_0057a284 undefined4
// GLOBAL DAT_0057a288 uint *
// GLOBAL DAT_0057a28c undefined4 *
// GLOBAL DAT_0057a290 undefined4
// GLOBAL DAT_0057a294 uint *
// GLOBAL DAT_0057a298 undefined4 *
// GLOBAL DAT_0057a29c undefined4
// GLOBAL DAT_0057a2a0 uint *
// GLOBAL DAT_0057a2a4 undefined4 *
// GLOBAL DAT_0057a2a8 undefined4

undefined4 func_0057A130(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057a270 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a270), iVar1 != 0)) {
    *DAT_0057a274 = DAT_0057a278;
  }
  if (DAT_0057a274 != param_2) {
    if (((*DAT_0057a27c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a27c), iVar1 != 0)) {
      *DAT_0057a280 = DAT_0057a284;
    }
    if (DAT_0057a280 != param_2) {
      if (((*DAT_0057a288 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a288), iVar1 != 0)) {
        *DAT_0057a28c = DAT_0057a290;
      }
      if (DAT_0057a28c != param_2) {
        if (((*DAT_0057a294 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a294), iVar1 != 0))
        {
          *DAT_0057a298 = DAT_0057a29c;
        }
        if (DAT_0057a298 != param_2) {
          if (((*DAT_0057a2a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a2a0), iVar1 != 0)
             ) {
            *DAT_0057a2a4 = DAT_0057a2a8;
          }
          if (DAT_0057a2a4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

