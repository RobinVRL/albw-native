#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_0041DAA0(int *param_1,int param_2,int param_3,int param_4);
extern int DAT_0041e09c;

// USA 0041E05C <- EU 0041E03C (Ghidra, non-matching)
// GLOBAL DAT_0041e09c int

int * func_0041E05C(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  func_0010C0C0((int *)(param_1 + 4));
  iVar1 = DAT_0041e09c;
  func_0010C0C0((int *)(param_1 + 4));
  piVar2 = func_0041DAA0((int *)(param_1 + 0x10),param_2,iVar1,0);
  func_0010C160((int *)(param_1 + 4));
  func_0010C160((int *)(param_1 + 4));
  return piVar2;
}

