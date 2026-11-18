#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054a75c;
extern undefined4 *DAT_0054a760;
extern undefined4 DAT_0054a764;
extern uint *DAT_0054a768;
extern undefined4 *DAT_0054a76c;
extern undefined4 DAT_0054a770;
extern uint *DAT_0054a774;
extern undefined4 *DAT_0054a778;
extern undefined4 DAT_0054a77c;

// USA 0054A6A4 <- EU 0054A67C (Ghidra, non-matching)
// GLOBAL DAT_0054a75c uint *
// GLOBAL DAT_0054a760 undefined4 *
// GLOBAL DAT_0054a764 undefined4
// GLOBAL DAT_0054a768 uint *
// GLOBAL DAT_0054a76c undefined4 *
// GLOBAL DAT_0054a770 undefined4
// GLOBAL DAT_0054a774 uint *
// GLOBAL DAT_0054a778 undefined4 *
// GLOBAL DAT_0054a77c undefined4

undefined4 func_0054A6A4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a75c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a75c), iVar1 != 0)) {
    *DAT_0054a760 = DAT_0054a764;
  }
  if (DAT_0054a760 != param_2) {
    if (((*DAT_0054a768 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a768), iVar1 != 0)) {
      *DAT_0054a76c = DAT_0054a770;
    }
    if (DAT_0054a76c != param_2) {
      if (((*DAT_0054a774 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a774), iVar1 != 0)) {
        *DAT_0054a778 = DAT_0054a77c;
      }
      if (DAT_0054a778 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

