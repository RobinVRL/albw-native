#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e054;
extern undefined4 *DAT_0068e058;
extern undefined4 DAT_0068e05c;
extern uint *DAT_0068e060;
extern undefined4 *DAT_0068e064;
extern undefined4 DAT_0068e068;

// USA 0068DFDC <- EU 0068DFB4 (Ghidra, non-matching)
// GLOBAL DAT_0068e054 uint *
// GLOBAL DAT_0068e058 undefined4 *
// GLOBAL DAT_0068e05c undefined4
// GLOBAL DAT_0068e060 uint *
// GLOBAL DAT_0068e064 undefined4 *
// GLOBAL DAT_0068e068 undefined4

undefined4 func_0068DFDC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e054 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e054), iVar1 != 0)) {
    *DAT_0068e058 = DAT_0068e05c;
  }
  if (DAT_0068e058 != param_2) {
    if (((*DAT_0068e060 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e060), iVar1 != 0)) {
      *DAT_0068e064 = DAT_0068e068;
    }
    if (DAT_0068e064 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

