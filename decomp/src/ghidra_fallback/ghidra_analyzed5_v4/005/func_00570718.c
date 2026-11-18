#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057078c;
extern undefined4 *DAT_00570790;
extern undefined4 DAT_00570794;
extern uint *DAT_00570798;
extern undefined4 *DAT_0057079c;
extern undefined4 DAT_005707a0;

// USA 00570718 <- EU 005706F0 (Ghidra, non-matching)
// GLOBAL DAT_0057078c uint *
// GLOBAL DAT_00570790 undefined4 *
// GLOBAL DAT_00570794 undefined4
// GLOBAL DAT_00570798 uint *
// GLOBAL DAT_0057079c undefined4 *
// GLOBAL DAT_005707a0 undefined4

undefined4 func_00570718(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057078c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057078c), iVar1 != 0)) {
    *DAT_00570790 = DAT_00570794;
  }
  if (DAT_00570790 != param_2) {
    if (((*DAT_00570798 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570798), iVar1 != 0)) {
      *DAT_0057079c = DAT_005707a0;
    }
    if (DAT_0057079c != param_2) {
      return 0;
    }
  }
  return 1;
}

