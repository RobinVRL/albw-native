#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_005318b0;
extern undefined4 *DAT_005318b4;
extern undefined4 DAT_005318b8;
extern uint *DAT_005318bc;
extern undefined4 *DAT_005318c0;
extern undefined4 DAT_005318c4;
extern uint *DAT_005318c8;
extern undefined4 *DAT_005318cc;
extern undefined4 DAT_005318d0;
extern uint *DAT_005318d4;
extern undefined4 *DAT_005318d8;
extern undefined4 DAT_005318dc;

// USA 005317B4 <- EU 0053178C (Ghidra, non-matching)
// GLOBAL DAT_005318b0 uint *
// GLOBAL DAT_005318b4 undefined4 *
// GLOBAL DAT_005318b8 undefined4
// GLOBAL DAT_005318bc uint *
// GLOBAL DAT_005318c0 undefined4 *
// GLOBAL DAT_005318c4 undefined4
// GLOBAL DAT_005318c8 uint *
// GLOBAL DAT_005318cc undefined4 *
// GLOBAL DAT_005318d0 undefined4
// GLOBAL DAT_005318d4 uint *
// GLOBAL DAT_005318d8 undefined4 *
// GLOBAL DAT_005318dc undefined4

undefined4 func_005317B4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_005318b0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005318b0), iVar1 != 0)) {
    *DAT_005318b4 = DAT_005318b8;
  }
  if (DAT_005318b4 != param_2) {
    if (((*DAT_005318bc & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005318bc), iVar1 != 0)) {
      *DAT_005318c0 = DAT_005318c4;
    }
    if (DAT_005318c0 != param_2) {
      if (((*DAT_005318c8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005318c8), iVar1 != 0)) {
        *DAT_005318cc = DAT_005318d0;
      }
      if (DAT_005318cc != param_2) {
        if (((*DAT_005318d4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_005318d4), iVar1 != 0))
        {
          *DAT_005318d8 = DAT_005318dc;
        }
        if (DAT_005318d8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

