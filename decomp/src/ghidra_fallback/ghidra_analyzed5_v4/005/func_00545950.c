#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0065366C(undefined4 *param_1);
extern uint *DAT_005459c8;
extern undefined4 *DAT_005459cc;
extern undefined4 DAT_005459d0;
extern uint *DAT_005459d4;
extern undefined4 *DAT_005459d8;
extern undefined4 DAT_005459dc;

// USA 00545950 <- EU 00545928 (Ghidra, non-matching)
// GLOBAL DAT_005459c8 uint *
// GLOBAL DAT_005459cc undefined4 *
// GLOBAL DAT_005459d0 undefined4
// GLOBAL DAT_005459d4 uint *
// GLOBAL DAT_005459d8 undefined4 *
// GLOBAL DAT_005459dc undefined4

undefined4 func_00545950(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*DAT_005459c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005459c8), iVar1 != 0)) {
    *DAT_005459cc = DAT_005459d0;
  }
  if (DAT_005459cc != param_2) {
    if (((*DAT_005459d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005459d4), iVar1 != 0)) {
      *DAT_005459d8 = DAT_005459dc;
    }
    if (DAT_005459d8 != param_2) {
      uVar2 = func_0065366C(param_2);
      return uVar2;
    }
  }
  return 1;
}

