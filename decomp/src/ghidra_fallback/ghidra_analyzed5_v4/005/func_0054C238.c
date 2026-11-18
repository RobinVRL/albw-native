#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c2f0;
extern undefined4 *DAT_0054c2f4;
extern undefined4 DAT_0054c2f8;
extern uint *DAT_0054c2fc;
extern undefined4 *DAT_0054c300;
extern undefined4 DAT_0054c304;
extern uint *DAT_0054c308;
extern undefined4 *DAT_0054c30c;
extern undefined4 DAT_0054c310;

// USA 0054C238 <- EU 0054C210 (Ghidra, non-matching)
// GLOBAL DAT_0054c2f0 uint *
// GLOBAL DAT_0054c2f4 undefined4 *
// GLOBAL DAT_0054c2f8 undefined4
// GLOBAL DAT_0054c2fc uint *
// GLOBAL DAT_0054c300 undefined4 *
// GLOBAL DAT_0054c304 undefined4
// GLOBAL DAT_0054c308 uint *
// GLOBAL DAT_0054c30c undefined4 *
// GLOBAL DAT_0054c310 undefined4

undefined4 func_0054C238(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c2f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c2f0), iVar1 != 0)) {
    *DAT_0054c2f4 = DAT_0054c2f8;
  }
  if (DAT_0054c2f4 != param_2) {
    if (((*DAT_0054c2fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c2fc), iVar1 != 0)) {
      *DAT_0054c300 = DAT_0054c304;
    }
    if (DAT_0054c300 != param_2) {
      if (((*DAT_0054c308 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c308), iVar1 != 0)) {
        *DAT_0054c30c = DAT_0054c310;
      }
      if (DAT_0054c30c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

