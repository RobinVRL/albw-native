#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00586084;
extern undefined4 *DAT_00586088;
extern undefined4 DAT_0058608c;
extern uint *DAT_00586090;
extern undefined4 *DAT_00586094;
extern undefined4 DAT_00586098;
extern uint *DAT_0058609c;
extern undefined4 *DAT_005860a0;
extern undefined4 DAT_005860a4;
extern uint *DAT_005860a8;
extern undefined4 *DAT_005860ac;
extern undefined4 DAT_005860b0;

// USA 00585F88 <- EU 00585F60 (Ghidra, non-matching)
// GLOBAL DAT_00586084 uint *
// GLOBAL DAT_00586088 undefined4 *
// GLOBAL DAT_0058608c undefined4
// GLOBAL DAT_00586090 uint *
// GLOBAL DAT_00586094 undefined4 *
// GLOBAL DAT_00586098 undefined4
// GLOBAL DAT_0058609c uint *
// GLOBAL DAT_005860a0 undefined4 *
// GLOBAL DAT_005860a4 undefined4
// GLOBAL DAT_005860a8 uint *
// GLOBAL DAT_005860ac undefined4 *
// GLOBAL DAT_005860b0 undefined4

undefined4 func_00585F88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00586084 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586084), iVar1 != 0)) {
    *DAT_00586088 = DAT_0058608c;
  }
  if (DAT_00586088 != param_2) {
    if (((*DAT_00586090 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586090), iVar1 != 0)) {
      *DAT_00586094 = DAT_00586098;
    }
    if (DAT_00586094 != param_2) {
      if (((*DAT_0058609c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058609c), iVar1 != 0)) {
        *DAT_005860a0 = DAT_005860a4;
      }
      if (DAT_005860a0 != param_2) {
        if (((*DAT_005860a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005860a8), iVar1 != 0))
        {
          *DAT_005860ac = DAT_005860b0;
        }
        if (DAT_005860ac != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

