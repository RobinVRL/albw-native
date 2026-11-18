#include "ghidra_types.h"

extern int func_004088FC(int param_1,int param_2);
extern int func_004135B4(int *param_1,int *param_2);
extern int func_0041361C(int param_1,int param_2);
extern int func_00413628(int param_1,int param_2);
extern int func_0056ADA8(int param_1);
extern int func_0056AE28(int param_1);
extern int func_0056AE68(int param_1);
extern int func_0056AEA0(int param_1);

// USA 00409C60 <- EU 00409C40 (Ghidra, non-matching)

undefined4 func_00409C60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  func_004135B4((int *)(param_1 + 0x120),param_2);
  func_004088FC(param_1,param_1 + 0x120);
  iVar1 = func_0056AE28(param_1 + 0x120);
  func_0056ADA8(param_1 + 0x120);
  func_0041361C(param_1 + 0x120,(int)param_2 + iVar1);
  iVar1 = func_0056AEA0(param_1 + 0x120);
  iVar2 = func_0056AE68(param_1 + 0x120);
  if (iVar1 != -1 && iVar2 != -1) {
    func_00413628(param_1 + 0x120,(int)param_2 + iVar1);
  }
  *(int **)(param_1 + 0x11c) = param_2;
  return 1;
}

