#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int func_00109868(int param_1,int *param_2,undefined4 param_3);
extern int func_0010BA60(undefined4 *param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0049FA78(undefined1 *param_1);
extern undefined4 DAT_0048e33c;
extern undefined4 *DAT_0048e340;
extern undefined4 DAT_0048e344;
extern undefined4 DAT_0048e348;
extern undefined4 DAT_0048e34c;
extern undefined4 DAT_0048e350;
extern undefined4 DAT_0048e354;
extern undefined4 DAT_0048e358;
extern undefined4 DAT_0048e35c;
extern undefined4 DAT_0048e360;
extern char s_calcCore__0048e364[];

// USA 0048E140 <- EU 0048E118 (Ghidra, non-matching)
// GLOBAL DAT_0048e33c undefined4
// GLOBAL DAT_0048e340 undefined4 *
// GLOBAL DAT_0048e344 undefined4
// GLOBAL DAT_0048e348 undefined4
// GLOBAL DAT_0048e34c undefined4
// GLOBAL DAT_0048e350 undefined4
// GLOBAL DAT_0048e354 undefined4
// GLOBAL DAT_0048e358 undefined4
// GLOBAL DAT_0048e35c undefined4
// GLOBAL DAT_0048e360 undefined4
// GLOBAL s_calcCore__0048e364 string

undefined4 * func_0048E140(int param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  
  puVar1 = (undefined4 *)func_00109868(param_1,param_2,param_3);
  *puVar1 = DAT_0048e33c;
  *(undefined1 *)(puVar1 + 0x1b) = 5;
  puVar2 = func_0049FA78((undefined1 *)(puVar1 + 0x1d));
  puVar1 = DAT_0048e340;
  *(undefined4 *)(puVar2 + 0x80) = 0;
  uVar8 = *puVar1;
  uVar10 = puVar1[1];
  puVar3 = func_0010CE7C((undefined4 *)(puVar2 + 0x84));
  *puVar3 = DAT_0048e344;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar3[7] = 0;
  puVar4 = puVar3 + 9;
  bVar12 = puVar4 == (undefined4 *)0x0;
  puVar3[8] = 0;
  if (bVar12) {
    puVar4 = (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar3 + 0xe) = 0;
  if (!bVar12) {
    *puVar4 = DAT_0048e348;
    puVar4[1] = puVar2 + -0x74;
    puVar4[2] = uVar8;
    puVar4[3] = uVar10;
  }
  puVar3[8] = puVar4;
  puVar4 = func_0010BA60(puVar3 + 0x13);
  uVar8 = DAT_0048e350;
  puVar4[6] = DAT_0048e34c;
  puVar4[4] = puVar3 + 0xf;
  puVar4[5] = uVar8;
  puVar3 = func_0010CE7C(puVar4 + -4);
  uVar10 = DAT_0048e354;
  puVar3[0xf] = 0;
  uVar11 = DAT_0048e358;
  *puVar3 = uVar10;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  if (puVar3 + 0xb != (undefined4 *)0x0) {
    puVar3[0xc] = 0;
    uVar5 = puVar1[8];
    uVar6 = puVar1[9];
    puVar3[0xb] = uVar11;
    puVar3[0xd] = uVar5;
    puVar3[0xe] = uVar6;
  }
  puVar4 = func_0010BA60(puVar3 + 0x18);
  puVar4[6] = DAT_0048e34c;
  puVar4[4] = puVar3 + 0x14;
  puVar4[5] = uVar8;
  puVar3 = func_0010CE7C(puVar4 + -4);
  puVar3[0xf] = 0;
  *puVar3 = uVar10;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  if (puVar3 + 0xb != (undefined4 *)0x0) {
    puVar3[0xc] = 0;
    uVar8 = puVar1[8];
    uVar10 = puVar1[9];
    puVar3[0xb] = uVar11;
    puVar3[0xd] = uVar8;
    puVar3[0xe] = uVar10;
  }
  *(undefined1 *)((int)puVar3 + 0x65) = 0;
  puVar3[-0x45] = 0;
  puVar3[0x14] = 0;
  puVar3[0x15] = 0x1e;
  puVar3[0x16] = 0x1f;
  puVar3[0x17] = 0x3d;
  uVar8 = DAT_0048e35c;
  puVar7 = puVar3 + -0x61;
  *(undefined1 *)(puVar3 + 0x19) = 0;
  puVar3[0x18] = uVar8;
  puVar9 = puVar3 + -0x14;
  puVar3[-10] = param_3;
  func_0010961C((int)puVar9);
  puVar4 = (undefined4 *)puVar3[-2];
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4,puVar9,3);
  }
  puVar3[-3] = 3;
  func_00109698((int)puVar9);
  uVar10 = puVar1[3];
  uVar11 = puVar1[2];
  func_0010961C((int)(puVar3 + -0x14));
  uVar8 = DAT_0048e360;
  if (puVar3 + -9 != (undefined4 *)0x0) {
    puVar3[-9] = DAT_0048e360;
    puVar3[-6] = uVar10;
    puVar3[-8] = puVar7;
    puVar3[-7] = uVar11;
  }
  func_00109698((int)(puVar3 + -0x14));
  if (param_3 != 0) {
    puVar3[-10] = param_3;
  }
  uVar11 = puVar1[4];
  uVar10 = puVar1[5];
  func_0010961C((int)puVar3);
  if (puVar3 + 0xb != (undefined4 *)0x0) {
    puVar3[0xb] = uVar8;
    puVar3[0xe] = uVar10;
    puVar3[0xc] = puVar7;
    puVar3[0xd] = uVar11;
  }
  func_00109698((int)puVar3);
  puVar3[10] = s_calcCore__0048e364;
  return puVar7;
}

