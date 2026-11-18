#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int *DAT_004c8e98;
extern undefined4 DAT_004c8e9c;
extern undefined4 DAT_004c8ea0;
extern undefined *DAT_004c8ea4;

// USA 004C8E10 <- EU 004C8DE8 (Ghidra, non-matching)
// GLOBAL DAT_004c8e98 int *
// GLOBAL DAT_004c8e9c undefined4
// GLOBAL DAT_004c8ea0 undefined4
// GLOBAL DAT_004c8ea4 undefined *

void func_004C8E10(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  piVar1 = DAT_004c8e98;
  if (*DAT_004c8e98 == 0) {
    puVar4 = (undefined4 *)func_0010CEE0(0x29c,param_1,4);
    if (puVar4 == (undefined4 *)0x0) {
      piVar1[1] = 0;
      iVar7 = 0;
    }
    else {
      puVar5 = func_0010DA7C(puVar4,param_1,3);
      *puVar5 = DAT_004c8e9c;
      uVar2 = DAT_004c8ea0;
      piVar1[1] = (int)puVar5;
      puVar4[10] = uVar2;
      puVar4[0x10] = puVar4 + 0xf;
      puVar4[0x11] = 0;
      puVar4[0xf] = puVar4 + 0xf;
      puVar3 = DAT_004c8ea4;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      iVar6 = func_00100118((int)(puVar4 + 0x16),puVar3,0x18,0x18);
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + -4) = 0;
        *(int *)(iVar6 + -0x10) = iVar6;
        *(undefined4 *)(iVar6 + -0xc) = 0x18;
        *(undefined4 *)(iVar6 + -8) = 0;
      }
      iVar7 = iVar6 + -0x58;
      *(undefined1 *)(iVar6 + 0x240) = 0;
    }
    *piVar1 = iVar7;
  }
  return;
}

