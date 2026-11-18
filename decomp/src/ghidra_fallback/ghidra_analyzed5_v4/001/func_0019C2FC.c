#include "ghidra_types.h"

extern int func_001510A4();
extern int func_002E1B70(int *param_1);
extern int DAT_0019c32c;

// USA 0019C2FC <- EU 0019C2FC (Ghidra, non-matching)
// GLOBAL DAT_0019c32c int

undefined4 func_0019C2FC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0019c32c + 0x5c;
  *param_1 = DAT_0019c32c;
  param_1[200] = iVar1;
  func_002E1B70(param_1 + 0x11d);
  return func_001510A4(param_1);
}

