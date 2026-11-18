#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055a5a0;
extern undefined4 *DAT_0055a5a4;
extern undefined4 DAT_0055a5a8;
extern uint *DAT_0055a5ac;
extern undefined4 *DAT_0055a5b0;
extern undefined4 DAT_0055a5b4;

// USA 0055A52C <- EU 0055A504 (Ghidra, non-matching)
// GLOBAL DAT_0055a5a0 uint *
// GLOBAL DAT_0055a5a4 undefined4 *
// GLOBAL DAT_0055a5a8 undefined4
// GLOBAL DAT_0055a5ac uint *
// GLOBAL DAT_0055a5b0 undefined4 *
// GLOBAL DAT_0055a5b4 undefined4

undefined4 func_0055A52C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055a5a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a5a0), iVar1 != 0)) {
    *DAT_0055a5a4 = DAT_0055a5a8;
  }
  if (DAT_0055a5a4 != param_2) {
    if (((*DAT_0055a5ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a5ac), iVar1 != 0)) {
      *DAT_0055a5b0 = DAT_0055a5b4;
    }
    if (DAT_0055a5b0 != param_2) {
      return 0;
    }
  }
  return 1;
}

