#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00575a14;
extern undefined4 *DAT_00575a18;
extern undefined4 DAT_00575a1c;
extern uint *DAT_00575a20;
extern undefined4 *DAT_00575a24;
extern undefined4 DAT_00575a28;
extern uint *DAT_00575a2c;
extern undefined4 *DAT_00575a30;
extern undefined4 DAT_00575a34;
extern uint *DAT_00575a38;
extern undefined4 *DAT_00575a3c;
extern undefined4 DAT_00575a40;
extern uint *DAT_00575a44;
extern undefined4 *DAT_00575a48;
extern undefined4 DAT_00575a4c;

// USA 005758D4 <- EU 005758AC (Ghidra, non-matching)
// GLOBAL DAT_00575a14 uint *
// GLOBAL DAT_00575a18 undefined4 *
// GLOBAL DAT_00575a1c undefined4
// GLOBAL DAT_00575a20 uint *
// GLOBAL DAT_00575a24 undefined4 *
// GLOBAL DAT_00575a28 undefined4
// GLOBAL DAT_00575a2c uint *
// GLOBAL DAT_00575a30 undefined4 *
// GLOBAL DAT_00575a34 undefined4
// GLOBAL DAT_00575a38 uint *
// GLOBAL DAT_00575a3c undefined4 *
// GLOBAL DAT_00575a40 undefined4
// GLOBAL DAT_00575a44 uint *
// GLOBAL DAT_00575a48 undefined4 *
// GLOBAL DAT_00575a4c undefined4

undefined4 func_005758D4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00575a14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575a14), iVar1 != 0)) {
    *DAT_00575a18 = DAT_00575a1c;
  }
  if (DAT_00575a18 != param_2) {
    if (((*DAT_00575a20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575a20), iVar1 != 0)) {
      *DAT_00575a24 = DAT_00575a28;
    }
    if (DAT_00575a24 != param_2) {
      if (((*DAT_00575a2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575a2c), iVar1 != 0)) {
        *DAT_00575a30 = DAT_00575a34;
      }
      if (DAT_00575a30 != param_2) {
        if (((*DAT_00575a38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575a38), iVar1 != 0))
        {
          *DAT_00575a3c = DAT_00575a40;
        }
        if (DAT_00575a3c != param_2) {
          if (((*DAT_00575a44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00575a44), iVar1 != 0)
             ) {
            *DAT_00575a48 = DAT_00575a4c;
          }
          if (DAT_00575a48 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

