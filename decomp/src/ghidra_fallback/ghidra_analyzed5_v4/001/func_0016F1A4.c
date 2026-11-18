#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_004CEAF0(int param_1);
extern int func_00588F14(int param_1);
extern int *DAT_0016f240;
extern undefined4 DAT_0016f244;
extern undefined4 DAT_0016f248;

// USA 0016F1A4 <- EU 0016F1A4 (Ghidra, non-matching)
// GLOBAL DAT_0016f240 int *
// GLOBAL DAT_0016f244 undefined4
// GLOBAL DAT_0016f248 undefined4

undefined4 func_0016F1A4(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x414) == 0) {
    puVar3 = (undefined4 *)func_00588F14(*DAT_0016f240);
    uVar2 = DAT_0016f248;
    uVar1 = DAT_0016f244;
    uVar7 = *puVar3;
    uVar6 = puVar3[2];
    iVar4 = *(int *)(param_1 + 0x410);
    uVar5 = *(undefined4 *)(param_1 + 0x40c);
    *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar4 + 0x80) = uVar1;
    *(undefined4 *)(iVar4 + 0x84) = uVar2;
    *(undefined4 *)(iVar4 + 0x88) = uVar2;
    *(undefined4 *)(iVar4 + 0x90) = uVar2;
    *(undefined4 *)(iVar4 + 0x94) = uVar1;
    *(undefined4 *)(iVar4 + 0x98) = uVar2;
    *(undefined4 *)(iVar4 + 0xa0) = uVar2;
    *(undefined4 *)(iVar4 + 0x8c) = uVar7;
    *(undefined4 *)(iVar4 + 0x9c) = uVar5;
    *(undefined4 *)(iVar4 + 0xac) = uVar6;
    *(undefined4 *)(iVar4 + 0xa4) = uVar2;
    *(undefined4 *)(iVar4 + 0xa8) = uVar1;
    func_004CEAF0(*(int *)(param_1 + 0x410));
  }
  return func_0014E138(param_1,param_2);
}

