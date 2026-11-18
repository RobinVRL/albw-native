#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004B9748(undefined4 *param_1);
extern uint *DAT_0057aecc;
extern undefined4 *DAT_0057aed0;
extern undefined4 DAT_0057aed4;
extern uint *DAT_0057aed8;
extern undefined4 *DAT_0057aedc;
extern undefined4 DAT_0057aee0;
extern uint *DAT_0057aee4;
extern undefined4 *DAT_0057aee8;
extern undefined4 DAT_0057aeec;

// USA 0057AE10 <- EU 0057ADE8 (Ghidra, non-matching)
// GLOBAL DAT_0057aecc uint *
// GLOBAL DAT_0057aed0 undefined4 *
// GLOBAL DAT_0057aed4 undefined4
// GLOBAL DAT_0057aed8 uint *
// GLOBAL DAT_0057aedc undefined4 *
// GLOBAL DAT_0057aee0 undefined4
// GLOBAL DAT_0057aee4 uint *
// GLOBAL DAT_0057aee8 undefined4 *
// GLOBAL DAT_0057aeec undefined4

undefined4 func_0057AE10(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_0057aecc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057aecc), iVar1 != 0)) {
    *DAT_0057aed0 = DAT_0057aed4;
  }
  if (DAT_0057aed0 != param_2) {
    if (((*DAT_0057aed8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057aed8), iVar1 != 0)) {
      *DAT_0057aedc = DAT_0057aee0;
    }
    if (DAT_0057aedc != param_2) {
      if (((*DAT_0057aee4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057aee4), iVar1 != 0)) {
        *DAT_0057aee8 = DAT_0057aeec;
      }
      if (DAT_0057aee8 != param_2) {
        uVar2 = func_004B9748(param_2);
        return uVar2;
      }
    }
  }
  return 1;
}

