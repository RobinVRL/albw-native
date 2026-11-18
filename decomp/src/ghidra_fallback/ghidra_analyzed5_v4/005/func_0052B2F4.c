#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052b434;
extern undefined4 *DAT_0052b438;
extern undefined4 DAT_0052b43c;
extern uint *DAT_0052b440;
extern undefined4 *DAT_0052b444;
extern undefined4 DAT_0052b448;
extern uint *DAT_0052b44c;
extern undefined4 *DAT_0052b450;
extern undefined4 DAT_0052b454;
extern uint *DAT_0052b458;
extern undefined4 *DAT_0052b45c;
extern undefined4 DAT_0052b460;
extern uint *DAT_0052b464;
extern undefined4 *DAT_0052b468;
extern undefined4 DAT_0052b46c;

// USA 0052B2F4 <- EU 0052B2CC (Ghidra, non-matching)
// GLOBAL DAT_0052b434 uint *
// GLOBAL DAT_0052b438 undefined4 *
// GLOBAL DAT_0052b43c undefined4
// GLOBAL DAT_0052b440 uint *
// GLOBAL DAT_0052b444 undefined4 *
// GLOBAL DAT_0052b448 undefined4
// GLOBAL DAT_0052b44c uint *
// GLOBAL DAT_0052b450 undefined4 *
// GLOBAL DAT_0052b454 undefined4
// GLOBAL DAT_0052b458 uint *
// GLOBAL DAT_0052b45c undefined4 *
// GLOBAL DAT_0052b460 undefined4
// GLOBAL DAT_0052b464 uint *
// GLOBAL DAT_0052b468 undefined4 *
// GLOBAL DAT_0052b46c undefined4

undefined4 func_0052B2F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052b434 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b434), iVar1 != 0)) {
    *DAT_0052b438 = DAT_0052b43c;
  }
  if (DAT_0052b438 != param_2) {
    if (((*DAT_0052b440 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b440), iVar1 != 0)) {
      *DAT_0052b444 = DAT_0052b448;
    }
    if (DAT_0052b444 != param_2) {
      if (((*DAT_0052b44c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b44c), iVar1 != 0)) {
        *DAT_0052b450 = DAT_0052b454;
      }
      if (DAT_0052b450 != param_2) {
        if (((*DAT_0052b458 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b458), iVar1 != 0))
        {
          *DAT_0052b45c = DAT_0052b460;
        }
        if (DAT_0052b45c != param_2) {
          if (((*DAT_0052b464 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052b464), iVar1 != 0)
             ) {
            *DAT_0052b468 = DAT_0052b46c;
          }
          if (DAT_0052b468 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

