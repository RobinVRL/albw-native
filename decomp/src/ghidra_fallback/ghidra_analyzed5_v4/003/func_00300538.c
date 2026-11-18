#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_00300560;

// GLOBAL DAT_00300560 undefined4
// USA 00300538 <- EU 00300514 (Ghidra, function missing from the decomp table)

undefined4 * func_00300538(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_00300560;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    param_1[7] = 0;
    func_0010F1F8(param_1 + 4,in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

