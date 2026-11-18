#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0058c52c;
extern undefined4 *DAT_0058c530;
extern undefined4 DAT_0058c534;
extern uint *DAT_0058c538;
extern undefined4 *DAT_0058c53c;
extern undefined4 DAT_0058c540;
extern uint *DAT_0058c544;
extern undefined4 *DAT_0058c548;
extern undefined4 DAT_0058c54c;

// USA 0058C474 <- EU 0058C44C (Ghidra, non-matching)
// GLOBAL DAT_0058c52c uint *
// GLOBAL DAT_0058c530 undefined4 *
// GLOBAL DAT_0058c534 undefined4
// GLOBAL DAT_0058c538 uint *
// GLOBAL DAT_0058c53c undefined4 *
// GLOBAL DAT_0058c540 undefined4
// GLOBAL DAT_0058c544 uint *
// GLOBAL DAT_0058c548 undefined4 *
// GLOBAL DAT_0058c54c undefined4

undefined4 func_0058C474(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0058c52c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c52c), iVar1 != 0)) {
    *DAT_0058c530 = DAT_0058c534;
  }
  if (DAT_0058c530 != param_2) {
    if (((*DAT_0058c538 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c538), iVar1 != 0)) {
      *DAT_0058c53c = DAT_0058c540;
    }
    if (DAT_0058c53c != param_2) {
      if (((*DAT_0058c544 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0058c544), iVar1 != 0)) {
        *DAT_0058c548 = DAT_0058c54c;
      }
      if (DAT_0058c548 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

