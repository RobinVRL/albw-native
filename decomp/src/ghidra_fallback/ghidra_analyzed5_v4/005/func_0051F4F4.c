#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051f5f0;
extern undefined4 *DAT_0051f5f4;
extern undefined4 DAT_0051f5f8;
extern uint *DAT_0051f5fc;
extern undefined4 *DAT_0051f600;
extern undefined4 DAT_0051f604;
extern uint *DAT_0051f608;
extern undefined4 *DAT_0051f60c;
extern undefined4 DAT_0051f610;
extern uint *DAT_0051f614;
extern undefined4 *DAT_0051f618;
extern undefined4 DAT_0051f61c;

// USA 0051F4F4 <- EU 0051F4CC (Ghidra, non-matching)
// GLOBAL DAT_0051f5f0 uint *
// GLOBAL DAT_0051f5f4 undefined4 *
// GLOBAL DAT_0051f5f8 undefined4
// GLOBAL DAT_0051f5fc uint *
// GLOBAL DAT_0051f600 undefined4 *
// GLOBAL DAT_0051f604 undefined4
// GLOBAL DAT_0051f608 uint *
// GLOBAL DAT_0051f60c undefined4 *
// GLOBAL DAT_0051f610 undefined4
// GLOBAL DAT_0051f614 uint *
// GLOBAL DAT_0051f618 undefined4 *
// GLOBAL DAT_0051f61c undefined4

undefined4 func_0051F4F4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051f5f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f5f0), iVar1 != 0)) {
    *DAT_0051f5f4 = DAT_0051f5f8;
  }
  if (DAT_0051f5f4 != param_2) {
    if (((*DAT_0051f5fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f5fc), iVar1 != 0)) {
      *DAT_0051f600 = DAT_0051f604;
    }
    if (DAT_0051f600 != param_2) {
      if (((*DAT_0051f608 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f608), iVar1 != 0)) {
        *DAT_0051f60c = DAT_0051f610;
      }
      if (DAT_0051f60c != param_2) {
        if (((*DAT_0051f614 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051f614), iVar1 != 0))
        {
          *DAT_0051f618 = DAT_0051f61c;
        }
        if (DAT_0051f618 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

