#include "ghidra_types.h"

extern int func_004B9AA0(int *param_1);
extern int func_00503970(int param_1,uint param_2);
extern int DAT_0058ef24;
extern int *DAT_0058ef28;

// USA 0058EF18 <- EU 0058EEF0 (Ghidra, non-matching)
// GLOBAL DAT_0058ef24 int
// GLOBAL DAT_0058ef28 int *

undefined4 func_0058EF18(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0058ef24 + 0x54;
  param_1[-0xe] = DAT_0058ef24;
  *param_1 = iVar1;
  func_00503970(*DAT_0058ef28,0xe);
  return func_004B9AA0(param_1 + -0xe);
}

