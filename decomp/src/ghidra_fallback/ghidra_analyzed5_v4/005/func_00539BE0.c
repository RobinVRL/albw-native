#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00539cdc;
extern undefined4 *DAT_00539ce0;
extern undefined4 DAT_00539ce4;
extern uint *DAT_00539ce8;
extern undefined4 *DAT_00539cec;
extern undefined4 DAT_00539cf0;
extern uint *DAT_00539cf4;
extern undefined4 *DAT_00539cf8;
extern undefined4 DAT_00539cfc;
extern uint *DAT_00539d00;
extern undefined4 *DAT_00539d04;
extern undefined4 DAT_00539d08;

// USA 00539BE0 <- EU 00539BB8 (Ghidra, non-matching)
// GLOBAL DAT_00539cdc uint *
// GLOBAL DAT_00539ce0 undefined4 *
// GLOBAL DAT_00539ce4 undefined4
// GLOBAL DAT_00539ce8 uint *
// GLOBAL DAT_00539cec undefined4 *
// GLOBAL DAT_00539cf0 undefined4
// GLOBAL DAT_00539cf4 uint *
// GLOBAL DAT_00539cf8 undefined4 *
// GLOBAL DAT_00539cfc undefined4
// GLOBAL DAT_00539d00 uint *
// GLOBAL DAT_00539d04 undefined4 *
// GLOBAL DAT_00539d08 undefined4

undefined4 func_00539BE0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00539cdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539cdc), iVar1 != 0)) {
    *DAT_00539ce0 = DAT_00539ce4;
  }
  if (DAT_00539ce0 != param_2) {
    if (((*DAT_00539ce8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539ce8), iVar1 != 0)) {
      *DAT_00539cec = DAT_00539cf0;
    }
    if (DAT_00539cec != param_2) {
      if (((*DAT_00539cf4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539cf4), iVar1 != 0)) {
        *DAT_00539cf8 = DAT_00539cfc;
      }
      if (DAT_00539cf8 != param_2) {
        if (((*DAT_00539d00 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00539d00), iVar1 != 0))
        {
          *DAT_00539d04 = DAT_00539d08;
        }
        if (DAT_00539d04 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

