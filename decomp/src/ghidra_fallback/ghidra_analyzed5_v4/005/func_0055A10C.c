#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055a180;
extern undefined4 *DAT_0055a184;
extern undefined4 DAT_0055a188;
extern uint *DAT_0055a18c;
extern undefined4 *DAT_0055a190;
extern undefined4 DAT_0055a194;

// USA 0055A10C <- EU 0055A0E4 (Ghidra, non-matching)
// GLOBAL DAT_0055a180 uint *
// GLOBAL DAT_0055a184 undefined4 *
// GLOBAL DAT_0055a188 undefined4
// GLOBAL DAT_0055a18c uint *
// GLOBAL DAT_0055a190 undefined4 *
// GLOBAL DAT_0055a194 undefined4

undefined4 func_0055A10C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055a180 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a180), iVar1 != 0)) {
    *DAT_0055a184 = DAT_0055a188;
  }
  if (DAT_0055a184 != param_2) {
    if (((*DAT_0055a18c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a18c), iVar1 != 0)) {
      *DAT_0055a190 = DAT_0055a194;
    }
    if (DAT_0055a190 != param_2) {
      return 0;
    }
  }
  return 1;
}

