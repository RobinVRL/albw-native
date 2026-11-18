#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052a740;
extern undefined4 *DAT_0052a744;
extern undefined4 DAT_0052a748;
extern uint *DAT_0052a74c;
extern undefined4 *DAT_0052a750;
extern undefined4 DAT_0052a754;
extern uint *DAT_0052a758;
extern undefined4 *DAT_0052a75c;
extern undefined4 DAT_0052a760;
extern uint *DAT_0052a764;
extern undefined4 *DAT_0052a768;
extern undefined4 DAT_0052a76c;
extern uint *DAT_0052a770;
extern undefined4 *DAT_0052a774;
extern undefined4 DAT_0052a778;

// USA 0052A600 <- EU 0052A5D8 (Ghidra, non-matching)
// GLOBAL DAT_0052a740 uint *
// GLOBAL DAT_0052a744 undefined4 *
// GLOBAL DAT_0052a748 undefined4
// GLOBAL DAT_0052a74c uint *
// GLOBAL DAT_0052a750 undefined4 *
// GLOBAL DAT_0052a754 undefined4
// GLOBAL DAT_0052a758 uint *
// GLOBAL DAT_0052a75c undefined4 *
// GLOBAL DAT_0052a760 undefined4
// GLOBAL DAT_0052a764 uint *
// GLOBAL DAT_0052a768 undefined4 *
// GLOBAL DAT_0052a76c undefined4
// GLOBAL DAT_0052a770 uint *
// GLOBAL DAT_0052a774 undefined4 *
// GLOBAL DAT_0052a778 undefined4

undefined4 func_0052A600(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052a740 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a740), iVar1 != 0)) {
    *DAT_0052a744 = DAT_0052a748;
  }
  if (DAT_0052a744 != param_2) {
    if (((*DAT_0052a74c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a74c), iVar1 != 0)) {
      *DAT_0052a750 = DAT_0052a754;
    }
    if (DAT_0052a750 != param_2) {
      if (((*DAT_0052a758 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a758), iVar1 != 0)) {
        *DAT_0052a75c = DAT_0052a760;
      }
      if (DAT_0052a75c != param_2) {
        if (((*DAT_0052a764 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a764), iVar1 != 0))
        {
          *DAT_0052a768 = DAT_0052a76c;
        }
        if (DAT_0052a768 != param_2) {
          if (((*DAT_0052a770 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052a770), iVar1 != 0)
             ) {
            *DAT_0052a774 = DAT_0052a778;
          }
          if (DAT_0052a774 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

