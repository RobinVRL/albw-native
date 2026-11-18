#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_005792dc;
extern undefined4 *DAT_005792e0;
extern undefined4 DAT_005792e4;
extern uint *DAT_005792e8;
extern undefined4 *DAT_005792ec;
extern undefined4 DAT_005792f0;
extern uint *DAT_005792f4;
extern undefined4 *DAT_005792f8;
extern undefined4 DAT_005792fc;

// USA 00579220 <- EU 005791F8 (Ghidra, non-matching)
// GLOBAL DAT_005792dc uint *
// GLOBAL DAT_005792e0 undefined4 *
// GLOBAL DAT_005792e4 undefined4
// GLOBAL DAT_005792e8 uint *
// GLOBAL DAT_005792ec undefined4 *
// GLOBAL DAT_005792f0 undefined4
// GLOBAL DAT_005792f4 uint *
// GLOBAL DAT_005792f8 undefined4 *
// GLOBAL DAT_005792fc undefined4

undefined4 func_00579220(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005792dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005792dc), iVar1 != 0)) {
    *DAT_005792e0 = DAT_005792e4;
  }
  if (DAT_005792e0 != param_2) {
    if (((*DAT_005792e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005792e8), iVar1 != 0)) {
      *DAT_005792ec = DAT_005792f0;
    }
    if (DAT_005792ec != param_2) {
      if (((*DAT_005792f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005792f4), iVar1 != 0)) {
        *DAT_005792f8 = DAT_005792fc;
      }
      if (DAT_005792f8 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

