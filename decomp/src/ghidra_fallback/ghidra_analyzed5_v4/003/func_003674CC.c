#include "ghidra_types.h"

extern int func_0036772C(int param_1);
extern int func_003677EC(int param_1);
extern int func_003678E0(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00547514(int param_1);
extern int func_00547B48(int param_1,int param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_00367700;
extern int DAT_00367704;

// USA 003674CC <- EU 003674A8 (Ghidra, non-matching)
// GLOBAL DAT_00367700 int *
// GLOBAL DAT_00367704 int

undefined4 func_003674CC(int param_1)

{
  short sVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  func_003678E0(param_1);
  if (*(char *)(param_1 + 0x93d) != '\0') {
    if (*(short *)(param_1 + 0x93a) < 1) {
      if (*(ushort *)(param_1 + 0x938) < 3) {
        func_00588C14(param_1,0,1);
      }
      else if (*(ushort *)(param_1 + 0x938) == 3) {
        func_00588C14(param_1,0,0);
      }
      if (*(short *)(param_1 + 0x2e) == 0) {
        func_00547514(param_1 + 4);
        *(undefined1 *)(param_1 + 0x2d7) = 1;
        *(undefined1 *)(param_1 + 0x93e) = 1;
      }
    }
    else {
      *(short *)(param_1 + 0x93a) = *(short *)(param_1 + 0x93a) + -1;
    }
  }
  piVar2 = DAT_00367700;
  if (*(char *)(param_1 + 0x93e) == '\0') {
    sVar1 = *(short *)(param_1 + 0x938);
    if (sVar1 == 0) {
      return func_003677EC(param_1);
    }
    if (sVar1 == 1) {
      return func_0036772C(param_1);
    }
    if (sVar1 == 2) {
      iVar6 = 0;
      for (iVar4 = *(int *)(param_1 + 0x324); (uint *)(iVar4 + -8) != (uint *)(param_1 + 0x318);
          iVar4 = *(int *)(iVar4 + 4)) {
        iVar5 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(iVar4 + -8));
        if ((iVar5 != 0) && (bVar3 = func_00547B48(iVar5 + 4,0), bVar3)) {
          iVar6 = iVar6 + 1;
        }
      }
      bVar3 = func_00588BF0(param_1,0);
      if (bVar3) {
        if (iVar6 < (int)(uint)*(byte *)(param_1 + 0x93f)) {
          if (*(short *)(param_1 + 0x2e) == 1) {
            func_00588C14(param_1,0,0);
          }
LAB_00367694:
          *(undefined1 *)(param_1 + 0x93d) = 0;
          return 0;
        }
      }
      else if ((int)(uint)*(byte *)(param_1 + 0x93f) <= iVar6) {
LAB_003676a4:
        iVar6 = DAT_00367704;
        *(undefined1 *)(param_1 + 0x93d) = 1;
        *(undefined2 *)(iVar6 + param_1) = *(undefined2 *)(param_1 + 0x32);
        return 0;
      }
    }
    else if (sVar1 == 3) {
      iVar6 = 0;
      for (iVar4 = *(int *)(param_1 + 0x324); (uint *)(iVar4 + -8) != (uint *)(param_1 + 0x318);
          iVar4 = *(int *)(iVar4 + 4)) {
        iVar5 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(iVar4 + -8));
        if ((iVar5 != 0) && (bVar3 = func_00547B48(iVar5 + 4,0), bVar3)) {
          iVar6 = iVar6 + 1;
        }
      }
      bVar3 = func_00588BF0(param_1,0);
      if (bVar3) {
        if ((int)(uint)*(byte *)(param_1 + 0x93f) <= iVar6) goto LAB_003676a4;
      }
      else if (iVar6 < (int)(uint)*(byte *)(param_1 + 0x93f)) {
        if (*(short *)(param_1 + 0x2e) == 1) {
          func_00588C14(param_1,0,1);
        }
        goto LAB_00367694;
      }
    }
  }
  return 0;
}

