#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00534318;
extern undefined4 *DAT_0053431c;
extern undefined4 DAT_00534320;
extern uint *DAT_00534324;
extern undefined4 *DAT_00534328;
extern undefined4 DAT_0053432c;
extern uint *DAT_00534330;
extern undefined4 *DAT_00534334;
extern undefined4 DAT_00534338;
extern uint *DAT_0053433c;
extern undefined4 *DAT_00534340;
extern undefined4 DAT_00534344;
extern uint *DAT_00534348;
extern undefined4 *DAT_0053434c;
extern undefined4 DAT_00534350;

// USA 005341D8 <- EU 005341B0 (Ghidra, non-matching)
// GLOBAL DAT_00534318 uint *
// GLOBAL DAT_0053431c undefined4 *
// GLOBAL DAT_00534320 undefined4
// GLOBAL DAT_00534324 uint *
// GLOBAL DAT_00534328 undefined4 *
// GLOBAL DAT_0053432c undefined4
// GLOBAL DAT_00534330 uint *
// GLOBAL DAT_00534334 undefined4 *
// GLOBAL DAT_00534338 undefined4
// GLOBAL DAT_0053433c uint *
// GLOBAL DAT_00534340 undefined4 *
// GLOBAL DAT_00534344 undefined4
// GLOBAL DAT_00534348 uint *
// GLOBAL DAT_0053434c undefined4 *
// GLOBAL DAT_00534350 undefined4

undefined4 func_005341D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00534318 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534318), iVar1 != 0)) {
    *DAT_0053431c = DAT_00534320;
  }
  if (DAT_0053431c != param_2) {
    if (((*DAT_00534324 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534324), iVar1 != 0)) {
      *DAT_00534328 = DAT_0053432c;
    }
    if (DAT_00534328 != param_2) {
      if (((*DAT_00534330 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534330), iVar1 != 0)) {
        *DAT_00534334 = DAT_00534338;
      }
      if (DAT_00534334 != param_2) {
        if (((*DAT_0053433c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0053433c), iVar1 != 0))
        {
          *DAT_00534340 = DAT_00534344;
        }
        if (DAT_00534340 != param_2) {
          if (((*DAT_00534348 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00534348), iVar1 != 0)
             ) {
            *DAT_0053434c = DAT_00534350;
          }
          if (DAT_0053434c != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

