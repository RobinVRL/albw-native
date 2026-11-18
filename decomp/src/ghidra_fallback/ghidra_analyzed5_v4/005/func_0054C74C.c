#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054c804;
extern undefined4 *DAT_0054c808;
extern undefined4 DAT_0054c80c;
extern uint *DAT_0054c810;
extern undefined4 *DAT_0054c814;
extern undefined4 DAT_0054c818;
extern uint *DAT_0054c81c;
extern undefined4 *DAT_0054c820;
extern undefined4 DAT_0054c824;

// USA 0054C74C <- EU 0054C724 (Ghidra, non-matching)
// GLOBAL DAT_0054c804 uint *
// GLOBAL DAT_0054c808 undefined4 *
// GLOBAL DAT_0054c80c undefined4
// GLOBAL DAT_0054c810 uint *
// GLOBAL DAT_0054c814 undefined4 *
// GLOBAL DAT_0054c818 undefined4
// GLOBAL DAT_0054c81c uint *
// GLOBAL DAT_0054c820 undefined4 *
// GLOBAL DAT_0054c824 undefined4

undefined4 func_0054C74C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054c804 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c804), iVar1 != 0)) {
    *DAT_0054c808 = DAT_0054c80c;
  }
  if (DAT_0054c808 != param_2) {
    if (((*DAT_0054c810 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c810), iVar1 != 0)) {
      *DAT_0054c814 = DAT_0054c818;
    }
    if (DAT_0054c814 != param_2) {
      if (((*DAT_0054c81c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054c81c), iVar1 != 0)) {
        *DAT_0054c820 = DAT_0054c824;
      }
      if (DAT_0054c820 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

