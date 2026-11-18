#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_006304C8(undefined4 *param_1);
extern uint *DAT_0055aea8;
extern undefined4 *DAT_0055aeac;
extern undefined4 DAT_0055aeb0;

// USA 0055AE7C <- EU 0055AE54 (Ghidra, non-matching)
// GLOBAL DAT_0055aea8 uint *
// GLOBAL DAT_0055aeac undefined4 *
// GLOBAL DAT_0055aeb0 undefined4

void func_0055AE7C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0055aea8 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0055aea8), iVar1 != 0)) {
    *DAT_0055aeac = DAT_0055aeb0;
  }
  if (DAT_0055aeac != param_2) {
    func_006304C8(param_2);
  }
  return;
}

