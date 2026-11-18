#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_00110490(undefined4 *param_1,uint param_2);
extern undefined4 DAT_0016daa4;
extern undefined4 *DAT_0016daa8;
extern undefined4 DAT_0016daac;
extern undefined4 DAT_0016dab0;
extern undefined *DAT_0016dab4;
extern undefined4 DAT_0016dab8;
extern undefined4 *DAT_0016dabc;

// USA 0016D9C0 <- EU 0016D9C0 (Ghidra, non-matching)
// GLOBAL DAT_0016daa4 undefined4
// GLOBAL DAT_0016daa8 undefined4 *
// GLOBAL DAT_0016daac undefined4
// GLOBAL DAT_0016dab0 undefined4
// GLOBAL DAT_0016dab4 undefined *
// GLOBAL DAT_0016dab8 undefined4
// GLOBAL DAT_0016dabc undefined4 *

undefined4 * func_0016D9C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar1 = (undefined4 *)func_0010BAB4(0x58);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    func_00110490(puVar1,0x58);
    puVar1 = func_0010CE7C(puVar1);
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = puVar1;
    puVar1[7] = 0;
    uVar4 = DAT_0016daa4;
    puVar1[8] = 0;
    *(undefined1 *)(puVar1 + 0xe) = 0;
    *puVar1 = uVar4;
    uVar4 = *DAT_0016daa8;
    uVar5 = DAT_0016daa8[1];
    puVar3 = puVar1 + 9;
    if (puVar3 != (undefined4 *)0x0) {
      puVar1[10] = puVar1;
      puVar1[0xb] = uVar4;
      puVar1[0xc] = uVar5;
      *puVar3 = DAT_0016daac;
    }
    puVar1[8] = puVar3;
    *puVar1 = DAT_0016dab0;
    iVar2 = func_00100118((int)puVar1 + 0x39,DAT_0016dab4,5,6);
    iVar2 = iVar2 + -0x39;
  }
  puVar1 = DAT_0016dabc;
  param_1[2] = iVar2;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  uVar4 = DAT_0016dab8;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = uVar4;
  param_1[9] = 0;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  param_1[10] = *puVar1;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  return param_1;
}

