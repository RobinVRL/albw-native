#include "ghidra_types.h"

extern int func_003DE4E4(int param_1,float fparam_0);
extern int func_003E16D4(int param_1,int param_2);
extern int func_003E176C(int param_1,float fparam_0);
extern void func_00414E2C(int param_1);
extern float func_0056D4D0(int param_1);
extern int DAT_00414e00;
extern uint DAT_00414e04;
extern int DAT_00414e08;

// USA 00414C3C <- EU 00414C1C (Ghidra, non-matching)
// GLOBAL DAT_00414e00 int
// GLOBAL DAT_00414e04 uint
// GLOBAL DAT_00414e08 int

void func_00414C3C(int param_1,float fparam_0)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  uint in_r2;
  bool bVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  uVar3 = *(ushort *)(param_1 + 0x20);
  iVar1 = 0;
  bVar4 = (uVar3 & 1) == 0;
  if (!bVar4) {
    uVar3 = (ushort)*(byte *)(param_1 + 0x15);
  }
  if (bVar4 || uVar3 == 0) {
    if (*(char *)(param_1 + 0x16) == '\0') goto LAB_00414d40;
  }
  else if (*(char *)(param_1 + 0x16) == '\0') {
    iVar1 = 0;
    uVar5 = *(uint *)(param_1 + 0x28);
    if (DAT_00414e00 < (int)*(uint *)(param_1 + 0x28)) {
      uVar5 = DAT_00414e04;
    }
    uVar7 = (ulonglong)uVar5;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          func_003DE4E4(iVar2,ALBW_AS_F32(uVar7));
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    func_00414E2C(param_1);
    fVar6 = *(float *)(param_1 + 0x24);
    fparam_0 = func_0056D4D0(DAT_00414e08);
    uVar7 = (ulonglong)(uint)ALBW_AS_U32((fparam_0 * fVar6));
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          fparam_0 = ALBW_AS_F32(uVar7);
          func_003E176C(iVar2,fparam_0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x16) = 1;
    iVar1 = 1;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff2;
  }
  bVar4 = (*(ushort *)(param_1 + 0x20) & 2) != 0;
  if (bVar4) {
    in_r2 = (uint)*(byte *)(param_1 + 0x15);
  }
  if (bVar4 && in_r2 != 0) {
    if (*(char *)(param_1 + 0x17) == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      iVar1 = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      iVar1 = 3;
    }
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffd;
  }
LAB_00414d40:
  if (iVar1 == 1) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          func_003E16D4(iVar2,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
      return;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          func_003E16D4(iVar2,1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
      return;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4);
      if (iVar2 != 0) {
        func_003E16D4(iVar2,2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}

