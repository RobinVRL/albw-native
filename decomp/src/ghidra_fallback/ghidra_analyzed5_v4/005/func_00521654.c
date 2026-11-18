#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00521750;
extern undefined4 *DAT_00521754;
extern undefined4 DAT_00521758;
extern uint *DAT_0052175c;
extern undefined4 *DAT_00521760;
extern undefined4 DAT_00521764;
extern uint *DAT_00521768;
extern undefined4 *DAT_0052176c;
extern undefined4 DAT_00521770;
extern uint *DAT_00521774;
extern undefined4 *DAT_00521778;
extern undefined4 DAT_0052177c;

// USA 00521654 <- EU 0052162C (Ghidra, non-matching)
// GLOBAL DAT_00521750 uint *
// GLOBAL DAT_00521754 undefined4 *
// GLOBAL DAT_00521758 undefined4
// GLOBAL DAT_0052175c uint *
// GLOBAL DAT_00521760 undefined4 *
// GLOBAL DAT_00521764 undefined4
// GLOBAL DAT_00521768 uint *
// GLOBAL DAT_0052176c undefined4 *
// GLOBAL DAT_00521770 undefined4
// GLOBAL DAT_00521774 uint *
// GLOBAL DAT_00521778 undefined4 *
// GLOBAL DAT_0052177c undefined4

undefined4 func_00521654(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00521750 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521750), iVar1 != 0)) {
    *DAT_00521754 = DAT_00521758;
  }
  if (DAT_00521754 != param_2) {
    if (((*DAT_0052175c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052175c), iVar1 != 0)) {
      *DAT_00521760 = DAT_00521764;
    }
    if (DAT_00521760 != param_2) {
      if (((*DAT_00521768 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521768), iVar1 != 0)) {
        *DAT_0052176c = DAT_00521770;
      }
      if (DAT_0052176c != param_2) {
        if (((*DAT_00521774 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00521774), iVar1 != 0))
        {
          *DAT_00521778 = DAT_0052177c;
        }
        if (DAT_00521778 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

