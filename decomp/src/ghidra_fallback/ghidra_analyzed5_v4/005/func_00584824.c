#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00584920;
extern undefined4 *DAT_00584924;
extern undefined4 DAT_00584928;
extern uint *DAT_0058492c;
extern undefined4 *DAT_00584930;
extern undefined4 DAT_00584934;
extern uint *DAT_00584938;
extern undefined4 *DAT_0058493c;
extern undefined4 DAT_00584940;
extern uint *DAT_00584944;
extern undefined4 *DAT_00584948;
extern undefined4 DAT_0058494c;

// USA 00584824 <- EU 005847FC (Ghidra, non-matching)
// GLOBAL DAT_00584920 uint *
// GLOBAL DAT_00584924 undefined4 *
// GLOBAL DAT_00584928 undefined4
// GLOBAL DAT_0058492c uint *
// GLOBAL DAT_00584930 undefined4 *
// GLOBAL DAT_00584934 undefined4
// GLOBAL DAT_00584938 uint *
// GLOBAL DAT_0058493c undefined4 *
// GLOBAL DAT_00584940 undefined4
// GLOBAL DAT_00584944 uint *
// GLOBAL DAT_00584948 undefined4 *
// GLOBAL DAT_0058494c undefined4

undefined4 func_00584824(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00584920 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584920), iVar1 != 0)) {
    *DAT_00584924 = DAT_00584928;
  }
  if (DAT_00584924 != param_2) {
    if (((*DAT_0058492c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058492c), iVar1 != 0)) {
      *DAT_00584930 = DAT_00584934;
    }
    if (DAT_00584930 != param_2) {
      if (((*DAT_00584938 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584938), iVar1 != 0)) {
        *DAT_0058493c = DAT_00584940;
      }
      if (DAT_0058493c != param_2) {
        if (((*DAT_00584944 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00584944), iVar1 != 0))
        {
          *DAT_00584948 = DAT_0058494c;
        }
        if (DAT_00584948 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

