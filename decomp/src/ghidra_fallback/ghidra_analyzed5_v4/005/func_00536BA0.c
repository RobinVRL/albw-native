#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00536c58;
extern undefined4 *DAT_00536c5c;
extern undefined4 DAT_00536c60;
extern uint *DAT_00536c64;
extern undefined4 *DAT_00536c68;
extern undefined4 DAT_00536c6c;
extern uint *DAT_00536c70;
extern undefined4 *DAT_00536c74;
extern undefined4 DAT_00536c78;

// USA 00536BA0 <- EU 00536B78 (Ghidra, non-matching)
// GLOBAL DAT_00536c58 uint *
// GLOBAL DAT_00536c5c undefined4 *
// GLOBAL DAT_00536c60 undefined4
// GLOBAL DAT_00536c64 uint *
// GLOBAL DAT_00536c68 undefined4 *
// GLOBAL DAT_00536c6c undefined4
// GLOBAL DAT_00536c70 uint *
// GLOBAL DAT_00536c74 undefined4 *
// GLOBAL DAT_00536c78 undefined4

undefined4 func_00536BA0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00536c58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536c58), iVar1 != 0)) {
    *DAT_00536c5c = DAT_00536c60;
  }
  if (DAT_00536c5c != param_2) {
    if (((*DAT_00536c64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536c64), iVar1 != 0)) {
      *DAT_00536c68 = DAT_00536c6c;
    }
    if (DAT_00536c68 != param_2) {
      if (((*DAT_00536c70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536c70), iVar1 != 0)) {
        *DAT_00536c74 = DAT_00536c78;
      }
      if (DAT_00536c74 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

