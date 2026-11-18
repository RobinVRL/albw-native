#include "ghidra_types.h"

extern int func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_00296bf4;

// USA 00296B84 <- EU 00296BAC (Ghidra, non-matching)
// GLOBAL DAT_00296bf4 int *

void func_00296B84(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  iVar2 = func_00587FCC(*DAT_00296bf4,param_2);
  if (iVar2 != -1) {
    func_00296D70(iVar1,0x10000,iVar2,param_3,0);
  }
  return;
}

