#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057043c;
extern undefined4 *DAT_00570440;
extern undefined4 DAT_00570444;
extern uint *DAT_00570448;
extern undefined4 *DAT_0057044c;
extern undefined4 DAT_00570450;
extern uint *DAT_00570454;
extern undefined4 *DAT_00570458;
extern undefined4 DAT_0057045c;

// USA 00570384 <- EU 0057035C (Ghidra, non-matching)
// GLOBAL DAT_0057043c uint *
// GLOBAL DAT_00570440 undefined4 *
// GLOBAL DAT_00570444 undefined4
// GLOBAL DAT_00570448 uint *
// GLOBAL DAT_0057044c undefined4 *
// GLOBAL DAT_00570450 undefined4
// GLOBAL DAT_00570454 uint *
// GLOBAL DAT_00570458 undefined4 *
// GLOBAL DAT_0057045c undefined4

undefined4 func_00570384(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057043c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057043c), iVar1 != 0)) {
    *DAT_00570440 = DAT_00570444;
  }
  if (DAT_00570440 != param_2) {
    if (((*DAT_00570448 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570448), iVar1 != 0)) {
      *DAT_0057044c = DAT_00570450;
    }
    if (DAT_0057044c != param_2) {
      if (((*DAT_00570454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570454), iVar1 != 0)) {
        *DAT_00570458 = DAT_0057045c;
      }
      if (DAT_00570458 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

