#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534b5c;
extern undefined4 *DAT_00534b60;
extern undefined4 DAT_00534b64;
extern uint *DAT_00534b68;
extern undefined4 *DAT_00534b6c;
extern undefined4 DAT_00534b70;
extern uint *DAT_00534b74;
extern undefined4 *DAT_00534b78;
extern undefined4 DAT_00534b7c;

// USA 00534AA4 <- EU 00534A7C (Ghidra, non-matching)
// GLOBAL DAT_00534b5c uint *
// GLOBAL DAT_00534b60 undefined4 *
// GLOBAL DAT_00534b64 undefined4
// GLOBAL DAT_00534b68 uint *
// GLOBAL DAT_00534b6c undefined4 *
// GLOBAL DAT_00534b70 undefined4
// GLOBAL DAT_00534b74 uint *
// GLOBAL DAT_00534b78 undefined4 *
// GLOBAL DAT_00534b7c undefined4

undefined4 func_00534AA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534b5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534b5c), iVar1 != 0)) {
    *DAT_00534b60 = DAT_00534b64;
  }
  if (DAT_00534b60 != param_2) {
    if (((*DAT_00534b68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534b68), iVar1 != 0)) {
      *DAT_00534b6c = DAT_00534b70;
    }
    if (DAT_00534b6c != param_2) {
      if (((*DAT_00534b74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534b74), iVar1 != 0)) {
        *DAT_00534b78 = DAT_00534b7c;
      }
      if (DAT_00534b78 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

