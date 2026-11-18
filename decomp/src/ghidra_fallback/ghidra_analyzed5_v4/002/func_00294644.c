#include "ghidra_types.h"

extern int func_00109DE4(int param_1);
extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_00257EA0(int param_1);
extern int func_00258244(int param_1,int *param_2);
extern int func_0025828C(int param_1);
extern int func_0057D86C(int *param_1);
extern int *DAT_00294b48;

// USA 00294644 <- EU 0029466C (Ghidra, non-matching)
// GLOBAL DAT_00294b48 int *

void func_00294644(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float in_s0;
  
  piVar8 = (int *)(param_1 + 0x54);
  cVar1 = *(char *)(*DAT_00294b48 + 0x79);
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar9 = *(int *)(param_1 + 0x50);
    iVar7 = *(int *)(param_1 + 0x48) - iVar9;
    iVar6 = *(int *)(param_1 + 0x50);
    iVar2 = *(int *)(iVar7 + iVar9 + 4);
    while (iVar7 != (param_1 + 0x44) - iVar6) {
      bVar4 = func_0057D86C((int *)(iVar7 + 0xc));
      if (!bVar4) {
        func_00109DE4(iVar7);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x50) + iVar7),in_s0);
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        func_0010F1DC(piVar8,(int *)(*(int *)(param_1 + 0x60) + iVar7));
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      iVar7 = iVar2 - iVar9;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    bVar3 = false;
    iVar6 = *(int *)(param_1 + 0x30);
    bVar4 = true;
    iVar7 = *(int *)(param_1 + 0x28) - iVar6;
    iVar2 = *(int *)(iVar7 + iVar6 + 4);
    while (iVar7 != (param_1 + 0x24) - iVar6) {
      iVar9 = 0;
      if ((*(char *)(param_1 + 0x1a4) != '\0') && (cVar1 == '\0')) {
        iVar9 = func_0025828C(iVar7);
      }
      if (bVar4) {
        if (iVar9 == 0) {
          if (*(int *)(iVar7 + 0x40) == -1) {
            if ((*(int **)(iVar7 + 0xc) == (int *)0x0) ||
               (iVar9 = (**(code **)(**(int **)(iVar7 + 0xc) + 0x14))(*(int **)(iVar7 + 0xc)), iVar9 == 0)) {
              bVar4 = func_0057D86C((int *)(iVar7 + 0xc));
              if (!bVar4) {
                func_00109DE4(iVar7);
                func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar7),in_s0);
                *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
                func_0010F1DC(piVar8,(int *)(*(int *)(param_1 + 0x60) + iVar7));
                bVar3 = true;
                *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
              }
            }
            else {
              func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar7),in_s0);
              *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
              func_0010F1DC((int *)(param_1 + 0x34),(int *)(*(int *)(param_1 + 0x40) + iVar7));
              bVar3 = true;
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
            }
          }
          else if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x4c) == 0)) {
            func_00258244(iVar7,(int *)(param_1 + 100));
          }
        }
        else {
          func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar7),in_s0);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + iVar7));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        bVar4 = false;
      }
      else {
        if (iVar9 == 0) {
          if (bVar3) {
            func_00258244(iVar7,(int *)(param_1 + 100));
          }
        }
        else {
          func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + iVar7),in_s0);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
          func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + iVar7));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
        bVar3 = false;
      }
      iVar7 = iVar2 - iVar6;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar6 = *(int *)(param_1 + 0x40);
    iVar7 = *(int *)(param_1 + 0x38) - iVar6;
    iVar9 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(iVar7 + iVar6 + 4);
    while (iVar7 != (param_1 + 0x34) - iVar9) {
      bVar4 = func_0057D86C((int *)(iVar7 + 0xc));
      if (bVar4) {
        if (((*(char *)(param_1 + 0x1a4) != '\0') && (cVar1 == '\0')) &&
           (iVar5 = func_0025828C(iVar7), iVar5 != 0)) {
          func_0010F1F8((int *)(*(int *)(param_1 + 0x40) + iVar7),in_s0);
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
          func_0010F1DC((int *)(param_1 + 0x14),(int *)(*(int *)(param_1 + 0x20) + iVar7));
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
        }
      }
      else {
        func_00109DE4(iVar7);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x40) + iVar7),in_s0);
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
        func_0010F1DC(piVar8,(int *)(*(int *)(param_1 + 0x60) + iVar7));
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      iVar7 = iVar2 - iVar6;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar6 = *(int *)(param_1 + 0x20);
    iVar7 = *(int *)(param_1 + 0x18) - iVar6;
    iVar2 = *(int *)(iVar7 + iVar6 + 4);
    while (iVar7 != (param_1 + 0x14) - iVar6) {
      bVar4 = func_0057D86C((int *)(iVar7 + 0xc));
      if (bVar4) {
        func_00257EA0(iVar7);
      }
      else {
        func_00109DE4(iVar7);
        func_0010F1F8((int *)(*(int *)(param_1 + 0x20) + iVar7),in_s0);
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
        func_0010F1DC(piVar8,(int *)(*(int *)(param_1 + 0x60) + iVar7));
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      iVar7 = iVar2 - iVar6;
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}

