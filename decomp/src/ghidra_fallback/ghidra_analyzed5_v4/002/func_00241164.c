#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 DAT_002412e8;
extern undefined4 DAT_002412ec;
extern float DAT_002412f0;
extern float DAT_002412f4;
extern int *DAT_002412f8;

// USA 00241164 <- EU 00241164 (Ghidra, non-matching)
// GLOBAL DAT_002412e8 undefined4
// GLOBAL DAT_002412ec undefined4
// GLOBAL DAT_002412f0 float
// GLOBAL DAT_002412f4 float
// GLOBAL DAT_002412f8 int *

undefined4 func_00241164(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((uint *)(albw_frame + 0x0))
  iVar6 = func_0054D964(param_1,1);
  uVar2 = DAT_002412ec;
  uVar1 = DAT_002412e8;
  *(int *)(param_1 + 0x4ec) = iVar6;
  *(undefined4 *)(iVar6 + 100) = uVar1;
  *(undefined4 *)(iVar6 + 0x68) = uVar2;
  *(undefined4 *)(iVar6 + 0x6c) = uVar2;
  fVar4 = DAT_002412f4;
  fVar3 = DAT_002412f0;
  *(undefined4 *)(iVar6 + 0x70) = uVar2;
  *(undefined4 *)(iVar6 + 0x74) = uVar1;
  *(undefined4 *)(iVar6 + 0x78) = uVar2;
  *(undefined4 *)(iVar6 + 0x7c) = uVar2;
  *(undefined4 *)(iVar6 + 0x80) = uVar2;
  *(undefined4 *)(iVar6 + 0x84) = uVar1;
  fVar10 = *(float *)(param_1 + 0x3d4);
  fVar11 = *(float *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar6 + 8) = fVar10 + fVar3;
  *(float *)(iVar6 + 0xc) = fVar11 + fVar4;
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  *(undefined4 **)(param_1 + 0x4e4) = puVar8;
  local_20[1] = 0xe0;
  piVar9 = (int *)(param_1 + 0x4e4);
  *(undefined2 *)(iVar6 + 0x28) = 0xe0;
  *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 0x4e4) + 0x18) = *(undefined4 *)(param_1 + 0x4ec);
  local_20[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x4e4),local_20);
  func_004ED9C8(*piVar9);
  piVar5 = DAT_002412f8;
  *(undefined2 *)(*piVar9 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  func_004A7F00(*piVar5,*piVar9,3);
  puVar7 = (undefined4 *)func_0010BAB4(0x48);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_004EDC9C(puVar7);
  }
  *(undefined4 **)(param_1 + 0x4e8) = puVar8;
  puVar8[6] = *(undefined4 *)(param_1 + 0x40c);
  local_20[0] = *(uint *)(param_1 + 0x2cc);
  piVar9 = (int *)(param_1 + 0x4e8);
  func_004EDAD0(*(int *)(param_1 + 0x4e8),local_20);
  local_20[1] = 0xe0;
  *(undefined2 *)(*(int *)(param_1 + 0x40c) + 0x28) = 0xe0;
  iVar6 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar6 + 0x2c) = *(uint *)(iVar6 + 0x2c) | 0x80;
  func_004ED9C8(*piVar9);
  *(undefined2 *)(*piVar9 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A7F00(*piVar5,*piVar9,3);
}

