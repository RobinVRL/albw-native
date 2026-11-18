#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_004edd20;

// USA 004EDD04 <- EU 004EDCDC (Ghidra, non-matching)
// GLOBAL DAT_004edd20 undefined4

undefined4 * func_004EDD04(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_004edd20;
  iVar2 = param_1[0xf];
  if (iVar2 != 0) {
    param_1[0xf] = 0;
    func_0010F1F8(param_1 + 0xc,in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

