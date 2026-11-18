#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054a860;
extern undefined4 *DAT_0054a864;
extern undefined4 DAT_0054a868;
extern uint *DAT_0054a86c;
extern undefined4 *DAT_0054a870;
extern undefined4 DAT_0054a874;
extern uint *DAT_0054a878;
extern undefined4 *DAT_0054a87c;
extern undefined4 DAT_0054a880;

// USA 0054A7A8 <- EU 0054A780 (Ghidra, non-matching)
// GLOBAL DAT_0054a860 uint *
// GLOBAL DAT_0054a864 undefined4 *
// GLOBAL DAT_0054a868 undefined4
// GLOBAL DAT_0054a86c uint *
// GLOBAL DAT_0054a870 undefined4 *
// GLOBAL DAT_0054a874 undefined4
// GLOBAL DAT_0054a878 uint *
// GLOBAL DAT_0054a87c undefined4 *
// GLOBAL DAT_0054a880 undefined4

undefined4 func_0054A7A8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054a860 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a860), iVar1 != 0)) {
    *DAT_0054a864 = DAT_0054a868;
  }
  if (DAT_0054a864 != param_2) {
    if (((*DAT_0054a86c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a86c), iVar1 != 0)) {
      *DAT_0054a870 = DAT_0054a874;
    }
    if (DAT_0054a870 != param_2) {
      if (((*DAT_0054a878 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054a878), iVar1 != 0)) {
        *DAT_0054a87c = DAT_0054a880;
      }
      if (DAT_0054a87c != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

