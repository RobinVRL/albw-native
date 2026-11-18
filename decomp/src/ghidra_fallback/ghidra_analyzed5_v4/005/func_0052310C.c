#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00523208;
extern undefined4 *DAT_0052320c;
extern undefined4 DAT_00523210;
extern uint *DAT_00523214;
extern undefined4 *DAT_00523218;
extern undefined4 DAT_0052321c;
extern uint *DAT_00523220;
extern undefined4 *DAT_00523224;
extern undefined4 DAT_00523228;
extern uint *DAT_0052322c;
extern undefined4 *DAT_00523230;
extern undefined4 DAT_00523234;

// USA 0052310C <- EU 005230E4 (Ghidra, non-matching)
// GLOBAL DAT_00523208 uint *
// GLOBAL DAT_0052320c undefined4 *
// GLOBAL DAT_00523210 undefined4
// GLOBAL DAT_00523214 uint *
// GLOBAL DAT_00523218 undefined4 *
// GLOBAL DAT_0052321c undefined4
// GLOBAL DAT_00523220 uint *
// GLOBAL DAT_00523224 undefined4 *
// GLOBAL DAT_00523228 undefined4
// GLOBAL DAT_0052322c uint *
// GLOBAL DAT_00523230 undefined4 *
// GLOBAL DAT_00523234 undefined4

undefined4 func_0052310C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00523208 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523208), iVar1 != 0)) {
    *DAT_0052320c = DAT_00523210;
  }
  if (DAT_0052320c != param_2) {
    if (((*DAT_00523214 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523214), iVar1 != 0)) {
      *DAT_00523218 = DAT_0052321c;
    }
    if (DAT_00523218 != param_2) {
      if (((*DAT_00523220 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523220), iVar1 != 0)) {
        *DAT_00523224 = DAT_00523228;
      }
      if (DAT_00523224 != param_2) {
        if (((*DAT_0052322c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052322c), iVar1 != 0))
        {
          *DAT_00523230 = DAT_00523234;
        }
        if (DAT_00523230 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

