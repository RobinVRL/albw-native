#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058c7f8;
extern undefined4 *DAT_0058c7fc;
extern undefined4 DAT_0058c800;
extern uint *DAT_0058c804;
extern undefined4 *DAT_0058c808;
extern undefined4 DAT_0058c80c;
extern uint *DAT_0058c810;
extern undefined4 *DAT_0058c814;
extern undefined4 DAT_0058c818;
extern uint *DAT_0058c81c;
extern undefined4 *DAT_0058c820;
extern undefined4 DAT_0058c824;
extern uint *DAT_0058c828;
extern undefined4 *DAT_0058c82c;
extern undefined4 DAT_0058c830;
extern uint *DAT_0058c834;
extern undefined4 *DAT_0058c838;
extern undefined4 DAT_0058c83c;
extern uint *DAT_0058c840;
extern undefined4 *DAT_0058c844;
extern undefined4 DAT_0058c848;

// USA 0058C630 <- EU 0058C608 (Ghidra, non-matching)
// GLOBAL DAT_0058c7f8 uint *
// GLOBAL DAT_0058c7fc undefined4 *
// GLOBAL DAT_0058c800 undefined4
// GLOBAL DAT_0058c804 uint *
// GLOBAL DAT_0058c808 undefined4 *
// GLOBAL DAT_0058c80c undefined4
// GLOBAL DAT_0058c810 uint *
// GLOBAL DAT_0058c814 undefined4 *
// GLOBAL DAT_0058c818 undefined4
// GLOBAL DAT_0058c81c uint *
// GLOBAL DAT_0058c820 undefined4 *
// GLOBAL DAT_0058c824 undefined4
// GLOBAL DAT_0058c828 uint *
// GLOBAL DAT_0058c82c undefined4 *
// GLOBAL DAT_0058c830 undefined4
// GLOBAL DAT_0058c834 uint *
// GLOBAL DAT_0058c838 undefined4 *
// GLOBAL DAT_0058c83c undefined4
// GLOBAL DAT_0058c840 uint *
// GLOBAL DAT_0058c844 undefined4 *
// GLOBAL DAT_0058c848 undefined4

undefined4 func_0058C630(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058c7f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c7f8), iVar1 != 0)) {
    *DAT_0058c7fc = DAT_0058c800;
  }
  if (DAT_0058c7fc != param_2) {
    if (((*DAT_0058c804 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c804), iVar1 != 0)) {
      *DAT_0058c808 = DAT_0058c80c;
    }
    if (DAT_0058c808 != param_2) {
      if (((*DAT_0058c810 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c810), iVar1 != 0)) {
        *DAT_0058c814 = DAT_0058c818;
      }
      if (DAT_0058c814 != param_2) {
        if (((*DAT_0058c81c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c81c), iVar1 != 0))
        {
          *DAT_0058c820 = DAT_0058c824;
        }
        if (DAT_0058c820 != param_2) {
          if (((*DAT_0058c828 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c828), iVar1 != 0)
             ) {
            *DAT_0058c82c = DAT_0058c830;
          }
          if (DAT_0058c82c != param_2) {
            if (((*DAT_0058c834 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0058c834), iVar1 != 0)) {
              *DAT_0058c838 = DAT_0058c83c;
            }
            if (DAT_0058c838 != param_2) {
              if (((*DAT_0058c840 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0058c840), iVar1 != 0)) {
                *DAT_0058c844 = DAT_0058c848;
              }
              if (DAT_0058c844 != param_2) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

