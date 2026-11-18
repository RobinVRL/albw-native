#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00544194;
extern undefined4 *DAT_00544198;
extern undefined4 DAT_0054419c;
extern uint *DAT_005441a0;
extern undefined4 *DAT_005441a4;
extern undefined4 DAT_005441a8;
extern uint *DAT_005441ac;
extern undefined4 *DAT_005441b0;
extern undefined4 DAT_005441b4;
extern uint *DAT_005441b8;
extern undefined4 *DAT_005441bc;
extern undefined4 DAT_005441c0;

// USA 00544098 <- EU 00544070 (Ghidra, non-matching)
// GLOBAL DAT_00544194 uint *
// GLOBAL DAT_00544198 undefined4 *
// GLOBAL DAT_0054419c undefined4
// GLOBAL DAT_005441a0 uint *
// GLOBAL DAT_005441a4 undefined4 *
// GLOBAL DAT_005441a8 undefined4
// GLOBAL DAT_005441ac uint *
// GLOBAL DAT_005441b0 undefined4 *
// GLOBAL DAT_005441b4 undefined4
// GLOBAL DAT_005441b8 uint *
// GLOBAL DAT_005441bc undefined4 *
// GLOBAL DAT_005441c0 undefined4

undefined4 func_00544098(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00544194 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00544194), iVar1 != 0)) {
    *DAT_00544198 = DAT_0054419c;
  }
  if (DAT_00544198 != param_2) {
    if (((*DAT_005441a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005441a0), iVar1 != 0)) {
      *DAT_005441a4 = DAT_005441a8;
    }
    if (DAT_005441a4 != param_2) {
      if (((*DAT_005441ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005441ac), iVar1 != 0)) {
        *DAT_005441b0 = DAT_005441b4;
      }
      if (DAT_005441b0 != param_2) {
        if (((*DAT_005441b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005441b8), iVar1 != 0))
        {
          *DAT_005441bc = DAT_005441c0;
        }
        if (DAT_005441bc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

