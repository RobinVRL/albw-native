#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052ddec;
extern undefined4 *DAT_0052ddf0;
extern undefined4 DAT_0052ddf4;
extern uint *DAT_0052ddf8;
extern undefined4 *DAT_0052ddfc;
extern undefined4 DAT_0052de00;
extern uint *DAT_0052de04;
extern undefined4 *DAT_0052de08;
extern undefined4 DAT_0052de0c;
extern uint *DAT_0052de10;
extern undefined4 *DAT_0052de14;
extern undefined4 DAT_0052de18;
extern uint *DAT_0052de1c;
extern undefined4 *DAT_0052de20;
extern undefined4 DAT_0052de24;

// USA 0052DCAC <- EU 0052DC84 (Ghidra, non-matching)
// GLOBAL DAT_0052ddec uint *
// GLOBAL DAT_0052ddf0 undefined4 *
// GLOBAL DAT_0052ddf4 undefined4
// GLOBAL DAT_0052ddf8 uint *
// GLOBAL DAT_0052ddfc undefined4 *
// GLOBAL DAT_0052de00 undefined4
// GLOBAL DAT_0052de04 uint *
// GLOBAL DAT_0052de08 undefined4 *
// GLOBAL DAT_0052de0c undefined4
// GLOBAL DAT_0052de10 uint *
// GLOBAL DAT_0052de14 undefined4 *
// GLOBAL DAT_0052de18 undefined4
// GLOBAL DAT_0052de1c uint *
// GLOBAL DAT_0052de20 undefined4 *
// GLOBAL DAT_0052de24 undefined4

undefined4 func_0052DCAC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052ddec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ddec), iVar1 != 0)) {
    *DAT_0052ddf0 = DAT_0052ddf4;
  }
  if (DAT_0052ddf0 != param_2) {
    if (((*DAT_0052ddf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052ddf8), iVar1 != 0)) {
      *DAT_0052ddfc = DAT_0052de00;
    }
    if (DAT_0052ddfc != param_2) {
      if (((*DAT_0052de04 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052de04), iVar1 != 0)) {
        *DAT_0052de08 = DAT_0052de0c;
      }
      if (DAT_0052de08 != param_2) {
        if (((*DAT_0052de10 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052de10), iVar1 != 0))
        {
          *DAT_0052de14 = DAT_0052de18;
        }
        if (DAT_0052de14 != param_2) {
          if (((*DAT_0052de1c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052de1c), iVar1 != 0)
             ) {
            *DAT_0052de20 = DAT_0052de24;
          }
          if (DAT_0052de20 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

