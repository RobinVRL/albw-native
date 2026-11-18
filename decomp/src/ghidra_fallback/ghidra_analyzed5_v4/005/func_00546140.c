#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005461f8;
extern undefined4 *DAT_005461fc;
extern undefined4 DAT_00546200;
extern uint *DAT_00546204;
extern undefined4 *DAT_00546208;
extern undefined4 DAT_0054620c;
extern uint *DAT_00546210;
extern undefined4 *DAT_00546214;
extern undefined4 DAT_00546218;

// USA 00546140 <- EU 00546118 (Ghidra, non-matching)
// GLOBAL DAT_005461f8 uint *
// GLOBAL DAT_005461fc undefined4 *
// GLOBAL DAT_00546200 undefined4
// GLOBAL DAT_00546204 uint *
// GLOBAL DAT_00546208 undefined4 *
// GLOBAL DAT_0054620c undefined4
// GLOBAL DAT_00546210 uint *
// GLOBAL DAT_00546214 undefined4 *
// GLOBAL DAT_00546218 undefined4

undefined4 func_00546140(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005461f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005461f8), iVar1 != 0)) {
    *DAT_005461fc = DAT_00546200;
  }
  if (DAT_005461fc != param_2) {
    if (((*DAT_00546204 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546204), iVar1 != 0)) {
      *DAT_00546208 = DAT_0054620c;
    }
    if (DAT_00546208 != param_2) {
      if (((*DAT_00546210 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00546210), iVar1 != 0)) {
        *DAT_00546214 = DAT_00546218;
      }
      if (DAT_00546214 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

