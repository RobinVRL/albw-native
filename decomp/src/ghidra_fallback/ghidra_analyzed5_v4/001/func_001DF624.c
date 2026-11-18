#include "ghidra_types.h"

extern int func_001E0364(int param_1,int *param_2,int param_3,int param_4);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_001df674;

// USA 001DF624 <- EU 001DF624 (Ghidra, non-matching)
// GLOBAL DAT_001df674 int *

undefined4 func_001DF624(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x110) = 1;
  iVar1 = func_00587FCC(*DAT_001df674,param_3);
  if (iVar1 != -1) {
    uVar2 = func_001E0364(param_1,param_2,iVar1,param_4);
    return uVar2;
  }
  return 0;
}

