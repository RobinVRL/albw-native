#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f14c;
extern undefined4 *DAT_0051f150;
extern undefined4 DAT_0051f154;
extern uint *DAT_0051f158;
extern undefined4 *DAT_0051f15c;
extern undefined4 DAT_0051f160;
extern uint *DAT_0051f164;
extern undefined4 *DAT_0051f168;
extern undefined4 DAT_0051f16c;

// USA 0051F094 <- EU 0051F06C (Ghidra, non-matching)
// GLOBAL DAT_0051f14c uint *
// GLOBAL DAT_0051f150 undefined4 *
// GLOBAL DAT_0051f154 undefined4
// GLOBAL DAT_0051f158 uint *
// GLOBAL DAT_0051f15c undefined4 *
// GLOBAL DAT_0051f160 undefined4
// GLOBAL DAT_0051f164 uint *
// GLOBAL DAT_0051f168 undefined4 *
// GLOBAL DAT_0051f16c undefined4

undefined4 func_0051F094(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f14c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f14c), iVar1 != 0)) {
    *DAT_0051f150 = DAT_0051f154;
  }
  if (DAT_0051f150 != param_2) {
    if (((*DAT_0051f158 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f158), iVar1 != 0)) {
      *DAT_0051f15c = DAT_0051f160;
    }
    if (DAT_0051f15c != param_2) {
      if (((*DAT_0051f164 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f164), iVar1 != 0)) {
        *DAT_0051f168 = DAT_0051f16c;
      }
      if (DAT_0051f168 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

