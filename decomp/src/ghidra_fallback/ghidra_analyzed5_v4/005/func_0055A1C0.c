#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055a234;
extern undefined4 *DAT_0055a238;
extern undefined4 DAT_0055a23c;
extern uint *DAT_0055a240;
extern undefined4 *DAT_0055a244;
extern undefined4 DAT_0055a248;

// USA 0055A1C0 <- EU 0055A198 (Ghidra, non-matching)
// GLOBAL DAT_0055a234 uint *
// GLOBAL DAT_0055a238 undefined4 *
// GLOBAL DAT_0055a23c undefined4
// GLOBAL DAT_0055a240 uint *
// GLOBAL DAT_0055a244 undefined4 *
// GLOBAL DAT_0055a248 undefined4

undefined4 func_0055A1C0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055a234 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a234), iVar1 != 0)) {
    *DAT_0055a238 = DAT_0055a23c;
  }
  if (DAT_0055a238 != param_2) {
    if (((*DAT_0055a240 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a240), iVar1 != 0)) {
      *DAT_0055a244 = DAT_0055a248;
    }
    if (DAT_0055a244 != param_2) {
      return 0;
    }
  }
  return 1;
}

