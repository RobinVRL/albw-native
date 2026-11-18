#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_001663BC(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_002FCDA0(undefined4 *param_1,undefined4 param_2,undefined1 param_3);
extern int func_004CD7C8(int param_1,int param_2);
extern undefined4 DAT_0036caf0;
extern uint *DAT_0036caf4;
extern undefined4 *DAT_0036caf8;
extern undefined4 DAT_0036cafc;
extern undefined DAT_0036cb00;
extern undefined4 DAT_0036cb18;
extern undefined4 DAT_0036cb1c;
extern undefined4 DAT_0036cb20;
extern undefined8 *DAT_0036cb24;
extern undefined4 DAT_0036cb28;
extern undefined4 DAT_0036cb2c;
extern undefined4 DAT_0036cb30;
extern undefined4 DAT_0036cb34;
extern undefined4 DAT_0036cb38;
extern int *DAT_0036cb3c;

// USA 0036C884 <- EU 0036C860 (Ghidra, non-matching)
// GLOBAL DAT_0036caf0 undefined4
// GLOBAL DAT_0036caf4 uint *
// GLOBAL DAT_0036caf8 undefined4 *
// GLOBAL DAT_0036cafc undefined4
// GLOBAL DAT_0036cb00 undefined
// GLOBAL DAT_0036cb18 undefined4
// GLOBAL DAT_0036cb1c undefined4
// GLOBAL DAT_0036cb20 undefined4
// GLOBAL DAT_0036cb24 undefined8 *
// GLOBAL DAT_0036cb28 undefined4
// GLOBAL DAT_0036cb2c undefined4
// GLOBAL DAT_0036cb30 undefined4
// GLOBAL DAT_0036cb34 undefined4
// GLOBAL DAT_0036cb38 undefined4
// GLOBAL DAT_0036cb3c int *

undefined4 * func_0036C884(undefined4 *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  *param_1 = DAT_0036caf0;
  param_1[1] = param_2;
  if (((*DAT_0036caf4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0036caf4), iVar2 != 0)) {
    *DAT_0036caf8 = DAT_0036cafc;
  }
  if ((param_2 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*param_2)(param_2,DAT_0036caf8), puVar3 = param_2, iVar2 == 0)) {
    puVar3 = (undefined4 *)0x0;
  }
  param_1[2] = puVar3;
  puVar3 = (undefined4 *)func_0010BAB4(0x108);
  uVar4 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_24 = &DAT_0036cb00;
    local_28 = DAT_0036cb18;
    uVar4 = func_001663BC(puVar3,&local_28,param_2[0xb3],6,1);
  }
  param_1[3] = uVar4;
  puVar3 = (undefined4 *)func_0010BAB4(0xb0);
  if (puVar3 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = func_002FCDA0(puVar3,0,6);
  }
  param_1[5] = 0xf;
  param_1[4] = uVar4;
  param_1[6] = 0xf;
  param_1[7] = 0xf;
  param_1[8] = 0xffffffff;
  uVar4 = DAT_0036cb1c;
  param_1[9] = 0xffffffff;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar4;
  puVar1 = DAT_0036cb24;
  uVar4 = DAT_0036cb20;
  param_1[0xf] = DAT_0036cb20;
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar4;
  uVar9 = *puVar1;
  puVar3 = func_0010CE7C(param_1 + 0x12);
  *puVar3 = DAT_0036cb28;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = puVar3;
  puVar3[7] = 0;
  puVar5 = puVar3 + 9;
  bVar7 = puVar5 == (undefined4 *)0x0;
  puVar3[8] = 0;
  if (bVar7) {
    puVar5 = (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar3 + 0xe) = 0;
  if (!bVar7) {
    puVar5[1] = param_1;
    uVar4 = DAT_0036cb2c;
    puVar5[2] = (int)uVar9;
    puVar5[3] = (int)((ulonglong)uVar9 >> 0x20);
    *puVar5 = uVar4;
  }
  puVar3[8] = puVar5;
  uVar4 = *(undefined4 *)(puVar1 + 1);
  uVar6 = *(undefined4 *)((int)puVar1 + 0xc);
  puVar3[0x10] = puVar3 + -0x12;
  puVar3[0x11] = uVar4;
  puVar3[0x12] = uVar6;
  uVar4 = DAT_0036cb30;
  puVar3[0xf] = DAT_0036cb30;
  puVar5 = puVar3 + -0x12;
  uVar6 = *(undefined4 *)(puVar1 + 2);
  uVar8 = *(undefined4 *)((int)puVar1 + 0x14);
  puVar3[0x14] = puVar5;
  puVar3[0x15] = uVar6;
  puVar3[0x16] = uVar8;
  puVar3[0x13] = uVar4;
  uVar6 = *(undefined4 *)(puVar1 + 3);
  uVar8 = *(undefined4 *)((int)puVar1 + 0x1c);
  puVar3[0x18] = puVar5;
  puVar3[0x19] = uVar6;
  puVar3[0x1a] = uVar8;
  puVar3[0x17] = uVar4;
  uVar6 = *(undefined4 *)(puVar1 + 4);
  uVar8 = *(undefined4 *)((int)puVar1 + 0x24);
  puVar3[0x1c] = puVar5;
  puVar3[0x1d] = uVar6;
  puVar3[0x1e] = uVar8;
  uVar6 = DAT_0036cb34;
  puVar3[0x1b] = uVar4;
  puVar3[0x1f] = 0;
  puVar3[0x20] = uVar6;
  uVar4 = DAT_0036cb38;
  puVar3[0x21] = DAT_0036cb38;
  puVar3[0x22] = 0;
  puVar3[0x23] = 300;
  puVar3[0x24] = uVar4;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  puVar3[0x27] = uVar4;
  puVar3[0x28] = 0;
  puVar3[0x29] = 0;
  puVar3[0x2a] = 0;
  *(undefined1 *)(puVar3 + 0x2b) = 0;
  *(undefined1 *)((int)puVar3 + 0xad) = 0;
  *(undefined1 *)((int)puVar3 + 0xae) = 0;
  *(undefined1 *)((int)puVar3 + 0xaf) = 0;
  *(undefined1 *)(puVar3 + 0x2c) = 0;
  *(undefined1 *)((int)puVar3 + 0xb1) = param_3;
  *(undefined1 *)((int)puVar3 + 0xb2) = 0;
  *(undefined1 *)((int)puVar3 + 0xb3) = 0;
  *(undefined1 *)(puVar3 + 0x2d) = 0;
  *(undefined4 **)(puVar3[-0xe] + 0x14) = puVar3 + 0xf;
  *(undefined4 **)(puVar3[-0xe] + 0x18) = puVar3 + 0x13;
  func_004CD7C8(*DAT_0036cb3c,(int)puVar3);
  return puVar5;
}

