#include "ghidra_types.h"

extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern int func_004CBB0C(undefined4 *param_1,uint param_2,int param_3,undefined4 param_4);
extern int *DAT_00397810;

// GLOBAL DAT_00397810 int *
// USA 003977DC <- EU 003977B8 (Ghidra, function missing from the decomp table)

undefined4 func_003977DC(void)

{
  int unaff_r4;
  
  func_004CBB0C((undefined4 *)(*(int *)(unaff_r4 + 4) + 0x3d0),4,0,
                (int)*(char *)(*(int *)(*(int *)(unaff_r4 + 4) + 0x8bc) + 1));
  func_003A2F68(*(int *)(unaff_r4 + 4) + 0xbc8,0x13);
  return func_004C6C50(*DAT_00397810,0x13);
}

