#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005798e4;
extern undefined4 *DAT_005798e8;
extern undefined4 DAT_005798ec;
extern uint *DAT_005798f0;
extern undefined4 *DAT_005798f4;
extern undefined4 DAT_005798f8;
extern uint *DAT_005798fc;
extern undefined4 *DAT_00579900;
extern undefined4 DAT_00579904;
extern uint *DAT_00579908;
extern undefined4 *DAT_0057990c;
extern undefined4 DAT_00579910;

// USA 005797E8 <- EU 005797C0 (Ghidra, non-matching)
// GLOBAL DAT_005798e4 uint *
// GLOBAL DAT_005798e8 undefined4 *
// GLOBAL DAT_005798ec undefined4
// GLOBAL DAT_005798f0 uint *
// GLOBAL DAT_005798f4 undefined4 *
// GLOBAL DAT_005798f8 undefined4
// GLOBAL DAT_005798fc uint *
// GLOBAL DAT_00579900 undefined4 *
// GLOBAL DAT_00579904 undefined4
// GLOBAL DAT_00579908 uint *
// GLOBAL DAT_0057990c undefined4 *
// GLOBAL DAT_00579910 undefined4

undefined4 func_005797E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005798e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005798e4), iVar1 != 0)) {
    *DAT_005798e8 = DAT_005798ec;
  }
  if (DAT_005798e8 != param_2) {
    if (((*DAT_005798f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005798f0), iVar1 != 0)) {
      *DAT_005798f4 = DAT_005798f8;
    }
    if (DAT_005798f4 != param_2) {
      if (((*DAT_005798fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005798fc), iVar1 != 0)) {
        *DAT_00579900 = DAT_00579904;
      }
      if (DAT_00579900 != param_2) {
        if (((*DAT_00579908 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00579908), iVar1 != 0))
        {
          *DAT_0057990c = DAT_00579910;
        }
        if (DAT_0057990c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

