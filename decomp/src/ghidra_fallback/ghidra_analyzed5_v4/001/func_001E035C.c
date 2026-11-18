#include "ghidra_types.h"

extern int func_00297948(int param_1,int param_2);
extern int func_00322274(int param_1,int param_2);
extern int func_003223B8(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_00379AEC(int param_1,int param_2);
extern int func_00379B4C(int param_1,undefined4 param_2,int param_3);
extern int func_004090E0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_004EB380(int param_1,int param_2);
extern int func_00588174(int param_1,uint param_2);
extern int func_00588194(int param_1,uint param_2);
extern int func_00588250(int param_1,undefined4 param_2);
extern int *DAT_001e05c0;
extern undefined4 DAT_001e05c4;
extern undefined4 DAT_001e05c8;

// USA 001E035C <- EU 001E035C (Ghidra, non-matching)
// GLOBAL DAT_001e05c0 int *
// GLOBAL DAT_001e05c4 undefined4
// GLOBAL DAT_001e05c8 undefined4

undefined4 func_001E035C(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  
  iVar9 = param_1 + 0x20;
  if (param_3 == -1) {
    return 0;
  }
  *(int *)(param_1 + 0xe0) = param_3;
  piVar2 = DAT_001e05c0;
  if (*(int *)(param_1 + 0xe4) == -1) {
    *(int *)(param_1 + 0xe4) = param_3;
  }
  iVar10 = param_1 + 0x20;
  *(int *)(param_1 + 0x24) = iVar10;
  iVar8 = param_3;
  uVar5 = func_00588194(*piVar2,param_3);
  uVar6 = uVar5 & 0xff;
  if (uVar6 != 0) {
    *(uint *)(param_1 + 0xe8) = uVar6;
    *(uint *)(param_1 + 0xec) = uVar6;
  }
  iVar7 = func_00588250(*piVar2,param_3);
  if (iVar7 == 0) {
    iVar7 = func_00379AEC(*piVar2,param_3);
    if (iVar7 == 0) {
      uVar6 = func_00588174(*piVar2,param_3);
      if (((uVar6 & 0x20) != 0) &&
         (iVar8 = param_1, iVar7 = func_00379B4C(*piVar2,param_3,param_1), iVar7 != 0)) {
        func_003223B8(iVar7,4,iVar8,iVar9);
      }
      if (((uVar6 & 0x80) != 0) &&
         ((iVar7 != 0 ||
          (iVar8 = param_1, iVar7 = func_00379B4C(*piVar2,param_3,param_1), iVar7 != 0)))) {
        func_003223B8(iVar7,8,iVar8,iVar9);
      }
      if (((uVar5 & 0x3f00) != 0) &&
         ((iVar7 != 0 ||
          (iVar8 = param_1, iVar7 = func_00379B4C(*piVar2,param_3,param_1), iVar7 != 0)))) {
        func_003223B8(iVar7,1,iVar8,iVar9);
        *(short *)(iVar7 + 0x2c) = (short)((uVar5 & 0x3f00) >> 8);
      }
      if ((uVar5 & 0x7e0000) == 0) {
        if (iVar7 == 0) goto LAB_001e0500;
      }
      else {
        if ((iVar7 == 0) &&
           (iVar8 = param_1, iVar7 = func_00379B4C(*piVar2,param_3,param_1), iVar7 == 0)) {
LAB_001e0500:
          func_004EB380(*piVar2,param_1);
          goto LAB_001e050c;
        }
        func_003223B8(iVar7,2,iVar8,iVar9);
        *(ushort *)(iVar7 + 0x2e) = (ushort)((uVar5 & 0x7e0000) >> 0x11);
      }
    }
    else {
      func_00322274(iVar7,param_1);
    }
    if ((*(uint *)(iVar7 + 0x18) & 0xb) != 0) goto LAB_001e0518;
  }
LAB_001e050c:
  func_00297948(*piVar2,param_1);
LAB_001e0518:
  uVar12 = DAT_001e05c4;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = uVar12;
  *(undefined4 *)(param_1 + 0x104) = uVar12;
  *(undefined1 *)(param_1 + 0x109) = 1;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  bVar11 = *(char *)(param_1 + 0x110) != '\0';
  iVar9 = 0;
  if (bVar11) {
    iVar9 = param_1 + 0x20;
  }
  if (bVar11 && iVar10 != iVar9) {
    uVar4 = func_004090E0(param_2,iVar10,param_3,0);
    *(undefined1 *)(param_1 + 0x30) = uVar4;
    *(undefined1 *)(param_1 + 0x10b) = 1;
  }
  uVar3 = DAT_001e05c8;
  *(int **)(param_1 + 0x114) = param_2;
  *(undefined4 *)(param_1 + 0x118) = uVar12;
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar3;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  *(undefined4 *)(param_1 + 0x128) = uVar3;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar12;
  bVar11 = *(char *)(param_1 + 0x10b) != '\0';
  cVar1 = '\0';
  if (bVar11) {
    cVar1 = *(char *)(param_1 + 0x30);
  }
  if (bVar11 && cVar1 != '\0') {
    return 0;
  }
  return 1;
}

