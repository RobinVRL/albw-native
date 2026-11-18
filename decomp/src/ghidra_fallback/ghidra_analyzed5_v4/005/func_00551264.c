#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_00551320;
extern undefined4 *DAT_00551324;
extern undefined4 DAT_00551328;
extern uint *DAT_0055132c;
extern undefined4 *DAT_00551330;
extern undefined4 DAT_00551334;
extern uint *DAT_00551338;
extern undefined4 *DAT_0055133c;
extern undefined4 DAT_00551340;

// USA 00551264 <- EU 0055123C (Ghidra, non-matching)
// GLOBAL DAT_00551320 uint *
// GLOBAL DAT_00551324 undefined4 *
// GLOBAL DAT_00551328 undefined4
// GLOBAL DAT_0055132c uint *
// GLOBAL DAT_00551330 undefined4 *
// GLOBAL DAT_00551334 undefined4
// GLOBAL DAT_00551338 uint *
// GLOBAL DAT_0055133c undefined4 *
// GLOBAL DAT_00551340 undefined4

undefined4 func_00551264(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00551320 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551320), iVar1 != 0)) {
    *DAT_00551324 = DAT_00551328;
  }
  if (DAT_00551324 != param_2) {
    if (((*DAT_0055132c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055132c), iVar1 != 0)) {
      *DAT_00551330 = DAT_00551334;
    }
    if (DAT_00551330 != param_2) {
      if (((*DAT_00551338 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551338), iVar1 != 0)) {
        *DAT_0055133c = DAT_00551340;
      }
      if (DAT_0055133c != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

