#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00541040;
extern undefined4 *DAT_00541044;
extern undefined4 DAT_00541048;
extern uint *DAT_0054104c;
extern undefined4 *DAT_00541050;
extern undefined4 DAT_00541054;
extern uint *DAT_00541058;
extern undefined4 *DAT_0054105c;
extern undefined4 DAT_00541060;

// USA 00540F88 <- EU 00540F60 (Ghidra, non-matching)
// GLOBAL DAT_00541040 uint *
// GLOBAL DAT_00541044 undefined4 *
// GLOBAL DAT_00541048 undefined4
// GLOBAL DAT_0054104c uint *
// GLOBAL DAT_00541050 undefined4 *
// GLOBAL DAT_00541054 undefined4
// GLOBAL DAT_00541058 uint *
// GLOBAL DAT_0054105c undefined4 *
// GLOBAL DAT_00541060 undefined4

undefined4 func_00540F88(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00541040 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541040), iVar1 != 0)) {
    *DAT_00541044 = DAT_00541048;
  }
  if (DAT_00541044 != param_2) {
    if (((*DAT_0054104c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054104c), iVar1 != 0)) {
      *DAT_00541050 = DAT_00541054;
    }
    if (DAT_00541050 != param_2) {
      if (((*DAT_00541058 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00541058), iVar1 != 0)) {
        *DAT_0054105c = DAT_00541060;
      }
      if (DAT_0054105c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

