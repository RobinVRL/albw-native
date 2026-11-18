#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0057E178(int param_1,uint param_2);
extern uint *DAT_00498388;
extern undefined4 *DAT_0049838c;
extern undefined4 DAT_00498390;
extern int DAT_00498394;

// USA 004982DC <- EU 004982B4 (Ghidra, non-matching)
// GLOBAL DAT_00498388 uint *
// GLOBAL DAT_0049838c undefined4 *
// GLOBAL DAT_00498390 undefined4
// GLOBAL DAT_00498394 int

undefined4 func_004982DC(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar6;
  
  puVar4 = (undefined4 *)func_0057E178(*(int *)(*(int *)(param_1 + 0x10) + 0x138),2);
  if (((*DAT_00498388 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00498388), iVar5 != 0)) {
    *DAT_0049838c = DAT_00498390;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar5 = (**(code **)*puVar4)(puVar4,DAT_0049838c), iVar5 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  uVar6 = *(uint *)(DAT_00498394 + (int)puVar4) & 4;
  uVar3 = (undefined1)uVar6;
  if (uVar6 != 0) {
    uVar7 = puVar4[0x57a];
    uVar8 = puVar4[0x57b];
    *(undefined4 *)(param_1 + 0x20) = puVar4[0x57c];
    *(undefined4 *)(param_1 + 0x18) = uVar7;
    *(undefined4 *)(param_1 + 0x1c) = uVar8;
    uVar3 = 1;
    uVar1 = *(undefined2 *)((int)puVar4 + 0x15e2);
    uVar2 = *(undefined2 *)(puVar4 + 0x579);
    *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(puVar4 + 0x578);
    *(undefined2 *)(param_1 + 0x26) = uVar1;
    *(undefined2 *)(param_1 + 0x28) = uVar2;
  }
  *(undefined1 *)(param_1 + 0x14) = uVar3;
  return 0;
}

