#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057fd5c;
extern undefined4 *DAT_0057fd60;
extern undefined4 DAT_0057fd64;
extern uint *DAT_0057fd68;
extern undefined4 *DAT_0057fd6c;
extern undefined4 DAT_0057fd70;

// USA 0057FCE8 <- EU 0057FCC0 (Ghidra, non-matching)
// GLOBAL DAT_0057fd5c uint *
// GLOBAL DAT_0057fd60 undefined4 *
// GLOBAL DAT_0057fd64 undefined4
// GLOBAL DAT_0057fd68 uint *
// GLOBAL DAT_0057fd6c undefined4 *
// GLOBAL DAT_0057fd70 undefined4

undefined4 func_0057FCE8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057fd5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fd5c), iVar1 != 0)) {
    *DAT_0057fd60 = DAT_0057fd64;
  }
  if (DAT_0057fd60 != param_2) {
    if (((*DAT_0057fd68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fd68), iVar1 != 0)) {
      *DAT_0057fd6c = DAT_0057fd70;
    }
    if (DAT_0057fd6c != param_2) {
      return 0;
    }
  }
  return 1;
}

