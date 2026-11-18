#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern int func_004CEAF0(int param_1);
extern float DAT_00427e70;
extern undefined4 DAT_00427e74;

// USA 00427CA8 <- EU 00427C88 (Ghidra, non-matching)
// GLOBAL DAT_00427e70 float
// GLOBAL DAT_00427e74 undefined4

void func_00427CA8(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define afStack_50 ((float *)(albw_frame + 0x10))
  #define afStack_20 ((float *)(albw_frame + 0x40))
  if ((*(char *)(*(int *)(param_1 + 0xc) + 0x30) == '\x01') &&
     (((*(byte *)(param_1 + 0x81) & 4) != 0 || ((*(byte *)(param_1 + 0x81) & 2) == 0)))) {
    func_00168E9C(*(int **)(param_1 + 0x60),*(int *)(param_1 + 0xc),(int *)0x0);
    func_00168E9C(*(int **)(param_1 + 100),*(int *)(param_1 + 0xc),(int *)0x0);
    func_00168E9C(*(int **)(param_1 + 0x68),*(int *)(param_1 + 0xc),(int *)0x0);
    uVar6 = 0;
    func_00168E9C(*(int **)(param_1 + 0x6c),*(int *)(param_1 + 0xc),(int *)0x0);
    if (*(int **)(param_1 + 0x70) != (int *)0x0) {
      func_00169A80(*(int **)(param_1 + 0x70),extraout_r1,uVar6,in_r3);
      uVar6 = 0;
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
      func_00169A80(piVar1,uVar5,uVar6,in_r3);
    }
    piVar2 = (int *)(uint)*(byte *)(param_1 + 0x80);
    piVar1 = piVar2;
    if (piVar2 < *(int **)(param_1 + 0x4c)) {
      piVar1 = *(int **)(*(int *)(param_1 + 0x54) + (int)piVar2 * 4);
    }
    if (*(int **)(param_1 + 0x4c) <= piVar2) {
      piVar1 = (int *)0x0;
    }
    func_00168E9C(piVar1,*(int *)(param_1 + 0xc),(int *)0x0);
    if ((*(byte *)(param_1 + 0x81) & 1) != 0) {
      local_60 = DAT_00427e70;
      uStack_5c = DAT_00427e74;
      local_58 = DAT_00427e70;
      func_0048B5D4(afStack_20,&local_60,*(uint *)(param_1 + 0x7c));
      func_00491B3C(afStack_50,afStack_20);
      iVar3 = *(int *)(param_1 + 0xc);
      *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar3 + 0x80),afStack_50);
      *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) & 0xfe;
    }
    func_004CEAF0(*(int *)(param_1 + 0xc));
    iVar3 = *(int *)(param_1 + 0x74);
    if (-1 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x48);
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x24) + 0x14);
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar4 + 0x80),(undefined4 *)(iVar7 + iVar3 * 0x30));
      func_004CEAF0(*(int *)(param_1 + 0x48));
    }
    iVar3 = *(int *)(param_1 + 0x78);
    if ((-1 < iVar3) && (iVar4 = *(int *)(param_1 + 0x28), iVar4 != 0)) {
      iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x24) + 0x14);
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar4 + 0x80),(undefined4 *)(iVar7 + iVar3 * 0x30));
      func_004CEAF0(*(int *)(param_1 + 0x28));
    }
    *(byte *)(param_1 + 0x81) = *(byte *)(param_1 + 0x81) | 2;
  }
  return;
}

