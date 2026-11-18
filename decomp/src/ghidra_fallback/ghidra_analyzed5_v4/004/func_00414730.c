#include "ghidra_types.h"

extern int func_003DE438(int param_1,int param_2);
extern int func_003DE458(int param_1,uint param_2);
extern int func_003DE4E4(int param_1,float fparam_0);
extern int func_003E11F0(int param_1,int param_2);
extern void func_003E1634(int param_1,undefined4 *param_2,float fparam_0);
extern int func_003E176C(int param_1,float fparam_0);
extern int func_00413810(float fparam_0);
extern void func_00414E2C(int param_1);
extern float func_0056D4D0(int param_1);
extern int DAT_0041494c;
extern uint DAT_00414950;
extern int DAT_00414954;
extern uint DAT_00414958;

// USA 00414730 <- EU 00414710 (Ghidra, non-matching)
// GLOBAL DAT_0041494c int
// GLOBAL DAT_00414950 uint
// GLOBAL DAT_00414954 int
// GLOBAL DAT_00414958 uint

void func_00414730(int param_1,float fparam_0)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define auStack_30 ((undefined4 *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x15) != '\0') {
    if ((*(ushort *)(param_1 + 0x20) & 4) != 0) {
      iVar3 = 0;
      uVar8 = *(uint *)(param_1 + 0x28);
      if (DAT_0041494c < (int)*(uint *)(param_1 + 0x28)) {
        uVar8 = DAT_00414950;
      }
      uVar10 = (ulonglong)uVar8;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar2 = *(int *)(param_1 + iVar3 * 4);
          if (iVar2 != 0) {
            fparam_0 = ALBW_AS_F32(uVar10);
            func_003DE4E4(iVar2,fparam_0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffb;
    }
    if ((*(ushort *)(param_1 + 0x20) & 0x40) != 0) {
      fVar9 = *(float *)(param_1 + 0x24);
      fparam_0 = func_0056D4D0(DAT_00414954);
      uVar10 = (ulonglong)(uint)ALBW_AS_U32((fparam_0 * fVar9));
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar2 = *(int *)(param_1 + iVar3 * 4);
          if (iVar2 != 0) {
            fparam_0 = ALBW_AS_F32(uVar10);
            func_003E176C(iVar2,fparam_0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffbf;
    }
    if ((*(ushort *)(param_1 + 0x20) & 8) != 0) {
      func_00414E2C(param_1);
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff7;
    }
    if ((*(ushort *)(param_1 + 0x20) & 0x10) != 0) {
      fparam_0 = *(float *)(param_1 + 0x38);
      uVar1 = func_00413810(fparam_0);
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        do {
          iVar2 = *(int *)(param_1 + iVar3 * 4);
          if (iVar2 != 0) {
            if (uVar1 < 16000) {
              func_003E11F0(iVar2,1);
              func_003DE458(iVar2,(uint)uVar1);
            }
            else {
              func_003E11F0(iVar2,0);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffef;
    }
    iVar3 = DAT_00414954;
    if ((*(ushort *)(param_1 + 0x20) & 0x20) != 0) {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 8)) {
        uVar10 = (ulonglong)DAT_00414958;
        do {
          iVar4 = *(int *)(param_1 + iVar2 * 4);
          if (iVar4 != 0) {
            piVar5 = *(int **)(iVar3 + (uint)*(byte *)(param_1 + 0x22) * 4 + 0x74);
            bVar7 = piVar5 == (int *)0x0;
            bVar6 = true;
            if (!bVar7) {
              fparam_0 = *(float *)(param_1 + 0x3c);
              bVar7 = fparam_0 == ALBW_AS_F32(uVar10);
              bVar6 = ALBW_AS_F32(uVar10) <= fparam_0;
            }
            if (bVar6 && !bVar7) {
              func_003DE438(iVar4,1);
              fVar9 = *(float *)(param_1 + 0x3c);
              (**(code **)(*piVar5 + 8))(piVar5,*(undefined1 *)(param_1 + 0x22),auStack_30);
              func_003E1634(iVar4,auStack_30,fVar9);
              fparam_0 = fVar9;
            }
            else {
              func_003DE438(iVar4,0);
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(param_1 + 8));
      }
      *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xffdf;
    }
  }
  return;
}

