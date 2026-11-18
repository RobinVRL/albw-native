#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00536b54;
extern undefined4 *DAT_00536b58;
extern undefined4 DAT_00536b5c;
extern uint *DAT_00536b60;
extern undefined4 *DAT_00536b64;
extern undefined4 DAT_00536b68;
extern uint *DAT_00536b6c;
extern undefined4 *DAT_00536b70;
extern undefined4 DAT_00536b74;

// USA 00536A9C <- EU 00536A74 (Ghidra, non-matching)
// GLOBAL DAT_00536b54 uint *
// GLOBAL DAT_00536b58 undefined4 *
// GLOBAL DAT_00536b5c undefined4
// GLOBAL DAT_00536b60 uint *
// GLOBAL DAT_00536b64 undefined4 *
// GLOBAL DAT_00536b68 undefined4
// GLOBAL DAT_00536b6c uint *
// GLOBAL DAT_00536b70 undefined4 *
// GLOBAL DAT_00536b74 undefined4

undefined4 func_00536A9C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00536b54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536b54), iVar1 != 0)) {
    *DAT_00536b58 = DAT_00536b5c;
  }
  if (DAT_00536b58 != param_2) {
    if (((*DAT_00536b60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536b60), iVar1 != 0)) {
      *DAT_00536b64 = DAT_00536b68;
    }
    if (DAT_00536b64 != param_2) {
      if (((*DAT_00536b6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00536b6c), iVar1 != 0)) {
        *DAT_00536b70 = DAT_00536b74;
      }
      if (DAT_00536b70 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

