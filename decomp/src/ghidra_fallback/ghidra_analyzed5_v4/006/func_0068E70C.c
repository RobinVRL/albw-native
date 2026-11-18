#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068e784;
extern undefined4 *DAT_0068e788;
extern undefined4 DAT_0068e78c;
extern uint *DAT_0068e790;
extern undefined4 *DAT_0068e794;
extern undefined4 DAT_0068e798;

// USA 0068E70C <- EU 0068E6E4 (Ghidra, non-matching)
// GLOBAL DAT_0068e784 uint *
// GLOBAL DAT_0068e788 undefined4 *
// GLOBAL DAT_0068e78c undefined4
// GLOBAL DAT_0068e790 uint *
// GLOBAL DAT_0068e794 undefined4 *
// GLOBAL DAT_0068e798 undefined4

undefined4 func_0068E70C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068e784 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e784), iVar1 != 0)) {
    *DAT_0068e788 = DAT_0068e78c;
  }
  if (DAT_0068e788 != param_2) {
    if (((*DAT_0068e790 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068e790), iVar1 != 0)) {
      *DAT_0068e794 = DAT_0068e798;
    }
    if (DAT_0068e794 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

