#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068c954;
extern undefined4 *DAT_0068c958;
extern undefined4 DAT_0068c95c;
extern uint *DAT_0068c960;
extern undefined4 *DAT_0068c964;
extern undefined4 DAT_0068c968;

// USA 0068C8DC <- EU 0068C8B4 (Ghidra, non-matching)
// GLOBAL DAT_0068c954 uint *
// GLOBAL DAT_0068c958 undefined4 *
// GLOBAL DAT_0068c95c undefined4
// GLOBAL DAT_0068c960 uint *
// GLOBAL DAT_0068c964 undefined4 *
// GLOBAL DAT_0068c968 undefined4

undefined4 func_0068C8DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068c954 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068c954), iVar1 != 0)) {
    *DAT_0068c958 = DAT_0068c95c;
  }
  if (DAT_0068c958 != param_2) {
    if (((*DAT_0068c960 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068c960), iVar1 != 0)) {
      *DAT_0068c964 = DAT_0068c968;
    }
    if (DAT_0068c964 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

