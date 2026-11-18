#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_001ad054;
extern undefined4 *DAT_001ad058;
extern undefined4 DAT_001ad05c;
extern uint *DAT_001ad060;
extern undefined4 *DAT_001ad064;
extern undefined4 DAT_001ad068;
extern uint *DAT_001ad06c;
extern undefined4 *DAT_001ad070;
extern undefined4 DAT_001ad074;
extern uint *DAT_001ad078;
extern undefined4 *DAT_001ad07c;
extern undefined4 DAT_001ad080;

// USA 001ACF30 <- EU 001ACF30 (Ghidra, non-matching)
// GLOBAL DAT_001ad054 uint *
// GLOBAL DAT_001ad058 undefined4 *
// GLOBAL DAT_001ad05c undefined4
// GLOBAL DAT_001ad060 uint *
// GLOBAL DAT_001ad064 undefined4 *
// GLOBAL DAT_001ad068 undefined4
// GLOBAL DAT_001ad06c uint *
// GLOBAL DAT_001ad070 undefined4 *
// GLOBAL DAT_001ad074 undefined4
// GLOBAL DAT_001ad078 uint *
// GLOBAL DAT_001ad07c undefined4 *
// GLOBAL DAT_001ad080 undefined4

undefined4 func_001ACF30(undefined4 *param_1)

{
  int iVar1;
  
  if (((*DAT_001ad054 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001ad054), iVar1 != 0)) {
    *DAT_001ad058 = DAT_001ad05c;
  }
  if (DAT_001ad058 != param_1) {
    if (((*DAT_001ad060 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001ad060), iVar1 != 0)) {
      *DAT_001ad064 = DAT_001ad068;
    }
    if (DAT_001ad064 != param_1) {
      if (((*DAT_001ad06c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001ad06c), iVar1 != 0)) {
        *DAT_001ad070 = DAT_001ad074;
      }
      if (DAT_001ad070 != param_1) {
        if (((*DAT_001ad078 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_001ad078), iVar1 != 0))
        {
          *DAT_001ad07c = DAT_001ad080;
        }
        if (DAT_001ad07c != param_1) {
          return 0;
        }
      }
    }
  }
  return 1;
}

