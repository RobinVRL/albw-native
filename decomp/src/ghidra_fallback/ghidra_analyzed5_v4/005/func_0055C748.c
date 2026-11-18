#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E41C4(undefined4 *param_1);
extern uint *DAT_0055c804;
extern undefined4 *DAT_0055c808;
extern undefined4 DAT_0055c80c;
extern uint *DAT_0055c810;
extern undefined4 *DAT_0055c814;
extern undefined4 DAT_0055c818;
extern uint *DAT_0055c81c;
extern undefined4 *DAT_0055c820;
extern undefined4 DAT_0055c824;

// USA 0055C748 <- EU 0055C720 (Ghidra, non-matching)
// GLOBAL DAT_0055c804 uint *
// GLOBAL DAT_0055c808 undefined4 *
// GLOBAL DAT_0055c80c undefined4
// GLOBAL DAT_0055c810 uint *
// GLOBAL DAT_0055c814 undefined4 *
// GLOBAL DAT_0055c818 undefined4
// GLOBAL DAT_0055c81c uint *
// GLOBAL DAT_0055c820 undefined4 *
// GLOBAL DAT_0055c824 undefined4

undefined4 func_0055C748(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0055c804 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c804), iVar1 != 0)) {
    *DAT_0055c808 = DAT_0055c80c;
  }
  if (DAT_0055c808 != param_2) {
    if (((*DAT_0055c810 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c810), iVar1 != 0)) {
      *DAT_0055c814 = DAT_0055c818;
    }
    if (DAT_0055c814 != param_2) {
      if (((*DAT_0055c81c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055c81c), iVar1 != 0)) {
        *DAT_0055c820 = DAT_0055c824;
      }
      if (DAT_0055c820 != param_2) {
        uVar2 = func_001E41C4(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

