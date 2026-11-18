#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_00551218;
extern undefined4 *DAT_0055121c;
extern undefined4 DAT_00551220;
extern uint *DAT_00551224;
extern undefined4 *DAT_00551228;
extern undefined4 DAT_0055122c;
extern uint *DAT_00551230;
extern undefined4 *DAT_00551234;
extern undefined4 DAT_00551238;

// USA 0055115C <- EU 00551134 (Ghidra, non-matching)
// GLOBAL DAT_00551218 uint *
// GLOBAL DAT_0055121c undefined4 *
// GLOBAL DAT_00551220 undefined4
// GLOBAL DAT_00551224 uint *
// GLOBAL DAT_00551228 undefined4 *
// GLOBAL DAT_0055122c undefined4
// GLOBAL DAT_00551230 uint *
// GLOBAL DAT_00551234 undefined4 *
// GLOBAL DAT_00551238 undefined4

undefined4 func_0055115C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00551218 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551218), iVar1 != 0)) {
    *DAT_0055121c = DAT_00551220;
  }
  if (DAT_0055121c != param_2) {
    if (((*DAT_00551224 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551224), iVar1 != 0)) {
      *DAT_00551228 = DAT_0055122c;
    }
    if (DAT_00551228 != param_2) {
      if (((*DAT_00551230 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00551230), iVar1 != 0)) {
        *DAT_00551234 = DAT_00551238;
      }
      if (DAT_00551234 != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

