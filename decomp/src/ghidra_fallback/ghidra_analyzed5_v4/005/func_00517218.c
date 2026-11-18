#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern int DAT_0051736c;
extern uint DAT_00517370;
extern undefined4 DAT_00517374;
extern undefined4 DAT_00517378;

// USA 00517218 <- EU 005171F0 (Ghidra, non-matching)
// GLOBAL DAT_0051736c int
// GLOBAL DAT_00517370 uint
// GLOBAL DAT_00517374 undefined4
// GLOBAL DAT_00517378 undefined4

void func_00517218(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 ((uint *)(albw_frame + 0xc))
  uVar1 = DAT_00517374;
  iVar5 = DAT_0051736c;
  uVar8 = 0;
  uVar9 = (int)*(short *)(param_1 + 0xce0) - 1;
  if (10 < uVar9) {
    uVar9 = 10;
  }
  if (uVar9 != 0) {
    uVar10 = (ulonglong)DAT_00517370;
    do {
      puVar7 = (undefined4 *)(param_1 + 0x40c + uVar8 * 0x24);
      *puVar7 = *(undefined4 *)(param_1 + 0x3d0);
      puVar7[1] = *(undefined4 *)(param_1 + 0x3d4);
      puVar7[2] = *(undefined4 *)(param_1 + 0x3d8);
      puVar2 = (undefined4 *)func_0010BAB4(100);
      uVar3 = 0;
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = func_004EE484(puVar2);
      }
      puVar7[4] = uVar3;
      iVar4 = func_0054D964(param_1,0);
      puVar7[3] = iVar4;
      puVar2 = (undefined4 *)func_0010BAB4(0x10);
      if (puVar2 != (undefined4 *)0x0) {
        puVar2[1] = 0;
        uVar3 = *(undefined4 *)(iVar5 + 0x50);
        uVar6 = *(undefined4 *)(iVar5 + 0x54);
        *puVar2 = uVar1;
        puVar2[2] = uVar3;
        puVar2[3] = uVar6;
      }
      puVar7[8] = puVar2;
      *(undefined2 *)(puVar7[3] + 0x28) = 0x1a0;
      func_004356B4((int *)puVar7[3]);
      puVar7[7] = (int)uVar10;
      local_34[0] = *(uint *)(param_1 + 0x2cc);
      func_0014EB8C(puVar7[4],puVar7[3],*(undefined2 **)(param_1 + 0x3a0),local_34,
                    *(undefined2 *)(param_1 + 0x54),0,(short)DAT_00517378);
      iVar4 = puVar7[8];
      uVar3 = *(undefined4 *)(iVar5 + 0x40);
      uVar6 = *(undefined4 *)(iVar5 + 0x44);
      uVar8 = uVar8 + 1;
      *(int *)(iVar4 + 4) = param_1;
      *(undefined4 *)(iVar4 + 8) = uVar3;
      *(undefined4 *)(iVar4 + 0xc) = uVar6;
    } while (uVar8 != uVar9);
  }
  iVar5 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + 0x574 + iVar5 * 0xc);
    iVar5 = iVar5 + 1;
    *puVar2 = *(undefined4 *)(param_1 + 0x3d0);
    puVar2[1] = *(undefined4 *)(param_1 + 0x3d4);
    puVar2[2] = *(undefined4 *)(param_1 + 0x3d8);
  } while (iVar5 != 0x96);
  return;
}

