#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00558874;
extern undefined4 *DAT_00558878;
extern undefined4 DAT_0055887c;
extern uint *DAT_00558880;
extern undefined4 *DAT_00558884;
extern undefined4 DAT_00558888;
extern uint *DAT_0055888c;
extern undefined4 *DAT_00558890;
extern undefined4 DAT_00558894;
extern uint *DAT_00558898;
extern undefined4 *DAT_0055889c;
extern undefined4 DAT_005588a0;

// USA 00558778 <- EU 00558750 (Ghidra, non-matching)
// GLOBAL DAT_00558874 uint *
// GLOBAL DAT_00558878 undefined4 *
// GLOBAL DAT_0055887c undefined4
// GLOBAL DAT_00558880 uint *
// GLOBAL DAT_00558884 undefined4 *
// GLOBAL DAT_00558888 undefined4
// GLOBAL DAT_0055888c uint *
// GLOBAL DAT_00558890 undefined4 *
// GLOBAL DAT_00558894 undefined4
// GLOBAL DAT_00558898 uint *
// GLOBAL DAT_0055889c undefined4 *
// GLOBAL DAT_005588a0 undefined4

undefined4 func_00558778(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00558874 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558874), iVar1 != 0)) {
    *DAT_00558878 = DAT_0055887c;
  }
  if (DAT_00558878 != param_2) {
    if (((*DAT_00558880 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558880), iVar1 != 0)) {
      *DAT_00558884 = DAT_00558888;
    }
    if (DAT_00558884 != param_2) {
      if (((*DAT_0055888c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055888c), iVar1 != 0)) {
        *DAT_00558890 = DAT_00558894;
      }
      if (DAT_00558890 != param_2) {
        if (((*DAT_00558898 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00558898), iVar1 != 0))
        {
          *DAT_0055889c = DAT_005588a0;
        }
        if (DAT_0055889c != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

