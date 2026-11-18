#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058c318;
extern undefined4 *DAT_0058c31c;
extern undefined4 DAT_0058c320;
extern uint *DAT_0058c324;
extern undefined4 *DAT_0058c328;
extern undefined4 DAT_0058c32c;
extern uint *DAT_0058c330;
extern undefined4 *DAT_0058c334;
extern undefined4 DAT_0058c338;

// USA 0058C260 <- EU 0058C238 (Ghidra, non-matching)
// GLOBAL DAT_0058c318 uint *
// GLOBAL DAT_0058c31c undefined4 *
// GLOBAL DAT_0058c320 undefined4
// GLOBAL DAT_0058c324 uint *
// GLOBAL DAT_0058c328 undefined4 *
// GLOBAL DAT_0058c32c undefined4
// GLOBAL DAT_0058c330 uint *
// GLOBAL DAT_0058c334 undefined4 *
// GLOBAL DAT_0058c338 undefined4

undefined4 func_0058C260(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058c318 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c318), iVar1 != 0)) {
    *DAT_0058c31c = DAT_0058c320;
  }
  if (DAT_0058c31c != param_2) {
    if (((*DAT_0058c324 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c324), iVar1 != 0)) {
      *DAT_0058c328 = DAT_0058c32c;
    }
    if (DAT_0058c328 != param_2) {
      if (((*DAT_0058c330 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c330), iVar1 != 0)) {
        *DAT_0058c334 = DAT_0058c338;
      }
      if (DAT_0058c334 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

