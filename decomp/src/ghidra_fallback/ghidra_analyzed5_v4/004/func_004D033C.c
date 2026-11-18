#include "ghidra_types.h"

extern int func_0012F880(int param_1,undefined4 param_2,int param_3);
extern int func_001710CC(int *param_1,int param_2);
extern int func_0026EEE0(char *param_1,int param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_003FA428(int param_1,float *param_2,float *param_3);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_00522E00(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004d07d0;
extern int *DAT_004d07d4;
extern int *DAT_004d07d8;

// USA 004D033C <- EU 004D0314 (Ghidra, non-matching)
// GLOBAL DAT_004d07d0 int *
// GLOBAL DAT_004d07d4 int *
// GLOBAL DAT_004d07d8 int *

undefined4 func_004D033C(int param_1,float *param_2,float *param_3,int param_4,float fparam_0,
                  float fparam_1,float fparam_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    if ((*(uint *)(param_1 + 0x164) & 0x800000) != 0) {
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) & 0xff7fffff;
      if (((*(int *)(param_1 + 0x15c) < 0) && (*(int *)(param_1 + 0x54) != 0)) &&
         (*DAT_004d07d0 != 0)) {
        piVar2 = (int *)func_0052FBA0(*DAT_004d07d0 + 0x3dbbc,
                                      *(uint *)(*(int *)(param_1 + 0x54) + 4));
        if (piVar2 == (int *)0x0) {
          uVar3 = func_00522E00(*DAT_004d07d4);
          func_004CE804(param_1,uVar3 & 0xffff,0,0,fparam_0);
        }
        else {
          uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,param_1);
          func_004CE804(param_1,uVar3 & 0xffff,0,0,fparam_0);
        }
      }
      if ((*(uint *)(param_1 + 0x164) & 0x8000000) == 0) {
        func_004CEAF0(param_1);
      }
    }
    piVar2 = DAT_004d07d8;
    if ((*(char *)(param_1 + 0x169) == '\0') && (*(char *)(param_1 + 0x168) != '\0')) {
      iVar9 = 1;
    }
    else {
      iVar9 = 0;
    }
    uVar3 = 0;
    if (0 < *(int *)(param_1 + 0x5c)) {
      do {
        if (uVar3 < *(uint *)(param_1 + 0x5c)) {
          piVar4 = *(int **)(*(int *)(param_1 + 100) + uVar3 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        func_001710CC(piVar4,iVar9);
        if (uVar3 < *(uint *)(param_1 + 0x5c)) {
          piVar4 = *(int **)(*(int *)(param_1 + 100) + uVar3 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        iVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,0);
        if (iVar5 == 0) {
          if (uVar3 < *(uint *)(param_1 + 0x5c)) {
            iVar5 = *(int *)(*(int *)(param_1 + 100) + uVar3 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (*(char *)(iVar5 + 0x9d) != '\0') goto LAB_004d0478;
        }
        else {
LAB_004d0478:
          if ((int)uVar3 < 0) {
            iVar5 = *piVar2;
            uVar8 = 0;
            if (0 < *(int *)(param_1 + 0x5c)) {
              do {
                if (uVar8 < *(uint *)(param_1 + 0x5c)) {
                  uVar6 = *(undefined4 *)(*(int *)(param_1 + 100) + uVar8 * 4);
                }
                else {
                  uVar6 = 0;
                }
                func_0012F880(iVar5,uVar6,0);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < *(int *)(param_1 + 0x5c));
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x5c);
            uVar8 = uVar7;
            if (uVar3 < uVar7) {
              uVar8 = *(uint *)(param_1 + 100);
            }
            if (uVar3 < uVar7) {
              uVar6 = *(undefined4 *)(uVar8 + uVar3 * 4);
            }
            else {
              uVar6 = 0;
            }
            func_0012F880(*piVar2,uVar6,0);
          }
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(param_1 + 0x5c));
    }
    uVar3 = *(uint *)(param_1 + 0x68);
    uVar8 = 0;
    if (0 < (int)uVar3) {
      do {
        if (uVar8 < uVar3) {
          piVar4 = *(int **)(*(int *)(param_1 + 0x70) + uVar8 * 4);
        }
        else {
          piVar4 = (int *)0x0;
        }
        iVar5 = (**(code **)(*piVar4 + 0x10))(piVar4,0);
        if (iVar5 == 0) {
          if (uVar8 < *(uint *)(param_1 + 0x68)) {
            iVar5 = *(int *)(*(int *)(param_1 + 0x70) + uVar8 * 4);
          }
          else {
            iVar5 = 0;
          }
          if (*(char *)(iVar5 + 0x9d) != '\0') goto LAB_004d0558;
        }
        else {
LAB_004d0558:
          if ((int)uVar8 < 0) {
            iVar5 = *piVar2;
            uVar3 = 0;
            if (0 < *(int *)(param_1 + 0x68)) {
              do {
                if (uVar3 < *(uint *)(param_1 + 0x68)) {
                  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x70) + uVar3 * 4);
                }
                else {
                  uVar6 = 0;
                }
                func_0012F880(iVar5,uVar6,0);
                uVar3 = uVar3 + 1;
              } while ((int)uVar3 < *(int *)(param_1 + 0x68));
            }
          }
          else {
            uVar7 = *(uint *)(param_1 + 0x68);
            uVar3 = uVar7;
            if (uVar8 < uVar7) {
              uVar3 = *(uint *)(param_1 + 0x70);
            }
            if (uVar8 < uVar7) {
              uVar6 = *(undefined4 *)(uVar3 + uVar8 * 4);
            }
            else {
              uVar6 = 0;
            }
            func_0012F880(*piVar2,uVar6,0);
          }
        }
        uVar3 = *(uint *)(param_1 + 0x68);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar3);
    }
    uVar3 = *(uint *)(param_1 + 0x164);
    if ((uVar3 & 0x80000) == 0 || (uVar3 & 0x10000) == 0) {
      if ((*(byte *)(*piVar2 + 0x2c1f) & 8) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x150) + 1) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x150) + 0x15) = 0;
      }
      if ((iVar9 != 0) || (iVar9 = 0, (*(uint *)(param_1 + 0x164) & 0x4000) != 0)) {
        iVar9 = 1;
      }
      func_0026EEE0(*(char **)(param_1 + 0x150),iVar9,fparam_0,fparam_1,fparam_2);
      if (((*(uint *)(param_1 + 0x164) & 0x4000) != 0) &&
         (uVar3 = 0, *(int *)(*(int *)(param_1 + 0x20) + 4) != 0)) {
        do {
          if ((*(uint *)(param_1 + 0x164) & 0x80000) == 0) {
            iVar9 = **(int **)(param_1 + 0x20) + uVar3 * 0x154;
            *(uint *)(iVar9 + 0x24) =
                 *(uint *)(*(int *)(param_1 + 0x150) + 0x10) & 0xffffff |
                 *(uint *)(iVar9 + 0x24) & 0xff000000;
          }
          if ((*(uint *)(param_1 + 0x164) & 0x10000) == 0) {
            iVar9 = **(int **)(param_1 + 0x20) + uVar3 * 0x154;
            *(uint *)(iVar9 + 0x28) =
                 *(uint *)(*(int *)(param_1 + 0x150) + 0x24) & 0xffffff |
                 *(uint *)(iVar9 + 0x28) & 0xff000000;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x20) + 4));
      }
      uVar8 = *(uint *)(param_1 + 0x164);
      uVar3 = uVar8 & 0xffffbfff;
      *(uint *)(param_1 + 0x164) = uVar3;
      if ((*(char *)(*(int *)(param_1 + 0x150) + 2) == '\0') ||
         (*(char *)(*(int *)(param_1 + 0x150) + 0x16) == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = uVar8 & 0xfffbbfff;
      }
      else {
        uVar3 = uVar3 | 0x40000;
      }
      *(uint *)(param_1 + 0x164) = uVar3;
    }
    else {
      uVar3 = uVar3 & 0xfffbffff;
      *(uint *)(param_1 + 0x164) = uVar3;
    }
    if (((uVar3 & 0x8000000) == 0) && (param_4 != 0)) {
      func_004CEAF0(param_1);
    }
    uVar3 = *(uint *)(param_1 + 0x164);
    *(uint *)(param_1 + 0x164) = uVar3 & 0xf7ffffff;
    if ((((uVar3 & 0x10000000) != 0) && (*(char *)(param_1 + 0x168) != '\0')) &&
       ((**(byte **)(param_1 + 0x24) & 1) != 0)) {
      return func_003FA428((int)*(byte **)(param_1 + 0x24),param_2,param_3);
    }
  }
  return 0;
}

