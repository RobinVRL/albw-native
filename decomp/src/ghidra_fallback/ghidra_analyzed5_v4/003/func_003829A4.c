#include "ghidra_types.h"

extern int func_001510A4();
extern int func_0036D0E0(int *param_1);
extern int DAT_003829d4;
extern int DAT_003829d8;

// USA 003829A4 <- EU 00382980 (Ghidra, non-matching)
// GLOBAL DAT_003829d4 int
// GLOBAL DAT_003829d8 int

undefined4 func_003829A4(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_003829d4;
  param_1[200] = DAT_003829d4 + 0x84;
  *param_1 = iVar1;
  func_0036D0E0(param_1 + 0x231);
  func_0036D0E0(param_1 + 0x230);
  func_0036D0E0(param_1 + 0x22f);
  iVar1 = DAT_003829d8;
  *param_1 = DAT_003829d8;
  param_1[200] = iVar1 + 0x84;
  return func_001510A4(param_1);
}

