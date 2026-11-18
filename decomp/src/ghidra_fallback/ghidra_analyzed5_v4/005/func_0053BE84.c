#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053bf3c;
extern undefined4 *DAT_0053bf40;
extern undefined4 DAT_0053bf44;
extern uint *DAT_0053bf48;
extern undefined4 *DAT_0053bf4c;
extern undefined4 DAT_0053bf50;
extern uint *DAT_0053bf54;
extern undefined4 *DAT_0053bf58;
extern undefined4 DAT_0053bf5c;

// USA 0053BE84 <- EU 0053BE5C (Ghidra, non-matching)
// GLOBAL DAT_0053bf3c uint *
// GLOBAL DAT_0053bf40 undefined4 *
// GLOBAL DAT_0053bf44 undefined4
// GLOBAL DAT_0053bf48 uint *
// GLOBAL DAT_0053bf4c undefined4 *
// GLOBAL DAT_0053bf50 undefined4
// GLOBAL DAT_0053bf54 uint *
// GLOBAL DAT_0053bf58 undefined4 *
// GLOBAL DAT_0053bf5c undefined4

undefined4 func_0053BE84(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053bf3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bf3c), iVar1 != 0)) {
    *DAT_0053bf40 = DAT_0053bf44;
  }
  if (DAT_0053bf40 != param_2) {
    if (((*DAT_0053bf48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bf48), iVar1 != 0)) {
      *DAT_0053bf4c = DAT_0053bf50;
    }
    if (DAT_0053bf4c != param_2) {
      if (((*DAT_0053bf54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053bf54), iVar1 != 0)) {
        *DAT_0053bf58 = DAT_0053bf5c;
      }
      if (DAT_0053bf58 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

