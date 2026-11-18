// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001634F8(int param_1);
extern int func_0018DFE4(int *param_1,undefined4 *param_2,undefined1 param_3);
extern int func_001E85D0(int param_1);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005568E8(int param_1);
extern int func_005569D4();
extern int func_00556EAC(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern int func_00659688(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0018fa84;
extern int *DAT_0018fa88;
extern int *DAT_0018fa8c;
extern int *DAT_0018fa90;
extern int *DAT_0018fa94;
extern int *DAT_0018fa98;
extern int *DAT_0018fa9c;
extern uint *DAT_0018faa0;
extern undefined4 *DAT_0018faa4;
extern undefined4 DAT_0018faa8;
extern int *DAT_0018faac;
extern int *DAT_0018fab0;
extern uint *DAT_0018fab4;
extern undefined4 *DAT_0018fab8;
extern undefined4 DAT_0018fabc;
extern int *DAT_0018fac0;
extern undefined4 DAT_0018fac4;
extern undefined4 DAT_0018fac8;
extern int *DAT_0018facc;

// USA 0018F62C <- EU 0018F62C (Ghidra, non-matching)
// GLOBAL DAT_0018fa84 int *
// GLOBAL DAT_0018fa88 int *
// GLOBAL DAT_0018fa8c int *
// GLOBAL DAT_0018fa90 int *
// GLOBAL DAT_0018fa94 int *
// GLOBAL DAT_0018fa98 int *
// GLOBAL DAT_0018fa9c int *
// GLOBAL DAT_0018faa0 uint *
// GLOBAL DAT_0018faa4 undefined4 *
// GLOBAL DAT_0018faa8 undefined4
// GLOBAL DAT_0018faac int *
// GLOBAL DAT_0018fab0 int *
// GLOBAL DAT_0018fab4 uint *
// GLOBAL DAT_0018fab8 undefined4 *
// GLOBAL DAT_0018fabc undefined4
// GLOBAL DAT_0018fac0 int *
// GLOBAL DAT_0018fac4 undefined4
// GLOBAL DAT_0018fac8 undefined4
// GLOBAL DAT_0018facc int *

/* WARNING: Variable defined which should be unmapped: objStack_50 */

undefined2 func_0018F62C(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define objStack_50 ((uint *)(albw_frame + 0x0))
  piVar4 = DAT_0018fa90;
  piVar3 = DAT_0018fa8c;
  piVar2 = DAT_0018fa88;
  piVar1 = DAT_0018fa84;
  piVar10 = param_1 + 0x127;
  if ((char)param_1[0x128] != '\0') {
    if (((*(char *)((int)param_1 + 0x4a1) != '\0') || (1 < param_1[0x127])) ||
       (iVar8 = func_0052FBA0(*DAT_0018fa84 + 0x3dbbc,*(uint *)(param_2 + 0x28)), iVar8 == 0)) {
      return 0;
    }
    iVar9 = func_00588BE4(iVar8);
    iVar8 = *piVar2;
    bVar11 = iVar9 != iVar8;
    if (bVar11) {
      iVar8 = *piVar3;
    }
    if (bVar11 && iVar9 != iVar8) {
      return 1;
    }
    objStack_50[0] = 0;
    iVar8 = func_004A8030(*DAT_0018facc,(int *)objStack_50,3);
    if (iVar8 == 0) {
      return 1;
    }
    return 0;
  }
  if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xd80U) != 0) {
    return 1;
  }
  uVar5 = func_005568E8(*DAT_0018fa90);
  if (*(uint *)(param_2 + 0x28) != uVar5) {
    puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_2 + 0x28));
    if (puVar6 != (undefined4 *)0x0) {
      iVar8 = func_00588BE4((int)puVar6);
      if (iVar8 == *DAT_0018fa94) {
        if ((*(int *)(param_2 + 0x34) != 0) &&
           ((*(ushort *)(*(int *)(param_2 + 0x34) + 0x20) & 0xff) == 1)) goto LAB_0018f6e4;
        goto LAB_0018f748;
      }
      if (iVar8 == *DAT_0018fa98) {
        return 0;
      }
      if (iVar8 == *DAT_0018fa9c) {
        if (((*DAT_0018faa0 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0018faa0), iVar8 != 0))
        {
          *DAT_0018faa4 = DAT_0018faa8;
        }
        iVar8 = (**(code **)*puVar6)(puVar6,DAT_0018faa4);
        if (iVar8 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        if ((puVar6 != (undefined4 *)0x0) && (iVar8 = func_001634F8((int)puVar6), iVar8 != 0)) {
          param_1[0x148] = puVar6[0xb3];
          func_00659688(piVar10,7);
          return 1;
        }
      }
      else if ((iVar8 == *DAT_0018faac) || (iVar8 == *DAT_0018fab0)) {
        if (((*DAT_0018fab4 & 1) == 0) && (iVar8 = func_00100174((int *)DAT_0018fab4), iVar8 != 0))
        {
          *DAT_0018fab8 = DAT_0018fabc;
        }
        iVar8 = (**(code **)*puVar6)(puVar6,DAT_0018fab8);
        if (iVar8 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        if (puVar6 != (undefined4 *)0x0) {
          param_1[0x148] = puVar6[0xb3];
        }
      }
      else {
        iVar9 = *piVar2;
        bVar11 = iVar8 != iVar9;
        if (bVar11) {
          iVar9 = *piVar3;
        }
        if ((!bVar11 || iVar8 == iVar9) && (*(short *)((int)param_1 + 0x55a) == 0)) {
          return 0;
        }
      }
    }
    uVar5 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
    func_0035227C((int)(param_1 + 0xc9),uVar5);
    uVar7 = (*(uint *)(param_2 + 0x24) & 0x1800) >> 0xb;
    if (uVar7 == 0) {
      if ((uVar5 == 3) || (uVar5 == 4)) {
        uVar7 = 1;
      }
      else {
        uVar7 = 2;
      }
    }
    if (uVar7 == 1) {
      bVar11 = func_00556EAC(*piVar4,0x4d);
      if ((bVar11) && (param_1[0x15f] == 0)) {
        func_001E85D0(*(int *)(*DAT_0018fac0 + 0x18));
      }
      func_00659688(piVar10,3);
    }
    else if (uVar7 == 2) {
      if ((uVar5 != 0) && (-1 < (int)(*(uint *)(param_2 + 0x24) << 0x19))) {
        func_0018DFE4(param_1,(undefined4 *)(param_2 + 0x10),(char)uVar5);
      }
      func_00659688(piVar10,1);
    }
    return 1;
  }
  if (*(int *)(param_2 + 0x34) != 0) {
    if ((*(ushort *)(*(int *)(param_2 + 0x34) + 0x20) & 0xff) != 1) {
      objStack_50[0] = *(uint *)(param_2 + 0x2c);
      iVar8 = func_005569D4(*piVar4,(float *)(param_1 + 0xf7),(float *)(param_2 + 0x10),
                            *(uint *)(param_2 + 0x24),objStack_50[0]);
      if (iVar8 == 0) goto LAB_0018f748;
    }
LAB_0018f6e4:
    func_00659688(piVar10,1);
    return 1;
  }
LAB_0018f748:
  func_00659688(piVar10,3);
  return 1;
}

