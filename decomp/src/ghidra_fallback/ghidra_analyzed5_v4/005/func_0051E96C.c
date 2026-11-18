#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051ea24;
extern undefined4 *DAT_0051ea28;
extern undefined4 DAT_0051ea2c;
extern uint *DAT_0051ea30;
extern undefined4 *DAT_0051ea34;
extern undefined4 DAT_0051ea38;
extern uint *DAT_0051ea3c;
extern undefined4 *DAT_0051ea40;
extern undefined4 DAT_0051ea44;

// USA 0051E96C <- EU 0051E944 (Ghidra, non-matching)
// GLOBAL DAT_0051ea24 uint *
// GLOBAL DAT_0051ea28 undefined4 *
// GLOBAL DAT_0051ea2c undefined4
// GLOBAL DAT_0051ea30 uint *
// GLOBAL DAT_0051ea34 undefined4 *
// GLOBAL DAT_0051ea38 undefined4
// GLOBAL DAT_0051ea3c uint *
// GLOBAL DAT_0051ea40 undefined4 *
// GLOBAL DAT_0051ea44 undefined4

undefined4 func_0051E96C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051ea24 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ea24), iVar1 != 0)) {
    *DAT_0051ea28 = DAT_0051ea2c;
  }
  if (DAT_0051ea28 != param_2) {
    if (((*DAT_0051ea30 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ea30), iVar1 != 0)) {
      *DAT_0051ea34 = DAT_0051ea38;
    }
    if (DAT_0051ea34 != param_2) {
      if (((*DAT_0051ea3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ea3c), iVar1 != 0)) {
        *DAT_0051ea40 = DAT_0051ea44;
      }
      if (DAT_0051ea40 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

