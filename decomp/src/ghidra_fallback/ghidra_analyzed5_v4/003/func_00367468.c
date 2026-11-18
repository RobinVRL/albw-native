#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern int func_0058080C(int param_1,int param_2);
extern undefined4 DAT_003674a0;
extern int *DAT_003674a4;

// USA 00367468 <- EU 00367444 (Ghidra, non-matching)
// GLOBAL DAT_003674a0 undefined4
// GLOBAL DAT_003674a4 int *

undefined4 func_00367468(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_003674a0;
  iVar1 = *DAT_003674a4;
  iVar2 = func_0058080C(iVar1 + 0x4c,*(int *)(iVar1 + 0x58) + (int)param_1);
  if (-1 < iVar2) {
    func_0010F1F8((int *)(*(int *)(iVar1 + 0x58) + (int)param_1),in_s0);
    *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1;
  }
  return func_004A1520(param_1);
}

