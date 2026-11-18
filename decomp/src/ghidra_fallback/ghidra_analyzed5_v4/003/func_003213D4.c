#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern int func_0058FA5C();
extern int DAT_003213d4;

// USA 003213D4 <- EU 003213B0 (Ghidra, non-matching)
// GLOBAL DAT_003213d4 int

undefined4 func_003213D4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_003213d4 + 0x4c;
  *param_1 = DAT_003213d4;
  param_1[1] = iVar2;
  puVar1 = func_0049116C(param_1 + 0x1c);
  return func_0058FA5C((int)(puVar1 + -0x1c));
}

