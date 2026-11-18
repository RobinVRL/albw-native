#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00524450;
extern undefined4 *DAT_00524454;
extern undefined4 DAT_00524458;
extern uint *DAT_0052445c;
extern undefined4 *DAT_00524460;
extern undefined4 DAT_00524464;
extern uint *DAT_00524468;
extern undefined4 *DAT_0052446c;
extern undefined4 DAT_00524470;

// USA 00524398 <- EU 00524370 (Ghidra, non-matching)
// GLOBAL DAT_00524450 uint *
// GLOBAL DAT_00524454 undefined4 *
// GLOBAL DAT_00524458 undefined4
// GLOBAL DAT_0052445c uint *
// GLOBAL DAT_00524460 undefined4 *
// GLOBAL DAT_00524464 undefined4
// GLOBAL DAT_00524468 uint *
// GLOBAL DAT_0052446c undefined4 *
// GLOBAL DAT_00524470 undefined4

undefined4 func_00524398(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00524450 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524450), iVar1 != 0)) {
    *DAT_00524454 = DAT_00524458;
  }
  if (DAT_00524454 != param_2) {
    if (((*DAT_0052445c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052445c), iVar1 != 0)) {
      *DAT_00524460 = DAT_00524464;
    }
    if (DAT_00524460 != param_2) {
      if (((*DAT_00524468 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00524468), iVar1 != 0)) {
        *DAT_0052446c = DAT_00524470;
      }
      if (DAT_0052446c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

