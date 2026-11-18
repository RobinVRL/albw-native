#include "ghidra_types.h"

extern int func_0012DEC8(int param_1,int param_2,uint param_3);
extern int func_004A1520();
extern int DAT_0031c038;
extern int *DAT_0031c03c;

// USA 0031C00C <- EU 0031BFE8 (Ghidra, non-matching)
// GLOBAL DAT_0031c038 int
// GLOBAL DAT_0031c03c int *

int * func_0031C00C(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_0031c038 + 0x18;
  *param_1 = DAT_0031c038;
  uVar2 = 0;
  param_1[4] = iVar3;
  if ((param_1[8] != 0) && ((*(uint *)(param_1[8] + 0x68) & 0x18) != 0)) {
    uVar2 = 1;
  }
  func_0012DEC8(*DAT_0031c03c,param_1[0xb],uVar2);
  piVar1 = func_004A1520(param_1);
  return piVar1;
}

