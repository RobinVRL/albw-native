#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_003c1ec4;

// USA 003C1EA0 <- EU 003C1E7C (Ghidra, non-matching)
// GLOBAL DAT_003c1ec4 undefined4

undefined4 * func_003C1EA0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float in_s0;
  
  *param_1 = DAT_003c1ec4;
  iVar2 = param_1[7];
  if (iVar2 != 0) {
    param_1[7] = 0;
    func_0010F1F8(param_1 + 4,in_s0);
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  puVar1 = func_004A1520(param_1);
  return puVar1;
}

