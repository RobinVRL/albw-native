#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_00427e70;
extern undefined4 DAT_00427e74;

// USA 00427B8C <- EU 00427B6C (Ghidra, non-matching)
// GLOBAL DAT_00427e70 float
// GLOBAL DAT_00427e74 undefined4

void func_00427B8C(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *in_r3;
  bool bVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define fStack_60 (*(float *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define fStack_58 (*(float *)(albw_frame + 0x8))
  #define afStack_50 ((float *)(albw_frame + 0x10))
  #define afStack_20 ((float *)(albw_frame + 0x40))
  pcVar6 = (code *)0x0;
  func_004CF478(*(int *)(param_1 + 0xc),1);
  bVar9 = (*(uint *)(param_1 + 8) & 1) == 0;
  if (bVar9) {
    pcVar6 = *(code **)(param_1 + 4);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + ((int)*(uint *)(param_1 + 8) >> 1));
  if (!bVar9) {
    pcVar6 = *(code **)(*piVar1 + *(int *)(param_1 + 4));
  }
  (*pcVar6)(piVar1,1);
  if (*(int *)(param_1 + 0x28) != 0) {
    pcVar6 = (code *)0x0;
    func_004CF478(*(int *)(param_1 + 0x28),1);
    bVar9 = (*(uint *)(param_1 + 8) & 1) == 0;
    if (bVar9) {
      pcVar6 = *(code **)(param_1 + 4);
    }
    piVar1 = (int *)(*(int *)(param_1 + 0x28) + ((int)*(uint *)(param_1 + 8) >> 1));
    if (!bVar9) {
      pcVar6 = *(code **)(*piVar1 + *(int *)(param_1 + 4));
    }
    (*pcVar6)(piVar1,1);
  }
  pcVar6 = (code *)0x0;
  func_004CF478(*(int *)(param_1 + 0x48),1);
  bVar9 = (*(uint *)(param_1 + 8) & 1) == 0;
  if (bVar9) {
    pcVar6 = *(code **)(param_1 + 4);
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x48) + ((int)*(uint *)(param_1 + 8) >> 1));
  if (!bVar9) {
    pcVar6 = *(code **)(*piVar1 + *(int *)(param_1 + 4));
  }
  (*pcVar6)(piVar1,1);
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfd | 1;
  *(uint *)(*(int *)(param_1 + 0xc) + 0x164) = *(uint *)(*(int *)(param_1 + 0xc) + 0x164) | 0x2000;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x2000;
  }
  *(uint *)(*(int *)(param_1 + 0x48) + 0x164) = *(uint *)(*(int *)(param_1 + 0x48) + 0x164) | 0x2000
  ;
  if ((*(char *)(*(int *)(param_1 + 0xc) + 0x30) == '\x01') &&
     (((*(byte *)(param_1 + 0x81) & 4) != 0 || ((*(byte *)(param_1 + 0x81) & 2) == 0)))) {
    func_00168E9C(*(int **)(param_1 + 0x60),*(int *)(param_1 + 0xc),(int *)0x0);
    func_00168E9C(*(int **)(param_1 + 100),*(int *)(param_1 + 0xc),(int *)0x0);
    func_00168E9C(*(int **)(param_1 + 0x68),*(int *)(param_1 + 0xc),(int *)0x0);
    uVar7 = 0;
    func_00168E9C(*(int **)(param_1 + 0x6c),*(int *)(param_1 + 0xc),(int *)0x0);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x70),extraout_r1,uVar7,in_r3);
      uVar7 = 0;
      func_00168E9C(*(int **)(param_1 + 0x70),*(int *)(param_1 + 0xc),(int *)0x0);
    }
    if ((*(byte *)(param_1 + 0x81) & 4) != 0) {
      uVar5 = *(uint *)(param_1 + 0x4c);
      if (*(byte *)(param_1 + 0x80) < uVar5) {
        uVar5 = *(uint *)(param_1 + 0x54);
        piVar1 = *(int **)(uVar5 + (uint)*(byte *)(param_1 + 0x80) * 4);
      }
      else {
        piVar1 = (int *)0x0;
      }
      func_00169A80(piVar1,uVar5,uVar7,in_r3);
    }
    piVar3 = (int *)(uint)*(byte *)(param_1 + 0x80);
    piVar1 = piVar3;
    if (piVar3 < *(int **)(param_1 + 0x4c)) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x54) + (int)piVar3 * 4);
    }
    if (*(int **)(param_1 + 0x4c) <= piVar3) {
      piVar1 = (int *)0x0;
    }
    func_00168E9C(piVar1,*(int *)(param_1 + 0xc),(int *)0x0);
    if ((*(byte *)(param_1 + 0x81) & 1) != 0) {
      fStack_60 = DAT_00427e70;
      uStack_5c = DAT_00427e74;
      fStack_58 = DAT_00427e70;
      func_0048B5D4(afStack_20,&fStack_60,*(uint *)(param_1 + 0x7c));
      func_00491B3C(afStack_50,afStack_20);
      iVar2 = *(int *)(param_1 + 0xc);
      *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar2 + 0x80),afStack_50);
      *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfe;
    }
    func_004CEAF0(*(int *)(param_1 + 0xc));
    iVar2 = *(int *)(param_1 + 0x74);
    if (-1 < iVar2) {
      iVar4 = *(int *)(param_1 + 0x48);
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x24) + 0x14);
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar4 + 0x80),(undefined4 *)(iVar8 + iVar2 * 0x30));
      func_004CEAF0(*(int *)(param_1 + 0x48));
    }
    iVar2 = *(int *)(param_1 + 0x78);
    if ((-1 < iVar2) && (iVar4 = *(int *)(param_1 + 0x28), iVar4 != 0)) {
      iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x24) + 0x14);
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar4 + 0x80),(undefined4 *)(iVar8 + iVar2 * 0x30));
      func_004CEAF0(*(int *)(param_1 + 0x28));
    }
    *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) | 2;
  }
  return;
}

