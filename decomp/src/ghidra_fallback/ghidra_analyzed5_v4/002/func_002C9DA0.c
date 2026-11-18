#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 DAT_002c9ef8;
extern undefined4 DAT_002c9efc;
extern float DAT_002c9f00;
extern int *DAT_002c9f04;

// USA 002C9DA0 <- EU 002C9D7C (Ghidra, non-matching)
// GLOBAL DAT_002c9ef8 undefined4
// GLOBAL DAT_002c9efc undefined4
// GLOBAL DAT_002c9f00 float
// GLOBAL DAT_002c9f04 int *

undefined4 func_002C9DA0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  float fVar8;
  undefined4 uVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  #define local_1c (*(uint *)(albw_frame + 0x4))
  iVar4 = func_0054D964(param_1,1);
  uVar1 = DAT_002c9efc;
  uVar9 = DAT_002c9ef8;
  *(int *)(param_1 + 0x4e4) = iVar4;
  *(undefined4 *)(iVar4 + 100) = uVar9;
  *(undefined4 *)(iVar4 + 0x68) = uVar1;
  *(undefined4 *)(iVar4 + 0x6c) = uVar1;
  fVar2 = DAT_002c9f00;
  *(undefined4 *)(iVar4 + 0x70) = uVar1;
  *(undefined4 *)(iVar4 + 0x74) = uVar9;
  *(undefined4 *)(iVar4 + 0x78) = uVar1;
  *(undefined4 *)(iVar4 + 0x7c) = uVar1;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  *(undefined4 *)(iVar4 + 0x84) = uVar9;
  fVar8 = *(float *)(param_1 + 0x3d4);
  uVar9 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar4 + 8) = fVar8 + fVar2;
  *(undefined4 *)(iVar4 + 0xc) = uVar9;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  *(undefined4 **)(param_1 + 0x4dc) = puVar6;
  local_1c = 0xe4;
  piVar7 = (int *)(param_1 + 0x4dc);
  *(undefined2 *)(iVar4 + 0x28) = 0xe4;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x80;
  *(undefined4 *)(*(int *)(param_1 + 0x4dc) + 0x18) = *(undefined4 *)(param_1 + 0x4e4);
  local_20 = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x4dc),&local_20);
  func_004ED9C8(*piVar7);
  piVar3 = DAT_002c9f04;
  *(undefined2 *)(*piVar7 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  func_004A7F00(*piVar3,*piVar7,0);
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  *(undefined4 **)(param_1 + 0x4e0) = puVar6;
  piVar7 = (int *)(param_1 + 0x4e0);
  puVar6[6] = *(undefined4 *)(param_1 + 0x40c);
  local_1c = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x4e0),&local_1c);
  *(undefined2 *)(*(int *)(param_1 + 0x40c) + 0x28) = 0xe4;
  iVar4 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x80;
  func_004ED9C8(*piVar7);
  *(undefined2 *)(*piVar7 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A7F00(*piVar3,*piVar7,0);
}

