#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057c6cc;
extern undefined4 *DAT_0057c6d0;
extern undefined4 DAT_0057c6d4;
extern uint *DAT_0057c6d8;
extern undefined4 *DAT_0057c6dc;
extern undefined4 DAT_0057c6e0;
extern uint *DAT_0057c6e4;
extern undefined4 *DAT_0057c6e8;
extern undefined4 DAT_0057c6ec;
extern uint *DAT_0057c6f0;
extern undefined4 *DAT_0057c6f4;
extern undefined4 DAT_0057c6f8;
extern uint *DAT_0057c6fc;
extern undefined4 *DAT_0057c700;
extern undefined4 DAT_0057c704;
extern uint *DAT_0057c708;
extern undefined4 *DAT_0057c70c;
extern undefined4 DAT_0057c710;

// USA 0057C548 <- EU 0057C520 (Ghidra, non-matching)
// GLOBAL DAT_0057c6cc uint *
// GLOBAL DAT_0057c6d0 undefined4 *
// GLOBAL DAT_0057c6d4 undefined4
// GLOBAL DAT_0057c6d8 uint *
// GLOBAL DAT_0057c6dc undefined4 *
// GLOBAL DAT_0057c6e0 undefined4
// GLOBAL DAT_0057c6e4 uint *
// GLOBAL DAT_0057c6e8 undefined4 *
// GLOBAL DAT_0057c6ec undefined4
// GLOBAL DAT_0057c6f0 uint *
// GLOBAL DAT_0057c6f4 undefined4 *
// GLOBAL DAT_0057c6f8 undefined4
// GLOBAL DAT_0057c6fc uint *
// GLOBAL DAT_0057c700 undefined4 *
// GLOBAL DAT_0057c704 undefined4
// GLOBAL DAT_0057c708 uint *
// GLOBAL DAT_0057c70c undefined4 *
// GLOBAL DAT_0057c710 undefined4

undefined4 func_0057C548(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057c6cc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c6cc), iVar1 != 0)) {
    *DAT_0057c6d0 = DAT_0057c6d4;
  }
  if (DAT_0057c6d0 != param_2) {
    if (((*DAT_0057c6d8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c6d8), iVar1 != 0)) {
      *DAT_0057c6dc = DAT_0057c6e0;
    }
    if (DAT_0057c6dc != param_2) {
      if (((*DAT_0057c6e4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c6e4), iVar1 != 0)) {
        *DAT_0057c6e8 = DAT_0057c6ec;
      }
      if (DAT_0057c6e8 != param_2) {
        if (((*DAT_0057c6f0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c6f0), iVar1 != 0))
        {
          *DAT_0057c6f4 = DAT_0057c6f8;
        }
        if (DAT_0057c6f4 != param_2) {
          if (((*DAT_0057c6fc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057c6fc), iVar1 != 0)
             ) {
            *DAT_0057c700 = DAT_0057c704;
          }
          if (DAT_0057c700 != param_2) {
            if (((*DAT_0057c708 & 1) == 0) &&
               (iVar1 = func_00100174((int *)DAT_0057c708), iVar1 != 0)) {
              *DAT_0057c70c = DAT_0057c710;
            }
            if (DAT_0057c70c != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}

