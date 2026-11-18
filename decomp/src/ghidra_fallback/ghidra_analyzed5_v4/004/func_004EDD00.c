#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_004edd20;

// USA 004EDD00 <- EU 004EDCD8 (Ghidra, non-matching)
// GLOBAL DAT_004edd20 undefined4

undefined4 func_004EDD00(undefined4 *param_1)

{
  int iVar1;
  float in_s0;
  
  *param_1 = DAT_004edd20;
  iVar1 = param_1[0xf];
  if (iVar1 != 0) {
    param_1[0xf] = 0;
    func_0010F1F8(param_1 + 0xc,in_s0);
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  return func_004A1520(param_1);
}

