#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00652b38;
extern undefined4 *DAT_00652b3c;
extern undefined4 DAT_00652b40;
extern uint *DAT_00652b44;
extern undefined4 *DAT_00652b48;
extern undefined4 DAT_00652b4c;
extern uint *DAT_00652b50;
extern undefined4 *DAT_00652b54;
extern undefined4 DAT_00652b58;
extern uint *DAT_00652b5c;
extern undefined4 *DAT_00652b60;
extern undefined4 DAT_00652b64;
extern uint *DAT_00652b68;
extern undefined4 *DAT_00652b6c;
extern undefined4 DAT_00652b70;
extern uint *DAT_00652b74;
extern undefined4 *DAT_00652b78;
extern undefined4 DAT_00652b7c;
extern uint *DAT_00652b80;
extern undefined4 *DAT_00652b84;
extern undefined4 DAT_00652b88;

// USA 00652970 <- EU 00652948 (Ghidra, non-matching)
// GLOBAL DAT_00652b38 uint *
// GLOBAL DAT_00652b3c undefined4 *
// GLOBAL DAT_00652b40 undefined4
// GLOBAL DAT_00652b44 uint *
// GLOBAL DAT_00652b48 undefined4 *
// GLOBAL DAT_00652b4c undefined4
// GLOBAL DAT_00652b50 uint *
// GLOBAL DAT_00652b54 undefined4 *
// GLOBAL DAT_00652b58 undefined4
// GLOBAL DAT_00652b5c uint *
// GLOBAL DAT_00652b60 undefined4 *
// GLOBAL DAT_00652b64 undefined4
// GLOBAL DAT_00652b68 uint *
// GLOBAL DAT_00652b6c undefined4 *
// GLOBAL DAT_00652b70 undefined4
// GLOBAL DAT_00652b74 uint *
// GLOBAL DAT_00652b78 undefined4 *
// GLOBAL DAT_00652b7c undefined4
// GLOBAL DAT_00652b80 uint *
// GLOBAL DAT_00652b84 undefined4 *
// GLOBAL DAT_00652b88 undefined4

undefined4 func_00652970(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_00652b38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00652b38), iVar1 != 0)) {
    *DAT_00652b3c = DAT_00652b40;
  }
  if (DAT_00652b3c != param_1) {
    if (((*DAT_00652b44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00652b44), iVar1 != 0)) {
      *DAT_00652b48 = DAT_00652b4c;
    }
    if (DAT_00652b48 != param_1) {
      if (((*DAT_00652b50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00652b50), iVar1 != 0)) {
        *DAT_00652b54 = DAT_00652b58;
      }
      if (DAT_00652b54 != param_1) {
        if (((*DAT_00652b5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00652b5c), iVar1 != 0))
        {
          *DAT_00652b60 = DAT_00652b64;
        }
        if (DAT_00652b60 != param_1) {
          if (((*DAT_00652b68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00652b68), iVar1 != 0)
             ) {
            *DAT_00652b6c = DAT_00652b70;
          }
          if (DAT_00652b6c != param_1) {
            if (((*DAT_00652b74 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00652b74), iVar1 != 0)) {
              *DAT_00652b78 = DAT_00652b7c;
            }
            if (DAT_00652b78 != param_1) {
              if (((*DAT_00652b80 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00652b80), iVar1 != 0)) {
                *DAT_00652b84 = DAT_00652b88;
              }
              if (DAT_00652b84 != param_1) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

