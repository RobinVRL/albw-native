#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057fa5c;
extern undefined4 *DAT_0057fa60;
extern undefined4 DAT_0057fa64;
extern uint *DAT_0057fa68;
extern undefined4 *DAT_0057fa6c;
extern undefined4 DAT_0057fa70;

// USA 0057F9E8 <- EU 0057F9C0 (Ghidra, non-matching)
// GLOBAL DAT_0057fa5c uint *
// GLOBAL DAT_0057fa60 undefined4 *
// GLOBAL DAT_0057fa64 undefined4
// GLOBAL DAT_0057fa68 uint *
// GLOBAL DAT_0057fa6c undefined4 *
// GLOBAL DAT_0057fa70 undefined4

undefined4 func_0057F9E8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057fa5c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fa5c), iVar1 != 0)) {
    *DAT_0057fa60 = DAT_0057fa64;
  }
  if (DAT_0057fa60 != param_2) {
    if (((*DAT_0057fa68 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057fa68), iVar1 != 0)) {
      *DAT_0057fa6c = DAT_0057fa70;
    }
    if (DAT_0057fa6c != param_2) {
      return 0;
    }
  }
  return 1;
}

