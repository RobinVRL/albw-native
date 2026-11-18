#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057ee44;
extern undefined4 *DAT_0057ee48;
extern undefined4 DAT_0057ee4c;
extern uint *DAT_0057ee50;
extern undefined4 *DAT_0057ee54;
extern undefined4 DAT_0057ee58;

// USA 0057EDD0 <- EU 0057EDA8 (Ghidra, non-matching)
// GLOBAL DAT_0057ee44 uint *
// GLOBAL DAT_0057ee48 undefined4 *
// GLOBAL DAT_0057ee4c undefined4
// GLOBAL DAT_0057ee50 uint *
// GLOBAL DAT_0057ee54 undefined4 *
// GLOBAL DAT_0057ee58 undefined4

undefined4 func_0057EDD0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057ee44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ee44), iVar1 != 0)) {
    *DAT_0057ee48 = DAT_0057ee4c;
  }
  if (DAT_0057ee48 != param_2) {
    if (((*DAT_0057ee50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057ee50), iVar1 != 0)) {
      *DAT_0057ee54 = DAT_0057ee58;
    }
    if (DAT_0057ee54 != param_2) {
      return 0;
    }
  }
  return 1;
}

