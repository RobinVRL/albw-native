#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005700e0;
extern undefined4 *DAT_005700e4;
extern undefined4 DAT_005700e8;
extern uint *DAT_005700ec;
extern undefined4 *DAT_005700f0;
extern undefined4 DAT_005700f4;
extern uint *DAT_005700f8;
extern undefined4 *DAT_005700fc;
extern undefined4 DAT_00570100;
extern uint *DAT_00570104;
extern undefined4 *DAT_00570108;
extern undefined4 DAT_0057010c;

// USA 0056FFE4 <- EU 0056FFBC (Ghidra, non-matching)
// GLOBAL DAT_005700e0 uint *
// GLOBAL DAT_005700e4 undefined4 *
// GLOBAL DAT_005700e8 undefined4
// GLOBAL DAT_005700ec uint *
// GLOBAL DAT_005700f0 undefined4 *
// GLOBAL DAT_005700f4 undefined4
// GLOBAL DAT_005700f8 uint *
// GLOBAL DAT_005700fc undefined4 *
// GLOBAL DAT_00570100 undefined4
// GLOBAL DAT_00570104 uint *
// GLOBAL DAT_00570108 undefined4 *
// GLOBAL DAT_0057010c undefined4

undefined4 func_0056FFE4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005700e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005700e0), iVar1 != 0)) {
    *DAT_005700e4 = DAT_005700e8;
  }
  if (DAT_005700e4 != param_2) {
    if (((*DAT_005700ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005700ec), iVar1 != 0)) {
      *DAT_005700f0 = DAT_005700f4;
    }
    if (DAT_005700f0 != param_2) {
      if (((*DAT_005700f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005700f8), iVar1 != 0)) {
        *DAT_005700fc = DAT_00570100;
      }
      if (DAT_005700fc != param_2) {
        if (((*DAT_00570104 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00570104), iVar1 != 0))
        {
          *DAT_00570108 = DAT_0057010c;
        }
        if (DAT_00570108 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

