#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00535e6c;
extern undefined4 *DAT_00535e70;
extern undefined4 DAT_00535e74;
extern uint *DAT_00535e78;
extern undefined4 *DAT_00535e7c;
extern undefined4 DAT_00535e80;
extern uint *DAT_00535e84;
extern undefined4 *DAT_00535e88;
extern undefined4 DAT_00535e8c;
extern uint *DAT_00535e90;
extern undefined4 *DAT_00535e94;
extern undefined4 DAT_00535e98;
extern uint *DAT_00535e9c;
extern undefined4 *DAT_00535ea0;
extern undefined4 DAT_00535ea4;
extern uint *DAT_00535ea8;
extern undefined4 *DAT_00535eac;
extern undefined4 DAT_00535eb0;
extern uint *DAT_00535eb4;
extern undefined4 *DAT_00535eb8;
extern undefined4 DAT_00535ebc;

// USA 00535CA4 <- EU 00535C7C (Ghidra, non-matching)
// GLOBAL DAT_00535e6c uint *
// GLOBAL DAT_00535e70 undefined4 *
// GLOBAL DAT_00535e74 undefined4
// GLOBAL DAT_00535e78 uint *
// GLOBAL DAT_00535e7c undefined4 *
// GLOBAL DAT_00535e80 undefined4
// GLOBAL DAT_00535e84 uint *
// GLOBAL DAT_00535e88 undefined4 *
// GLOBAL DAT_00535e8c undefined4
// GLOBAL DAT_00535e90 uint *
// GLOBAL DAT_00535e94 undefined4 *
// GLOBAL DAT_00535e98 undefined4
// GLOBAL DAT_00535e9c uint *
// GLOBAL DAT_00535ea0 undefined4 *
// GLOBAL DAT_00535ea4 undefined4
// GLOBAL DAT_00535ea8 uint *
// GLOBAL DAT_00535eac undefined4 *
// GLOBAL DAT_00535eb0 undefined4
// GLOBAL DAT_00535eb4 uint *
// GLOBAL DAT_00535eb8 undefined4 *
// GLOBAL DAT_00535ebc undefined4

undefined4 func_00535CA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00535e6c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535e6c), iVar1 != 0)) {
    *DAT_00535e70 = DAT_00535e74;
  }
  if (DAT_00535e70 != param_2) {
    if (((*DAT_00535e78 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535e78), iVar1 != 0)) {
      *DAT_00535e7c = DAT_00535e80;
    }
    if (DAT_00535e7c != param_2) {
      if (((*DAT_00535e84 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535e84), iVar1 != 0)) {
        *DAT_00535e88 = DAT_00535e8c;
      }
      if (DAT_00535e88 != param_2) {
        if (((*DAT_00535e90 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535e90), iVar1 != 0))
        {
          *DAT_00535e94 = DAT_00535e98;
        }
        if (DAT_00535e94 != param_2) {
          if (((*DAT_00535e9c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00535e9c), iVar1 != 0)
             ) {
            *DAT_00535ea0 = DAT_00535ea4;
          }
          if (DAT_00535ea0 != param_2) {
            if (((*DAT_00535ea8 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00535ea8), iVar1 != 0)) {
              *DAT_00535eac = DAT_00535eb0;
            }
            if (DAT_00535eac != param_2) {
              if (((*DAT_00535eb4 & 1) == 0) &&
                 (iVar1 = func_00100174((int *)DAT_00535eb4), iVar1 != 0)) {
                *DAT_00535eb8 = DAT_00535ebc;
              }
              if (DAT_00535eb8 != param_2) {
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

