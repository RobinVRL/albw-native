#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0055a6dc;
extern undefined4 *DAT_0055a6e0;
extern undefined4 DAT_0055a6e4;
extern uint *DAT_0055a6e8;
extern undefined4 *DAT_0055a6ec;
extern undefined4 DAT_0055a6f0;
extern uint *DAT_0055a6f4;
extern undefined4 *DAT_0055a6f8;
extern undefined4 DAT_0055a6fc;
extern uint *DAT_0055a700;
extern undefined4 *DAT_0055a704;
extern undefined4 DAT_0055a708;

// USA 0055A5E0 <- EU 0055A5B8 (Ghidra, non-matching)
// GLOBAL DAT_0055a6dc uint *
// GLOBAL DAT_0055a6e0 undefined4 *
// GLOBAL DAT_0055a6e4 undefined4
// GLOBAL DAT_0055a6e8 uint *
// GLOBAL DAT_0055a6ec undefined4 *
// GLOBAL DAT_0055a6f0 undefined4
// GLOBAL DAT_0055a6f4 uint *
// GLOBAL DAT_0055a6f8 undefined4 *
// GLOBAL DAT_0055a6fc undefined4
// GLOBAL DAT_0055a700 uint *
// GLOBAL DAT_0055a704 undefined4 *
// GLOBAL DAT_0055a708 undefined4

undefined4 func_0055A5E0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055a6dc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a6dc), iVar1 != 0)) {
    *DAT_0055a6e0 = DAT_0055a6e4;
  }
  if (DAT_0055a6e0 != param_2) {
    if (((*DAT_0055a6e8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a6e8), iVar1 != 0)) {
      *DAT_0055a6ec = DAT_0055a6f0;
    }
    if (DAT_0055a6ec != param_2) {
      if (((*DAT_0055a6f4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a6f4), iVar1 != 0)) {
        *DAT_0055a6f8 = DAT_0055a6fc;
      }
      if (DAT_0055a6f8 != param_2) {
        if (((*DAT_0055a700 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055a700), iVar1 != 0))
        {
          *DAT_0055a704 = DAT_0055a708;
        }
        if (DAT_0055a704 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

