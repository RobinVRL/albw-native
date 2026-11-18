#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00559a38;
extern undefined4 *DAT_00559a3c;
extern undefined4 DAT_00559a40;
extern uint *DAT_00559a44;
extern undefined4 *DAT_00559a48;
extern undefined4 DAT_00559a4c;
extern uint *DAT_00559a50;
extern undefined4 *DAT_00559a54;
extern undefined4 DAT_00559a58;
extern uint *DAT_00559a5c;
extern undefined4 *DAT_00559a60;
extern undefined4 DAT_00559a64;
extern uint *DAT_00559a68;
extern undefined4 *DAT_00559a6c;
extern undefined4 DAT_00559a70;
extern uint *DAT_00559a74;
extern undefined4 *DAT_00559a78;
extern undefined4 DAT_00559a7c;

// USA 005598B4 <- EU 0055988C (Ghidra, non-matching)
// GLOBAL DAT_00559a38 uint *
// GLOBAL DAT_00559a3c undefined4 *
// GLOBAL DAT_00559a40 undefined4
// GLOBAL DAT_00559a44 uint *
// GLOBAL DAT_00559a48 undefined4 *
// GLOBAL DAT_00559a4c undefined4
// GLOBAL DAT_00559a50 uint *
// GLOBAL DAT_00559a54 undefined4 *
// GLOBAL DAT_00559a58 undefined4
// GLOBAL DAT_00559a5c uint *
// GLOBAL DAT_00559a60 undefined4 *
// GLOBAL DAT_00559a64 undefined4
// GLOBAL DAT_00559a68 uint *
// GLOBAL DAT_00559a6c undefined4 *
// GLOBAL DAT_00559a70 undefined4
// GLOBAL DAT_00559a74 uint *
// GLOBAL DAT_00559a78 undefined4 *
// GLOBAL DAT_00559a7c undefined4

undefined4 func_005598B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00559a38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559a38), iVar1 != 0)) {
    *DAT_00559a3c = DAT_00559a40;
  }
  if (DAT_00559a3c != param_2) {
    if (((*DAT_00559a44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559a44), iVar1 != 0)) {
      *DAT_00559a48 = DAT_00559a4c;
    }
    if (DAT_00559a48 != param_2) {
      if (((*DAT_00559a50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559a50), iVar1 != 0)) {
        *DAT_00559a54 = DAT_00559a58;
      }
      if (DAT_00559a54 != param_2) {
        if (((*DAT_00559a5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559a5c), iVar1 != 0))
        {
          *DAT_00559a60 = DAT_00559a64;
        }
        if (DAT_00559a60 != param_2) {
          if (((*DAT_00559a68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00559a68), iVar1 != 0)
             ) {
            *DAT_00559a6c = DAT_00559a70;
          }
          if (DAT_00559a6c != param_2) {
            if (((*DAT_00559a74 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00559a74), iVar1 != 0)) {
              *DAT_00559a78 = DAT_00559a7c;
            }
            if (DAT_00559a78 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

