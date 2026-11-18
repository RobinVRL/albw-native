#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001B8EDC(int param_1);
extern int *DAT_001b8ecc;
extern undefined4 DAT_001b8ed0;
extern undefined *DAT_001b8ed4;
extern undefined *DAT_001b8ed8;

// USA 001B8DCC <- EU 001B8DCC (Ghidra, non-matching)
// GLOBAL DAT_001b8ecc int *
// GLOBAL DAT_001b8ed0 undefined4
// GLOBAL DAT_001b8ed4 undefined *
// GLOBAL DAT_001b8ed8 undefined *

int func_001B8DCC(int *param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  piVar1 = DAT_001b8ecc;
  if (*DAT_001b8ecc == 0) {
    puVar3 = (undefined4 *)func_0010CEE0(0x154,param_1,4);
    if (puVar3 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      iVar8 = 0;
    }
    else {
      puVar4 = func_0010DA7C(puVar3,param_1,3);
      *puVar4 = DAT_001b8ed0;
      piVar1[1] = (int)puVar4;
      puVar3[0xc] = 0;
      puVar2 = DAT_001b8ed4;
      puVar3[0xd] = 0;
      iVar8 = func_00100118((int)(puVar3 + 0xe),puVar2,0x1c,8);
      iVar5 = func_00100118(iVar8 + 0xe0,DAT_001b8ed8,0x10,2);
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined4 *)(iVar5 + 0x24) = 0;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      *(undefined4 *)(iVar5 + 0x30) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0;
      *(undefined1 *)(iVar5 + 0x38) = 0;
      *(undefined1 *)(iVar5 + 0x39) = 0;
      *(undefined4 *)(iVar5 + -0x108) = 0;
      *(undefined4 *)(iVar5 + -0x104) = 0;
      *(undefined4 *)(iVar5 + -0x100) = 0;
      *(undefined4 *)(iVar5 + -0xfc) = 0;
      *(undefined4 *)(iVar5 + -0xf8) = 0;
      *(undefined4 *)(iVar5 + -0xf4) = 0;
      *(undefined4 *)(iVar5 + -0xf0) = 0;
      iVar8 = iVar5 + -0x118;
      *(undefined4 *)(iVar5 + -0xec) = 0;
      uVar6 = 0;
      do {
        iVar7 = iVar5;
        if (uVar6 < 2) {
          iVar7 = iVar5 + uVar6 * 0x10;
        }
        uVar6 = uVar6 + 1;
        *(undefined4 *)(iVar7 + 0xc) = 0x10;
      } while ((int)uVar6 < 2);
      func_001B8EDC(iVar8);
    }
    *piVar1 = iVar8;
  }
  return *piVar1;
}

