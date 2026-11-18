#include "ghidra_types.h"

extern int func_0010BA78(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_00297C44(undefined1 *param_1);
extern int func_0048BD40(int param_1);
extern undefined8 *DAT_0014afcc;
extern undefined4 DAT_0014afd0;
extern undefined4 DAT_0014afd4;
extern undefined4 DAT_0014afd8;
extern undefined4 DAT_0014afdc;

// USA 0014AE80 <- EU 0014AE80 (Ghidra, non-matching)
// GLOBAL DAT_0014afcc undefined8 *
// GLOBAL DAT_0014afd0 undefined4
// GLOBAL DAT_0014afd4 undefined4
// GLOBAL DAT_0014afd8 undefined4
// GLOBAL DAT_0014afdc undefined4

undefined4 * func_0014AE80(int param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x25) = 0xfe;
  *(undefined4 *)(param_1 + 0x28) = 0;
  puVar2 = func_00297C44((undefined1 *)(param_1 + 0x2c));
  puVar1 = DAT_0014afcc;
  uVar9 = *DAT_0014afcc;
  puVar3 = func_0010CE7C((undefined4 *)(puVar2 + 0x1084));
  *puVar3 = DAT_0014afd0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar3[7] = 0;
  puVar5 = puVar3 + 9;
  bVar7 = puVar5 == (undefined4 *)0x0;
  puVar3[8] = 0;
  if (bVar7) {
    puVar5 = (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar3 + 0xe) = 0;
  if (!bVar7) {
    puVar5[1] = puVar2 + -0x2c;
    uVar4 = DAT_0014afd4;
    puVar5[2] = (int)uVar9;
    puVar5[3] = (int)((ulonglong)uVar9 >> 0x20);
    *puVar5 = uVar4;
  }
  puVar3[8] = puVar5;
  uVar10 = *(undefined4 *)(puVar1 + 1);
  uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
  puVar5 = func_0010CE7C(puVar3 + 0xf);
  *puVar5 = DAT_0014afd8;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = puVar5;
  puVar5[7] = 0;
  puVar6 = puVar5 + 9;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  uVar4 = DAT_0014afdc;
  if (puVar6 != (undefined4 *)0x0) {
    puVar5[10] = puVar3 + -0x42c;
    puVar5[0xb] = uVar10;
    puVar5[0xc] = uVar8;
    *puVar6 = uVar4;
  }
  puVar5[8] = puVar6;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  uVar4 = func_0010BA78(0x10000);
  puVar5[0x12] = uVar4;
  *(undefined1 *)(puVar5 + 0x13) = 0;
  puVar5[0x14] = 0;
  *(undefined2 *)(puVar5 + 0x15) = 0;
  *(undefined1 *)((int)puVar5 + 0x56) = 0;
  func_0048BD40((int)puVar5);
  return puVar5 + -0x43b;
}

