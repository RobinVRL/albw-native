#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051ec2c;
extern undefined4 *DAT_0051ec30;
extern undefined4 DAT_0051ec34;
extern uint *DAT_0051ec38;
extern undefined4 *DAT_0051ec3c;
extern undefined4 DAT_0051ec40;
extern uint *DAT_0051ec44;
extern undefined4 *DAT_0051ec48;
extern undefined4 DAT_0051ec4c;

// USA 0051EB74 <- EU 0051EB4C (Ghidra, non-matching)
// GLOBAL DAT_0051ec2c uint *
// GLOBAL DAT_0051ec30 undefined4 *
// GLOBAL DAT_0051ec34 undefined4
// GLOBAL DAT_0051ec38 uint *
// GLOBAL DAT_0051ec3c undefined4 *
// GLOBAL DAT_0051ec40 undefined4
// GLOBAL DAT_0051ec44 uint *
// GLOBAL DAT_0051ec48 undefined4 *
// GLOBAL DAT_0051ec4c undefined4

undefined4 func_0051EB74(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051ec2c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ec2c), iVar1 != 0)) {
    *DAT_0051ec30 = DAT_0051ec34;
  }
  if (DAT_0051ec30 != param_2) {
    if (((*DAT_0051ec38 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ec38), iVar1 != 0)) {
      *DAT_0051ec3c = DAT_0051ec40;
    }
    if (DAT_0051ec3c != param_2) {
      if (((*DAT_0051ec44 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051ec44), iVar1 != 0)) {
        *DAT_0051ec48 = DAT_0051ec4c;
      }
      if (DAT_0051ec48 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

