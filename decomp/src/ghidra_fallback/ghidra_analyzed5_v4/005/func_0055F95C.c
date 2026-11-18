#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055fa14;
extern undefined4 *DAT_0055fa18;
extern undefined4 DAT_0055fa1c;
extern uint *DAT_0055fa20;
extern undefined4 *DAT_0055fa24;
extern undefined4 DAT_0055fa28;
extern uint *DAT_0055fa2c;
extern undefined4 *DAT_0055fa30;
extern undefined4 DAT_0055fa34;

// USA 0055F95C <- EU 0055F934 (Ghidra, non-matching)
// GLOBAL DAT_0055fa14 uint *
// GLOBAL DAT_0055fa18 undefined4 *
// GLOBAL DAT_0055fa1c undefined4
// GLOBAL DAT_0055fa20 uint *
// GLOBAL DAT_0055fa24 undefined4 *
// GLOBAL DAT_0055fa28 undefined4
// GLOBAL DAT_0055fa2c uint *
// GLOBAL DAT_0055fa30 undefined4 *
// GLOBAL DAT_0055fa34 undefined4

undefined4 func_0055F95C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055fa14 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055fa14), iVar1 != 0)) {
    *DAT_0055fa18 = DAT_0055fa1c;
  }
  if (DAT_0055fa18 != param_2) {
    if (((*DAT_0055fa20 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055fa20), iVar1 != 0)) {
      *DAT_0055fa24 = DAT_0055fa28;
    }
    if (DAT_0055fa24 != param_2) {
      if (((*DAT_0055fa2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055fa2c), iVar1 != 0)) {
        *DAT_0055fa30 = DAT_0055fa34;
      }
      if (DAT_0055fa30 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

