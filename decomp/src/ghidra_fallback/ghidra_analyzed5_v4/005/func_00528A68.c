#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00528b64;
extern undefined4 *DAT_00528b68;
extern undefined4 DAT_00528b6c;
extern uint *DAT_00528b70;
extern undefined4 *DAT_00528b74;
extern undefined4 DAT_00528b78;
extern uint *DAT_00528b7c;
extern undefined4 *DAT_00528b80;
extern undefined4 DAT_00528b84;
extern uint *DAT_00528b88;
extern undefined4 *DAT_00528b8c;
extern undefined4 DAT_00528b90;

// USA 00528A68 <- EU 00528A40 (Ghidra, non-matching)
// GLOBAL DAT_00528b64 uint *
// GLOBAL DAT_00528b68 undefined4 *
// GLOBAL DAT_00528b6c undefined4
// GLOBAL DAT_00528b70 uint *
// GLOBAL DAT_00528b74 undefined4 *
// GLOBAL DAT_00528b78 undefined4
// GLOBAL DAT_00528b7c uint *
// GLOBAL DAT_00528b80 undefined4 *
// GLOBAL DAT_00528b84 undefined4
// GLOBAL DAT_00528b88 uint *
// GLOBAL DAT_00528b8c undefined4 *
// GLOBAL DAT_00528b90 undefined4

undefined4 func_00528A68(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00528b64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528b64), iVar1 != 0)) {
    *DAT_00528b68 = DAT_00528b6c;
  }
  if (DAT_00528b68 != param_2) {
    if (((*DAT_00528b70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528b70), iVar1 != 0)) {
      *DAT_00528b74 = DAT_00528b78;
    }
    if (DAT_00528b74 != param_2) {
      if (((*DAT_00528b7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528b7c), iVar1 != 0)) {
        *DAT_00528b80 = DAT_00528b84;
      }
      if (DAT_00528b80 != param_2) {
        if (((*DAT_00528b88 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00528b88), iVar1 != 0))
        {
          *DAT_00528b8c = DAT_00528b90;
        }
        if (DAT_00528b8c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

