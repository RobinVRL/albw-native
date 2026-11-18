#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052df08;
extern undefined4 *DAT_0052df0c;
extern undefined4 DAT_0052df10;
extern uint *DAT_0052df14;
extern undefined4 *DAT_0052df18;
extern undefined4 DAT_0052df1c;
extern uint *DAT_0052df20;
extern undefined4 *DAT_0052df24;
extern undefined4 DAT_0052df28;

// USA 0052DE50 <- EU 0052DE28 (Ghidra, non-matching)
// GLOBAL DAT_0052df08 uint *
// GLOBAL DAT_0052df0c undefined4 *
// GLOBAL DAT_0052df10 undefined4
// GLOBAL DAT_0052df14 uint *
// GLOBAL DAT_0052df18 undefined4 *
// GLOBAL DAT_0052df1c undefined4
// GLOBAL DAT_0052df20 uint *
// GLOBAL DAT_0052df24 undefined4 *
// GLOBAL DAT_0052df28 undefined4

undefined4 func_0052DE50(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052df08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052df08), iVar1 != 0)) {
    *DAT_0052df0c = DAT_0052df10;
  }
  if (DAT_0052df0c != param_2) {
    if (((*DAT_0052df14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052df14), iVar1 != 0)) {
      *DAT_0052df18 = DAT_0052df1c;
    }
    if (DAT_0052df18 != param_2) {
      if (((*DAT_0052df20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052df20), iVar1 != 0)) {
        *DAT_0052df24 = DAT_0052df28;
      }
      if (DAT_0052df24 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

