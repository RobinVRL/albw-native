#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E6B34(undefined4 *param_1);
extern uint *DAT_0068d084;
extern undefined4 *DAT_0068d088;
extern undefined4 DAT_0068d08c;
extern uint *DAT_0068d090;
extern undefined4 *DAT_0068d094;
extern undefined4 DAT_0068d098;

// USA 0068D00C <- EU 0068CFE4 (Ghidra, non-matching)
// GLOBAL DAT_0068d084 uint *
// GLOBAL DAT_0068d088 undefined4 *
// GLOBAL DAT_0068d08c undefined4
// GLOBAL DAT_0068d090 uint *
// GLOBAL DAT_0068d094 undefined4 *
// GLOBAL DAT_0068d098 undefined4

undefined4 func_0068D00C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0068d084 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d084), iVar1 != 0)) {
    *DAT_0068d088 = DAT_0068d08c;
  }
  if (DAT_0068d088 != param_2) {
    if (((*DAT_0068d090 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0068d090), iVar1 != 0)) {
      *DAT_0068d094 = DAT_0068d098;
    }
    if (DAT_0068d094 != param_2) {
      uVar2 = func_001E6B34(param_2);
      return uVar2;
    }
  }
  return 1;
}

