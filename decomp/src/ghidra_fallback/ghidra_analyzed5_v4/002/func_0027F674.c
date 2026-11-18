#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern undefined4 DAT_0027f810;
extern undefined4 DAT_0027f814;
extern float DAT_0027f818;
extern int *DAT_0027f81c;

// USA 0027F674 <- EU 0027F69C (Ghidra, non-matching)
// GLOBAL DAT_0027f810 undefined4
// GLOBAL DAT_0027f814 undefined4
// GLOBAL DAT_0027f818 float
// GLOBAL DAT_0027f81c int *

undefined4 func_0027F674(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((uint *)(albw_frame + 0x0))
  iVar4 = func_0054D964(param_1,1);
  uVar1 = DAT_0027f814;
  uVar8 = DAT_0027f810;
  *(int *)(param_1 + 0x4e8) = iVar4;
  *(undefined4 *)(iVar4 + 100) = uVar8;
  *(undefined4 *)(iVar4 + 0x68) = uVar1;
  *(undefined4 *)(iVar4 + 0x6c) = uVar1;
  fVar2 = DAT_0027f818;
  *(undefined4 *)(iVar4 + 0x70) = uVar1;
  *(undefined4 *)(iVar4 + 0x74) = uVar8;
  *(undefined4 *)(iVar4 + 0x78) = uVar1;
  *(undefined4 *)(iVar4 + 0x7c) = uVar1;
  *(undefined4 *)(iVar4 + 0x80) = uVar1;
  *(undefined4 *)(iVar4 + 0x84) = uVar8;
  fVar9 = *(float *)(param_1 + 0x3d4);
  uVar8 = *(undefined4 *)(param_1 + 0x3d8);
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(float *)(iVar4 + 8) = fVar9 + fVar2;
  *(undefined4 *)(iVar4 + 0xc) = uVar8;
  local_20[1] = 0xe4;
  *(undefined2 *)(iVar4 + 0x28) = 0xe4;
  *(uint *)(iVar4 + 0x2c) = *(uint *)(iVar4 + 0x2c) | 0x80;
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  *(undefined4 **)(param_1 + 0x4e0) = puVar6;
  piVar7 = (int *)(param_1 + 0x4e0);
  puVar6[6] = *(undefined4 *)(param_1 + 0x4e8);
  local_20[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*(int *)(param_1 + 0x4e0),local_20);
  func_004ED9C8(*piVar7);
  piVar3 = DAT_0027f81c;
  *(undefined2 *)(*piVar7 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  func_004A7F00(*piVar3,*piVar7,0);
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = func_004EDC9C(puVar5);
  }
  *(undefined4 **)(param_1 + 0x4e4) = puVar6;
  piVar7 = (int *)(param_1 + 0x4e4);
  puVar6[6] = *(undefined4 *)(param_1 + 0x40c);
  local_20[1] = 0xe4;
  *(undefined2 *)(*(int *)(param_1 + 0x40c) + 0x28) = 0xe4;
  *(uint *)(*(int *)(param_1 + 0x40c) + 0x2c) = *(uint *)(*(int *)(param_1 + 0x40c) + 0x2c) | 0x80;
  local_20[0] = *(uint *)(param_1 + 0x2cc);
  func_004EDAD0(*piVar7,local_20);
  func_004ED9C8(*piVar7);
  *(undefined2 *)(*piVar7 + 0x2c) = *(undefined2 *)(param_1 + 0x54);
  return func_004A7F00(*piVar3,*piVar7,0);
}

