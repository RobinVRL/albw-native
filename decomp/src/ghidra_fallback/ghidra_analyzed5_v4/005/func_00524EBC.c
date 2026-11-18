#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00525084;
extern undefined4 *DAT_00525088;
extern undefined4 DAT_0052508c;
extern uint *DAT_00525090;
extern undefined4 *DAT_00525094;
extern undefined4 DAT_00525098;
extern uint *DAT_0052509c;
extern undefined4 *DAT_005250a0;
extern undefined4 DAT_005250a4;
extern uint *DAT_005250a8;
extern undefined4 *DAT_005250ac;
extern undefined4 DAT_005250b0;
extern uint *DAT_005250b4;
extern undefined4 *DAT_005250b8;
extern undefined4 DAT_005250bc;
extern uint *DAT_005250c0;
extern undefined4 *DAT_005250c4;
extern undefined4 DAT_005250c8;
extern uint *DAT_005250cc;
extern undefined4 *DAT_005250d0;
extern undefined4 DAT_005250d4;

// USA 00524EBC <- EU 00524E94 (Ghidra, non-matching)
// GLOBAL DAT_00525084 uint *
// GLOBAL DAT_00525088 undefined4 *
// GLOBAL DAT_0052508c undefined4
// GLOBAL DAT_00525090 uint *
// GLOBAL DAT_00525094 undefined4 *
// GLOBAL DAT_00525098 undefined4
// GLOBAL DAT_0052509c uint *
// GLOBAL DAT_005250a0 undefined4 *
// GLOBAL DAT_005250a4 undefined4
// GLOBAL DAT_005250a8 uint *
// GLOBAL DAT_005250ac undefined4 *
// GLOBAL DAT_005250b0 undefined4
// GLOBAL DAT_005250b4 uint *
// GLOBAL DAT_005250b8 undefined4 *
// GLOBAL DAT_005250bc undefined4
// GLOBAL DAT_005250c0 uint *
// GLOBAL DAT_005250c4 undefined4 *
// GLOBAL DAT_005250c8 undefined4
// GLOBAL DAT_005250cc uint *
// GLOBAL DAT_005250d0 undefined4 *
// GLOBAL DAT_005250d4 undefined4

undefined4 func_00524EBC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00525084 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525084), iVar1 != 0)) {
    *DAT_00525088 = DAT_0052508c;
  }
  if (DAT_00525088 != param_2) {
    if (((*DAT_00525090 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00525090), iVar1 != 0)) {
      *DAT_00525094 = DAT_00525098;
    }
    if (DAT_00525094 != param_2) {
      if (((*DAT_0052509c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052509c), iVar1 != 0)) {
        *DAT_005250a0 = DAT_005250a4;
      }
      if (DAT_005250a0 != param_2) {
        if (((*DAT_005250a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005250a8), iVar1 != 0))
        {
          *DAT_005250ac = DAT_005250b0;
        }
        if (DAT_005250ac != param_2) {
          if (((*DAT_005250b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005250b4), iVar1 != 0)
             ) {
            *DAT_005250b8 = DAT_005250bc;
          }
          if (DAT_005250b8 != param_2) {
            if (((*DAT_005250c0 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005250c0), iVar1 != 0)) {
              *DAT_005250c4 = DAT_005250c8;
            }
            if (DAT_005250c4 != param_2) {
              if (((*DAT_005250cc & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_005250cc), iVar1 != 0)) {
                *DAT_005250d0 = DAT_005250d4;
              }
              if (DAT_005250d0 != param_2) {
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

