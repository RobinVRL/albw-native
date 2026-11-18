#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern int func_004CF478(int param_1,int param_2);
extern int *DAT_00397810;

// GLOBAL DAT_00397810 int *
// USA 00397900 <- EU 003978DC (Ghidra, function missing from the decomp table)

undefined4 func_00397900(void)

{
  int unaff_r4;
  
  func_002B9EA4(*(int *)(unaff_r4 + 4),4);
  func_003A2F68(*(int *)(unaff_r4 + 4) + 0xbc8,0x18);
  func_004C6C50(*DAT_00397810,0x18);
  func_004CF478(*(int *)(unaff_r4 + 0x34),0);
  return func_004CF478(*(int *)(unaff_r4 + 0x38),1);
}

