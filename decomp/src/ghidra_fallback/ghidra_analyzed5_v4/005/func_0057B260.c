#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057b3a0;
extern undefined4 *DAT_0057b3a4;
extern undefined4 DAT_0057b3a8;
extern uint *DAT_0057b3ac;
extern undefined4 *DAT_0057b3b0;
extern undefined4 DAT_0057b3b4;
extern uint *DAT_0057b3b8;
extern undefined4 *DAT_0057b3bc;
extern undefined4 DAT_0057b3c0;
extern uint *DAT_0057b3c4;
extern undefined4 *DAT_0057b3c8;
extern undefined4 DAT_0057b3cc;
extern uint *DAT_0057b3d0;
extern undefined4 *DAT_0057b3d4;
extern undefined4 DAT_0057b3d8;

// USA 0057B260 <- EU 0057B238 (Ghidra, non-matching)
// GLOBAL DAT_0057b3a0 uint *
// GLOBAL DAT_0057b3a4 undefined4 *
// GLOBAL DAT_0057b3a8 undefined4
// GLOBAL DAT_0057b3ac uint *
// GLOBAL DAT_0057b3b0 undefined4 *
// GLOBAL DAT_0057b3b4 undefined4
// GLOBAL DAT_0057b3b8 uint *
// GLOBAL DAT_0057b3bc undefined4 *
// GLOBAL DAT_0057b3c0 undefined4
// GLOBAL DAT_0057b3c4 uint *
// GLOBAL DAT_0057b3c8 undefined4 *
// GLOBAL DAT_0057b3cc undefined4
// GLOBAL DAT_0057b3d0 uint *
// GLOBAL DAT_0057b3d4 undefined4 *
// GLOBAL DAT_0057b3d8 undefined4

undefined4 func_0057B260(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057b3a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b3a0), iVar1 != 0)) {
    *DAT_0057b3a4 = DAT_0057b3a8;
  }
  if (DAT_0057b3a4 != param_2) {
    if (((*DAT_0057b3ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b3ac), iVar1 != 0)) {
      *DAT_0057b3b0 = DAT_0057b3b4;
    }
    if (DAT_0057b3b0 != param_2) {
      if (((*DAT_0057b3b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b3b8), iVar1 != 0)) {
        *DAT_0057b3bc = DAT_0057b3c0;
      }
      if (DAT_0057b3bc != param_2) {
        if (((*DAT_0057b3c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b3c4), iVar1 != 0))
        {
          *DAT_0057b3c8 = DAT_0057b3cc;
        }
        if (DAT_0057b3c8 != param_2) {
          if (((*DAT_0057b3d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057b3d0), iVar1 != 0)
             ) {
            *DAT_0057b3d4 = DAT_0057b3d8;
          }
          if (DAT_0057b3d4 != param_2) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

