#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_003A2F68(int param_1,uint param_2);
extern int func_004C6C50(int param_1,uint param_2);
extern float DAT_00397808;
extern int *DAT_00397810;

// GLOBAL DAT_00397808 float
// GLOBAL DAT_00397810 int *
// USA 003978A0 <- EU 0039787C (Ghidra, function missing from the decomp table)

undefined4 func_003978A0(void)

{
  int iVar1;
  int unaff_r4;
  undefined1 unaff_r6;
  
  iVar1 = *(int *)(*(int *)(unaff_r4 + 0x40) + 0x14);
  if (*(float *)(iVar1 + 8) != DAT_00397808) {
    *(float *)(iVar1 + 8) = DAT_00397808;
    *(undefined1 *)(iVar1 + 0x26) = unaff_r6;
  }
  func_002B9EA4(*(int *)(unaff_r4 + 4),4);
  func_003A2F68(*(int *)(unaff_r4 + 4) + 0xbc8,0x17);
  return func_004C6C50(*DAT_00397810,0x17);
}

