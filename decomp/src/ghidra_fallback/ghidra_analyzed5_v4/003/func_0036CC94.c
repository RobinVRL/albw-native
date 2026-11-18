#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_004CD7C8(int param_1,int param_2);
extern undefined4 DAT_0036cd94;
extern int DAT_0036cd98;
extern undefined4 DAT_0036cd9c;
extern undefined4 DAT_0036cda0;
extern undefined4 DAT_0036cda4;
extern undefined4 DAT_0036cda8;
extern undefined4 DAT_0036cdac;
extern int *DAT_0036cdb0;

// USA 0036CC94 <- EU 0036CC70 (Ghidra, non-matching)
// GLOBAL DAT_0036cd94 undefined4
// GLOBAL DAT_0036cd98 int
// GLOBAL DAT_0036cd9c undefined4
// GLOBAL DAT_0036cda0 undefined4
// GLOBAL DAT_0036cda4 undefined4
// GLOBAL DAT_0036cda8 undefined4
// GLOBAL DAT_0036cdac undefined4
// GLOBAL DAT_0036cdb0 int *

undefined4 * func_0036CC94(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *param_1 = DAT_0036cd94;
  param_1[1] = param_2;
  puVar2 = (undefined4 *)func_0010BAB4(0xb0);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = func_002FCDA0(puVar2,0,6);
  }
  iVar1 = DAT_0036cd98;
  param_1[2] = uVar3;
  uVar7 = *(undefined8 *)(iVar1 + 0x28);
  puVar2 = func_0010CE7C(param_1 + 3);
  *puVar2 = DAT_0036cd9c;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = puVar2;
  puVar2[7] = 0;
  puVar4 = puVar2 + 9;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 0xe) = 0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2[10] = param_1;
    uVar3 = DAT_0036cda0;
    puVar2[0xb] = (int)uVar7;
    puVar2[0xc] = (int)((ulonglong)uVar7 >> 0x20);
    *puVar4 = uVar3;
  }
  puVar2[8] = puVar4;
  uVar5 = *(undefined4 *)(iVar1 + 0x30);
  uVar6 = *(undefined4 *)(iVar1 + 0x34);
  puVar2[0x10] = puVar2 + -3;
  uVar3 = DAT_0036cda4;
  puVar2[0x11] = uVar5;
  puVar2[0x12] = uVar6;
  puVar2[0xf] = uVar3;
  uVar5 = *(undefined4 *)(iVar1 + 0x38);
  uVar6 = *(undefined4 *)(iVar1 + 0x3c);
  puVar2[0x14] = puVar2 + -3;
  puVar2[0x15] = uVar5;
  puVar2[0x16] = uVar6;
  uVar5 = DAT_0036cda8;
  puVar2[0x13] = uVar3;
  uVar3 = DAT_0036cdac;
  puVar2[0x18] = uVar5;
  puVar2[0x19] = uVar3;
  puVar2[0x17] = 0;
  puVar2[0x1a] = 0;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  *(undefined4 **)(puVar2[-1] + 0x14) = puVar2 + 0xf;
  *(undefined4 **)(puVar2[-1] + 0x18) = puVar2 + 0x13;
  func_004CD7C8(*DAT_0036cdb0,(int)puVar2);
  return puVar2 + -3;
}

