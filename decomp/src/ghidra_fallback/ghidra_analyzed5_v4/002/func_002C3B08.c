#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_004A1520();
extern undefined4 DAT_002c3b44;
extern int *DAT_002c3b48;

// USA 002C3B08 <- EU 002C3AE4 (Ghidra, non-matching)
// GLOBAL DAT_002c3b44 undefined4
// GLOBAL DAT_002c3b48 int *

undefined4 * func_002C3B08(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  float in_s0;
  
  *param_1 = DAT_002c3b44;
  iVar1 = param_1[5];
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = param_1[4];
  }
  if (!bVar3 || iVar1 != 0) {
    iVar1 = *DAT_002c3b48 + 0x118;
    if ((uint)(int)*(char *)((int)param_1 + 0xa2) < 2) {
      iVar1 = iVar1 + *(char *)((int)param_1 + 0xa2) * 0x10;
    }
    func_0010F1F8((int *)(*(int *)(iVar1 + 0xc) + (int)param_1),in_s0);
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

