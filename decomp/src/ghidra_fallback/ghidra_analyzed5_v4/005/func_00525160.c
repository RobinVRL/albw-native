#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00525328;
extern undefined4 *DAT_0052532c;
extern undefined4 DAT_00525330;
extern uint *DAT_00525334;
extern undefined4 *DAT_00525338;
extern undefined4 DAT_0052533c;
extern uint *DAT_00525340;
extern undefined4 *DAT_00525344;
extern undefined4 DAT_00525348;
extern uint *DAT_0052534c;
extern undefined4 *DAT_00525350;
extern undefined4 DAT_00525354;
extern uint *DAT_00525358;
extern undefined4 *DAT_0052535c;
extern undefined4 DAT_00525360;
extern uint *DAT_00525364;
extern undefined4 *DAT_00525368;
extern undefined4 DAT_0052536c;
extern uint *DAT_00525370;
extern undefined4 *DAT_00525374;
extern undefined4 DAT_00525378;

// USA 00525160 <- EU 00525138 (Ghidra, non-matching)
// GLOBAL DAT_00525328 uint *
// GLOBAL DAT_0052532c undefined4 *
// GLOBAL DAT_00525330 undefined4
// GLOBAL DAT_00525334 uint *
// GLOBAL DAT_00525338 undefined4 *
// GLOBAL DAT_0052533c undefined4
// GLOBAL DAT_00525340 uint *
// GLOBAL DAT_00525344 undefined4 *
// GLOBAL DAT_00525348 undefined4
// GLOBAL DAT_0052534c uint *
// GLOBAL DAT_00525350 undefined4 *
// GLOBAL DAT_00525354 undefined4
// GLOBAL DAT_00525358 uint *
// GLOBAL DAT_0052535c undefined4 *
// GLOBAL DAT_00525360 undefined4
// GLOBAL DAT_00525364 uint *
// GLOBAL DAT_00525368 undefined4 *
// GLOBAL DAT_0052536c undefined4
// GLOBAL DAT_00525370 uint *
// GLOBAL DAT_00525374 undefined4 *
// GLOBAL DAT_00525378 undefined4

undefined4 func_00525160(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00525328 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525328), iVar1 != 0)) {
    *DAT_0052532c = DAT_00525330;
  }
  if (DAT_0052532c != param_2) {
    if (((*DAT_00525334 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525334), iVar1 != 0)) {
      *DAT_00525338 = DAT_0052533c;
    }
    if (DAT_00525338 != param_2) {
      if (((*DAT_00525340 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525340), iVar1 != 0)) {
        *DAT_00525344 = DAT_00525348;
      }
      if (DAT_00525344 != param_2) {
        if (((*DAT_0052534c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052534c), iVar1 != 0))
        {
          *DAT_00525350 = DAT_00525354;
        }
        if (DAT_00525350 != param_2) {
          if (((*DAT_00525358 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525358), iVar1 != 0)
             ) {
            *DAT_0052535c = DAT_00525360;
          }
          if (DAT_0052535c != param_2) {
            if (((*DAT_00525364 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00525364), iVar1 != 0)) {
              *DAT_00525368 = DAT_0052536c;
            }
            if (DAT_00525368 != param_2) {
              if (((*DAT_00525370 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00525370), iVar1 != 0)) {
                *DAT_00525374 = DAT_00525378;
              }
              if (DAT_00525374 != param_2) {
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

