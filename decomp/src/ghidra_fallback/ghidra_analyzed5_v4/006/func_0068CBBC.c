#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068cc34;
extern undefined4 *DAT_0068cc38;
extern undefined4 DAT_0068cc3c;
extern uint *DAT_0068cc40;
extern undefined4 *DAT_0068cc44;
extern undefined4 DAT_0068cc48;

// USA 0068CBBC <- EU 0068CB94 (Ghidra, non-matching)
// GLOBAL DAT_0068cc34 uint *
// GLOBAL DAT_0068cc38 undefined4 *
// GLOBAL DAT_0068cc3c undefined4
// GLOBAL DAT_0068cc40 uint *
// GLOBAL DAT_0068cc44 undefined4 *
// GLOBAL DAT_0068cc48 undefined4

undefined4 func_0068CBBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068cc34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cc34), iVar1 != 0)) {
    *DAT_0068cc38 = DAT_0068cc3c;
  }
  if (DAT_0068cc38 != param_2) {
    if (((*DAT_0068cc40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068cc40), iVar1 != 0)) {
      *DAT_0068cc44 = DAT_0068cc48;
    }
    if (DAT_0068cc44 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

