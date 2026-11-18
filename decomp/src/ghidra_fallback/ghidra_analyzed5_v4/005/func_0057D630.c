#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057d658;
extern undefined4 *DAT_0057d65c;
extern undefined4 DAT_0057d660;

// USA 0057D630 <- EU 0057D608 (Ghidra, non-matching)
// GLOBAL DAT_0057d658 uint *
// GLOBAL DAT_0057d65c undefined4 *
// GLOBAL DAT_0057d660 undefined4

bool func_0057D630(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057d658 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d658), iVar1 != 0)) {
    *DAT_0057d65c = DAT_0057d660;
  }
  return DAT_0057d65c == param_2;
}

