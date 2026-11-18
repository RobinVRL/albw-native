#include "ghidra_types.h"

extern int DAT_004dd004;
extern int DAT_004dd008;
extern undefined4 DAT_004dd00c;

// USA 004DCFDC <- EU 004DCFB4 (Ghidra, non-matching)
// GLOBAL DAT_004dd004 int
// GLOBAL DAT_004dd008 int
// GLOBAL DAT_004dd00c undefined4

void func_004DCFDC(int *param_1)

{
  int iVar1;
  
  iVar1 = DAT_004dd004;
  *(undefined2 *)(DAT_004dd008 + (int)param_1) = 0;
  param_1[0x20d] = iVar1;
  (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
  *(undefined4 *)(*(int *)(param_1[0x1eb] + 0x14) + 0x10) = DAT_004dd00c;
  return;
}

