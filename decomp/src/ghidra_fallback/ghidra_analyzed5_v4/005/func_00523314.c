#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00523454;
extern undefined4 *DAT_00523458;
extern undefined4 DAT_0052345c;
extern uint *DAT_00523460;
extern undefined4 *DAT_00523464;
extern undefined4 DAT_00523468;
extern uint *DAT_0052346c;
extern undefined4 *DAT_00523470;
extern undefined4 DAT_00523474;
extern uint *DAT_00523478;
extern undefined4 *DAT_0052347c;
extern undefined4 DAT_00523480;
extern uint *DAT_00523484;
extern undefined4 *DAT_00523488;
extern undefined4 DAT_0052348c;

// USA 00523314 <- EU 005232EC (Ghidra, non-matching)
// GLOBAL DAT_00523454 uint *
// GLOBAL DAT_00523458 undefined4 *
// GLOBAL DAT_0052345c undefined4
// GLOBAL DAT_00523460 uint *
// GLOBAL DAT_00523464 undefined4 *
// GLOBAL DAT_00523468 undefined4
// GLOBAL DAT_0052346c uint *
// GLOBAL DAT_00523470 undefined4 *
// GLOBAL DAT_00523474 undefined4
// GLOBAL DAT_00523478 uint *
// GLOBAL DAT_0052347c undefined4 *
// GLOBAL DAT_00523480 undefined4
// GLOBAL DAT_00523484 uint *
// GLOBAL DAT_00523488 undefined4 *
// GLOBAL DAT_0052348c undefined4

undefined4 func_00523314(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00523454 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523454), iVar1 != 0)) {
    *DAT_00523458 = DAT_0052345c;
  }
  if (DAT_00523458 != param_2) {
    if (((*DAT_00523460 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523460), iVar1 != 0)) {
      *DAT_00523464 = DAT_00523468;
    }
    if (DAT_00523464 != param_2) {
      if (((*DAT_0052346c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052346c), iVar1 != 0)) {
        *DAT_00523470 = DAT_00523474;
      }
      if (DAT_00523470 != param_2) {
        if (((*DAT_00523478 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523478), iVar1 != 0))
        {
          *DAT_0052347c = DAT_00523480;
        }
        if (DAT_0052347c != param_2) {
          if (((*DAT_00523484 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00523484), iVar1 != 0)
             ) {
            *DAT_00523488 = DAT_0052348c;
          }
          if (DAT_00523488 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

