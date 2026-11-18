#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0056fc3c;
extern undefined4 *DAT_0056fc40;
extern undefined4 DAT_0056fc44;
extern uint *DAT_0056fc48;
extern undefined4 *DAT_0056fc4c;
extern undefined4 DAT_0056fc50;
extern uint *DAT_0056fc54;
extern undefined4 *DAT_0056fc58;
extern undefined4 DAT_0056fc5c;

// USA 0056FB84 <- EU 0056FB5C (Ghidra, non-matching)
// GLOBAL DAT_0056fc3c uint *
// GLOBAL DAT_0056fc40 undefined4 *
// GLOBAL DAT_0056fc44 undefined4
// GLOBAL DAT_0056fc48 uint *
// GLOBAL DAT_0056fc4c undefined4 *
// GLOBAL DAT_0056fc50 undefined4
// GLOBAL DAT_0056fc54 uint *
// GLOBAL DAT_0056fc58 undefined4 *
// GLOBAL DAT_0056fc5c undefined4

undefined4 func_0056FB84(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0056fc3c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fc3c), iVar1 != 0)) {
    *DAT_0056fc40 = DAT_0056fc44;
  }
  if (DAT_0056fc40 != param_2) {
    if (((*DAT_0056fc48 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fc48), iVar1 != 0)) {
      *DAT_0056fc4c = DAT_0056fc50;
    }
    if (DAT_0056fc4c != param_2) {
      if (((*DAT_0056fc54 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0056fc54), iVar1 != 0)) {
        *DAT_0056fc58 = DAT_0056fc5c;
      }
      if (DAT_0056fc58 != param_2) {
        return 0;
      }
    }
  }
  return 1;
}

