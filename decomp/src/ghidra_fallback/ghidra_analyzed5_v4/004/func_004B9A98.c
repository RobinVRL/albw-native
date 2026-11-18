#include "ghidra_types.h"

extern int func_0012ED38(int param_1,int param_2);
extern int func_00166620(int param_1,int param_2);
extern int func_004A1520();
extern int DAT_004b9ac0;
extern int *DAT_004b9ac4;
extern int *DAT_004b9ac8;

// USA 004B9A98 <- EU 004B9A70 (Ghidra, non-matching)
// GLOBAL DAT_004b9ac0 int
// GLOBAL DAT_004b9ac4 int *
// GLOBAL DAT_004b9ac8 int *

int func_004B9A98(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = param_1 + -0xe;
  iVar4 = DAT_004b9ac0 + 0x54;
  *piVar2 = DAT_004b9ac0;
  piVar1 = DAT_004b9ac4;
  *param_1 = iVar4;
  func_00166620(*piVar1,(int)piVar2);
  func_0012ED38(*DAT_004b9ac8,(int)piVar2);
  puVar3 = func_004A1520(param_1);
  return (int)(puVar3 + -0xe);
}

