#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0053b91c;
extern undefined4 *DAT_0053b920;
extern undefined4 DAT_0053b924;
extern uint *DAT_0053b928;
extern undefined4 *DAT_0053b92c;
extern undefined4 DAT_0053b930;
extern uint *DAT_0053b934;
extern undefined4 *DAT_0053b938;
extern undefined4 DAT_0053b93c;
extern uint *DAT_0053b940;
extern undefined4 *DAT_0053b944;
extern undefined4 DAT_0053b948;
extern uint *DAT_0053b94c;
extern undefined4 *DAT_0053b950;
extern undefined4 DAT_0053b954;

// USA 0053B7DC <- EU 0053B7B4 (Ghidra, non-matching)
// GLOBAL DAT_0053b91c uint *
// GLOBAL DAT_0053b920 undefined4 *
// GLOBAL DAT_0053b924 undefined4
// GLOBAL DAT_0053b928 uint *
// GLOBAL DAT_0053b92c undefined4 *
// GLOBAL DAT_0053b930 undefined4
// GLOBAL DAT_0053b934 uint *
// GLOBAL DAT_0053b938 undefined4 *
// GLOBAL DAT_0053b93c undefined4
// GLOBAL DAT_0053b940 uint *
// GLOBAL DAT_0053b944 undefined4 *
// GLOBAL DAT_0053b948 undefined4
// GLOBAL DAT_0053b94c uint *
// GLOBAL DAT_0053b950 undefined4 *
// GLOBAL DAT_0053b954 undefined4

undefined4 func_0053B7DC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0053b91c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b91c), iVar1 != 0)) {
    *DAT_0053b920 = DAT_0053b924;
  }
  if (DAT_0053b920 != param_2) {
    if (((*DAT_0053b928 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b928), iVar1 != 0)) {
      *DAT_0053b92c = DAT_0053b930;
    }
    if (DAT_0053b92c != param_2) {
      if (((*DAT_0053b934 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b934), iVar1 != 0)) {
        *DAT_0053b938 = DAT_0053b93c;
      }
      if (DAT_0053b938 != param_2) {
        if (((*DAT_0053b940 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b940), iVar1 != 0))
        {
          *DAT_0053b944 = DAT_0053b948;
        }
        if (DAT_0053b944 != param_2) {
          if (((*DAT_0053b94c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053b94c), iVar1 != 0)
             ) {
            *DAT_0053b950 = DAT_0053b954;
          }
          if (DAT_0053b950 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

