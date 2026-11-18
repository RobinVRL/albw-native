#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5578(undefined4 *param_1);
extern uint *DAT_0058be7c;
extern undefined4 *DAT_0058be80;
extern undefined4 DAT_0058be84;
extern uint *DAT_0058be88;
extern undefined4 *DAT_0058be8c;
extern undefined4 DAT_0058be90;

// USA 0058BE04 <- EU 0058BDDC (Ghidra, non-matching)
// GLOBAL DAT_0058be7c uint *
// GLOBAL DAT_0058be80 undefined4 *
// GLOBAL DAT_0058be84 undefined4
// GLOBAL DAT_0058be88 uint *
// GLOBAL DAT_0058be8c undefined4 *
// GLOBAL DAT_0058be90 undefined4

undefined4 func_0058BE04(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0058be7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058be7c), iVar1 != 0)) {
    *DAT_0058be80 = DAT_0058be84;
  }
  if (DAT_0058be80 != param_2) {
    if (((*DAT_0058be88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058be88), iVar1 != 0)) {
      *DAT_0058be8c = DAT_0058be90;
    }
    if (DAT_0058be8c != param_2) {
      uVar2 = func_001E5578(param_2);
      return uVar2;
    }
  }
  return 1;
}

