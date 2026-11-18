#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_004982b0;

// USA 0049828C <- EU 00498264 (Ghidra, non-matching)
// GLOBAL DAT_004982b0 undefined4

undefined4 func_0049828C(undefined4 *param_1)

{
  int iVar1;
  float in_s0;
  
  *param_1 = DAT_004982b0;
  iVar1 = param_1[0x50];
  if (iVar1 != 0) {
    func_0010F1F8((int *)(*(int *)(iVar1 + 0x158) + (int)param_1),in_s0);
    *(int *)(iVar1 + 0x154) = *(int *)(iVar1 + 0x154) + -1;
    param_1[0x50] = 0;
  }
  return func_004A1520(param_1);
}

