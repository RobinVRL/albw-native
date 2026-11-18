#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_0054a05c;
extern undefined4 *DAT_0054a060;
extern undefined4 DAT_0054a064;
extern uint *DAT_0054a068;
extern undefined4 *DAT_0054a06c;
extern undefined4 DAT_0054a070;

// USA 00549FE4 <- EU 00549FBC (Ghidra, non-matching)
// GLOBAL DAT_0054a05c uint *
// GLOBAL DAT_0054a060 undefined4 *
// GLOBAL DAT_0054a064 undefined4
// GLOBAL DAT_0054a068 uint *
// GLOBAL DAT_0054a06c undefined4 *
// GLOBAL DAT_0054a070 undefined4

undefined4 func_00549FE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0054a05c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a05c), iVar1 != 0)) {
    *DAT_0054a060 = DAT_0054a064;
  }
  if (DAT_0054a060 != param_2) {
    if (((*DAT_0054a068 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a068), iVar1 != 0)) {
      *DAT_0054a06c = DAT_0054a070;
    }
    if (DAT_0054a06c != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

