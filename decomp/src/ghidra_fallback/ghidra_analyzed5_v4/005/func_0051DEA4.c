#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0051dfa0;
extern undefined4 *DAT_0051dfa4;
extern undefined4 DAT_0051dfa8;
extern uint *DAT_0051dfac;
extern undefined4 *DAT_0051dfb0;
extern undefined4 DAT_0051dfb4;
extern uint *DAT_0051dfb8;
extern undefined4 *DAT_0051dfbc;
extern undefined4 DAT_0051dfc0;
extern uint *DAT_0051dfc4;
extern undefined4 *DAT_0051dfc8;
extern undefined4 DAT_0051dfcc;

// USA 0051DEA4 <- EU 0051DE7C (Ghidra, non-matching)
// GLOBAL DAT_0051dfa0 uint *
// GLOBAL DAT_0051dfa4 undefined4 *
// GLOBAL DAT_0051dfa8 undefined4
// GLOBAL DAT_0051dfac uint *
// GLOBAL DAT_0051dfb0 undefined4 *
// GLOBAL DAT_0051dfb4 undefined4
// GLOBAL DAT_0051dfb8 uint *
// GLOBAL DAT_0051dfbc undefined4 *
// GLOBAL DAT_0051dfc0 undefined4
// GLOBAL DAT_0051dfc4 uint *
// GLOBAL DAT_0051dfc8 undefined4 *
// GLOBAL DAT_0051dfcc undefined4

undefined4 func_0051DEA4(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0051dfa0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dfa0), iVar1 != 0)) {
    *DAT_0051dfa4 = DAT_0051dfa8;
  }
  if (DAT_0051dfa4 != param_2) {
    if (((*DAT_0051dfac & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dfac), iVar1 != 0)) {
      *DAT_0051dfb0 = DAT_0051dfb4;
    }
    if (DAT_0051dfb0 != param_2) {
      if (((*DAT_0051dfb8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dfb8), iVar1 != 0)) {
        *DAT_0051dfbc = DAT_0051dfc0;
      }
      if (DAT_0051dfbc != param_2) {
        if (((*DAT_0051dfc4 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0051dfc4), iVar1 != 0))
        {
          *DAT_0051dfc8 = DAT_0051dfcc;
        }
        if (DAT_0051dfc8 != param_2) {
          return 0;
        }
      }
    }
  }
  return 1;
}

