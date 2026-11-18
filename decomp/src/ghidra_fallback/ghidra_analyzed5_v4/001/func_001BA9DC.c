#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_001baa08;

// USA 001BA9DC <- EU 001BA9DC (Ghidra, non-matching)
// GLOBAL DAT_001baa08 int

undefined4 func_001BA9DC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001baa08 + 0x5c;
  *param_1 = DAT_001baa08;
  param_1[200] = iVar1;
  func_0036D0E0(param_1 + 0x11c);
  return func_001510A4(param_1);
}

