#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00574b38;
extern undefined4 *DAT_00574b3c;
extern undefined4 DAT_00574b40;
extern uint *DAT_00574b44;
extern undefined4 *DAT_00574b48;
extern undefined4 DAT_00574b4c;
extern uint *DAT_00574b50;
extern undefined4 *DAT_00574b54;
extern undefined4 DAT_00574b58;
extern uint *DAT_00574b5c;
extern undefined4 *DAT_00574b60;
extern undefined4 DAT_00574b64;
extern uint *DAT_00574b68;
extern undefined4 *DAT_00574b6c;
extern undefined4 DAT_00574b70;

// USA 005749F8 <- EU 005749D0 (Ghidra, non-matching)
// GLOBAL DAT_00574b38 uint *
// GLOBAL DAT_00574b3c undefined4 *
// GLOBAL DAT_00574b40 undefined4
// GLOBAL DAT_00574b44 uint *
// GLOBAL DAT_00574b48 undefined4 *
// GLOBAL DAT_00574b4c undefined4
// GLOBAL DAT_00574b50 uint *
// GLOBAL DAT_00574b54 undefined4 *
// GLOBAL DAT_00574b58 undefined4
// GLOBAL DAT_00574b5c uint *
// GLOBAL DAT_00574b60 undefined4 *
// GLOBAL DAT_00574b64 undefined4
// GLOBAL DAT_00574b68 uint *
// GLOBAL DAT_00574b6c undefined4 *
// GLOBAL DAT_00574b70 undefined4

undefined4 func_005749F8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00574b38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574b38), iVar1 != 0)) {
    *DAT_00574b3c = DAT_00574b40;
  }
  if (DAT_00574b3c != param_2) {
    if (((*DAT_00574b44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574b44), iVar1 != 0)) {
      *DAT_00574b48 = DAT_00574b4c;
    }
    if (DAT_00574b48 != param_2) {
      if (((*DAT_00574b50 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574b50), iVar1 != 0)) {
        *DAT_00574b54 = DAT_00574b58;
      }
      if (DAT_00574b54 != param_2) {
        if (((*DAT_00574b5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574b5c), iVar1 != 0))
        {
          *DAT_00574b60 = DAT_00574b64;
        }
        if (DAT_00574b60 != param_2) {
          if (((*DAT_00574b68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00574b68), iVar1 != 0)
             ) {
            *DAT_00574b6c = DAT_00574b70;
          }
          if (DAT_00574b6c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

