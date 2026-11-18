#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00628810(undefined4 *param_1);
extern uint *DAT_00535c64;
extern undefined4 *DAT_00535c68;
extern undefined4 DAT_00535c6c;
extern uint *DAT_00535c70;
extern undefined4 *DAT_00535c74;
extern undefined4 DAT_00535c78;

// USA 00535BEC <- EU 00535BC4 (Ghidra, non-matching)
// GLOBAL DAT_00535c64 uint *
// GLOBAL DAT_00535c68 undefined4 *
// GLOBAL DAT_00535c6c undefined4
// GLOBAL DAT_00535c70 uint *
// GLOBAL DAT_00535c74 undefined4 *
// GLOBAL DAT_00535c78 undefined4

undefined4 func_00535BEC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00535c64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535c64), iVar1 != 0)) {
    *DAT_00535c68 = DAT_00535c6c;
  }
  if (DAT_00535c68 != param_2) {
    if (((*DAT_00535c70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535c70), iVar1 != 0)) {
      *DAT_00535c74 = DAT_00535c78;
    }
    if (DAT_00535c74 != param_2) {
      uVar2 = func_00628810(param_2);
      return uVar2;
    }
  }
  return 1;
}

