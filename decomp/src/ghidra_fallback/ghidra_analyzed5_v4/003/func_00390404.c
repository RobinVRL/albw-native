#include "ghidra_types.h"

extern undefined4 *DAT_003904a4;

// USA 00390404 <- EU 003903E0 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_003904a4 undefined4 *

void func_00390404(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  puVar1 = DAT_003904a4;
  if (*(char *)(param_1 + 0x41e) != '\0') {
    uVar4 = *(undefined4 *)(param_1 + 0x464);
    puVar3 = DAT_003904a4 + 4;
    *(undefined4 *)(param_1 + 0x45c) = *DAT_003904a4;
    *(undefined4 *)(param_1 + 0x460) = puVar1[1];
    *(undefined4 *)(param_1 + 0x464) = puVar1[2];
    *(undefined4 *)(param_1 + 0x468) = puVar1[3];
    uVar5 = puVar1[5];
    uVar6 = puVar1[6];
    *(undefined4 *)(param_1 + 0x46c) = *puVar3;
    *(undefined4 *)(param_1 + 0x470) = uVar5;
    *(undefined4 *)(param_1 + 0x474) = uVar6;
    *(undefined4 *)(param_1 + 0x478) = puVar1[7];
    *(undefined4 *)(param_1 + 0x47c) = puVar1[8];
    *(undefined4 *)(param_1 + 0x480) = puVar1[9];
    *(undefined2 *)(param_1 + 0x484) = *(undefined2 *)(puVar1 + 10);
    *(undefined2 *)(param_1 + 0x486) = *(undefined2 *)((int)puVar1 + 0x2a);
    *(undefined4 *)(param_1 + 0x464) = uVar4;
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4e0) + 0x34))
                      (*(int **)(param_1 + 0x4e0),param_1 + 0x444,(undefined4 *)(param_1 + 0x45c),0)
    ;
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x41e) = 0;
      *(undefined4 *)(param_1 + 0x4b4) = 0;
    }
  }
  return;
}

