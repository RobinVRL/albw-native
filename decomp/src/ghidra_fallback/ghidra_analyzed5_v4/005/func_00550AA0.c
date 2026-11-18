#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00550b58;
extern undefined4 *DAT_00550b5c;
extern undefined4 DAT_00550b60;
extern uint *DAT_00550b64;
extern undefined4 *DAT_00550b68;
extern undefined4 DAT_00550b6c;
extern uint *DAT_00550b70;
extern undefined4 *DAT_00550b74;
extern undefined4 DAT_00550b78;

// USA 00550AA0 <- EU 00550A78 (Ghidra, non-matching)
// GLOBAL DAT_00550b58 uint *
// GLOBAL DAT_00550b5c undefined4 *
// GLOBAL DAT_00550b60 undefined4
// GLOBAL DAT_00550b64 uint *
// GLOBAL DAT_00550b68 undefined4 *
// GLOBAL DAT_00550b6c undefined4
// GLOBAL DAT_00550b70 uint *
// GLOBAL DAT_00550b74 undefined4 *
// GLOBAL DAT_00550b78 undefined4

undefined4 func_00550AA0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00550b58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550b58), iVar1 != 0)) {
    *DAT_00550b5c = DAT_00550b60;
  }
  if (DAT_00550b5c != param_2) {
    if (((*DAT_00550b64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550b64), iVar1 != 0)) {
      *DAT_00550b68 = DAT_00550b6c;
    }
    if (DAT_00550b68 != param_2) {
      if (((*DAT_00550b70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550b70), iVar1 != 0)) {
        *DAT_00550b74 = DAT_00550b78;
      }
      if (DAT_00550b74 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

