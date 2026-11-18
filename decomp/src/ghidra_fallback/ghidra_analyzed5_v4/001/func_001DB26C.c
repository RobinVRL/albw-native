#include "ghidra_types.h"

extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_001DA26C(int param_1);
extern int func_001DA348(int param_1,float *param_2,float *param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int DAT_001db494;
extern int DAT_001db498;
extern int DAT_001db49c;
extern int DAT_001db4a0;
extern int DAT_001db4a4;
extern undefined4 *DAT_001db4a8;
extern undefined4 DAT_001db4ac;
extern undefined4 DAT_001db4b0;
extern int *DAT_001db4b4;

// USA 001DB26C <- EU 001DB26C (Ghidra, non-matching)
// GLOBAL DAT_001db494 int
// GLOBAL DAT_001db498 int
// GLOBAL DAT_001db49c int
// GLOBAL DAT_001db4a0 int
// GLOBAL DAT_001db4a4 int
// GLOBAL DAT_001db4a8 undefined4 *
// GLOBAL DAT_001db4ac undefined4
// GLOBAL DAT_001db4b0 undefined4
// GLOBAL DAT_001db4b4 int *

int func_001DB26C(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(uint *)(albw_frame + 0x4))
  piVar3 = func_00150E40(param_1,param_2);
  iVar5 = DAT_001db49c;
  iVar1 = DAT_001db498;
  iVar4 = DAT_001db494;
  *piVar3 = DAT_001db494;
  piVar3[200] = iVar4 + 100;
  piVar3[0x104] = iVar1;
  piVar3[0x105] = iVar5;
  piVar3[0x103] = 0;
  iVar4 = DAT_001db4a0;
  piVar3[0x106] = DAT_001db4a0;
  piVar3[0x107] = iVar4;
  piVar3[0x108] = iVar4;
  iVar4 = DAT_001db4a4;
  piVar3[0x109] = piVar3[0xf4];
  piVar3[0x10a] = piVar3[0xf5];
  piVar3[0x10b] = piVar3[0xf6];
  piVar3[0x10f] = iVar4;
  iVar4 = func_0054D964((int)piVar3,0);
  piVar3[0x110] = iVar4;
  iVar4 = func_004EE484(piVar3 + 0x111);
  puVar2 = DAT_001db4a8;
  puVar8 = DAT_001db4a8 + 8;
  *(undefined4 *)(iVar4 + 0x98) = 0;
  uVar9 = puVar2[9];
  iVar10 = iVar4 + -0x444;
  *(undefined4 *)(iVar4 + 0x9c) = *puVar8;
  *(undefined4 *)(iVar4 + 0xa0) = uVar9;
  uVar9 = DAT_001db4ac;
  *(undefined4 *)(iVar4 + 0x94) = DAT_001db4ac;
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  *(int *)(iVar4 + 0xa8) = iVar10;
  *(undefined4 *)(iVar4 + 0xac) = uVar11;
  *(undefined4 *)(iVar4 + 0xb0) = uVar12;
  *(undefined4 *)(iVar4 + 0xa4) = uVar9;
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  *(undefined4 *)(iVar4 + 0xb4) = uVar9;
  *(int *)(iVar4 + 0xb8) = iVar10;
  *(undefined4 *)(iVar4 + 0xbc) = uVar11;
  *(undefined4 *)(iVar4 + 0xc0) = uVar12;
  uVar11 = puVar2[4];
  uVar12 = puVar2[5];
  *(int *)(iVar4 + 200) = iVar10;
  *(undefined4 *)(iVar4 + 0xcc) = uVar11;
  *(undefined4 *)(iVar4 + 0xd0) = uVar12;
  *(undefined4 *)(iVar4 + 0xc4) = uVar9;
  *(undefined2 *)(iVar4 + 0xd4) = 8;
  *(undefined1 *)(iVar4 + 0xd7) = 0;
  *(float *)(iVar4 + -0x1c) = *(float *)(iVar4 + -0x1c) + *(float *)(iVar4 + -8);
  iVar5 = *(int *)(iVar4 + -4);
  *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + -0x20);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar4 + -0x1c);
  *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + -0x18);
  func_004356B4(*(int **)(iVar4 + -4));
  *(uint *)(*(int *)(iVar4 + -4) + 0x2c) = *(uint *)(*(int *)(iVar4 + -4) + 0x2c) | 0x20000;
  func_001DA26C(iVar10);
  uVar11 = puVar2[6];
  uVar12 = puVar2[7];
  *(int *)(iVar4 + 0x98) = iVar10;
  uVar9 = DAT_001db4b0;
  *(undefined4 *)(iVar4 + 0x9c) = uVar11;
  *(undefined4 *)(iVar4 + 0xa0) = uVar12;
  *(undefined4 *)(iVar4 + -0x34) = 0x20;
  *(undefined4 *)(iVar4 + -0x30) = uVar9;
  *(undefined4 *)(iVar4 + -0x38) = 0;
  *(ushort *)(iVar4 + 0x32) = *(ushort *)(iVar4 + 0x32) & 4;
  if (*(short *)(iVar4 + -0x418) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = (int)*(short *)(iVar4 + -0x418) - 1;
  }
  puVar6 = (undefined2 *)func_0054DDF4(iVar10,uVar7);
  local_1c = *(uint *)(iVar4 + -0x178);
  func_0014EB8C(iVar4,*(undefined4 *)(iVar4 + -4),puVar6,&local_1c,*(undefined2 *)(iVar4 + -0x3f0),
                (undefined4 *)(iVar4 + 0x94),(short)iVar1);
  if (*(char *)(*DAT_001db4b4 + 0x18) == '\a' || *(char *)(*DAT_001db4b4 + 0x18) == '%') {
    *(undefined2 *)(iVar4 + 0x30) = 1;
  }
  func_001DA348(iVar10,(float *)(iVar4 + -0x14),(float *)(iVar4 + -0x74),0);
  *(undefined4 *)(iVar4 + 0xd8) = *(undefined4 *)(iVar4 + -0x74);
  *(undefined4 *)(iVar4 + 0xdc) = *(undefined4 *)(iVar4 + -0x70);
  *(undefined4 *)(iVar4 + 0xe0) = *(undefined4 *)(iVar4 + -0x6c);
  return iVar10;
}

