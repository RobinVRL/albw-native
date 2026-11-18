#include "ghidra_types.h"

extern int func_0010A794(undefined4 *param_1);
extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_0014D9C4(undefined4 *param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_003ABA3C(undefined4 *param_1,undefined4 param_2);
extern int func_004336CC(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern undefined4 DAT_00387754;
extern undefined4 DAT_00387758;
extern float DAT_0038775c;
extern int DAT_00387760;
extern undefined4 DAT_00387764;

// USA 0038766C <- EU 00387648 (Ghidra, non-matching)
// GLOBAL DAT_00387754 undefined4
// GLOBAL DAT_00387758 undefined4
// GLOBAL DAT_0038775c float
// GLOBAL DAT_00387760 int
// GLOBAL DAT_00387764 undefined4

undefined4 func_0038766C(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = func_003ABA3C(param_1,param_2);
  *puVar1 = DAT_00387754;
  puVar1 = func_0010A794(puVar1 + 4);
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)((int)puVar1 + 0x25) = 0;
  *(undefined1 *)((int)puVar1 + 0x26) = 0;
  *(undefined1 *)((int)puVar1 + 0x27) = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  *(undefined1 *)((int)puVar1 + 0x2a) = 0xff;
  *(undefined1 *)((int)puVar1 + 0x2b) = 3;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  iVar2 = func_004336CC(puVar1 + 0xe);
  iVar2 = func_004EE484((undefined4 *)(iVar2 + 0x6c));
  *(undefined4 *)(iVar2 + 100) = DAT_00387758;
  puVar1 = func_0014D9B4((undefined4 *)(iVar2 + 0x68),DAT_0038775c);
  iVar2 = func_0014D9C4(puVar1 + 2);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined2 *)(iVar2 + 0x10) = 0;
  *(undefined2 *)(iVar2 + 0x12) = 0;
  *(undefined2 *)(iVar2 + 0x14) = 0;
  *(undefined2 *)(iVar2 + 0x16) = 0;
  puVar1 = func_0034CAA0((undefined4 *)(iVar2 + 0x30));
  iVar2 = DAT_00387760;
  puVar3 = (undefined4 *)(DAT_00387760 + 0xa8);
  puVar1[0x13] = 0;
  uVar4 = *(undefined4 *)(iVar2 + 0xac);
  puVar1[0x14] = *puVar3;
  puVar1[0x15] = uVar4;
  uVar4 = DAT_00387764;
  puVar1[0x12] = DAT_00387764;
  puVar1[0x17] = 0;
  uVar5 = *(undefined4 *)(iVar2 + 0xac);
  puVar1[0x18] = *(undefined4 *)(iVar2 + 0xa8);
  puVar1[0x19] = uVar5;
  puVar1[0x16] = uVar4;
  puVar1[0x1a] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x20] = 0;
  puVar1[0x22] = 0;
  return (undefined4)param_1;
}

