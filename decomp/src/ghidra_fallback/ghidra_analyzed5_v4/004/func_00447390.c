#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002BF8D4(int param_1,int param_2);
extern int func_00447E28(int param_1,int param_2,int *param_3,int param_4);
extern int func_00449C40(int param_1);
extern int func_0044AEC8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00455C80(int param_1);
extern int func_0051AC40(int param_1,undefined4 *param_2);
extern int func_0051B5F0(int param_1);
extern int func_00520B48(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00447710;
extern uint *DAT_00447714;
extern undefined4 *DAT_00447718;
extern undefined4 *DAT_0044771c;
extern undefined4 *DAT_00447720;
extern undefined4 *DAT_00447724;
extern undefined4 *DAT_00447728;
extern undefined4 *DAT_0044772c;
extern undefined4 *DAT_00447730;
extern undefined4 *DAT_00447734;
extern int *DAT_00447738;
extern float DAT_0044773c;
extern float DAT_00447740;
extern undefined4 DAT_00447744;

// USA 00447390 <- EU 00447368 (Ghidra, non-matching)
// GLOBAL DAT_00447710 int *
// GLOBAL DAT_00447714 uint *
// GLOBAL DAT_00447718 undefined4 *
// GLOBAL DAT_0044771c undefined4 *
// GLOBAL DAT_00447720 undefined4 *
// GLOBAL DAT_00447724 undefined4 *
// GLOBAL DAT_00447728 undefined4 *
// GLOBAL DAT_0044772c undefined4 *
// GLOBAL DAT_00447730 undefined4 *
// GLOBAL DAT_00447734 undefined4 *
// GLOBAL DAT_00447738 int *
// GLOBAL DAT_0044773c float
// GLOBAL DAT_00447740 float
// GLOBAL DAT_00447744 undefined4

void func_00447390(int param_1)

{
  char cVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  uint uVar9;
  int in_r3;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  float fVar14;
  
  puVar2 = DAT_00447714;
  iVar11 = *DAT_00447710;
  if (iVar11 == 0) {
    return;
  }
  iVar5 = (int)*(char *)(iVar11 + 0x18);
  iVar10 = *(int *)(iVar11 + 0x1c);
  uVar6 = iVar5 - 2;
  bVar13 = 2 < uVar6;
  bVar12 = uVar6 == 3;
  uVar9 = *DAT_00447714;
  if (3 < uVar6) {
    bVar13 = iVar5 != 0x16;
    bVar12 = iVar5 == 0x17;
  }
  if (!bVar13 || bVar12) {
    if (iVar5 == 2) {
      if (iVar10 == 0) {
        func_0051AC40(uVar9,DAT_00447718);
        goto LAB_00447504;
      }
      if (iVar10 == 10) goto LAB_0044742c;
    }
    else {
      if (iVar5 == 5) {
        if (iVar10 != 4) goto LAB_00447504;
LAB_0044742c:
        func_0051AC40(uVar9,DAT_0044771c);
        goto LAB_00447504;
      }
      if (iVar5 == 4) {
        if (iVar10 == 0x11) {
          func_0051AC40(uVar9,DAT_00447720);
        }
        goto LAB_00447504;
      }
      if (iVar5 == 0x17) {
        if (iVar10 == 1) {
          func_0051AC40(uVar9,DAT_00447724);
        }
        goto LAB_00447504;
      }
      if (iVar5 == 3) {
        if (iVar10 == 3) {
          func_0051AC40(uVar9,DAT_00447728);
        }
        goto LAB_00447504;
      }
      if (iVar5 != 2) goto LAB_00447504;
    }
    if (iVar10 == 0xd) {
      func_0051AC40(uVar9,DAT_0044772c);
    }
    goto LAB_00447504;
  }
  uVar6 = uVar9;
  if (iVar5 == 0) {
    if (iVar10 == 0x25) {
      func_0051AC40(uVar9,DAT_00447730);
LAB_004474e4:
      uVar6 = uVar9;
      if (iVar10 != 0x2c) goto LAB_00447504;
      goto LAB_004474f8;
    }
    puVar7 = DAT_00447730;
    if (iVar10 != 0x21) goto LAB_004474e4;
  }
  else {
    if ((iVar5 != 1) || (iVar10 != 0x26)) goto LAB_00447504;
LAB_004474f8:
    uVar9 = *puVar2;
    puVar7 = DAT_00447734;
  }
  func_0051AC40(uVar9,puVar7);
  uVar9 = uVar6;
LAB_00447504:
  piVar3 = DAT_00447738;
  if (*(char *)(param_1 + 0x15c) == '\0') {
    iVar5 = (int)*(char *)(iVar11 + 0x18);
    uVar9 = iVar5 - 2;
    bVar13 = 2 < uVar9;
    bVar12 = uVar9 == 3;
    if (3 < uVar9) {
      uVar9 = iVar5 - 0x16;
      bVar13 = uVar9 != 0;
      bVar12 = uVar9 == 1;
    }
    if (bVar13 && !bVar12) {
      uVar9 = iVar5 - 0x18;
      bVar13 = 1 < uVar9;
      bVar12 = uVar9 == 2;
    }
    if ((!bVar13 || bVar12) || (iVar5 == 0 && *(int *)(iVar11 + 0x1c) == 0xf)) {
      iVar11 = *(int *)(param_1 + 0x20c);
      if (*(char *)(iVar11 + 0x5d) == '\0') {
        func_002BF8D4(iVar11,1);
        func_002317C0((undefined2 *)(iVar11 + 0x84),DAT_0044773c);
      }
      *(undefined1 *)(param_1 + 0x291) = 1;
      iVar11 = func_00520B48(*piVar3);
      if (iVar11 == 0) {
        func_0066CC58((undefined4 *)(param_1 + 0x158),1);
      }
      else {
        func_00231340((short *)(*(int *)(param_1 + 0x20c) + 0x84));
        func_0066CC58((undefined4 *)(param_1 + 0x158),2);
        uVar6 = 0;
        do {
          if (uVar6 < *(uint *)(param_1 + 0x1ac)) {
            uVar9 = *(uint *)(param_1 + 0x1b4);
            iVar11 = *(int *)(uVar9 + uVar6 * 4);
          }
          else {
            iVar11 = 0;
          }
          if (*(char *)(iVar11 + 0x6c) != '\0') {
            if (uVar6 < *(uint *)(param_1 + 0x1ac)) {
              iVar11 = *(int *)(*(int *)(param_1 + 0x1b4) + uVar6 * 4);
            }
            else {
              iVar11 = 0;
            }
            func_00455C80(iVar11);
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 0x14);
      }
    }
  }
  iVar11 = *(int *)(param_1 + 0x20c);
  cVar1 = '\0';
  if (iVar11 != 0) {
    cVar1 = *(char *)(iVar11 + 0x5d);
  }
  if (iVar11 != 0 && cVar1 != '\0') {
    func_0051B5F0(*puVar2);
    func_00449C40(param_1);
    uVar4 = DAT_00447744;
    fVar14 = DAT_00447740;
    uVar8 = extraout_r1;
    if (*(float *)(param_1 + 0x260) <= DAT_00447740) {
      *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
      uVar8 = *(undefined4 *)(param_1 + 0x24c);
      *(undefined4 *)(param_1 + 0x25c) = uVar8;
      *(undefined4 *)(param_1 + 0x260) = uVar4;
    }
    if (*(char *)(param_1 + 0x15c) == '\x02') {
      func_0044AEC8(param_1,uVar8,uVar9,in_r3);
    }
    if (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) != '\0') {
      *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x250);
      *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x254);
      *(float *)(param_1 + 0x250) = fVar14;
      *(float *)(param_1 + 0x254) = fVar14;
    }
    iVar11 = func_00520B48(*piVar3);
    if ((iVar11 != 0) && (*(char *)(*(int *)(param_1 + 0x210) + 0x5d) == '\0')) {
      *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x250);
      *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(param_1 + 0x254);
      *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x250);
      *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x254);
      *(float *)(param_1 + 0x260) = fVar14;
    }
  }
  *(undefined1 *)(param_1 + 0x285) = 0;
  *(undefined1 *)(param_1 + 0x284) = 0;
  func_00447E28(param_1,1,*(int **)(param_1 + 0x23c),0);
  func_00447E28(param_1,0,*(int **)(param_1 + 0x240),0);
  *(undefined1 *)(param_1 + 0x294) = 1;
  return;
}

