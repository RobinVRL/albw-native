#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058d44c;
extern undefined4 *DAT_0058d450;
extern undefined4 DAT_0058d454;
extern uint *DAT_0058d458;
extern undefined4 *DAT_0058d45c;
extern undefined4 DAT_0058d460;
extern uint *DAT_0058d464;
extern undefined4 *DAT_0058d468;
extern undefined4 DAT_0058d46c;

// USA 0058D394 <- EU 0058D36C (Ghidra, non-matching)
// GLOBAL DAT_0058d44c uint *
// GLOBAL DAT_0058d450 undefined4 *
// GLOBAL DAT_0058d454 undefined4
// GLOBAL DAT_0058d458 uint *
// GLOBAL DAT_0058d45c undefined4 *
// GLOBAL DAT_0058d460 undefined4
// GLOBAL DAT_0058d464 uint *
// GLOBAL DAT_0058d468 undefined4 *
// GLOBAL DAT_0058d46c undefined4

undefined4 func_0058D394(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058d44c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d44c), iVar1 != 0)) {
    *DAT_0058d450 = DAT_0058d454;
  }
  if (DAT_0058d450 != param_2) {
    if (((*DAT_0058d458 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d458), iVar1 != 0)) {
      *DAT_0058d45c = DAT_0058d460;
    }
    if (DAT_0058d45c != param_2) {
      if (((*DAT_0058d464 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058d464), iVar1 != 0)) {
        *DAT_0058d468 = DAT_0058d46c;
      }
      if (DAT_0058d468 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

