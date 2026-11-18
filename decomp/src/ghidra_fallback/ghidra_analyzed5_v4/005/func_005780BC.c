#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00578178;
extern undefined4 *DAT_0057817c;
extern undefined4 DAT_00578180;
extern uint *DAT_00578184;
extern undefined4 *DAT_00578188;
extern undefined4 DAT_0057818c;
extern uint *DAT_00578190;
extern undefined4 *DAT_00578194;
extern undefined4 DAT_00578198;

// USA 005780BC <- EU 00578094 (Ghidra, non-matching)
// GLOBAL DAT_00578178 uint *
// GLOBAL DAT_0057817c undefined4 *
// GLOBAL DAT_00578180 undefined4
// GLOBAL DAT_00578184 uint *
// GLOBAL DAT_00578188 undefined4 *
// GLOBAL DAT_0057818c undefined4
// GLOBAL DAT_00578190 uint *
// GLOBAL DAT_00578194 undefined4 *
// GLOBAL DAT_00578198 undefined4

undefined4 func_005780BC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00578178 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578178), iVar1 != 0)) {
    *DAT_0057817c = DAT_00578180;
  }
  if (DAT_0057817c != param_2) {
    if (((*DAT_00578184 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578184), iVar1 != 0)) {
      *DAT_00578188 = DAT_0057818c;
    }
    if (DAT_00578188 != param_2) {
      if (((*DAT_00578190 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578190), iVar1 != 0)) {
        *DAT_00578194 = DAT_00578198;
      }
      if (DAT_00578194 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

