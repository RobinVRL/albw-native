#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_00578280;
extern undefined4 *DAT_00578284;
extern undefined4 DAT_00578288;
extern uint *DAT_0057828c;
extern undefined4 *DAT_00578290;
extern undefined4 DAT_00578294;
extern uint *DAT_00578298;
extern undefined4 *DAT_0057829c;
extern undefined4 DAT_005782a0;

// USA 005781C4 <- EU 0057819C (Ghidra, non-matching)
// GLOBAL DAT_00578280 uint *
// GLOBAL DAT_00578284 undefined4 *
// GLOBAL DAT_00578288 undefined4
// GLOBAL DAT_0057828c uint *
// GLOBAL DAT_00578290 undefined4 *
// GLOBAL DAT_00578294 undefined4
// GLOBAL DAT_00578298 uint *
// GLOBAL DAT_0057829c undefined4 *
// GLOBAL DAT_005782a0 undefined4

undefined4 func_005781C4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_00578280 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578280), iVar1 != 0)) {
    *DAT_00578284 = DAT_00578288;
  }
  if (DAT_00578284 != param_2) {
    if (((*DAT_0057828c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057828c), iVar1 != 0)) {
      *DAT_00578290 = DAT_00578294;
    }
    if (DAT_00578290 != param_2) {
      if (((*DAT_00578298 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00578298), iVar1 != 0)) {
        *DAT_0057829c = DAT_005782a0;
      }
      if (DAT_0057829c != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

