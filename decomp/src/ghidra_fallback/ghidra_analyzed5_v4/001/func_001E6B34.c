#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001e6c58;
extern undefined4 *DAT_001e6c5c;
extern undefined4 DAT_001e6c60;
extern uint *DAT_001e6c64;
extern undefined4 *DAT_001e6c68;
extern undefined4 DAT_001e6c6c;
extern uint *DAT_001e6c70;
extern undefined4 *DAT_001e6c74;
extern undefined4 DAT_001e6c78;
extern uint *DAT_001e6c7c;
extern undefined4 *DAT_001e6c80;
extern undefined4 DAT_001e6c84;

// USA 001E6B34 <- EU 001E6B34 (Ghidra, non-matching)
// GLOBAL DAT_001e6c58 uint *
// GLOBAL DAT_001e6c5c undefined4 *
// GLOBAL DAT_001e6c60 undefined4
// GLOBAL DAT_001e6c64 uint *
// GLOBAL DAT_001e6c68 undefined4 *
// GLOBAL DAT_001e6c6c undefined4
// GLOBAL DAT_001e6c70 uint *
// GLOBAL DAT_001e6c74 undefined4 *
// GLOBAL DAT_001e6c78 undefined4
// GLOBAL DAT_001e6c7c uint *
// GLOBAL DAT_001e6c80 undefined4 *
// GLOBAL DAT_001e6c84 undefined4

undefined4 func_001E6B34(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_001e6c58 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e6c58), iVar1 != 0)) {
    *DAT_001e6c5c = DAT_001e6c60;
  }
  if (DAT_001e6c5c != param_1) {
    if (((*DAT_001e6c64 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e6c64), iVar1 != 0)) {
      *DAT_001e6c68 = DAT_001e6c6c;
    }
    if (DAT_001e6c68 != param_1) {
      if (((*DAT_001e6c70 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e6c70), iVar1 != 0)) {
        *DAT_001e6c74 = DAT_001e6c78;
      }
      if (DAT_001e6c74 != param_1) {
        if (((*DAT_001e6c7c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001e6c7c), iVar1 != 0))
        {
          *DAT_001e6c80 = DAT_001e6c84;
        }
        if (DAT_001e6c80 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

