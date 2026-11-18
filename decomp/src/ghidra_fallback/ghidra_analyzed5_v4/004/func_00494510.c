#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_0041E0C0(int param_1,int param_2,int param_3);
extern int func_0041E1F4(undefined4 *param_1);
extern int DAT_00494580;
extern undefined4 DAT_00494584;

// USA 00494510 <- EU 004944E8 (Ghidra, non-matching)
// GLOBAL DAT_00494580 int
// GLOBAL DAT_00494584 undefined4

int * func_00494510(undefined4 *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)func_0041E1F4(param_1);
  iVar2 = DAT_00494580;
  *piVar1 = DAT_00494580;
  piVar1[9] = 0;
  piVar1[8] = iVar2 + 0x14;
  piVar1[10] = 0;
  piVar1[0xb] = 0;
  if (param_3 == (int *)0x0) {
    param_3 = (int *)func_0010DB90();
  }
  if (param_2 == 0) {
    iVar2 = (**(code **)(*param_3 + 0x3c))(param_3,0x20);
    param_2 = iVar2 + -0x20;
  }
  iVar2 = func_0010CEE0(param_2,param_3,0x20);
  piVar1[9] = iVar2;
  func_0041E0C0((int)piVar1,iVar2,param_2);
  return piVar1;
}

