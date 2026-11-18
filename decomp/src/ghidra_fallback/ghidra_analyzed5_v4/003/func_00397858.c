#include "ghidra_types.h"

extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern int func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
extern int *DAT_00397810;

// GLOBAL DAT_00397810 int *
// USA 00397858 <- EU 00397834 (Ghidra, function missing from the decomp table)

undefined4 func_00397858(void)

{
  int unaff_r4;
  
  func_004CBB0C((undefined4 *)(*(int *)(unaff_r4 + 4) + 0x3d0),4,1,0);
  func_003A2F68(*(int *)(unaff_r4 + 4) + 0xbc8,0x14);
  return func_004C6C50(*DAT_00397810,0x14);
}

