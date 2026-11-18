#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055cb58;
extern undefined4 *DAT_0055cb5c;
extern undefined4 DAT_0055cb60;
extern uint *DAT_0055cb64;
extern undefined4 *DAT_0055cb68;
extern undefined4 DAT_0055cb6c;
extern uint *DAT_0055cb70;
extern undefined4 *DAT_0055cb74;
extern undefined4 DAT_0055cb78;
extern uint *DAT_0055cb7c;
extern undefined4 *DAT_0055cb80;
extern undefined4 DAT_0055cb84;

// USA 0055CA5C <- EU 0055CA34 (Ghidra, non-matching)
// GLOBAL DAT_0055cb58 uint *
// GLOBAL DAT_0055cb5c undefined4 *
// GLOBAL DAT_0055cb60 undefined4
// GLOBAL DAT_0055cb64 uint *
// GLOBAL DAT_0055cb68 undefined4 *
// GLOBAL DAT_0055cb6c undefined4
// GLOBAL DAT_0055cb70 uint *
// GLOBAL DAT_0055cb74 undefined4 *
// GLOBAL DAT_0055cb78 undefined4
// GLOBAL DAT_0055cb7c uint *
// GLOBAL DAT_0055cb80 undefined4 *
// GLOBAL DAT_0055cb84 undefined4

undefined4 func_0055CA5C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055cb58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cb58), iVar1 != 0)) {
    *DAT_0055cb5c = DAT_0055cb60;
  }
  if (DAT_0055cb5c != param_2) {
    if (((*DAT_0055cb64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cb64), iVar1 != 0)) {
      *DAT_0055cb68 = DAT_0055cb6c;
    }
    if (DAT_0055cb68 != param_2) {
      if (((*DAT_0055cb70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cb70), iVar1 != 0)) {
        *DAT_0055cb74 = DAT_0055cb78;
      }
      if (DAT_0055cb74 != param_2) {
        if (((*DAT_0055cb7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055cb7c), iVar1 != 0))
        {
          *DAT_0055cb80 = DAT_0055cb84;
        }
        if (DAT_0055cb80 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

