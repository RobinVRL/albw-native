#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005450a8;
extern undefined4 *DAT_005450ac;
extern undefined4 DAT_005450b0;
extern uint *DAT_005450b4;
extern undefined4 *DAT_005450b8;
extern undefined4 DAT_005450bc;
extern uint *DAT_005450c0;
extern undefined4 *DAT_005450c4;
extern undefined4 DAT_005450c8;

// USA 00544FF0 <- EU 00544FC8 (Ghidra, non-matching)
// GLOBAL DAT_005450a8 uint *
// GLOBAL DAT_005450ac undefined4 *
// GLOBAL DAT_005450b0 undefined4
// GLOBAL DAT_005450b4 uint *
// GLOBAL DAT_005450b8 undefined4 *
// GLOBAL DAT_005450bc undefined4
// GLOBAL DAT_005450c0 uint *
// GLOBAL DAT_005450c4 undefined4 *
// GLOBAL DAT_005450c8 undefined4

undefined4 func_00544FF0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005450a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005450a8), iVar1 != 0)) {
    *DAT_005450ac = DAT_005450b0;
  }
  if (DAT_005450ac != param_2) {
    if (((*DAT_005450b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005450b4), iVar1 != 0)) {
      *DAT_005450b8 = DAT_005450bc;
    }
    if (DAT_005450b8 != param_2) {
      if (((*DAT_005450c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005450c0), iVar1 != 0)) {
        *DAT_005450c4 = DAT_005450c8;
      }
      if (DAT_005450c4 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

