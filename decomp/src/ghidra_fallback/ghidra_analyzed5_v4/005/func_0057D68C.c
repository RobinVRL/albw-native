#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057d700;
extern undefined4 *DAT_0057d704;
extern undefined4 DAT_0057d708;
extern uint *DAT_0057d70c;
extern undefined4 *DAT_0057d710;
extern undefined4 DAT_0057d714;

// USA 0057D68C <- EU 0057D664 (Ghidra, non-matching)
// GLOBAL DAT_0057d700 uint *
// GLOBAL DAT_0057d704 undefined4 *
// GLOBAL DAT_0057d708 undefined4
// GLOBAL DAT_0057d70c uint *
// GLOBAL DAT_0057d710 undefined4 *
// GLOBAL DAT_0057d714 undefined4

undefined4 func_0057D68C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057d700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d700), iVar1 != 0)) {
    *DAT_0057d704 = DAT_0057d708;
  }
  if (DAT_0057d704 != param_2) {
    if (((*DAT_0057d70c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d70c), iVar1 != 0)) {
      *DAT_0057d710 = DAT_0057d714;
    }
    if (DAT_0057d710 != param_2) {
      return 0;
    }
  }
  return 1;
}

