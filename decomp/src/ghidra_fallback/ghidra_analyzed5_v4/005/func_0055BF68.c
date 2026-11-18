#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055bfdc;
extern undefined4 *DAT_0055bfe0;
extern undefined4 DAT_0055bfe4;
extern uint *DAT_0055bfe8;
extern undefined4 *DAT_0055bfec;
extern undefined4 DAT_0055bff0;

// USA 0055BF68 <- EU 0055BF40 (Ghidra, non-matching)
// GLOBAL DAT_0055bfdc uint *
// GLOBAL DAT_0055bfe0 undefined4 *
// GLOBAL DAT_0055bfe4 undefined4
// GLOBAL DAT_0055bfe8 uint *
// GLOBAL DAT_0055bfec undefined4 *
// GLOBAL DAT_0055bff0 undefined4

undefined4 func_0055BF68(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055bfdc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bfdc), iVar1 != 0)) {
    *DAT_0055bfe0 = DAT_0055bfe4;
  }
  if (DAT_0055bfe0 != param_2) {
    if (((*DAT_0055bfe8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055bfe8), iVar1 != 0)) {
      *DAT_0055bfec = DAT_0055bff0;
    }
    if (DAT_0055bfec != param_2) {
      return 0;
    }
  }
  return 1;
}

