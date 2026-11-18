#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern int func_003673F4(undefined4 *param_1,int param_2);
extern int func_004CD7C8(int param_1,int param_2);
extern undefined4 DAT_0030cfc0;
extern int DAT_0030cfc4;
extern undefined4 DAT_0030cfc8;
extern undefined4 DAT_0030cfcc;
extern undefined4 DAT_0030cfd0;
extern undefined8 *DAT_0030cfd4;
extern undefined4 DAT_0030cfd8;
extern undefined4 DAT_0030cfdc;
extern int *DAT_0030cfe0;

// USA 0030CE3C <- EU 0030CE18 (Ghidra, non-matching)
// GLOBAL DAT_0030cfc0 undefined4
// GLOBAL DAT_0030cfc4 int
// GLOBAL DAT_0030cfc8 undefined4
// GLOBAL DAT_0030cfcc undefined4
// GLOBAL DAT_0030cfd0 undefined4
// GLOBAL DAT_0030cfd4 undefined8 *
// GLOBAL DAT_0030cfd8 undefined4
// GLOBAL DAT_0030cfdc undefined4
// GLOBAL DAT_0030cfe0 int *

undefined4 * func_0030CE3C(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  
  *param_1 = DAT_0030cfc0;
  param_1[1] = 0;
  param_1[2] = 0;
  piVar4 = func_0010DA7C(param_1 + 3,0,3);
  iVar1 = DAT_0030cfc4;
  piVar4[4] = 0;
  *piVar4 = iVar1 + 0x54;
  piVar4[-3] = iVar1;
  piVar4[5] = 0;
  piVar4[6] = 0;
  puVar5 = func_002E1BB4(piVar4 + 7,0);
  puVar5 = func_002E1BB4(puVar5 + 2,0);
  uVar2 = DAT_0030cfc8;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  *(undefined2 *)(puVar5 + 0x10) = 0;
  puVar5[0x11] = uVar2;
  puVar5[0x12] = uVar2;
  *(undefined2 *)(puVar5 + 0x13) = 0;
  uVar2 = DAT_0030cfcc;
  *(undefined2 *)((int)puVar5 + 0x4e) = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = uVar2;
  puVar5[0x16] = 0;
  *(undefined1 *)(puVar5 + 0x18) = 0;
  puVar5 = (undefined4 *)func_003673F4(puVar5 + 0x19,3);
  *puVar5 = DAT_0030cfd0;
  *(undefined1 *)(puVar5 + 0xe) = 0;
  puVar5[0xf] = 0;
  puVar3 = DAT_0030cfd4;
  *(undefined1 *)(puVar5 + 0x10) = 0;
  *(undefined1 *)((int)puVar5 + 0x41) = 0;
  *(undefined1 *)((int)puVar5 + 0x42) = 0;
  *(undefined1 *)((int)puVar5 + 0x43) = 0;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)((int)puVar5 + 0x45) = 0;
  *(undefined1 *)((int)puVar5 + 0x46) = 0;
  *(undefined1 *)((int)puVar5 + 0x47) = 0;
  *(undefined1 *)(puVar5 + 0x12) = 0;
  *(undefined1 *)((int)puVar5 + 0x49) = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  *(undefined2 *)(puVar5 + 0x16) = 0;
  *(undefined2 *)((int)puVar5 + 0x5a) = 0;
  uVar8 = *puVar3;
  puVar6 = func_0010CE7C(puVar5 + 0x18);
  *puVar6 = DAT_0030cfd8;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = puVar6;
  puVar6[7] = 0;
  puVar7 = puVar6 + 9;
  puVar6[8] = 0;
  *(undefined1 *)(puVar6 + 0xe) = 0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar6[10] = puVar5 + -0x25;
    uVar2 = DAT_0030cfdc;
    puVar6[0xb] = (int)uVar8;
    puVar6[0xc] = (int)((ulonglong)uVar8 >> 0x20);
    *puVar7 = uVar2;
  }
  puVar6[8] = puVar7;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  *(undefined1 *)(puVar6 + 0x11) = 0;
  puVar6[0x12] = 0;
  *(undefined2 *)(puVar6 + 0x13) = 0;
  *(undefined1 *)((int)puVar6 + 0x4e) = 0;
  *(undefined1 *)(puVar6 + 0x14) = 0;
  puVar6[-1] = 0;
  func_004CD7C8(*DAT_0030cfe0,(int)puVar6);
  return puVar6 + -0x3d;
}

