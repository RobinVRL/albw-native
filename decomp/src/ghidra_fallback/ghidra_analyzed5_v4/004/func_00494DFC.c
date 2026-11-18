#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049F634(undefined4 *param_1);
extern int func_004A1520();
extern undefined4 DAT_00494e80;

// USA 00494DFC <- EU 00494DD4 (Ghidra, non-matching)
// GLOBAL DAT_00494e80 undefined4

undefined4 * func_00494DFC(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float in_s0;
  float fparam_0;
  
  iVar4 = param_1[8];
  *param_1 = DAT_00494e80;
  if (iVar4 != 0) {
    if (*(undefined4 **)(iVar4 + 0x24) == param_1) {
      if (*(int *)(iVar4 + 0x1c) < 1) {
        *(undefined4 *)(iVar4 + 0x24) = 0;
      }
      else {
        piVar1 = func_0049F634((undefined4 *)(iVar4 + 0x14));
        if (piVar1 != (int *)0x0) {
          piVar1 = (int *)((int)piVar1 - *(int *)(iVar4 + 0x20));
        }
        *(int **)(iVar4 + 0x24) = piVar1;
      }
    }
    param_1[8] = 0;
    func_0010F1F8((int *)(*(int *)(iVar4 + 0x10) + (int)param_1),in_s0);
    fparam_0 = in_s0;
    *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) + -1;
    piVar1 = (int *)(*(int *)(iVar4 + 0x20) + (int)param_1);
    iVar3 = piVar1[1];
    bVar5 = iVar3 == 0;
    if (bVar5) {
      iVar3 = *piVar1;
    }
    if (!bVar5 || iVar3 != 0) {
      func_0010F1F8(piVar1,fparam_0);
      *(int *)(iVar4 + 0x1c) = *(int *)(iVar4 + 0x1c) + -1;
    }
  }
  puVar2 = func_004A1520(param_1);
  return puVar2;
}

