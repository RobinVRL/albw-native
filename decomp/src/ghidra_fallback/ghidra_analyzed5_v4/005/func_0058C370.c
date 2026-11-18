#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058c428;
extern undefined4 *DAT_0058c42c;
extern undefined4 DAT_0058c430;
extern uint *DAT_0058c434;
extern undefined4 *DAT_0058c438;
extern undefined4 DAT_0058c43c;
extern uint *DAT_0058c440;
extern undefined4 *DAT_0058c444;
extern undefined4 DAT_0058c448;

// USA 0058C370 <- EU 0058C348 (Ghidra, non-matching)
// GLOBAL DAT_0058c428 uint *
// GLOBAL DAT_0058c42c undefined4 *
// GLOBAL DAT_0058c430 undefined4
// GLOBAL DAT_0058c434 uint *
// GLOBAL DAT_0058c438 undefined4 *
// GLOBAL DAT_0058c43c undefined4
// GLOBAL DAT_0058c440 uint *
// GLOBAL DAT_0058c444 undefined4 *
// GLOBAL DAT_0058c448 undefined4

undefined4 func_0058C370(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058c428 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c428), iVar1 != 0)) {
    *DAT_0058c42c = DAT_0058c430;
  }
  if (DAT_0058c42c != param_2) {
    if (((*DAT_0058c434 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c434), iVar1 != 0)) {
      *DAT_0058c438 = DAT_0058c43c;
    }
    if (DAT_0058c438 != param_2) {
      if (((*DAT_0058c440 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c440), iVar1 != 0)) {
        *DAT_0058c444 = DAT_0058c448;
      }
      if (DAT_0058c444 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

