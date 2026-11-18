#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00570c64;
extern undefined4 *DAT_00570c68;
extern undefined4 DAT_00570c6c;
extern uint *DAT_00570c70;
extern undefined4 *DAT_00570c74;
extern undefined4 DAT_00570c78;

// USA 00570BF0 <- EU 00570BC8 (Ghidra, non-matching)
// GLOBAL DAT_00570c64 uint *
// GLOBAL DAT_00570c68 undefined4 *
// GLOBAL DAT_00570c6c undefined4
// GLOBAL DAT_00570c70 uint *
// GLOBAL DAT_00570c74 undefined4 *
// GLOBAL DAT_00570c78 undefined4

undefined4 func_00570BF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00570c64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570c64), iVar1 != 0)) {
    *DAT_00570c68 = DAT_00570c6c;
  }
  if (DAT_00570c68 != param_2) {
    if (((*DAT_00570c70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570c70), iVar1 != 0)) {
      *DAT_00570c74 = DAT_00570c78;
    }
    if (DAT_00570c74 != param_2) {
      return 0;
    }
  }
  return 1;
}

