#include "ghidra_types.h"

extern int func_00258F5C(int param_1,int *param_2,int param_3,int param_4);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_005883F8(int param_1,int *param_2);
extern int *DAT_00258ef8;

// USA 00258E74 <- EU 00258E9C (Ghidra, non-matching)
// GLOBAL DAT_00258ef8 int *

undefined4 func_00258E74(int param_1,int *param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_00258ef8;
  iVar2 = func_005883F8(*DAT_00258ef8,param_3);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    iVar2 = func_00587FCC(*piVar1,param_3);
    uVar3 = func_00258F5C(param_1,param_2,iVar2,param_4);
    return uVar3;
  }
  return 0;
}

