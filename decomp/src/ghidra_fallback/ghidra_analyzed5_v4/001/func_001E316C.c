#include "ghidra_types.h"

extern int func_0014B188(void);
extern int func_001E1750(int param_1);
extern int func_002DF3E4(int param_1);
extern int func_002E32DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_004C8C3C(int param_1);
extern int func_004EE6C8(int param_1,int param_2,undefined4 param_3);
extern int func_004EEFA0(int *param_1);
extern int *DAT_001e31d0;
extern int *DAT_001e31d4;
extern undefined4 DAT_001e31d8;
extern int *DAT_001e31dc;
extern int *DAT_001e31e0;
extern int *DAT_001e31e4;

// USA 001E316C <- EU 001E316C (Ghidra, non-matching)
// GLOBAL DAT_001e31d0 int *
// GLOBAL DAT_001e31d4 int *
// GLOBAL DAT_001e31d8 undefined4
// GLOBAL DAT_001e31dc int *
// GLOBAL DAT_001e31e0 int *
// GLOBAL DAT_001e31e4 int *

undefined4 func_001E316C(int param_1)

{
  undefined4 extraout_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  func_002DF3E4(*DAT_001e31d0);
  func_001E1750(*DAT_001e31d4);
  func_0014B188();
  func_002E32DC(*DAT_001e31dc,extraout_r1,in_r2,in_r3);
  func_004C8C3C(*DAT_001e31e0);
  func_004EEFA0((int *)0x0);
  return func_004EE6C8(*DAT_001e31e4,*(int *)(param_1 + 0x5c),param_1);
}

