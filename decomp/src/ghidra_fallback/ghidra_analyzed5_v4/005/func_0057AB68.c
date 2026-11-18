#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ac20;
extern undefined4 *DAT_0057ac24;
extern undefined4 DAT_0057ac28;
extern uint *DAT_0057ac2c;
extern undefined4 *DAT_0057ac30;
extern undefined4 DAT_0057ac34;
extern uint *DAT_0057ac38;
extern undefined4 *DAT_0057ac3c;
extern undefined4 DAT_0057ac40;

// USA 0057AB68 <- EU 0057AB40 (Ghidra, non-matching)
// GLOBAL DAT_0057ac20 uint *
// GLOBAL DAT_0057ac24 undefined4 *
// GLOBAL DAT_0057ac28 undefined4
// GLOBAL DAT_0057ac2c uint *
// GLOBAL DAT_0057ac30 undefined4 *
// GLOBAL DAT_0057ac34 undefined4
// GLOBAL DAT_0057ac38 uint *
// GLOBAL DAT_0057ac3c undefined4 *
// GLOBAL DAT_0057ac40 undefined4

undefined4 func_0057AB68(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ac20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ac20), iVar1 != 0)) {
    *DAT_0057ac24 = DAT_0057ac28;
  }
  if (DAT_0057ac24 != param_2) {
    if (((*DAT_0057ac2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ac2c), iVar1 != 0)) {
      *DAT_0057ac30 = DAT_0057ac34;
    }
    if (DAT_0057ac30 != param_2) {
      if (((*DAT_0057ac38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ac38), iVar1 != 0)) {
        *DAT_0057ac3c = DAT_0057ac40;
      }
      if (DAT_0057ac3c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

