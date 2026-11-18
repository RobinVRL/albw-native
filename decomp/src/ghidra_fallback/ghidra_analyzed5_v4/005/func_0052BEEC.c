#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0052c0b4;
extern undefined4 *DAT_0052c0b8;
extern undefined4 DAT_0052c0bc;
extern uint *DAT_0052c0c0;
extern undefined4 *DAT_0052c0c4;
extern undefined4 DAT_0052c0c8;
extern uint *DAT_0052c0cc;
extern undefined4 *DAT_0052c0d0;
extern undefined4 DAT_0052c0d4;
extern uint *DAT_0052c0d8;
extern undefined4 *DAT_0052c0dc;
extern undefined4 DAT_0052c0e0;
extern uint *DAT_0052c0e4;
extern undefined4 *DAT_0052c0e8;
extern undefined4 DAT_0052c0ec;
extern uint *DAT_0052c0f0;
extern undefined4 *DAT_0052c0f4;
extern undefined4 DAT_0052c0f8;
extern uint *DAT_0052c0fc;
extern undefined4 *DAT_0052c100;
extern undefined4 DAT_0052c104;

// USA 0052BEEC <- EU 0052BEC4 (Ghidra, non-matching)
// GLOBAL DAT_0052c0b4 uint *
// GLOBAL DAT_0052c0b8 undefined4 *
// GLOBAL DAT_0052c0bc undefined4
// GLOBAL DAT_0052c0c0 uint *
// GLOBAL DAT_0052c0c4 undefined4 *
// GLOBAL DAT_0052c0c8 undefined4
// GLOBAL DAT_0052c0cc uint *
// GLOBAL DAT_0052c0d0 undefined4 *
// GLOBAL DAT_0052c0d4 undefined4
// GLOBAL DAT_0052c0d8 uint *
// GLOBAL DAT_0052c0dc undefined4 *
// GLOBAL DAT_0052c0e0 undefined4
// GLOBAL DAT_0052c0e4 uint *
// GLOBAL DAT_0052c0e8 undefined4 *
// GLOBAL DAT_0052c0ec undefined4
// GLOBAL DAT_0052c0f0 uint *
// GLOBAL DAT_0052c0f4 undefined4 *
// GLOBAL DAT_0052c0f8 undefined4
// GLOBAL DAT_0052c0fc uint *
// GLOBAL DAT_0052c100 undefined4 *
// GLOBAL DAT_0052c104 undefined4

undefined4 func_0052BEEC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0052c0b4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c0b4), iVar1 != 0)) {
    *DAT_0052c0b8 = DAT_0052c0bc;
  }
  if (DAT_0052c0b8 != param_2) {
    if (((*DAT_0052c0c0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c0c0), iVar1 != 0)) {
      *DAT_0052c0c4 = DAT_0052c0c8;
    }
    if (DAT_0052c0c4 != param_2) {
      if (((*DAT_0052c0cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c0cc), iVar1 != 0)) {
        *DAT_0052c0d0 = DAT_0052c0d4;
      }
      if (DAT_0052c0d0 != param_2) {
        if (((*DAT_0052c0d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c0d8), iVar1 != 0))
        {
          *DAT_0052c0dc = DAT_0052c0e0;
        }
        if (DAT_0052c0dc != param_2) {
          if (((*DAT_0052c0e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0052c0e4), iVar1 != 0)
             ) {
            *DAT_0052c0e8 = DAT_0052c0ec;
          }
          if (DAT_0052c0e8 != param_2) {
            if (((*DAT_0052c0f0 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0052c0f0), iVar1 != 0)) {
              *DAT_0052c0f4 = DAT_0052c0f8;
            }
            if (DAT_0052c0f4 != param_2) {
              if (((*DAT_0052c0fc & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_0052c0fc), iVar1 != 0)) {
                *DAT_0052c100 = DAT_0052c104;
              }
              if (DAT_0052c100 != param_2) {
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

