#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0054449c;
extern undefined4 *DAT_005444a0;
extern undefined4 DAT_005444a4;
extern uint *DAT_005444a8;
extern undefined4 *DAT_005444ac;
extern undefined4 DAT_005444b0;
extern uint *DAT_005444b4;
extern undefined4 *DAT_005444b8;
extern undefined4 DAT_005444bc;
extern uint *DAT_005444c0;
extern undefined4 *DAT_005444c4;
extern undefined4 DAT_005444c8;

// USA 005443A0 <- EU 00544378 (Ghidra, non-matching)
// GLOBAL DAT_0054449c uint *
// GLOBAL DAT_005444a0 undefined4 *
// GLOBAL DAT_005444a4 undefined4
// GLOBAL DAT_005444a8 uint *
// GLOBAL DAT_005444ac undefined4 *
// GLOBAL DAT_005444b0 undefined4
// GLOBAL DAT_005444b4 uint *
// GLOBAL DAT_005444b8 undefined4 *
// GLOBAL DAT_005444bc undefined4
// GLOBAL DAT_005444c0 uint *
// GLOBAL DAT_005444c4 undefined4 *
// GLOBAL DAT_005444c8 undefined4

undefined4 func_005443A0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0054449c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0054449c), iVar1 != 0)) {
    *DAT_005444a0 = DAT_005444a4;
  }
  if (DAT_005444a0 != param_2) {
    if (((*DAT_005444a8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005444a8), iVar1 != 0)) {
      *DAT_005444ac = DAT_005444b0;
    }
    if (DAT_005444ac != param_2) {
      if (((*DAT_005444b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005444b4), iVar1 != 0)) {
        *DAT_005444b8 = DAT_005444bc;
      }
      if (DAT_005444b8 != param_2) {
        if (((*DAT_005444c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005444c0), iVar1 != 0))
        {
          *DAT_005444c4 = DAT_005444c8;
        }
        if (DAT_005444c4 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

