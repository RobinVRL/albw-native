#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int DAT_0058ee0c;

// USA 0058EE10 <- EU 0058EDE8 (Ghidra, non-matching)
// GLOBAL DAT_0058ee0c int

undefined4 func_0058EE10(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0058ee0c + 0x54;
  param_1[-0xe] = DAT_0058ee0c;
  *param_1 = iVar2;
  puVar1 = func_004B9AA0(param_1 + 0x18);
  return func_004B9AA0(puVar1 + -0x26);
}

