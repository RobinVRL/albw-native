#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00289748;
extern uint *DAT_0028974c;
extern undefined4 *DAT_00289750;
extern undefined4 DAT_00289754;
extern undefined4 DAT_00289758;

// USA 00289658 <- EU 00289680 (Ghidra, non-matching)
// GLOBAL DAT_00289748 int *
// GLOBAL DAT_0028974c uint *
// GLOBAL DAT_00289750 undefined4 *
// GLOBAL DAT_00289754 undefined4
// GLOBAL DAT_00289758 undefined4

void func_00289658(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(uint *)(param_1 + 0x46c) < *(uint *)(param_1 + 0x470)) {
    *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) + 1;
  }
  else {
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_00289748 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    if (puVar1 != (undefined4 *)0x0) {
      if (((*DAT_0028974c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0028974c), iVar2 != 0)) {
        *DAT_00289750 = DAT_00289754;
      }
      iVar2 = (**(code **)*puVar1)(puVar1,DAT_00289750);
      if (iVar2 == 0) {
        puVar1 = (undefined4 *)0x0;
      }
      uVar3 = puVar1[0xf5];
      uVar4 = puVar1[0xf6];
      *(undefined4 *)(param_1 + 0x3d0) = puVar1[0xf4];
      *(undefined4 *)(param_1 + 0x3d4) = uVar3;
      *(undefined4 *)(param_1 + 0x3d8) = uVar4;
    }
    uVar3 = DAT_00289758;
    *(undefined4 *)(param_1 + 0x470) = 0x78;
    *(undefined4 *)(param_1 + 0x474) = uVar3;
    *(undefined4 *)(param_1 + 0x46c) = 0;
  }
  return;
}

