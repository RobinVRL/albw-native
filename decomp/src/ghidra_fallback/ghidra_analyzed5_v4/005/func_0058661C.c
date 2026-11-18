#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005867e4;
extern undefined4 *DAT_005867e8;
extern undefined4 DAT_005867ec;
extern uint *DAT_005867f0;
extern undefined4 *DAT_005867f4;
extern undefined4 DAT_005867f8;
extern uint *DAT_005867fc;
extern undefined4 *DAT_00586800;
extern undefined4 DAT_00586804;
extern uint *DAT_00586808;
extern undefined4 *DAT_0058680c;
extern undefined4 DAT_00586810;
extern uint *DAT_00586814;
extern undefined4 *DAT_00586818;
extern undefined4 DAT_0058681c;
extern uint *DAT_00586820;
extern undefined4 *DAT_00586824;
extern undefined4 DAT_00586828;
extern uint *DAT_0058682c;
extern undefined4 *DAT_00586830;
extern undefined4 DAT_00586834;

// USA 0058661C <- EU 005865F4 (Ghidra, non-matching)
// GLOBAL DAT_005867e4 uint *
// GLOBAL DAT_005867e8 undefined4 *
// GLOBAL DAT_005867ec undefined4
// GLOBAL DAT_005867f0 uint *
// GLOBAL DAT_005867f4 undefined4 *
// GLOBAL DAT_005867f8 undefined4
// GLOBAL DAT_005867fc uint *
// GLOBAL DAT_00586800 undefined4 *
// GLOBAL DAT_00586804 undefined4
// GLOBAL DAT_00586808 uint *
// GLOBAL DAT_0058680c undefined4 *
// GLOBAL DAT_00586810 undefined4
// GLOBAL DAT_00586814 uint *
// GLOBAL DAT_00586818 undefined4 *
// GLOBAL DAT_0058681c undefined4
// GLOBAL DAT_00586820 uint *
// GLOBAL DAT_00586824 undefined4 *
// GLOBAL DAT_00586828 undefined4
// GLOBAL DAT_0058682c uint *
// GLOBAL DAT_00586830 undefined4 *
// GLOBAL DAT_00586834 undefined4

undefined4 func_0058661C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005867e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005867e4), iVar1 != 0)) {
    *DAT_005867e8 = DAT_005867ec;
  }
  if (DAT_005867e8 != param_2) {
    if (((*DAT_005867f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005867f0), iVar1 != 0)) {
      *DAT_005867f4 = DAT_005867f8;
    }
    if (DAT_005867f4 != param_2) {
      if (((*DAT_005867fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005867fc), iVar1 != 0)) {
        *DAT_00586800 = DAT_00586804;
      }
      if (DAT_00586800 != param_2) {
        if (((*DAT_00586808 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586808), iVar1 != 0))
        {
          *DAT_0058680c = DAT_00586810;
        }
        if (DAT_0058680c != param_2) {
          if (((*DAT_00586814 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00586814), iVar1 != 0)
             ) {
            *DAT_00586818 = DAT_0058681c;
          }
          if (DAT_00586818 != param_2) {
            if (((*DAT_00586820 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00586820), iVar1 != 0)) {
              *DAT_00586824 = DAT_00586828;
            }
            if (DAT_00586824 != param_2) {
              if (((*DAT_0058682c & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0058682c), iVar1 != 0)) {
                *DAT_00586830 = DAT_00586834;
              }
              if (DAT_00586830 != param_2) {
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

