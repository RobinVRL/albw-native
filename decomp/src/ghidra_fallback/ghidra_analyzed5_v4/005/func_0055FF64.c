#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056001c;
extern undefined4 *DAT_00560020;
extern undefined4 DAT_00560024;
extern uint *DAT_00560028;
extern undefined4 *DAT_0056002c;
extern undefined4 DAT_00560030;
extern uint *DAT_00560034;
extern undefined4 *DAT_00560038;
extern undefined4 DAT_0056003c;

// USA 0055FF64 <- EU 0055FF3C (Ghidra, non-matching)
// GLOBAL DAT_0056001c uint *
// GLOBAL DAT_00560020 undefined4 *
// GLOBAL DAT_00560024 undefined4
// GLOBAL DAT_00560028 uint *
// GLOBAL DAT_0056002c undefined4 *
// GLOBAL DAT_00560030 undefined4
// GLOBAL DAT_00560034 uint *
// GLOBAL DAT_00560038 undefined4 *
// GLOBAL DAT_0056003c undefined4

undefined4 func_0055FF64(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056001c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056001c), iVar1 != 0)) {
    *DAT_00560020 = DAT_00560024;
  }
  if (DAT_00560020 != param_2) {
    if (((*DAT_00560028 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560028), iVar1 != 0)) {
      *DAT_0056002c = DAT_00560030;
    }
    if (DAT_0056002c != param_2) {
      if (((*DAT_00560034 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00560034), iVar1 != 0)) {
        *DAT_00560038 = DAT_0056003c;
      }
      if (DAT_00560038 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

