#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_002fc130;
extern undefined4 *DAT_002fc134;
extern undefined4 DAT_002fc138;
extern uint *DAT_002fc13c;
extern undefined4 *DAT_002fc140;
extern undefined4 DAT_002fc144;
extern uint *DAT_002fc148;
extern undefined4 *DAT_002fc14c;
extern undefined4 DAT_002fc150;
extern uint *DAT_002fc154;
extern undefined4 *DAT_002fc158;
extern undefined4 DAT_002fc15c;

// USA 002FC030 <- EU 002FC00C (Ghidra, non-matching)
// GLOBAL DAT_002fc130 uint *
// GLOBAL DAT_002fc134 undefined4 *
// GLOBAL DAT_002fc138 undefined4
// GLOBAL DAT_002fc13c uint *
// GLOBAL DAT_002fc140 undefined4 *
// GLOBAL DAT_002fc144 undefined4
// GLOBAL DAT_002fc148 uint *
// GLOBAL DAT_002fc14c undefined4 *
// GLOBAL DAT_002fc150 undefined4
// GLOBAL DAT_002fc154 uint *
// GLOBAL DAT_002fc158 undefined4 *
// GLOBAL DAT_002fc15c undefined4

undefined4 func_002FC030(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_002fc130 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002fc130), iVar1 != 0)) {
    *DAT_002fc134 = DAT_002fc138;
  }
  if (DAT_002fc134 != param_1) {
    if (((*DAT_002fc13c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002fc13c), iVar1 != 0)) {
      *DAT_002fc140 = DAT_002fc144;
    }
    if (DAT_002fc140 != param_1) {
      if (((*DAT_002fc148 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002fc148), iVar1 != 0)) {
        *DAT_002fc14c = DAT_002fc150;
      }
      if (DAT_002fc14c != param_1) {
        if (((*DAT_002fc154 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_002fc154), iVar1 != 0))
        {
          *DAT_002fc158 = DAT_002fc15c;
        }
        if (DAT_002fc158 != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

