#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C0294(undefined4 *param_1);
extern int func_00662C9C(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002bfe98;
extern int DAT_002bfe9c;
extern undefined *DAT_002bfea0;
extern int DAT_002bfeb0;
extern char s_cState_Idle_002bfea4[];
extern char s_cState_Invalid_002bfecc[];
extern char s_cState_Pop_002bfec0[];
extern char s_cState_Push_002bfeb4[];

// USA 002BFBF0 <- EU 002BFBCC (Ghidra, non-matching)
// GLOBAL DAT_002bfe98 undefined4
// GLOBAL DAT_002bfe9c int
// GLOBAL DAT_002bfea0 undefined *
// GLOBAL DAT_002bfeb0 int
// GLOBAL s_cState_Idle_002bfea4 string
// GLOBAL s_cState_Invalid_002bfecc string
// GLOBAL s_cState_Pop_002bfec0 string
// GLOBAL s_cState_Push_002bfeb4 string

undefined4 * func_002BFBF0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_001B6E04(param_1);
  *puVar2 = DAT_002bfe98;
  puVar3 = func_0010A794(puVar2 + 0xe);
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 1;
  *(undefined1 *)((int)puVar3 + 0x25) = 0;
  *(undefined1 *)((int)puVar3 + 0x26) = 0;
  *(undefined1 *)((int)puVar3 + 0x27) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar2 = func_002C0294(puVar4);
  }
  puVar3[-9] = puVar2;
  puVar3[5] = puVar3 + -0xe;
  *(undefined1 *)((int)puVar3 + 6) = 4;
  iVar5 = func_0010BA78(0x40);
  iVar7 = DAT_002bfe9c;
  puVar3[6] = iVar5;
  puVar3[7] = iVar5 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar6 = 4;
  puVar2 = (undefined4 *)(iVar5 + -8);
  do {
    uVar11 = *(undefined4 *)(iVar7 + 0xdc);
    iVar6 = iVar6 + -1;
    puVar2[2] = *(undefined4 *)(iVar7 + 0xd8);
    puVar2[3] = uVar11;
    uVar11 = *(undefined4 *)(iVar7 + 0xdc);
    puVar2[4] = *(undefined4 *)(iVar7 + 0xd8);
    puVar2[5] = uVar11;
    puVar2 = puVar2 + 4;
  } while (iVar6 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar10 = (uint)bVar1;
  puVar2 = (undefined4 *)func_0010BA78(uVar10 << 3);
  puVar3[8] = puVar2;
  if (uVar10 != 0) {
    puVar4 = puVar2 + -2;
    if ((bVar1 & 1) != 0) {
      uVar11 = *(undefined4 *)(iVar7 + 0x94);
      *puVar2 = *(undefined4 *)(iVar7 + 0x90);
      puVar2[1] = uVar11;
      puVar4 = puVar2;
    }
    for (iVar5 = (int)uVar10 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar11 = *(undefined4 *)(iVar7 + 0x94);
      puVar4[2] = *(undefined4 *)(iVar7 + 0x90);
      puVar4[3] = uVar11;
      uVar11 = *(undefined4 *)(iVar7 + 0x94);
      puVar4[4] = *(undefined4 *)(iVar7 + 0x90);
      puVar4[5] = uVar11;
      puVar4 = puVar4 + 4;
    }
  }
  puVar2 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar5 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0x24;
    puVar2[1] = 4;
    iVar5 = func_00100118((int)(puVar2 + 2),DAT_002bfea0,0x24,4);
  }
  if (iVar5 != 0) {
    puVar3[3] = iVar5;
    puVar3[2] = 4;
  }
  iVar5 = DAT_002bfeb0;
  local_24 = s_cState_Idle_002bfea4;
  local_28 = DAT_002bfeb0;
  func_0010BEC4((int)puVar3,0,&local_28);
  puVar2 = (undefined4 *)puVar3[6];
  uVar11 = *(undefined4 *)(iVar7 + 0x84);
  uVar8 = *(undefined4 *)(iVar7 + 0x88);
  uVar9 = *(undefined4 *)(iVar7 + 0x8c);
  uVar13 = *(undefined4 *)(iVar7 + 0x90);
  uVar12 = *(undefined4 *)(iVar7 + 0x94);
  *puVar2 = *(undefined4 *)(iVar7 + 0x80);
  puVar2[1] = uVar11;
  puVar2 = (undefined4 *)puVar3[7];
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2 = (undefined4 *)puVar3[8];
  *puVar2 = uVar13;
  puVar2[1] = uVar12;
  local_24 = s_cState_Push_002bfeb4;
  local_28 = iVar5;
  func_0010BEC4((int)puVar3,1,&local_28);
  iVar6 = puVar3[6];
  uVar9 = *(undefined4 *)(iVar7 + 0x9c);
  uVar11 = *(undefined4 *)(iVar7 + 0xa0);
  uVar8 = *(undefined4 *)(iVar7 + 0xa4);
  *(undefined4 *)(iVar6 + 8) = *(undefined4 *)(iVar7 + 0x98);
  *(undefined4 *)(iVar6 + 0xc) = uVar9;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 8) = uVar11;
  *(undefined4 *)(iVar6 + 0xc) = uVar8;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 8) = uVar13;
  *(undefined4 *)(iVar6 + 0xc) = uVar12;
  local_24 = s_cState_Pop_002bfec0;
  local_28 = iVar5;
  func_0010BEC4((int)puVar3,2,&local_28);
  iVar6 = puVar3[6];
  uVar8 = *(undefined4 *)(iVar7 + 0xac);
  uVar11 = *(undefined4 *)(iVar7 + 0xb0);
  uVar9 = *(undefined4 *)(iVar7 + 0xb4);
  *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(iVar7 + 0xa8);
  *(undefined4 *)(iVar6 + 0x14) = uVar8;
  iVar6 = puVar3[7];
  *(undefined4 *)(iVar6 + 0x10) = uVar11;
  *(undefined4 *)(iVar6 + 0x14) = uVar9;
  iVar6 = puVar3[8];
  *(undefined4 *)(iVar6 + 0x10) = uVar13;
  *(undefined4 *)(iVar6 + 0x14) = uVar12;
  local_24 = s_cState_Invalid_002bfecc;
  local_28 = iVar5;
  func_0010BEC4((int)puVar3,3,&local_28);
  uVar8 = *(undefined4 *)(iVar7 + 0xc0);
  uVar11 = *(undefined4 *)(iVar7 + 0xc4);
  iVar5 = puVar3[6];
  uVar9 = *(undefined4 *)(iVar7 + 0xbc);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar7 + 0xb8);
  *(undefined4 *)(iVar5 + 0x1c) = uVar9;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 0x18) = uVar8;
  *(undefined4 *)(iVar7 + 0x1c) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 0x18) = uVar13;
  *(undefined4 *)(iVar7 + 0x1c) = uVar12;
  func_00662C9C(puVar3,0);
  return puVar3 + -0xe;
}

