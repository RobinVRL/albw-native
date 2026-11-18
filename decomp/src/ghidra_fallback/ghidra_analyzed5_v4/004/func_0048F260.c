#include "ghidra_types.h"

extern int func_0049116C(undefined4 *param_1);
extern int func_0058FA5C();
extern int DAT_0048f25c;

// USA 0048F260 <- EU 0048F238 (Ghidra, non-matching)
// GLOBAL DAT_0048f25c int

undefined4 func_0048F260(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_0048f25c + 0x4c;
  *param_1 = DAT_0048f25c;
  param_1[1] = iVar2;
  puVar1 = func_0049116C(param_1 + 0x1c);
  return func_0058FA5C((int)(puVar1 + -0x1c));
}

