#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00577b50;
extern undefined4 *DAT_00577b54;
extern undefined4 DAT_00577b58;
extern uint *DAT_00577b5c;
extern undefined4 *DAT_00577b60;
extern undefined4 DAT_00577b64;
extern uint *DAT_00577b68;
extern undefined4 *DAT_00577b6c;
extern undefined4 DAT_00577b70;
extern uint *DAT_00577b74;
extern undefined4 *DAT_00577b78;
extern undefined4 DAT_00577b7c;
extern uint *DAT_00577b80;
extern undefined4 *DAT_00577b84;
extern undefined4 DAT_00577b88;

// USA 00577A10 <- EU 005779E8 (Ghidra, non-matching)
// GLOBAL DAT_00577b50 uint *
// GLOBAL DAT_00577b54 undefined4 *
// GLOBAL DAT_00577b58 undefined4
// GLOBAL DAT_00577b5c uint *
// GLOBAL DAT_00577b60 undefined4 *
// GLOBAL DAT_00577b64 undefined4
// GLOBAL DAT_00577b68 uint *
// GLOBAL DAT_00577b6c undefined4 *
// GLOBAL DAT_00577b70 undefined4
// GLOBAL DAT_00577b74 uint *
// GLOBAL DAT_00577b78 undefined4 *
// GLOBAL DAT_00577b7c undefined4
// GLOBAL DAT_00577b80 uint *
// GLOBAL DAT_00577b84 undefined4 *
// GLOBAL DAT_00577b88 undefined4

undefined4 func_00577A10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00577b50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577b50), iVar1 != 0)) {
    *DAT_00577b54 = DAT_00577b58;
  }
  if (DAT_00577b54 != param_2) {
    if (((*DAT_00577b5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577b5c), iVar1 != 0)) {
      *DAT_00577b60 = DAT_00577b64;
    }
    if (DAT_00577b60 != param_2) {
      if (((*DAT_00577b68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577b68), iVar1 != 0)) {
        *DAT_00577b6c = DAT_00577b70;
      }
      if (DAT_00577b6c != param_2) {
        if (((*DAT_00577b74 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577b74), iVar1 != 0))
        {
          *DAT_00577b78 = DAT_00577b7c;
        }
        if (DAT_00577b78 != param_2) {
          if (((*DAT_00577b80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00577b80), iVar1 != 0)
             ) {
            *DAT_00577b84 = DAT_00577b88;
          }
          if (DAT_00577b84 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

