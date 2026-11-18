#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_00531e80;
extern undefined4 *DAT_00531e84;
extern undefined4 DAT_00531e88;
extern uint *DAT_00531e8c;
extern undefined4 *DAT_00531e90;
extern undefined4 DAT_00531e94;
extern uint *DAT_00531e98;
extern undefined4 *DAT_00531e9c;
extern undefined4 DAT_00531ea0;
extern uint *DAT_00531ea4;
extern undefined4 *DAT_00531ea8;
extern undefined4 DAT_00531eac;
extern uint *DAT_00531eb0;
extern undefined4 *DAT_00531eb4;
extern undefined4 DAT_00531eb8;
extern uint *DAT_00531ebc;
extern undefined4 *DAT_00531ec0;
extern undefined4 DAT_00531ec4;

// USA 00531CFC <- EU 00531CD4 (Ghidra, non-matching)
// GLOBAL DAT_00531e80 uint *
// GLOBAL DAT_00531e84 undefined4 *
// GLOBAL DAT_00531e88 undefined4
// GLOBAL DAT_00531e8c uint *
// GLOBAL DAT_00531e90 undefined4 *
// GLOBAL DAT_00531e94 undefined4
// GLOBAL DAT_00531e98 uint *
// GLOBAL DAT_00531e9c undefined4 *
// GLOBAL DAT_00531ea0 undefined4
// GLOBAL DAT_00531ea4 uint *
// GLOBAL DAT_00531ea8 undefined4 *
// GLOBAL DAT_00531eac undefined4
// GLOBAL DAT_00531eb0 uint *
// GLOBAL DAT_00531eb4 undefined4 *
// GLOBAL DAT_00531eb8 undefined4
// GLOBAL DAT_00531ebc uint *
// GLOBAL DAT_00531ec0 undefined4 *
// GLOBAL DAT_00531ec4 undefined4

undefined4 func_00531CFC(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_00531e80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531e80), iVar1 != 0)) {
    *DAT_00531e84 = DAT_00531e88;
  }
  if (DAT_00531e84 != param_2) {
    if (((*DAT_00531e8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531e8c), iVar1 != 0)) {
      *DAT_00531e90 = DAT_00531e94;
    }
    if (DAT_00531e90 != param_2) {
      if (((*DAT_00531e98 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531e98), iVar1 != 0)) {
        *DAT_00531e9c = DAT_00531ea0;
      }
      if (DAT_00531e9c != param_2) {
        if (((*DAT_00531ea4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531ea4), iVar1 != 0))
        {
          *DAT_00531ea8 = DAT_00531eac;
        }
        if (DAT_00531ea8 != param_2) {
          if (((*DAT_00531eb0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00531eb0), iVar1 != 0)
             ) {
            *DAT_00531eb4 = DAT_00531eb8;
          }
          if (DAT_00531eb4 != param_2) {
            if (((*DAT_00531ebc & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_00531ebc), iVar1 != 0)) {
              *DAT_00531ec0 = DAT_00531ec4;
            }
            if (DAT_00531ec0 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

