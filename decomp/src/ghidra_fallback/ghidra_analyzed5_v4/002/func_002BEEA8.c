#include "ghidra_types.h"

extern int func_001CB9B8(void);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00290468(int param_1);
extern int func_002BECAC(int param_1,int param_2);
extern int func_002BED00(int param_1);
extern int func_002BEE00(int param_1);
extern int func_002C00A8(int param_1);
extern int func_0043E11C(int param_1);
extern int func_00477024(int param_1);
extern int func_005190C8(int param_1);
extern int func_00532C78(int param_1);
extern int func_00537B38(int param_1);
extern int func_0053FB24(int param_1);
extern int func_00556898(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00579CEC(int param_1);
extern int func_0058D888(int param_1);
extern int func_00662B58(undefined4 *param_1,undefined1 param_2);
extern int func_0066C424(undefined4 *param_1,undefined1 param_2);
extern int *DAT_002bf1c0;
extern float DAT_002bf1c4;
extern int *DAT_002bf1c8;

// USA 002BEEA8 <- EU 002BEE84 (Ghidra, non-matching)
// GLOBAL DAT_002bf1c0 int *
// GLOBAL DAT_002bf1c4 float
// GLOBAL DAT_002bf1c8 int *

undefined4 func_002BEEA8(int param_1,undefined4 param_2,undefined *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  
  piVar1 = DAT_002bf1c0;
  uVar4 = (uint)*(short *)(param_1 + 0xee);
  iVar5 = *(int *)(param_1 + 0x1c);
  if ((int)uVar4 < 0) {
LAB_002beed4:
    if (*(char *)(param_1 + 0x19d) == '\0') {
      if ((*(char *)(param_1 + 0x19e) == '\0') &&
         (*(char *)(*(int *)(param_1 + 0x158) + 0x30b) < '\0')) {
        iVar6 = *DAT_002bf1c0;
        fVar8 = DAT_002bf1c4;
        iVar5 = func_0053FB24(iVar6);
        if (iVar5 == 0) {
          iVar5 = func_0055696C(iVar6,0);
          if (iVar5 == 0) {
            cVar3 = '\0';
          }
          else {
            iVar5 = func_00537B38(iVar6);
            if (iVar5 == 0) {
LAB_002befa0:
              cVar3 = '\x01';
            }
            else if (iVar5 == 1) {
              cVar3 = '\x02';
            }
            else if (iVar5 == 2) {
              cVar3 = '\x03';
            }
            else {
              if (iVar5 != 3) goto LAB_002befa0;
              cVar3 = '\x04';
            }
          }
        }
        else {
          cVar3 = '\x05';
        }
        if (*(char *)(param_1 + 0x110) != cVar3) {
          *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
          *(undefined2 *)(param_1 + 0xee) = 1;
          *(undefined2 *)(param_1 + 0xec) = 0;
          func_002317C0((undefined2 *)(param_1 + 0xec),fVar8);
          *(undefined1 *)(param_1 + 0x19d) = 1;
        }
      }
    }
    else {
      fVar8 = DAT_002bf1c4;
      func_0043E11C(param_1);
      *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0xee) = 0;
      *(undefined2 *)(param_1 + 0xec) = 0;
      func_002317C0((undefined2 *)(param_1 + 0xec),fVar8);
      *(undefined1 *)(param_1 + 0x19d) = 0;
    }
  }
  else {
    if (uVar4 < *(uint *)(iVar5 + 8)) {
      iVar5 = *(int *)(iVar5 + 0xc) + uVar4 * 0x38;
    }
    else {
      iVar5 = *(int *)(iVar5 + 0xc);
    }
    if (*(char *)(iVar5 + 0x35) == '\0') goto LAB_002beed4;
  }
  if (*(int *)(param_1 + 0x14c) == 0) {
LAB_002bf018:
    iVar5 = func_00579CEC(*(int *)(param_1 + 0x158));
    if (iVar5 != 0) {
      return func_0066C424((undefined4 *)(param_1 + 0x98),1);
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x14c) + 0x5d) == '\0') {
    *(undefined4 *)(param_1 + 0x14c) = 0;
    *(undefined1 *)(param_1 + 0x16d) = 0;
    func_002BED00(*(int *)(param_1 + 0x140));
    func_002BED00(*(int *)(param_1 + 0x130));
    if (*(int *)(param_1 + 0x14c) == 0) goto LAB_002bf018;
  }
  piVar2 = DAT_002bf1c8;
  if (*(char *)(param_1 + 0x78) != '\0') goto LAB_002bf1f0;
  if ((*(char *)(*(int *)(param_1 + 0x140) + 0x5f) != '\0') ||
     (*(char *)(*(int *)(param_1 + 0x144) + 0x5f) != '\0')) {
    iVar5 = func_0058D888(*DAT_002bf1c8);
    if ((iVar5 != 0) &&
       ((iVar5 = func_001CB9B8(), iVar5 == 0 &&
        (iVar5 = func_00477024(*(int *)(param_1 + 0x158)), iVar5 != 0)))) {
      func_0066C424((undefined4 *)(param_1 + 0x74),4);
    }
    if (*(char *)(param_1 + 0x78) != '\0') goto LAB_002bf1f0;
  }
  if (*(char *)(*(int *)(param_1 + 0x130) + 0x5f) != '\0') {
    iVar5 = func_0058D888(*piVar2);
    if ((iVar5 != 0) && (iVar5 = func_005190C8(*piVar2), iVar5 != 0)) {
      func_0066C424((undefined4 *)(param_1 + 0x74),3);
    }
    if (*(char *)(param_1 + 0x78) != '\0') goto LAB_002bf1f0;
  }
  if (*(char *)(*(int *)(param_1 + 0x120) + 0x5f) != '\0') {
    iVar5 = func_0058D888(*piVar2);
    if ((iVar5 != 0) && (iVar5 = func_00290468(*piVar1), iVar5 != 0)) {
      func_0066C424((undefined4 *)(param_1 + 0x74),1);
    }
    if (*(char *)(param_1 + 0x78) != '\0') goto LAB_002bf1f0;
  }
  iVar5 = *(int *)(param_1 + 0x140);
  if (*(char *)(iVar5 + 0x5e) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x130) + 0x5e) != '\0') {
      *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x130);
      *(undefined1 *)(param_1 + 0x16d) = 1;
      func_002BEE00(iVar5);
      func_002BEE00(*(int *)(param_1 + 0x120));
      goto LAB_002bf1f0;
    }
    if (*(char *)(*(int *)(param_1 + 0x120) + 0x5e) == '\0') goto LAB_002bf1f0;
    *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x120);
    *(undefined1 *)(param_1 + 0x16d) = 1;
    func_002BEE00(iVar5);
    iVar5 = *(int *)(param_1 + 0x130);
  }
  else {
    *(int *)(param_1 + 0x14c) = iVar5;
    *(undefined1 *)(param_1 + 0x16d) = 1;
    func_002BEE00(*(int *)(param_1 + 0x130));
    iVar5 = *(int *)(param_1 + 0x120);
  }
  func_002BEE00(iVar5);
LAB_002bf1f0:
  if ((*(byte *)(param_1 + 0x176) & 1) != 0) {
    iVar6 = *piVar1;
    iVar5 = func_0055696C(iVar6,0xf);
    if ((iVar5 == 0) || (iVar5 = func_00556898(iVar6), iVar5 == 0)) {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x120) + 0x3c))(*(int **)(param_1 + 0x120));
      if (iVar5 != 0) {
        iVar5 = *(int *)(param_1 + 0x120);
        func_002C00A8(*(int *)(iVar5 + 0x14));
        *(undefined1 *)(iVar5 + 0x5c) = 0;
        return func_00662B58((undefined4 *)(iVar5 + 0x38),3);
      }
    }
    else {
      iVar5 = (**(code **)(**(int **)(param_1 + 0x120) + 0x3c))(*(int **)(param_1 + 0x120));
      if (iVar5 == 0) {
        cVar3 = func_00532C78(param_1 + 0x114);
        bVar7 = !(bool)cVar3;
        if (bVar7) {
          cVar3 = *(char *)(param_1 + 0x16d);
        }
        if (bVar7 && cVar3 == '\0') {
          return func_002BECAC(*(int *)(param_1 + 0x120),1);
        }
      }
    }
  }
  return 0;
}

