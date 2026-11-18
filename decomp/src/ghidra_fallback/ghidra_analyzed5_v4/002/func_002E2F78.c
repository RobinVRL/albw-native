#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010DB90(void);
extern int func_002E32DC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003F8500(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5);
extern int func_003F8600(undefined4 *param_1,int *param_2);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern undefined4 DAT_002e329c;
extern undefined4 *DAT_002e32a0;
extern int DAT_002e32a4;
extern undefined4 DAT_002e32a8;
extern undefined4 DAT_002e32ac;
extern undefined *DAT_002e32b0;
extern int DAT_002e32b4;
extern char s_cf_002e328c[];
extern char s_nw__eft__System_002e328c[];

// USA 002E2F78 <- EU 002E2F54 (Ghidra, non-matching)
// GLOBAL DAT_002e329c undefined4
// GLOBAL DAT_002e32a0 undefined4 *
// GLOBAL DAT_002e32a4 int
// GLOBAL DAT_002e32a8 undefined4
// GLOBAL DAT_002e32ac undefined4
// GLOBAL DAT_002e32b0 undefined *
// GLOBAL DAT_002e32b4 int
// GLOBAL s_cf_002e328c string

undefined4 func_002E2F78(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_4c (*(int *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x20))
  #define local_2f (*(undefined1 *)(albw_frame + 0x21))
  #define local_2e (*(undefined1 *)(albw_frame + 0x22))
  #define local_2c (*(undefined4 *)(albw_frame + 0x24))
  #define local_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(char * *)(albw_frame + 0x2c))
  local_28 = DAT_002e329c;
  local_24 = s_nw__eft__System_002e328c;
  piVar4 = func_0010B954(0xa0000,(int)&local_28,param_2,1,0);
  puVar10 = DAT_002e32a0;
  piVar5 = (int *)func_0010DB90();
  (**(code **)(*piVar5 + 0x38))(piVar5);
  local_4c = DAT_002e32a4;
  local_30 = 0;
  local_2f = 0;
  local_2e = 1;
  local_2c = 0;
  local_48 = param_1 + 0x1c;
  *(int **)(param_1 + 0x20) = piVar4;
  uVar6 = 0x1f;
  uVar11 = 0x80000000;
  do {
    if ((uVar11 & 0x80) != 0) break;
    uVar11 = uVar11 >> 1;
    uVar6 = uVar6 - 1;
  } while (uVar11 != 0);
  if (1 << (uVar6 & 0xff) == 0x80) {
    local_44 = 0x80;
  }
  else {
    local_44 = 1 << (uVar6 + 1 & 0xff);
  }
  uVar6 = 0x1f;
  uVar11 = 0x80000000;
  do {
    if ((uVar11 & 0x100) != 0) break;
    uVar11 = uVar11 >> 1;
    uVar6 = uVar6 - 1;
  } while (uVar11 != 0);
  if (1 << (uVar6 & 0xff) == 0x100) {
    local_40 = 0x100;
  }
  else {
    local_40 = 1 << (uVar6 + 1 & 0xff);
  }
  uVar6 = 0x1f;
  uVar11 = 0x80000000;
  do {
    if ((uVar11 & 0x80) != 0) break;
    uVar11 = uVar11 >> 1;
    uVar6 = uVar6 - 1;
  } while (uVar11 != 0);
  if (1 << (uVar6 & 0xff) == 0x80) {
    local_3c = 0x80;
  }
  else {
    local_3c = 1 << (uVar6 + 1 & 0xff);
  }
  local_38 = 2;
  uVar6 = 0x1f;
  uVar11 = 0x80000000;
  do {
    if ((uVar11 & 6) != 0) break;
    uVar11 = uVar11 >> 1;
    uVar6 = uVar6 - 1;
  } while (uVar11 != 0);
  if (1 << (uVar6 & 0xff) == 6) {
    local_34 = 6;
  }
  else {
    local_34 = 1 << (uVar6 + 1 & 0xff);
  }
  puVar7 = (undefined4 *)func_0010CF28(DAT_002e32a8,piVar4,4);
  puVar8 = (undefined4 *)0x0;
  if (puVar7 != (undefined4 *)0x0) {
    puVar8 = func_003F8600(puVar7,&local_4c);
  }
  uVar9 = DAT_002e32ac;
  *(undefined4 **)(param_1 + 0x10) = puVar8;
  func_003F8500((int)puVar8,uVar9,0,0,uVar9);
  if (param_2 == (int *)0x0) {
    iVar13 = 1;
  }
  else {
    iVar13 = func_0010983C(*puVar10,param_2);
  }
  iVar12 = 0;
  do {
    uVar9 = func_0058FAAC(0x80000,0x10);
    iVar1 = iVar12 * 4;
    iVar12 = iVar12 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x94) = uVar9;
  } while (iVar12 < 2);
  uVar11 = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  do {
    iVar12 = param_1 + 0x34;
    if (uVar11 < 0xc) {
      iVar12 = iVar12 + uVar11 * 8;
    }
    uVar11 = uVar11 + 1;
    *(undefined1 *)(iVar12 + 4) = 1;
  } while ((int)uVar11 < 0xc);
  if (iVar13 != 1) {
    func_0010983C(*puVar10,iVar13);
  }
  puVar10 = (undefined4 *)func_0010CEE0(0x18,(int *)0x0,4);
  puVar3 = DAT_002e32b0;
  if (puVar10 != (undefined4 *)0x0) {
    puVar10[1] = 2;
    *puVar10 = 8;
    iVar13 = func_00100118((int)(puVar10 + 2),puVar3,8,2);
    if (iVar13 != 0) {
      *(int *)(param_1 + 0x30) = iVar13;
      *(undefined4 *)(param_1 + 0x2c) = 2;
    }
  }
  uVar11 = 0;
  do {
    puVar10 = (undefined4 *)(param_1 + 0xa4);
    if (uVar11 < 4) {
      puVar10 = (undefined4 *)(param_1 + 0xa4 + uVar11 * 0x14);
    }
    if (uVar11 == 0) {
      iVar13 = 0x90;
    }
    else {
      iVar13 = 0x20;
    }
    iVar12 = func_0010CEE0(iVar13 << 3,(int *)0x0,4);
    if ((iVar13 != 0) && (iVar12 != 0)) {
      puVar10[2] = iVar12;
      puVar10[1] = iVar13;
      *puVar10 = 0;
    }
    iVar13 = DAT_002e32b4;
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 4);
  uVar11 = 0;
  do {
    piVar4 = (int *)(param_1 + 0x34);
    uVar6 = *(uint *)(iVar13 + uVar11 * 4);
    if (uVar11 < 0xc) {
      piVar4 = piVar4 + uVar11 * 2;
    }
    iVar12 = param_1 + 0xa4;
    uVar2 = uVar6;
    if (uVar6 < 4) {
      uVar2 = uVar6 * 5;
      iVar12 = iVar12 + uVar6 * 0x14;
    }
    uVar11 = uVar11 + 1;
    *piVar4 = iVar12;
  } while ((int)uVar11 < 0xc);
  return func_002E32DC(param_1,iVar12,piVar4,uVar2);
}

