#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005865a0;
extern undefined4 *DAT_005865a4;
extern undefined4 DAT_005865a8;
extern uint *DAT_005865ac;
extern undefined4 *DAT_005865b0;
extern undefined4 DAT_005865b4;
extern uint *DAT_005865b8;
extern undefined4 *DAT_005865bc;
extern undefined4 DAT_005865c0;
extern uint *DAT_005865c4;
extern undefined4 *DAT_005865c8;
extern undefined4 DAT_005865cc;
extern uint *DAT_005865d0;
extern undefined4 *DAT_005865d4;
extern undefined4 DAT_005865d8;
extern uint *DAT_005865dc;
extern undefined4 *DAT_005865e0;
extern undefined4 DAT_005865e4;
extern uint *DAT_005865e8;
extern undefined4 *DAT_005865ec;
extern undefined4 DAT_005865f0;

// USA 005863D8 <- EU 005863B0 (Ghidra, non-matching)
// GLOBAL DAT_005865a0 uint *
// GLOBAL DAT_005865a4 undefined4 *
// GLOBAL DAT_005865a8 undefined4
// GLOBAL DAT_005865ac uint *
// GLOBAL DAT_005865b0 undefined4 *
// GLOBAL DAT_005865b4 undefined4
// GLOBAL DAT_005865b8 uint *
// GLOBAL DAT_005865bc undefined4 *
// GLOBAL DAT_005865c0 undefined4
// GLOBAL DAT_005865c4 uint *
// GLOBAL DAT_005865c8 undefined4 *
// GLOBAL DAT_005865cc undefined4
// GLOBAL DAT_005865d0 uint *
// GLOBAL DAT_005865d4 undefined4 *
// GLOBAL DAT_005865d8 undefined4
// GLOBAL DAT_005865dc uint *
// GLOBAL DAT_005865e0 undefined4 *
// GLOBAL DAT_005865e4 undefined4
// GLOBAL DAT_005865e8 uint *
// GLOBAL DAT_005865ec undefined4 *
// GLOBAL DAT_005865f0 undefined4

undefined4 func_005863D8(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005865a0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005865a0), iVar1 != 0)) {
    *DAT_005865a4 = DAT_005865a8;
  }
  if (DAT_005865a4 != param_2) {
    if (((*DAT_005865ac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005865ac), iVar1 != 0)) {
      *DAT_005865b0 = DAT_005865b4;
    }
    if (DAT_005865b0 != param_2) {
      if (((*DAT_005865b8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005865b8), iVar1 != 0)) {
        *DAT_005865bc = DAT_005865c0;
      }
      if (DAT_005865bc != param_2) {
        if (((*DAT_005865c4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005865c4), iVar1 != 0))
        {
          *DAT_005865c8 = DAT_005865cc;
        }
        if (DAT_005865c8 != param_2) {
          if (((*DAT_005865d0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005865d0), iVar1 != 0)
             ) {
            *DAT_005865d4 = DAT_005865d8;
          }
          if (DAT_005865d4 != param_2) {
            if (((*DAT_005865dc & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_005865dc), iVar1 != 0)) {
              *DAT_005865e0 = DAT_005865e4;
            }
            if (DAT_005865e0 != param_2) {
              if (((*DAT_005865e8 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_005865e8), iVar1 != 0)) {
                *DAT_005865ec = DAT_005865f0;
              }
              if (DAT_005865ec != param_2) {
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

