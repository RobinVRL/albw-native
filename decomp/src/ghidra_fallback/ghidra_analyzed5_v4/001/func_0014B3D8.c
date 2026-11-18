#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_003A10E0(int param_1);
extern int func_00495080(int param_1);
extern int func_00495090(int param_1);
extern int func_004950C4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00495130(int param_1,float *param_2);
extern int *DAT_0014b5f8;
extern undefined4 *DAT_0014b5fc;
extern int *DAT_0014b600;
extern undefined4 *DAT_0014b604;
extern undefined4 DAT_0014b608;
extern undefined4 *DAT_0014b60c;

// USA 0014B3D8 <- EU 0014B3D8 (Ghidra, non-matching)
// GLOBAL DAT_0014b5f8 int *
// GLOBAL DAT_0014b5fc undefined4 *
// GLOBAL DAT_0014b600 int *
// GLOBAL DAT_0014b604 undefined4 *
// GLOBAL DAT_0014b608 undefined4
// GLOBAL DAT_0014b60c undefined4 *

undefined4 func_0014B3D8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 *)(albw_frame + 0x34))
  iVar3 = *DAT_0014b5f8;
  if (0 < *(int *)(iVar3 + 0x54)) {
    func_003A10E0(*(int *)(param_1 + 0x1b8));
    puVar1 = DAT_0014b5fc;
    piVar4 = (int *)*DAT_0014b5fc;
    (**(code **)(*piVar4 + 0x14))(piVar4,0);
    (**(code **)(*piVar4 + 0x18))(piVar4,1);
    piVar4 = (int *)*puVar1;
    (**(code **)(*piVar4 + 0x28))(piVar4,1);
    iVar5 = *DAT_0014b600;
    func_0010E0E0((int *)*puVar1);
    func_00495090(iVar5);
    puVar2 = DAT_0014b60c;
    puVar1 = DAT_0014b604;
    iVar9 = *(int *)(iVar3 + 0x58);
    iVar8 = *(int *)(iVar3 + 0x50) - iVar9;
    iVar3 = (iVar3 + 0x4c) - iVar9;
    if (param_2 == 0) {
      for (; iVar8 != iVar3; iVar8 = *(int *)(iVar8 + iVar9 + 4) - iVar9) {
        if ((*(byte *)(iVar8 + 0x17) & 2) != 0) {
          local_60 = *puVar1;
          uStack_5c = puVar1[1];
          uStack_58 = puVar1[2];
          local_4c = *puVar2;
          uStack_48 = puVar2[1];
          uStack_44 = puVar2[2];
          uStack_40 = puVar2[3];
          local_3c = *puVar2;
          uStack_38 = puVar2[1];
          uStack_34 = puVar2[2];
          uStack_30 = puVar2[3];
          local_2c = 0;
          iVar6 = *(int *)(param_1 + 0x1b8);
          local_54 = *(float *)(iVar6 + 0xc) - *(float *)(iVar6 + 4);
          fStack_50 = *(float *)(iVar6 + 0x10) - *(float *)(iVar6 + 8);
          pfVar7 = (float *)func_004950C4((int)&local_60,(undefined4 *)(iVar8 + 0x20),
                                          (undefined4 *)(iVar8 + 0x20));
          func_00495130(iVar5,pfVar7);
        }
      }
    }
    else {
      for (; iVar8 != iVar3; iVar8 = *(int *)(iVar8 + iVar9 + 4) - iVar9) {
        if ((*(byte *)(iVar8 + 0x17) & 1) != 0) {
          local_60 = *puVar1;
          uStack_5c = puVar1[1];
          uStack_58 = puVar1[2];
          local_4c = *puVar2;
          uStack_48 = puVar2[1];
          uStack_44 = puVar2[2];
          uStack_40 = puVar2[3];
          local_3c = *puVar2;
          uStack_38 = puVar2[1];
          uStack_34 = puVar2[2];
          uStack_30 = puVar2[3];
          local_2c = 0;
          iVar6 = *(int *)(param_1 + 0x1b8);
          local_54 = *(float *)(iVar6 + 0xc) - *(float *)(iVar6 + 4);
          fStack_50 = *(float *)(iVar6 + 0x10) - *(float *)(iVar6 + 8);
          pfVar7 = (float *)func_004950C4((int)&local_60,(undefined4 *)(iVar8 + 0x20),
                                          (undefined4 *)(iVar8 + 0x20));
          func_00495130(iVar5,pfVar7);
        }
      }
    }
    func_00495080(iVar5);
    return func_0010E15C((int *)*DAT_0014b5fc);
  }
  return 0;
}

