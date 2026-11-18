#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057a414;
extern undefined4 *DAT_0057a418;
extern undefined4 DAT_0057a41c;
extern uint *DAT_0057a420;
extern undefined4 *DAT_0057a424;
extern undefined4 DAT_0057a428;
extern uint *DAT_0057a42c;
extern undefined4 *DAT_0057a430;
extern undefined4 DAT_0057a434;
extern uint *DAT_0057a438;
extern undefined4 *DAT_0057a43c;
extern undefined4 DAT_0057a440;
extern uint *DAT_0057a444;
extern undefined4 *DAT_0057a448;
extern undefined4 DAT_0057a44c;

// USA 0057A2D4 <- EU 0057A2AC (Ghidra, non-matching)
// GLOBAL DAT_0057a414 uint *
// GLOBAL DAT_0057a418 undefined4 *
// GLOBAL DAT_0057a41c undefined4
// GLOBAL DAT_0057a420 uint *
// GLOBAL DAT_0057a424 undefined4 *
// GLOBAL DAT_0057a428 undefined4
// GLOBAL DAT_0057a42c uint *
// GLOBAL DAT_0057a430 undefined4 *
// GLOBAL DAT_0057a434 undefined4
// GLOBAL DAT_0057a438 uint *
// GLOBAL DAT_0057a43c undefined4 *
// GLOBAL DAT_0057a440 undefined4
// GLOBAL DAT_0057a444 uint *
// GLOBAL DAT_0057a448 undefined4 *
// GLOBAL DAT_0057a44c undefined4

undefined4 func_0057A2D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057a414 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a414), iVar1 != 0)) {
    *DAT_0057a418 = DAT_0057a41c;
  }
  if (DAT_0057a418 != param_2) {
    if (((*DAT_0057a420 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a420), iVar1 != 0)) {
      *DAT_0057a424 = DAT_0057a428;
    }
    if (DAT_0057a424 != param_2) {
      if (((*DAT_0057a42c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a42c), iVar1 != 0)) {
        *DAT_0057a430 = DAT_0057a434;
      }
      if (DAT_0057a430 != param_2) {
        if (((*DAT_0057a438 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a438), iVar1 != 0))
        {
          *DAT_0057a43c = DAT_0057a440;
        }
        if (DAT_0057a43c != param_2) {
          if (((*DAT_0057a444 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057a444), iVar1 != 0)
             ) {
            *DAT_0057a448 = DAT_0057a44c;
          }
          if (DAT_0057a448 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

