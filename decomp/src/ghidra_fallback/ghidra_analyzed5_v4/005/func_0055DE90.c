#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_0055df08;
extern undefined4 *DAT_0055df0c;
extern undefined4 DAT_0055df10;
extern uint *DAT_0055df14;
extern undefined4 *DAT_0055df18;
extern undefined4 DAT_0055df1c;

// USA 0055DE90 <- EU 0055DE68 (Ghidra, non-matching)
// GLOBAL DAT_0055df08 uint *
// GLOBAL DAT_0055df0c undefined4 *
// GLOBAL DAT_0055df10 undefined4
// GLOBAL DAT_0055df14 uint *
// GLOBAL DAT_0055df18 undefined4 *
// GLOBAL DAT_0055df1c undefined4

undefined4 func_0055DE90(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055df08 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055df08), iVar1 != 0)) {
    *DAT_0055df0c = DAT_0055df10;
  }
  if (DAT_0055df0c != param_2) {
    if (((*DAT_0055df14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055df14), iVar1 != 0)) {
      *DAT_0055df18 = DAT_0055df1c;
    }
    if (DAT_0055df18 != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

