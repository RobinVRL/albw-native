#include "ghidra_types.h"

extern int func_00109DE4(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00258CA8(int param_1,int param_2);
extern int func_00295E40(int param_1,uint param_2);
extern int func_00537D70(int param_1);
extern int func_00537E04(int param_1,int param_2);

// USA 00296D70 <- EU 00296D98 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int

undefined4 func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float in_s0;
  undefined4 local_48;
  
  bVar10 = param_3 == -1;
  local_48 = 0;
  bVar2 = false;
  uVar1 = (param_2 & 0x10000) >> 0x10;
  piVar3 = (int *)(param_1 + 0x54);
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar9 = *(int *)(param_1 + 0x20);
    iVar8 = (param_1 + 0x14) - iVar9;
    iVar5 = *(int *)(param_1 + 0x18) - iVar9;
    iVar6 = *(int *)(iVar5 + iVar9 + 4);
    if (iVar5 != iVar8) {
      do {
        if (((bVar10) || (iVar4 = func_00537E04(iVar5,param_3), iVar4 != 0)) &&
           ((uVar1 != 0 || ((*(uint *)(iVar5 + 0x38) & param_2) != 0)))) {
          bVar11 = *(char *)(iVar5 + 0x6a) != '\0';
          iVar4 = 0;
          if (bVar11) {
            iVar4 = param_5;
          }
          if (!bVar11 || iVar4 == 0) {
            if ((*(uint *)(iVar5 + 0x38) & 4) != 0) {
              bVar2 = true;
            }
            func_00258CA8(iVar5,param_4);
            func_0010F1F8((int *)(*(int *)(param_1 + 0x20) + iVar5),in_s0);
            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
            piVar7 = (int *)(param_1 + 0x44);
            if (param_4 == 0) {
              func_00109DE4(iVar5);
              piVar7 = piVar3;
            }
            func_0010F1DC(piVar7,(int *)(piVar7[3] + iVar5));
            piVar7[2] = piVar7[2] + 1;
            local_48 = 1;
          }
        }
        iVar5 = iVar6 - iVar9;
        iVar6 = *(int *)(iVar6 + 4);
      } while (iVar5 != iVar8);
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar8 = *(int *)(param_1 + 0x30);
    iVar5 = *(int *)(param_1 + 0x28) - iVar8;
    iVar6 = *(int *)(iVar5 + iVar8 + 4);
    while (iVar5 != (param_1 + 0x24) - iVar8) {
      iVar9 = func_00537D70(iVar5);
      if (((iVar9 != 0) && ((bVar10 || (iVar9 = func_00537E04(iVar5,param_3), iVar9 != 0)))) &&
         ((uVar1 != 0 || ((*(uint *)(iVar5 + 0x38) & param_2) != 0)))) {
        bVar11 = *(char *)(iVar5 + 0x6a) == '\0';
        iVar9 = 0;
        if (!bVar11) {
          iVar9 = param_5;
        }
        if (bVar11 || iVar9 == 0) {
          if ((*(uint *)(iVar5 + 0x38) & 4) != 0) {
            bVar2 = true;
          }
          func_00258CA8(iVar5,0);
          func_00109DE4(iVar5);
          func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar5),in_s0);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          func_0010F1DC(piVar3,(int *)(*(int *)(param_1 + 0x60) + iVar5));
          local_48 = 1;
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        }
      }
      iVar5 = iVar6 - iVar8;
      iVar6 = *(int *)(iVar6 + 4);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar8 = *(int *)(param_1 + 0x40);
    iVar5 = *(int *)(param_1 + 0x38) - iVar8;
    iVar6 = *(int *)(iVar5 + iVar8 + 4);
    while (iVar5 != (param_1 + 0x34) - iVar8) {
      iVar9 = func_00537D70(iVar5);
      if (((iVar9 != 0) && ((bVar10 || (iVar9 = func_00537E04(iVar5,param_3), iVar9 != 0)))) &&
         ((uVar1 != 0 || ((*(uint *)(iVar5 + 0x38) & param_2) != 0)))) {
        bVar11 = *(char *)(iVar5 + 0x6a) == '\0';
        iVar9 = 0;
        if (!bVar11) {
          iVar9 = param_5;
        }
        if (bVar11 || iVar9 == 0) {
          if ((*(uint *)(iVar5 + 0x38) & 4) != 0) {
            bVar2 = true;
          }
          func_00258CA8(iVar5,0);
          func_00109DE4(iVar5);
          func_0010F1F8((int *)(*(int *)(param_1 + 0x40) + iVar5),in_s0);
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
          func_0010F1DC(piVar3,(int *)(*(int *)(param_1 + 0x60) + iVar5));
          local_48 = 1;
          *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
        }
      }
      iVar5 = iVar6 - iVar8;
      iVar6 = *(int *)(iVar6 + 4);
    }
  }
  if ((bVar2) && ((param_2 & 4) == 0)) {
    func_00295E40(param_1,8);
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xffffff9f;
  }
  return local_48;
}

