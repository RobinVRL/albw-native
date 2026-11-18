#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115224(undefined4 *param_1,undefined4 *param_2);
extern int func_0012D58C(int param_1);
extern int func_002FE7B4(int param_1,int param_2,uint param_3);
extern int func_002FEA9C(undefined4 *param_1);
extern int func_003CBB00(undefined1 *param_1);
extern int func_003E18CC(float *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2, float fparam_3,float fparam_4,float fparam_5);
extern undefined8 func_00400A64(int param_1,undefined4 *param_2);
extern int func_004388EC(undefined4 *param_1);
extern int func_0044578C(undefined4 *param_1);
extern int func_00492604(float *param_1,float *param_2,float *param_3);
extern int func_004B9958(int param_1,undefined4 param_2);
extern int func_00503CA4(int param_1,uint param_2,int param_3);
extern int func_00561C34(char *param_1,undefined4 *param_2,int param_3);
extern int func_00563170(char *param_1,undefined4 *param_2);
extern int func_00563A5C(uint *param_1,uint *param_2);
extern int func_0058FAAC(undefined4 param_1,undefined4 param_2);
extern int *DAT_0012d55c;
extern undefined4 DAT_0012d560;
extern uint *DAT_0012d564;
extern undefined4 DAT_0012d568;
extern undefined4 *DAT_0012d56c;
extern int *DAT_0012d570;
extern undefined4 *DAT_0012d574;
extern float DAT_0012d578;
extern float DAT_0012d57c;
extern float DAT_0012d580;
extern float DAT_0012d584;
extern int DAT_0012d588;

// USA 0012D18C <- EU 0012D18C (Ghidra, non-matching)
// GLOBAL DAT_0012d55c int *
// GLOBAL DAT_0012d560 undefined4
// GLOBAL DAT_0012d564 uint *
// GLOBAL DAT_0012d568 undefined4
// GLOBAL DAT_0012d56c undefined4 *
// GLOBAL DAT_0012d570 int *
// GLOBAL DAT_0012d574 undefined4 *
// GLOBAL DAT_0012d578 float
// GLOBAL DAT_0012d57c float
// GLOBAL DAT_0012d580 float
// GLOBAL DAT_0012d584 float
// GLOBAL DAT_0012d588 int

void func_0012D18C(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  _Alignas(8) unsigned char albw_frame[0x4b0];
  #define local_4b0 ((char *)(albw_frame + 0x0))
  #define local_4a0 (*(undefined1 *)(albw_frame + 0x10))
  #define local_480 (*(undefined1 *)(albw_frame + 0x30))
  #define local_478 (*(undefined1 *)(albw_frame + 0x38))
  #define local_45c (*(undefined1 *)(albw_frame + 0x54))
  #define local_45b (*(undefined1 *)(albw_frame + 0x55))
  #define local_45a (*(undefined1 *)(albw_frame + 0x56))
  #define local_454 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_44c (*(undefined4 *)(albw_frame + 0x64))
  #define auStack_430 ((uint *)(albw_frame + 0x80))
  *(undefined4 *)(param_1 + 0xe10) = 0;
  puVar1 = (undefined4 *)func_0010BAB4(0x48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_002FEA9C(puVar1);
  }
  *(undefined4 **)(param_1 + 0x1824) = puVar2;
  func_002FE7B4((int)puVar2,0x4000,4);
  puVar1 = (undefined4 *)func_0010BAB4(0x48);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = func_002FEA9C(puVar1);
  }
  *(undefined4 **)(param_1 + 0x1828) = puVar2;
  func_002FE7B4((int)puVar2,0x18000,4);
  piVar5 = DAT_0012d55c;
  func_00400A64(param_1 + 0x20,(undefined4 *)(*DAT_0012d55c + 0xf0));
  func_00400A64(param_1 + 0x77c,(undefined4 *)(*piVar5 + 0xf0));
  *(int *)(param_1 + 0x760) = *piVar5 + 0xf0;
  *(int *)(param_1 + 0x774) = param_1 + 0x20;
  uVar18 = DAT_0012d560;
  *(byte *)(param_1 + 0x778) = *(byte *)(param_1 + 0x778) & 0xfd;
  if (((*DAT_0012d564 & 1) == 0) &&
     (iVar3 = func_00100174((int *)DAT_0012d564), puVar2 = DAT_0012d56c, uVar7 = DAT_0012d568,
     iVar3 != 0)) {
    *DAT_0012d56c = DAT_0012d568;
    puVar2[1] = uVar18;
    puVar2[2] = uVar18;
    puVar2[3] = uVar18;
    puVar2[4] = uVar18;
    puVar2[5] = uVar7;
    puVar2[6] = uVar18;
    puVar2[7] = uVar18;
    puVar2[8] = uVar18;
    puVar2[9] = uVar18;
    puVar2[10] = uVar7;
    puVar2[0xb] = uVar18;
  }
  puVar2 = DAT_0012d56c;
  uVar7 = DAT_0012d56c[1];
  uVar8 = DAT_0012d56c[2];
  uVar11 = DAT_0012d56c[3];
  uVar12 = DAT_0012d56c[4];
  uVar13 = DAT_0012d56c[5];
  uVar14 = DAT_0012d56c[6];
  uVar15 = DAT_0012d56c[7];
  *(undefined4 *)(param_1 + 0x6f8) = *DAT_0012d56c;
  *(undefined4 *)(param_1 + 0x6fc) = uVar7;
  *(undefined4 *)(param_1 + 0x700) = uVar8;
  *(undefined4 *)(param_1 + 0x704) = uVar11;
  *(undefined4 *)(param_1 + 0x708) = uVar12;
  *(undefined4 *)(param_1 + 0x70c) = uVar13;
  *(undefined4 *)(param_1 + 0x710) = uVar14;
  *(undefined4 *)(param_1 + 0x714) = uVar15;
  uVar7 = puVar2[8];
  uVar8 = puVar2[9];
  uVar11 = puVar2[10];
  *(undefined4 *)(param_1 + 0x724) = puVar2[0xb];
  *(undefined4 *)(param_1 + 0x718) = uVar7;
  *(undefined4 *)(param_1 + 0x71c) = uVar8;
  *(undefined4 *)(param_1 + 0x720) = uVar11;
  func_003CBB00(local_4b0);
  local_4a0 = 0;
  local_454 = 0;
  local_480 = 0;
  local_4b0[0] = '\x01';
  local_478 = 0;
  uVar9 = 0;
  local_44c = uVar18;
  do {
    if (uVar9 == 0) {
      local_45c = 1;
      local_45a = 4;
LAB_0012d338:
      iVar3 = *(int *)(*DAT_0012d570 + 0x1b0);
    }
    else {
      local_45c = 0;
      if (uVar9 != 2) goto LAB_0012d338;
      iVar3 = *(int *)(*DAT_0012d570 + 0x1b4);
    }
    local_45b = 1;
    puVar4 = func_00563A5C((uint *)(iVar3 + 0x20),auStack_430);
    puVar2 = func_00563170((char *)(iVar3 + 0x30),puVar4);
    puVar2 = (undefined4 *)func_00561C34(local_4b0,puVar2,1);
    if ((((uint)puVar2 & 0xc) != 0) &&
       (uVar16 = 4 - ((((uint)puVar2 & 0xfffffffc) << 0x1c) >> 0x1e), 0 < (int)uVar16)) {
      puVar1 = puVar2 + -1;
      if ((uVar16 & 1) != 0) {
        *puVar2 = 0;
        puVar1 = puVar2;
      }
      for (iVar3 = (int)uVar16 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1[1] = 0;
        puVar1 = puVar1 + 2;
        *puVar1 = 0;
      }
      puVar2 = puVar2 + uVar16;
    }
    iVar3 = (int)puVar2 - (int)auStack_430 >> 2;
    uVar16 = iVar3 << 2;
    puVar4 = (uint *)func_0058FAAC(uVar16,0x10);
    func_0010E3C4(puVar4,auStack_430,uVar16);
    puVar2 = (undefined4 *)(param_1 + 0x182c);
    if (uVar9 < 3) {
      puVar2 = (undefined4 *)(param_1 + 0x182c) + uVar9 * 2;
    }
    uVar9 = uVar9 + 1;
    puVar2[1] = iVar3;
    *puVar2 = puVar4;
    puVar2 = DAT_0012d574;
    if (2 < (int)uVar9) {
      iVar3 = 0;
      do {
        iVar10 = 0;
        do {
          func_00115224((undefined4 *)(param_1 + 0x169c + iVar3 * 0x80 + iVar10 * 0x40),puVar2);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 2);
        iVar3 = iVar3 + 1;
      } while (iVar3 < 3);
      func_0012D58C(param_1);
      fVar17 = DAT_0012d57c / *(float *)(param_1 + 0x181c);
      func_003E18CC((float *)(param_1 + 0x151c),1,-(DAT_0012d580 * fVar17),DAT_0012d580 * fVar17,
                    -(DAT_0012d584 * fVar17),DAT_0012d584 * fVar17,DAT_0012d57c,
                    *(float *)(param_1 + 0x181c) * DAT_0012d578);
      func_00492604((float *)(param_1 + 0x179c),(float *)(param_1 + 0x151c),
                    (float *)(param_1 + 0x143c));
      puVar2 = (undefined4 *)func_0010BAB4(0x74);
      piVar5 = (int *)0x0;
      if (puVar2 != (undefined4 *)0x0) {
        piVar5 = func_004388EC(puVar2);
      }
      *(int **)(DAT_0012d588 + param_1) = piVar5;
      func_004B9958((int)piVar5,0x10);
      piVar5 = (int *)(param_1 + 0x1848);
      iVar3 = *piVar5;
      if (iVar3 == 0) {
        func_00503CA4(*DAT_0012d55c,0,0);
        puVar2 = (undefined4 *)func_0010BAB4(0x80);
        piVar6 = (int *)0x0;
        if (puVar2 != (undefined4 *)0x0) {
          piVar6 = func_0044578C(puVar2);
        }
        *piVar5 = (int)piVar6;
        func_004B9958((int)piVar6,8);
        iVar3 = *piVar5;
        if (iVar3 == 0) {
          return;
        }
      }
      *(undefined1 *)(iVar3 + 0xe) = 1;
      return;
    }
  } while( true );
}

