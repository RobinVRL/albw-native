#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00547384;
extern undefined4 *DAT_00547388;
extern undefined4 DAT_0054738c;
extern uint *DAT_00547390;
extern undefined4 *DAT_00547394;
extern undefined4 DAT_00547398;
extern uint *DAT_0054739c;
extern undefined4 *DAT_005473a0;
extern undefined4 DAT_005473a4;

// USA 005472CC <- EU 005472A4 (Ghidra, non-matching)
// GLOBAL DAT_00547384 uint *
// GLOBAL DAT_00547388 undefined4 *
// GLOBAL DAT_0054738c undefined4
// GLOBAL DAT_00547390 uint *
// GLOBAL DAT_00547394 undefined4 *
// GLOBAL DAT_00547398 undefined4
// GLOBAL DAT_0054739c uint *
// GLOBAL DAT_005473a0 undefined4 *
// GLOBAL DAT_005473a4 undefined4

undefined4 func_005472CC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00547384 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547384), iVar1 != 0)) {
    *DAT_00547388 = DAT_0054738c;
  }
  if (DAT_00547388 != param_2) {
    if (((*DAT_00547390 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00547390), iVar1 != 0)) {
      *DAT_00547394 = DAT_00547398;
    }
    if (DAT_00547394 != param_2) {
      if (((*DAT_0054739c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054739c), iVar1 != 0)) {
        *DAT_005473a0 = DAT_005473a4;
      }
      if (DAT_005473a0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

