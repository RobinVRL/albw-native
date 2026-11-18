#include "ghidra_types.h"

extern int func_004A8BFC(int param_1,int param_2,uint param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int *DAT_00315230;
extern int DAT_00315234;

// USA 0031520C <- EU 003151E8 (Ghidra, non-matching)
// GLOBAL DAT_00315230 int *
// GLOBAL DAT_00315234 int

void func_0031520C(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_00315230;
  func_004A9120(*DAT_00315230,param_1 + 0x49c);
  func_004A8BFC(*piVar1,param_1 + 0x49c,3);
  *(undefined2 *)(DAT_00315234 + param_1) = 0x920;
  *(undefined1 *)(param_1 + 0x4be) = 5;
  return;
}

