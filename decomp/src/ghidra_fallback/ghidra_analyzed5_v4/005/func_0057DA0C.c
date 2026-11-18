#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0057da80;
extern undefined4 *DAT_0057da84;
extern undefined4 DAT_0057da88;
extern uint *DAT_0057da8c;
extern undefined4 *DAT_0057da90;
extern undefined4 DAT_0057da94;

// USA 0057DA0C <- EU 0057D9E4 (Ghidra, non-matching)
// GLOBAL DAT_0057da80 uint *
// GLOBAL DAT_0057da84 undefined4 *
// GLOBAL DAT_0057da88 undefined4
// GLOBAL DAT_0057da8c uint *
// GLOBAL DAT_0057da90 undefined4 *
// GLOBAL DAT_0057da94 undefined4

undefined4 func_0057DA0C(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (((*DAT_0057da80 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057da80), iVar1 != 0)) {
    *DAT_0057da84 = DAT_0057da88;
  }
  if (DAT_0057da84 != param_2) {
    if (((*DAT_0057da8c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0057da8c), iVar1 != 0)) {
      *DAT_0057da90 = DAT_0057da94;
    }
    if (DAT_0057da90 != param_2) {
      return 0;
    }
  }
  return 1;
}

