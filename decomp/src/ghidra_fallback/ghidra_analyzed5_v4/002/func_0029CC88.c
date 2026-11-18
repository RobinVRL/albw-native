#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0012C738(int param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern undefined8 func_00259354(int param_1,int *param_2,int param_3);
extern int func_00297298(int param_1,int param_2);
extern int func_003C2154(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003C2160(int param_1);
extern int func_0043BC3C(int param_1,int param_2);
extern longlong func_004C38B0(int param_1,int param_2);
extern int func_004C3F88(int param_1);
extern int func_005403CC(int param_1,int *param_2);
extern int func_00540A70(int param_1,int *param_2);
extern int func_00547430(int param_1);
extern int func_0054D224(int *param_1);
extern int func_00576158(int param_1);
extern int func_0066BD18(undefined4 *param_1,undefined1 param_2);
extern uint DAT_0029d080;
extern int DAT_0029d084;
extern int *DAT_0029d088;
extern int DAT_0029d08c;
extern int *DAT_0029d090;
extern int *DAT_0029d094;
extern int *DAT_0029d098;
extern int DAT_0029d09c;
extern int *DAT_0029d0a0;
extern uint *DAT_0029d0a4;
extern undefined4 DAT_0029d0a8;
extern undefined4 *DAT_0029d0ac;
extern int *DAT_0029d0b0;
extern undefined4 DAT_0029d0b4;

// USA 0029CC88 <- EU 0029CC64 (Ghidra, non-matching)
// GLOBAL DAT_0029d080 uint
// GLOBAL DAT_0029d084 int
// GLOBAL DAT_0029d088 int *
// GLOBAL DAT_0029d08c int
// GLOBAL DAT_0029d090 int *
// GLOBAL DAT_0029d094 int *
// GLOBAL DAT_0029d098 int *
// GLOBAL DAT_0029d09c int
// GLOBAL DAT_0029d0a0 int *
// GLOBAL DAT_0029d0a4 uint *
// GLOBAL DAT_0029d0a8 undefined4
// GLOBAL DAT_0029d0ac undefined4 *
// GLOBAL DAT_0029d0b0 int *
// GLOBAL DAT_0029d0b4 undefined4

void func_0029CC88(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r7;
  int iVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  piVar7 = DAT_0029d088;
  iVar8 = DAT_0029d084;
  uVar10 = DAT_0029d080;
  if (*(char *)(param_1 + 0xf0) != '\x04' && *(char *)(param_1 + 0xf0) != '\x05') {
    local_3c = *(undefined4 *)(DAT_0029d080 + 4);
    local_40 = DAT_0029d084;
    iVar6 = func_00540A70(*DAT_0029d088,&local_40);
    unaff_r7 = uVar10;
    if (iVar6 != 0) {
      local_34 = *(undefined4 *)(uVar10 + 4);
      local_38 = iVar8;
      iVar6 = func_005403CC(*piVar7,&local_38);
      if (DAT_0029d08c <= iVar6) {
        func_00297298(*piVar7,0x78);
        local_2c = *(undefined4 *)(uVar10 + 8);
        local_30 = iVar8;
        func_00259354(*piVar7,&local_30,0x78);
      }
    }
  }
  piVar2 = DAT_0029d098;
  piVar1 = DAT_0029d094;
  piVar7 = DAT_0029d090;
  switch(*(undefined1 *)(param_1 + 0xf0)) {
  case 0:
    func_0012C738(*DAT_0029d094);
    *(undefined1 *)(param_1 + 0xf0) = 1;
    break;
  case 1:
    iVar8 = func_00576158(*DAT_0029d094);
    if (iVar8 < 0) {
      if (*(char *)(*DAT_0029d0b0 + 0x60) != '\0') {
        return;
      }
      iVar8 = func_00547430(*piVar1);
      if ((*(int *)(param_1 + 0x13c) != iVar8) && (-1 < iVar8)) {
        *(int *)(param_1 + 0x13c) = iVar8;
        *(undefined1 *)(param_1 + 0x145) = 1;
      }
      if (*(char *)(param_1 + 0x145) == '\0') {
        return;
      }
      if (*(char *)(*(int *)(param_1 + 0x138) + 8) != '\x01') {
        return;
      }
      func_0066BD18((undefined4 *)(*(int *)(param_1 + 0x138) + 4),5);
      piVar7 = (int *)(*piVar2 + 0x9cc + *(int *)(param_1 + 0x13c) * DAT_0029d09c * 4);
      bVar4 = func_0054D224(piVar7);
      if (bVar4) {
        *(undefined2 *)(param_1 + 0xe8) = 0;
        *(undefined1 *)(param_1 + 0xea) = 1;
        *(undefined1 *)(param_1 + 0xe0) = 0;
        *(undefined4 *)(param_1 + 0xe4) = 0x11;
      }
      else {
        iVar8 = piVar7[2];
        iVar6 = piVar7[1];
        *(char *)(param_1 + 0xe0) = (char)*piVar7;
        *(int *)(param_1 + 0xe4) = iVar6;
        *(short *)(param_1 + 0xe8) = (short)iVar8;
        *(char *)(param_1 + 0xea) = (char)(iVar8 >> 0x1f) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x145) = 0;
      return;
    }
    func_004C38B0(*piVar2,iVar8);
    iVar6 = *piVar2;
    *(undefined1 *)(*(int *)(iVar6 + 0x14) + 0x1600) = 0;
    puVar9 = *(uint **)(iVar6 + 0x14);
    iVar12 = *piVar7;
    uVar10 = puVar9[1];
    uVar11 = puVar9[2];
    *(uint *)(iVar12 + 0x1138) = (uint)piVar1 & 0xffffff00 | *puVar9 & 0xff;
    *(uint *)(iVar12 + 0x113c) = uVar10;
    *(uint *)(iVar12 + 0x1140) =
         (((int)uVar11 >> 0x1f) + 1) * 0x10000 & 0xff0000U | uVar11 & 0xffff | unaff_r7 & 0xff000000
    ;
    bVar4 = func_0054D224((int *)(iVar6 + 0x9cc + iVar8 * DAT_0029d09c * 4));
    uVar3 = DAT_0029d0a8;
    puVar9 = DAT_0029d0a4;
    piVar7 = DAT_0029d0a0;
    if (bVar4) {
      *(undefined1 *)(param_1 + 0x150) = 5;
      piVar7 = (int *)func_0014A354(*piVar7,5);
      if (piVar7 != (int *)0x0) {
        if (((*puVar9 & 1) == 0) && (iVar8 = func_00100174((int *)puVar9), iVar8 != 0)) {
          *DAT_0029d0ac = uVar3;
        }
        iVar8 = (**(code **)(*piVar7 + 8))(piVar7,DAT_0029d0ac);
        if (iVar8 == 0) {
          piVar7 = (int *)0x0;
        }
        *(int **)(param_1 + 0x154) = piVar7;
        if (piVar7 != (int *)0x0) {
          func_003C2154((int)piVar7,0x28,2,0x5a);
        }
      }
      uVar5 = 2;
      goto LAB_0029d074;
    }
    *(undefined1 *)(param_1 + 0x150) = 0;
    piVar7 = (int *)func_0014A354(*piVar7,0);
    if (piVar7 != (int *)0x0) {
      if (((*puVar9 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0029d0a4), iVar8 != 0)) {
        *DAT_0029d0ac = uVar3;
      }
      iVar8 = (**(code **)(*piVar7 + 8))(piVar7,DAT_0029d0ac);
      if (iVar8 == 0) {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        func_0043BC3C((int)piVar7,**(int **)(*piVar2 + 0x14));
      }
    }
    goto LAB_0029cf08;
  case 2:
    iVar8 = func_004C3F88(*DAT_0029d098);
    if (iVar8 == 0) {
      return;
    }
    uVar5 = 3;
    goto LAB_0029d074;
  case 3:
    if (1 < *(uint *)(*DAT_0029d098 + 0x9c0)) {
      return;
    }
LAB_0029cf08:
    uVar5 = 4;
LAB_0029d074:
    *(undefined1 *)(param_1 + 0xf0) = uVar5;
    return;
  case 4:
    if (*(char *)(*(int *)(param_1 + 0x138) + 8) == '\x01') {
      local_40 = CONCAT31((*(undefined4 *)((char *)&local_40 + 1) & 0xFFFFFF),2);
      local_3c = DAT_0029d0b4;
      iVar8 = func_0014AA1C(*DAT_0029d090,(char *)&local_40,(uint)*(byte *)(param_1 + 0x150));
      if (iVar8 != 0) {
        if ((*(char *)(param_1 + 0x150) == '\x05') && (*(int *)(param_1 + 0x154) != 0)) {
          func_003C2160(*(int *)(param_1 + 0x154));
          *(undefined4 *)(param_1 + 0x154) = 0;
        }
        uVar5 = 5;
        goto LAB_0029d074;
      }
    }
  }
  return;
}

