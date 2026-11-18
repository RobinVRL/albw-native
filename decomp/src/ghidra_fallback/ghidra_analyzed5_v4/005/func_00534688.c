#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005347c8;
extern undefined4 *DAT_005347cc;
extern undefined4 DAT_005347d0;
extern uint *DAT_005347d4;
extern undefined4 *DAT_005347d8;
extern undefined4 DAT_005347dc;
extern uint *DAT_005347e0;
extern undefined4 *DAT_005347e4;
extern undefined4 DAT_005347e8;
extern uint *DAT_005347ec;
extern undefined4 *DAT_005347f0;
extern undefined4 DAT_005347f4;
extern uint *DAT_005347f8;
extern undefined4 *DAT_005347fc;
extern undefined4 DAT_00534800;

// USA 00534688 <- EU 00534660 (Ghidra, non-matching)
// GLOBAL DAT_005347c8 uint *
// GLOBAL DAT_005347cc undefined4 *
// GLOBAL DAT_005347d0 undefined4
// GLOBAL DAT_005347d4 uint *
// GLOBAL DAT_005347d8 undefined4 *
// GLOBAL DAT_005347dc undefined4
// GLOBAL DAT_005347e0 uint *
// GLOBAL DAT_005347e4 undefined4 *
// GLOBAL DAT_005347e8 undefined4
// GLOBAL DAT_005347ec uint *
// GLOBAL DAT_005347f0 undefined4 *
// GLOBAL DAT_005347f4 undefined4
// GLOBAL DAT_005347f8 uint *
// GLOBAL DAT_005347fc undefined4 *
// GLOBAL DAT_00534800 undefined4

undefined4 func_00534688(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005347c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005347c8), iVar1 != 0)) {
    *DAT_005347cc = DAT_005347d0;
  }
  if (DAT_005347cc != param_2) {
    if (((*DAT_005347d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005347d4), iVar1 != 0)) {
      *DAT_005347d8 = DAT_005347dc;
    }
    if (DAT_005347d8 != param_2) {
      if (((*DAT_005347e0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005347e0), iVar1 != 0)) {
        *DAT_005347e4 = DAT_005347e8;
      }
      if (DAT_005347e4 != param_2) {
        if (((*DAT_005347ec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005347ec), iVar1 != 0))
        {
          *DAT_005347f0 = DAT_005347f4;
        }
        if (DAT_005347f0 != param_2) {
          if (((*DAT_005347f8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005347f8), iVar1 != 0)
             ) {
            *DAT_005347fc = DAT_00534800;
          }
          if (DAT_005347fc != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

