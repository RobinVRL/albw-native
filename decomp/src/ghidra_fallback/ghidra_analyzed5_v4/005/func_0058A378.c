#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int DAT_0058a3ac;
extern int *DAT_0058a3b0;
extern undefined4 *DAT_0058a3b4;

// USA 0058A378 <- EU 0058A350 (Ghidra, non-matching)
// GLOBAL DAT_0058a3ac int
// GLOBAL DAT_0058a3b0 int *
// GLOBAL DAT_0058a3b4 undefined4 *

undefined4 * func_0058A378(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  if ((*(uint *)(DAT_0058a3ac + 0x18) & 1) == 0) {
    func_00100174(DAT_0058a3b0);
  }
  puVar1 = DAT_0058a3b4;
  *DAT_0058a3b4 = *param_1;
  puVar1[1] = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = param_1[0xb];
  return puVar1;
}

