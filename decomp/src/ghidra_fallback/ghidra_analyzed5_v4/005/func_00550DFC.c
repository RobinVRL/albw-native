#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00550eb4;
extern undefined4 *DAT_00550eb8;
extern undefined4 DAT_00550ebc;
extern uint *DAT_00550ec0;
extern undefined4 *DAT_00550ec4;
extern undefined4 DAT_00550ec8;
extern uint *DAT_00550ecc;
extern undefined4 *DAT_00550ed0;
extern undefined4 DAT_00550ed4;

// USA 00550DFC <- EU 00550DD4 (Ghidra, non-matching)
// GLOBAL DAT_00550eb4 uint *
// GLOBAL DAT_00550eb8 undefined4 *
// GLOBAL DAT_00550ebc undefined4
// GLOBAL DAT_00550ec0 uint *
// GLOBAL DAT_00550ec4 undefined4 *
// GLOBAL DAT_00550ec8 undefined4
// GLOBAL DAT_00550ecc uint *
// GLOBAL DAT_00550ed0 undefined4 *
// GLOBAL DAT_00550ed4 undefined4

undefined4 func_00550DFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00550eb4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550eb4), iVar1 != 0)) {
    *DAT_00550eb8 = DAT_00550ebc;
  }
  if (DAT_00550eb8 != param_2) {
    if (((*DAT_00550ec0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550ec0), iVar1 != 0)) {
      *DAT_00550ec4 = DAT_00550ec8;
    }
    if (DAT_00550ec4 != param_2) {
      if (((*DAT_00550ecc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00550ecc), iVar1 != 0)) {
        *DAT_00550ed0 = DAT_00550ed4;
      }
      if (DAT_00550ed0 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

