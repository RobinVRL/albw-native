#include "ghidra_types.h"

extern int func_004106E4(undefined4 *param_1);

// USA 0058F174 <- EU 0058F14C (Ghidra, non-matching)

void func_0058F174(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  piVar4 = (int *)(param_1 + -0x44);
  if (*(char *)(param_1 + -0x38) == '\0') {
    return;
  }
  iVar1 = 0;
  while (((piVar4[iVar1 + 0x24] == 0 ||
          (uVar3 = *(uint *)(piVar4[iVar1 + 0x24] + 0x1c), uVar3 < param_2)) || (param_3 < uVar3)))
  {
    do {
      iVar1 = iVar1 + 1;
      if (0xf < iVar1) goto LAB_0058f1bc;
    } while (0xf < iVar1);
  }
  (**(code **)(*piVar4 + 0xc))(piVar4);
LAB_0058f1bc:
  uVar3 = 0;
  do {
    uVar2 = piVar4[uVar3 * 3 + 0x4d];
    bVar6 = uVar2 <= param_2;
    bVar5 = param_2 == uVar2;
    if (!bVar6 || bVar5) {
      bVar6 = param_3 <= uVar2;
      bVar5 = uVar2 == param_3;
    }
    if (!bVar6 || bVar5) {
      func_004106E4(piVar4 + uVar3 * 3 + 0x4d);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}

