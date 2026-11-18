#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002C0294(undefined4 *param_1);
extern int func_00656CA4(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_0012d148;
extern undefined4 DAT_0012d14c;
extern undefined4 *DAT_0012d150;
extern undefined *DAT_0012d154;
extern int DAT_0012d168;
extern char s_cState_Decide_0012d17c[];
extern char s_cState_Select_0012d16c[];
extern char s_cState_Stanby_0012d158[];

// USA 0012CE90 <- EU 0012CE90 (Ghidra, non-matching)
// GLOBAL DAT_0012d148 undefined4
// GLOBAL DAT_0012d14c undefined4
// GLOBAL DAT_0012d150 undefined4 *
// GLOBAL DAT_0012d154 undefined *
// GLOBAL DAT_0012d168 int
// GLOBAL s_cState_Decide_0012d17c string
// GLOBAL s_cState_Select_0012d16c string
// GLOBAL s_cState_Stanby_0012d158 string

undefined4 * func_0012CE90(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  puVar2 = func_001B6E04(param_1);
  *puVar2 = DAT_0012d148;
  uVar9 = DAT_0012d14c;
  *(undefined2 *)(puVar2 + 0xe) = 0;
  *(undefined2 *)((int)puVar2 + 0x3a) = 0xffff;
  puVar2[0xf] = uVar9;
  puVar2[0x10] = 0;
  *(undefined2 *)(puVar2 + 0x11) = 0;
  *(undefined2 *)((int)puVar2 + 0x46) = 0xffff;
  puVar2[0x12] = uVar9;
  puVar2[0x13] = 0;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  *(undefined2 *)((int)puVar2 + 0x52) = 0xffff;
  puVar2[0x15] = uVar9;
  puVar2[0x16] = 0;
  *(undefined2 *)(puVar2 + 0x17) = 0;
  *(undefined2 *)((int)puVar2 + 0x5e) = 0xffff;
  puVar2[0x18] = uVar9;
  puVar2[0x19] = 0;
  puVar3 = func_0010A794(puVar2 + 0x1a);
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  *(undefined1 *)((int)puVar3 + 6) = 3;
  puVar3[5] = puVar3 + -0x1a;
  iVar4 = func_0010BA78(0x30);
  puVar3[6] = iVar4;
  puVar2 = DAT_0012d150;
  puVar3[7] = iVar4 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 3;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar9 = puVar2[0x33];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x32];
    puVar5[3] = uVar9;
    uVar9 = puVar2[0x33];
    puVar5[4] = puVar2[0x32];
    puVar5[5] = uVar9;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar8 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[8] = puVar5;
  if (uVar8 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar9;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar9 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar9;
      uVar9 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar9;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 3;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0012d154,0x24,3);
  }
  if (iVar4 != 0) {
    puVar3[3] = iVar4;
    puVar3[2] = 3;
  }
  iVar4 = DAT_0012d168;
  local_24 = s_cState_Stanby_0012d158;
  local_28 = DAT_0012d168;
  func_0010BEC4((int)puVar3,0,&local_28);
  puVar5 = (undefined4 *)puVar3[6];
  uVar13 = puVar2[4];
  uVar12 = puVar2[5];
  uVar9 = puVar2[1];
  uVar10 = puVar2[2];
  uVar11 = puVar2[3];
  *puVar5 = *puVar2;
  puVar5[1] = uVar9;
  puVar5 = (undefined4 *)puVar3[7];
  *puVar5 = uVar10;
  puVar5[1] = uVar11;
  puVar5 = (undefined4 *)puVar3[8];
  *puVar5 = uVar13;
  puVar5[1] = uVar12;
  local_24 = s_cState_Select_0012d16c;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,1,&local_28);
  iVar7 = puVar3[6];
  uVar10 = puVar2[7];
  uVar9 = puVar2[8];
  uVar11 = puVar2[9];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar10;
  iVar7 = puVar3[7];
  *(undefined4 *)(iVar7 + 8) = uVar9;
  *(undefined4 *)(iVar7 + 0xc) = uVar11;
  iVar7 = puVar3[8];
  *(undefined4 *)(iVar7 + 8) = uVar13;
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  local_24 = s_cState_Decide_0012d17c;
  local_28 = iVar4;
  func_0010BEC4((int)puVar3,2,&local_28);
  iVar4 = puVar3[6];
  uVar11 = puVar2[0xb];
  uVar9 = puVar2[0xd];
  uVar10 = puVar2[0xc];
  *(undefined4 *)(iVar4 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar4 + 0x14) = uVar11;
  iVar4 = puVar3[7];
  *(undefined4 *)(iVar4 + 0x10) = uVar10;
  *(undefined4 *)(iVar4 + 0x14) = uVar9;
  iVar4 = puVar3[8];
  *(undefined4 *)(iVar4 + 0x10) = uVar13;
  *(undefined4 *)(iVar4 + 0x14) = uVar12;
  func_00656CA4(puVar3,0);
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar2 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = func_002C0294(puVar5);
  }
  puVar3[-0x15] = puVar2;
  return puVar3 + -0x1a;
}

