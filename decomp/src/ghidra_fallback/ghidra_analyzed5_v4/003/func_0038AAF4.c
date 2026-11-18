#include "ghidra_types.h"

extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0012C9C4(undefined4 *param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_00232540(undefined4 *param_1);
extern int func_00232818(undefined4 *param_1,int param_2);
extern int func_0026E6DC(int param_1);
extern int func_004A4BD4(undefined4 *param_1,int *param_2,int *param_3);
extern undefined4 DAT_0038ad84;
extern uint DAT_0038ad88;
extern undefined4 DAT_0038ad8c;
extern undefined4 DAT_0038ad90;
extern int DAT_0038ad94;
extern undefined4 DAT_0038ad98;

// USA 0038AAF4 <- EU 0038AAD0 (Ghidra, non-matching)
// GLOBAL DAT_0038ad84 undefined4
// GLOBAL DAT_0038ad88 uint
// GLOBAL DAT_0038ad8c undefined4
// GLOBAL DAT_0038ad90 undefined4
// GLOBAL DAT_0038ad94 int
// GLOBAL DAT_0038ad98 undefined4

undefined4 * func_0038AAF4(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int * *)(albw_frame + 0x10))
  puVar3 = func_0012C9C4(param_1);
  uVar8 = 0;
  piVar7 = puVar3 + 10;
  *puVar3 = DAT_0038ad84;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  func_0010B3EC(puVar3 + 7,0x13,(int)piVar7);
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x1f] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x1c);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = func_00232818(puVar4,0x14);
  }
  puVar3[0x20] = puVar4;
  puVar5 = (undefined4 *)func_0010BAB4(0x1c);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = func_00232818(puVar5,0x14);
  }
  uVar1 = DAT_0038ad88;
  uVar10 = (ulonglong)DAT_0038ad88;
  puVar3[0x21] = puVar4;
  puVar3[0x22] = 0;
  *(undefined2 *)(puVar3 + 0x5f) = 0;
  *(undefined2 *)((int)puVar3 + 0x17e) = 0xffff;
  puVar3[0x60] = uVar1;
  puVar3[0x61] = 0;
  uVar2 = DAT_0038ad8c;
  puVar3[0x62] = 0;
  local_38 = DAT_0038ad90;
  puVar3[99] = 0;
  puVar3[100] = uVar2;
  *(undefined1 *)(puVar3 + 0x65) = 0;
  local_34 = DAT_0038ad94;
  do {
    if ((int)puVar3[7] < (int)puVar3[8]) {
      puVar4 = (undefined4 *)func_0010BAB4(0x34);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        local_30 = (int *)(param_3 + uVar8 * 0x2c);
        puVar4 = func_00232540(puVar4);
        *puVar4 = local_38;
        puVar4[8] = 0;
        *(undefined2 *)(puVar4 + 9) = 0;
        *(undefined2 *)((int)puVar4 + 0x26) = 0xffff;
        puVar4[10] = (int)uVar10;
        puVar4[0xb] = 0;
        *(undefined1 *)(puVar4 + 0xc) = 0;
        puVar5 = (undefined4 *)func_0010BAB4(0x74);
        if (puVar5 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = func_00168434(puVar5);
        }
        iVar6 = func_00168100(piVar7,param_2,local_30);
        puVar4[8] = iVar6;
        puVar4[7] = piVar7;
        puVar4[6] = puVar4[6] | 0x10;
        *(byte *)(piVar7 + 0x1c) = *(byte *)(piVar7 + 0x1c) | 8;
        func_0026E6DC(puVar4[8]);
        func_0016773C((int)piVar7,1);
        local_40 = local_34;
        local_3c = DAT_0038ad98;
        func_00166C20(piVar7,0,&local_40,0);
        puVar4[0xb] = piVar7;
        *(undefined2 *)((int)puVar4 + 0x26) = 0;
        *(undefined2 *)(puVar4 + 9) = 5;
      }
      piVar7 = puVar3 + 7;
      if (*piVar7 < (int)puVar3[8]) {
        *(undefined4 **)(puVar3[9] + *piVar7 * 4) = puVar4;
        *piVar7 = *piVar7 + 1;
      }
      puVar5 = puVar3 + 0x23;
      if (uVar8 < 0x14) {
        puVar5 = puVar3 + uVar8 * 3 + 0x23;
      }
      iVar6 = *(int *)(*(int *)puVar4[7] + 0x10);
      *puVar5 = *(undefined4 *)(iVar6 + 0x1c);
      piVar7 = *(int **)(iVar6 + 0x20);
      puVar5[1] = piVar7;
      puVar5[2] = *(undefined4 *)(iVar6 + 0x24);
    }
    else {
      piVar9 = (int *)(param_3 + uVar8 * 0x2c);
      puVar4 = (undefined4 *)func_0010BAB4(0xa0);
      if (puVar4 == (undefined4 *)0x0) {
        iVar6 = 0;
        piVar9 = piVar7;
      }
      else {
        iVar6 = func_004A4BD4(puVar4,param_2,piVar9);
      }
      puVar3[0x1d] = iVar6;
      if (uVar8 < 0x14) {
        piVar9 = (int *)(uVar8 * 3);
      }
      puVar4 = puVar3 + 0x23;
      if (uVar8 < 0x14) {
        puVar4 = puVar4 + (int)piVar9;
      }
      iVar6 = *(int *)(**(int **)(iVar6 + 0x1c) + 0x10);
      *puVar4 = *(undefined4 *)(iVar6 + 0x1c);
      piVar7 = *(int **)(iVar6 + 0x20);
      puVar4[1] = piVar7;
      puVar4[2] = *(undefined4 *)(iVar6 + 0x24);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x14);
  return puVar3;
}

