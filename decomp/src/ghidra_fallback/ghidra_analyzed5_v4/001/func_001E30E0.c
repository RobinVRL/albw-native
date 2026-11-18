#include "ghidra_types.h"

extern int func_002E4324(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_004C90A4(int param_1);
extern int func_004EFCA0(void);
extern undefined4 DAT_001e3124;
extern int *DAT_001e3128;
extern int *DAT_001e312c;
extern int *DAT_001e3130;

// USA 001E30E0 <- EU 001E30E0 (Ghidra, non-matching)
// GLOBAL DAT_001e3124 undefined4
// GLOBAL DAT_001e3128 int *
// GLOBAL DAT_001e312c int *
// GLOBAL DAT_001e3130 int *

undefined4 func_001E30E0(void)

{
  undefined4 in_r2;
  int in_r3;
  
  func_004EFCA0();
  *(undefined4 *)(*DAT_001e3128 + 0x1870) = 0;
  func_002E4324(*DAT_001e312c,0,in_r2,in_r3);
  return func_004C90A4(*DAT_001e3130);
}

