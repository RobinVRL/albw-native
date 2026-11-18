#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051eb28;
extern undefined4 *DAT_0051eb2c;
extern undefined4 DAT_0051eb30;
extern uint *DAT_0051eb34;
extern undefined4 *DAT_0051eb38;
extern undefined4 DAT_0051eb3c;
extern uint *DAT_0051eb40;
extern undefined4 *DAT_0051eb44;
extern undefined4 DAT_0051eb48;

// USA 0051EA70 <- EU 0051EA48 (Ghidra, non-matching)
// GLOBAL DAT_0051eb28 uint *
// GLOBAL DAT_0051eb2c undefined4 *
// GLOBAL DAT_0051eb30 undefined4
// GLOBAL DAT_0051eb34 uint *
// GLOBAL DAT_0051eb38 undefined4 *
// GLOBAL DAT_0051eb3c undefined4
// GLOBAL DAT_0051eb40 uint *
// GLOBAL DAT_0051eb44 undefined4 *
// GLOBAL DAT_0051eb48 undefined4

undefined4 func_0051EA70(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051eb28 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051eb28), iVar1 != 0)) {
    *DAT_0051eb2c = DAT_0051eb30;
  }
  if (DAT_0051eb2c != param_2) {
    if (((*DAT_0051eb34 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051eb34), iVar1 != 0)) {
      *DAT_0051eb38 = DAT_0051eb3c;
    }
    if (DAT_0051eb38 != param_2) {
      if (((*DAT_0051eb40 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051eb40), iVar1 != 0)) {
        *DAT_0051eb44 = DAT_0051eb48;
      }
      if (DAT_0051eb44 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

