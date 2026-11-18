#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0031B220(int param_1,int *param_2,int *param_3);
extern int func_004B948C(int param_1,int param_2);
extern undefined *DAT_003682d4;
extern int DAT_003682d8;

// USA 003681A4 <- EU 00368180 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_003682d4 undefined *
// GLOBAL DAT_003682d8 int

void func_003681A4(int param_1,int *param_2,uint param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(int *)(albw_frame + 0x4))
  if ((((*(byte *)(param_1 + 0xf5) & 4) == 0) && (0 < (int)param_3)) && (param_2 != (int *)0x0)) {
    puVar2 = (undefined4 *)func_0010CEE0(param_3 * 0x50 + 8,(int *)0x0,4);
    iVar3 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x50;
      puVar2[1] = param_3;
      iVar3 = func_00100118((int)(puVar2 + 2),DAT_003682d4,0x50,param_3);
    }
    iVar1 = DAT_003682d8;
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xa0) = iVar3;
      *(uint *)(param_1 + 0x9c) = param_3;
    }
    uVar4 = 0;
    do {
      piVar5 = param_4;
      if (uVar4 < param_3) {
        piVar5 = param_4 + uVar4 * 2;
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      if (piVar5[1] != 0) {
        piVar5 = param_4;
        if (uVar4 < param_3) {
          piVar5 = param_4 + uVar4 * 2;
        }
        (**(code **)(*piVar5 + 8))(piVar5);
        local_2c = piVar5[1];
        local_30 = iVar1;
        if (uVar4 < *(uint *)(param_1 + 0x9c)) {
          iVar3 = *(int *)(param_1 + 0xa0) + uVar4 * 0x50;
        }
        else {
          iVar3 = *(int *)(param_1 + 0xa0);
        }
        func_0031B220(iVar3,param_2,&local_30);
        if (uVar4 < *(uint *)(param_1 + 0x9c)) {
          iVar3 = *(int *)(param_1 + 0xa0) + uVar4 * 0x50;
        }
        else {
          iVar3 = *(int *)(param_1 + 0xa0);
        }
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar3 + 0x10;
        }
        func_004B948C(param_5,iVar3);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)param_3);
    *(byte *)(param_1 + 0xf5) = *(byte *)(param_1 + 0xf5) | 4;
  }
  return;
}

