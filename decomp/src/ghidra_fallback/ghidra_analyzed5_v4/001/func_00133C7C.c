#include "ghidra_types.h"

extern int *DAT_00133d30;

// USA 00133C7C <- EU 00133C7C (Ghidra, non-matching)
// GLOBAL DAT_00133d30 int *

void func_00133C7C(int *param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (((int)param_2 <= param_1[0x1c]) && (param_2 != 0)) {
    piVar1 = param_1;
    if (param_2 < 7) {
      piVar1 = param_1 + param_2 * 4;
    }
    puVar4 = (undefined4 *)*piVar1;
    puVar4[2] = *puVar4;
    puVar4[3] = 0;
    puVar4 = (undefined4 *)piVar1[1];
    puVar4[2] = *puVar4;
    puVar4[3] = 0;
    uVar2 = param_2 - 1;
    piVar1 = param_1;
    if (uVar2 < 7) {
      piVar1 = param_1 + uVar2 * 4;
    }
    param_1[0x1c] = uVar2;
    iVar3 = *piVar1;
    if (*(int *)(iVar3 + 0xc) != 0) {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    iVar3 = piVar1[1];
    if (*(int *)(iVar3 + 0xc) != 0) {
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0xc) = 0;
    }
    iVar3 = *DAT_00133d30;
    piVar1 = param_1;
    if ((uint)param_1[0x1c] < 7) {
      piVar1 = param_1 + param_1[0x1c] * 4;
    }
    *(int *)(iVar3 + 0x20) = *piVar1;
    if ((uint)param_1[0x1c] < 7) {
      param_1 = param_1 + param_1[0x1c] * 4;
    }
    *(int *)(iVar3 + 0x24) = param_1[1];
  }
  return;
}

