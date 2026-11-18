#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00576cd4;
extern undefined4 *DAT_00576cd8;
extern undefined4 DAT_00576cdc;
extern uint *DAT_00576ce0;
extern undefined4 *DAT_00576ce4;
extern undefined4 DAT_00576ce8;
extern uint *DAT_00576cec;
extern undefined4 *DAT_00576cf0;
extern undefined4 DAT_00576cf4;
extern uint *DAT_00576cf8;
extern undefined4 *DAT_00576cfc;
extern undefined4 DAT_00576d00;

// USA 00576BD8 <- EU 00576BB0 (Ghidra, non-matching)
// GLOBAL DAT_00576cd4 uint *
// GLOBAL DAT_00576cd8 undefined4 *
// GLOBAL DAT_00576cdc undefined4
// GLOBAL DAT_00576ce0 uint *
// GLOBAL DAT_00576ce4 undefined4 *
// GLOBAL DAT_00576ce8 undefined4
// GLOBAL DAT_00576cec uint *
// GLOBAL DAT_00576cf0 undefined4 *
// GLOBAL DAT_00576cf4 undefined4
// GLOBAL DAT_00576cf8 uint *
// GLOBAL DAT_00576cfc undefined4 *
// GLOBAL DAT_00576d00 undefined4

undefined4 func_00576BD8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00576cd4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576cd4), iVar1 != 0)) {
    *DAT_00576cd8 = DAT_00576cdc;
  }
  if (DAT_00576cd8 != param_2) {
    if (((*DAT_00576ce0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576ce0), iVar1 != 0)) {
      *DAT_00576ce4 = DAT_00576ce8;
    }
    if (DAT_00576ce4 != param_2) {
      if (((*DAT_00576cec & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576cec), iVar1 != 0)) {
        *DAT_00576cf0 = DAT_00576cf4;
      }
      if (DAT_00576cf0 != param_2) {
        if (((*DAT_00576cf8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00576cf8), iVar1 != 0))
        {
          *DAT_00576cfc = DAT_00576d00;
        }
        if (DAT_00576cfc != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

