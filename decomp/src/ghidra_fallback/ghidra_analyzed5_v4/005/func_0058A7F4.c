#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int DAT_0058a83c;
extern int *DAT_0058a840;
extern undefined4 *DAT_0058a844;

// USA 0058A7F4 <- EU 0058A7CC (Ghidra, non-matching)
// GLOBAL DAT_0058a83c int
// GLOBAL DAT_0058a840 int *
// GLOBAL DAT_0058a844 undefined4 *

undefined4 * func_0058A7F4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x4b5) == '\0') && (*(int *)(param_1 + 0x430) != 0)) {
    return (undefined4 *)(*(int *)(param_1 + 0x430) + 0x2c);
  }
  if (*(int *)(param_1 + 0x434) == 0) {
    if (((*(uint *)(DAT_0058a83c + 8) & 1) == 0) &&
       (iVar2 = func_00100174(DAT_0058a840), iVar2 != 0)) {
      *DAT_0058a844 = 0;
    }
    puVar1 = DAT_0058a844;
    *DAT_0058a844 = 0;
  }
  else {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x434) + 0x2c);
  }
  return puVar1;
}

