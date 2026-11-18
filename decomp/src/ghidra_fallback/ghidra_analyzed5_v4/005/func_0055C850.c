#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0055c90c;
extern undefined4 *DAT_0055c910;
extern undefined4 DAT_0055c914;
extern uint *DAT_0055c918;
extern undefined4 *DAT_0055c91c;
extern undefined4 DAT_0055c920;
extern uint *DAT_0055c924;
extern undefined4 *DAT_0055c928;
extern undefined4 DAT_0055c92c;

// USA 0055C850 <- EU 0055C828 (Ghidra, non-matching)
// GLOBAL DAT_0055c90c uint *
// GLOBAL DAT_0055c910 undefined4 *
// GLOBAL DAT_0055c914 undefined4
// GLOBAL DAT_0055c918 uint *
// GLOBAL DAT_0055c91c undefined4 *
// GLOBAL DAT_0055c920 undefined4
// GLOBAL DAT_0055c924 uint *
// GLOBAL DAT_0055c928 undefined4 *
// GLOBAL DAT_0055c92c undefined4

undefined4 func_0055C850(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055c90c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c90c), iVar1 != 0)) {
    *DAT_0055c910 = DAT_0055c914;
  }
  if (DAT_0055c910 != param_2) {
    if (((*DAT_0055c918 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c918), iVar1 != 0)) {
      *DAT_0055c91c = DAT_0055c920;
    }
    if (DAT_0055c91c != param_2) {
      if (((*DAT_0055c924 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c924), iVar1 != 0)) {
        *DAT_0055c928 = DAT_0055c92c;
      }
      if (DAT_0055c928 != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

