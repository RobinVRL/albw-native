#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052fb48;
extern undefined4 *DAT_0052fb4c;
extern undefined4 DAT_0052fb50;
extern uint *DAT_0052fb54;
extern undefined4 *DAT_0052fb58;
extern undefined4 DAT_0052fb5c;
extern uint *DAT_0052fb60;
extern undefined4 *DAT_0052fb64;
extern undefined4 DAT_0052fb68;
extern uint *DAT_0052fb6c;
extern undefined4 *DAT_0052fb70;
extern undefined4 DAT_0052fb74;

// USA 0052FA4C <- EU 0052FA24 (Ghidra, non-matching)
// GLOBAL DAT_0052fb48 uint *
// GLOBAL DAT_0052fb4c undefined4 *
// GLOBAL DAT_0052fb50 undefined4
// GLOBAL DAT_0052fb54 uint *
// GLOBAL DAT_0052fb58 undefined4 *
// GLOBAL DAT_0052fb5c undefined4
// GLOBAL DAT_0052fb60 uint *
// GLOBAL DAT_0052fb64 undefined4 *
// GLOBAL DAT_0052fb68 undefined4
// GLOBAL DAT_0052fb6c uint *
// GLOBAL DAT_0052fb70 undefined4 *
// GLOBAL DAT_0052fb74 undefined4

undefined4 func_0052FA4C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052fb48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052fb48), iVar1 != 0)) {
    *DAT_0052fb4c = DAT_0052fb50;
  }
  if (DAT_0052fb4c != param_2) {
    if (((*DAT_0052fb54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052fb54), iVar1 != 0)) {
      *DAT_0052fb58 = DAT_0052fb5c;
    }
    if (DAT_0052fb58 != param_2) {
      if (((*DAT_0052fb60 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052fb60), iVar1 != 0)) {
        *DAT_0052fb64 = DAT_0052fb68;
      }
      if (DAT_0052fb64 != param_2) {
        if (((*DAT_0052fb6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052fb6c), iVar1 != 0))
        {
          *DAT_0052fb70 = DAT_0052fb74;
        }
        if (DAT_0052fb70 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

