#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005227dc;
extern undefined4 *DAT_005227e0;
extern undefined4 DAT_005227e4;
extern uint *DAT_005227e8;
extern undefined4 *DAT_005227ec;
extern undefined4 DAT_005227f0;
extern uint *DAT_005227f4;
extern undefined4 *DAT_005227f8;
extern undefined4 DAT_005227fc;

// USA 00522724 <- EU 005226FC (Ghidra, non-matching)
// GLOBAL DAT_005227dc uint *
// GLOBAL DAT_005227e0 undefined4 *
// GLOBAL DAT_005227e4 undefined4
// GLOBAL DAT_005227e8 uint *
// GLOBAL DAT_005227ec undefined4 *
// GLOBAL DAT_005227f0 undefined4
// GLOBAL DAT_005227f4 uint *
// GLOBAL DAT_005227f8 undefined4 *
// GLOBAL DAT_005227fc undefined4

undefined4 func_00522724(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005227dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005227dc), iVar1 != 0)) {
    *DAT_005227e0 = DAT_005227e4;
  }
  if (DAT_005227e0 != param_2) {
    if (((*DAT_005227e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005227e8), iVar1 != 0)) {
      *DAT_005227ec = DAT_005227f0;
    }
    if (DAT_005227ec != param_2) {
      if (((*DAT_005227f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005227f4), iVar1 != 0)) {
        *DAT_005227f8 = DAT_005227fc;
      }
      if (DAT_005227f8 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

