#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_004b9844;
extern undefined4 *DAT_004b9848;
extern undefined4 DAT_004b984c;
extern uint *DAT_004b9850;
extern undefined4 *DAT_004b9854;
extern undefined4 DAT_004b9858;
extern uint *DAT_004b985c;
extern undefined4 *DAT_004b9860;
extern undefined4 DAT_004b9864;
extern uint *DAT_004b9868;
extern undefined4 *DAT_004b986c;
extern undefined4 DAT_004b9870;

// USA 004B9748 <- EU 004B9720 (Ghidra, non-matching)
// GLOBAL DAT_004b9844 uint *
// GLOBAL DAT_004b9848 undefined4 *
// GLOBAL DAT_004b984c undefined4
// GLOBAL DAT_004b9850 uint *
// GLOBAL DAT_004b9854 undefined4 *
// GLOBAL DAT_004b9858 undefined4
// GLOBAL DAT_004b985c uint *
// GLOBAL DAT_004b9860 undefined4 *
// GLOBAL DAT_004b9864 undefined4
// GLOBAL DAT_004b9868 uint *
// GLOBAL DAT_004b986c undefined4 *
// GLOBAL DAT_004b9870 undefined4

undefined4 func_004B9748(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_004b9844 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004b9844), iVar1 != 0)) {
    *DAT_004b9848 = DAT_004b984c;
  }
  if (DAT_004b9848 != param_1) {
    if (((*DAT_004b9850 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004b9850), iVar1 != 0)) {
      *DAT_004b9854 = DAT_004b9858;
    }
    if (DAT_004b9854 != param_1) {
      if (((*DAT_004b985c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004b985c), iVar1 != 0)) {
        *DAT_004b9860 = DAT_004b9864;
      }
      if (DAT_004b9860 != param_1) {
        if (((*DAT_004b9868 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_004b9868), iVar1 != 0))
        {
          *DAT_004b986c = DAT_004b9870;
        }
        if (DAT_004b986c != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

