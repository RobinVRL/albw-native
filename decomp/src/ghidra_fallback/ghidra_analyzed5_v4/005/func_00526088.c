#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00526140;
extern undefined4 *DAT_00526144;
extern undefined4 DAT_00526148;
extern uint *DAT_0052614c;
extern undefined4 *DAT_00526150;
extern undefined4 DAT_00526154;
extern uint *DAT_00526158;
extern undefined4 *DAT_0052615c;
extern undefined4 DAT_00526160;

// USA 00526088 <- EU 00526060 (Ghidra, non-matching)
// GLOBAL DAT_00526140 uint *
// GLOBAL DAT_00526144 undefined4 *
// GLOBAL DAT_00526148 undefined4
// GLOBAL DAT_0052614c uint *
// GLOBAL DAT_00526150 undefined4 *
// GLOBAL DAT_00526154 undefined4
// GLOBAL DAT_00526158 uint *
// GLOBAL DAT_0052615c undefined4 *
// GLOBAL DAT_00526160 undefined4

undefined4 func_00526088(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00526140 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526140), iVar1 != 0)) {
    *DAT_00526144 = DAT_00526148;
  }
  if (DAT_00526144 != param_2) {
    if (((*DAT_0052614c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052614c), iVar1 != 0)) {
      *DAT_00526150 = DAT_00526154;
    }
    if (DAT_00526150 != param_2) {
      if (((*DAT_00526158 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00526158), iVar1 != 0)) {
        *DAT_0052615c = DAT_00526160;
      }
      if (DAT_0052615c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

