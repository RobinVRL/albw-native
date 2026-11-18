#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057cfe8;
extern undefined4 *DAT_0057cfec;
extern undefined4 DAT_0057cff0;
extern uint *DAT_0057cff4;
extern undefined4 *DAT_0057cff8;
extern undefined4 DAT_0057cffc;
extern uint *DAT_0057d000;
extern undefined4 *DAT_0057d004;
extern undefined4 DAT_0057d008;
extern uint *DAT_0057d00c;
extern undefined4 *DAT_0057d010;
extern undefined4 DAT_0057d014;
extern uint *DAT_0057d018;
extern undefined4 *DAT_0057d01c;
extern undefined4 DAT_0057d020;
extern uint *DAT_0057d024;
extern undefined4 *DAT_0057d028;
extern undefined4 DAT_0057d02c;

// USA 0057CE64 <- EU 0057CE3C (Ghidra, non-matching)
// GLOBAL DAT_0057cfe8 uint *
// GLOBAL DAT_0057cfec undefined4 *
// GLOBAL DAT_0057cff0 undefined4
// GLOBAL DAT_0057cff4 uint *
// GLOBAL DAT_0057cff8 undefined4 *
// GLOBAL DAT_0057cffc undefined4
// GLOBAL DAT_0057d000 uint *
// GLOBAL DAT_0057d004 undefined4 *
// GLOBAL DAT_0057d008 undefined4
// GLOBAL DAT_0057d00c uint *
// GLOBAL DAT_0057d010 undefined4 *
// GLOBAL DAT_0057d014 undefined4
// GLOBAL DAT_0057d018 uint *
// GLOBAL DAT_0057d01c undefined4 *
// GLOBAL DAT_0057d020 undefined4
// GLOBAL DAT_0057d024 uint *
// GLOBAL DAT_0057d028 undefined4 *
// GLOBAL DAT_0057d02c undefined4

undefined4 func_0057CE64(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057cfe8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cfe8), iVar1 != 0)) {
    *DAT_0057cfec = DAT_0057cff0;
  }
  if (DAT_0057cfec != param_2) {
    if (((*DAT_0057cff4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057cff4), iVar1 != 0)) {
      *DAT_0057cff8 = DAT_0057cffc;
    }
    if (DAT_0057cff8 != param_2) {
      if (((*DAT_0057d000 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d000), iVar1 != 0)) {
        *DAT_0057d004 = DAT_0057d008;
      }
      if (DAT_0057d004 != param_2) {
        if (((*DAT_0057d00c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d00c), iVar1 != 0))
        {
          *DAT_0057d010 = DAT_0057d014;
        }
        if (DAT_0057d010 != param_2) {
          if (((*DAT_0057d018 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057d018), iVar1 != 0)
             ) {
            *DAT_0057d01c = DAT_0057d020;
          }
          if (DAT_0057d01c != param_2) {
            if (((*DAT_0057d024 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0057d024), iVar1 != 0)) {
              *DAT_0057d028 = DAT_0057d02c;
            }
            if (DAT_0057d028 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

