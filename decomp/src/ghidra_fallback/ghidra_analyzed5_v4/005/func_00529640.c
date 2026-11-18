#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005296f8;
extern undefined4 *DAT_005296fc;
extern undefined4 DAT_00529700;
extern uint *DAT_00529704;
extern undefined4 *DAT_00529708;
extern undefined4 DAT_0052970c;
extern uint *DAT_00529710;
extern undefined4 *DAT_00529714;
extern undefined4 DAT_00529718;

// USA 00529640 <- EU 00529618 (Ghidra, non-matching)
// GLOBAL DAT_005296f8 uint *
// GLOBAL DAT_005296fc undefined4 *
// GLOBAL DAT_00529700 undefined4
// GLOBAL DAT_00529704 uint *
// GLOBAL DAT_00529708 undefined4 *
// GLOBAL DAT_0052970c undefined4
// GLOBAL DAT_00529710 uint *
// GLOBAL DAT_00529714 undefined4 *
// GLOBAL DAT_00529718 undefined4

undefined4 func_00529640(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005296f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005296f8), iVar1 != 0)) {
    *DAT_005296fc = DAT_00529700;
  }
  if (DAT_005296fc != param_2) {
    if (((*DAT_00529704 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529704), iVar1 != 0)) {
      *DAT_00529708 = DAT_0052970c;
    }
    if (DAT_00529708 != param_2) {
      if (((*DAT_00529710 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00529710), iVar1 != 0)) {
        *DAT_00529714 = DAT_00529718;
      }
      if (DAT_00529714 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

