#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_004077E4(int param_1,float *param_2);
extern int func_0044D9D4(int param_1,float *param_2);
extern int func_0044E4F8(int param_1,float *param_2);
extern int func_00522958(int param_1);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern float func_0068C7E0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5,float fparam_6);
extern int *DAT_0044e834;
extern float DAT_0044e838;
extern float DAT_0044e83c;
extern float DAT_0044e840;
extern float DAT_0044e844;
extern float DAT_0044e848;
extern float DAT_0044e84c;
extern float DAT_0044e850;

// USA 0044E60C <- EU 0044E5E4 (Ghidra, non-matching)
// GLOBAL DAT_0044e834 int *
// GLOBAL DAT_0044e838 float
// GLOBAL DAT_0044e83c float
// GLOBAL DAT_0044e840 float
// GLOBAL DAT_0044e844 float
// GLOBAL DAT_0044e848 float
// GLOBAL DAT_0044e84c float
// GLOBAL DAT_0044e850 float

undefined4 func_0044E60C(int param_1)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fparam_1;
  float fparam_4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  piVar1 = DAT_0044e834;
  iVar2 = func_00522958(*DAT_0044e834);
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xd4) == '\0') {
      if (*(char *)(param_1 + 0xb4) == '\x01') {
        local_30 = *(float *)(*(int *)(param_1 + 0x11c) + 0x1c);
        local_2c = *(float *)(*(int *)(param_1 + 0x11c) + 0x20);
        if ((*(char *)(param_1 + 0xb5) == '\0') ||
           (iVar2 = func_004077E4(*(int *)(param_1 + 0x128),&local_30), iVar2 != 0)) {
          return func_0066CD9C((undefined4 *)(param_1 + 0xb0),2);
        }
        if ((*(char *)(param_1 + 0xb5) == '\x05') || (*(char *)(param_1 + 0xb5) == '\a')) {
          return func_0066CD9C((undefined4 *)(param_1 + 0xb0),3);
        }
      }
    }
    else {
      fVar7 = DAT_0044e838;
      func_0044D9D4(param_1,(float *)(param_1 + 0xe0));
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe4);
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0xe0);
      *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0xe4);
      *(float *)(param_1 + 0x104) = fVar7;
      func_0066CD9C((undefined4 *)(param_1 + 0xb0),4);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb0);
    fVar7 = *(float *)(*(int *)(param_1 + 0x118) + 0x1c);
    fVar9 = *(float *)(*(int *)(param_1 + 0x118) + 0x20);
    if (iVar2 < 0xf) {
      if (iVar2 < 4) {
        fVar7 = *(float *)(param_1 + 0xd8);
        fVar9 = *(float *)(param_1 + 0xdc);
      }
      else {
        fVar8 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = fVar8 - DAT_0044e83c;
        fVar3 = DAT_0044e840;
        fparam_1 = DAT_0044e838;
        fparam_4 = DAT_0044e844;
        fVar7 = func_0068C7E0(fVar8,DAT_0044e838,*(float *)(param_1 + 0xd8),DAT_0044e840,
                              DAT_0044e844,-fVar7,DAT_0044e840);
        fVar9 = func_0068C7E0(fVar8,fparam_1,*(float *)(param_1 + 0xdc),fVar3,fparam_4,-fVar9,fVar3)
        ;
      }
    }
    else {
      fVar7 = -fVar7;
      fVar9 = -fVar9;
    }
    local_30 = *(float *)(*piVar1 + 0x10) + fVar7;
    local_2c = *(float *)(*piVar1 + 0x14) + fVar9;
    func_0044E4F8(param_1,&local_30);
    uVar4 = 0;
    fVar7 = *(float *)(*(int *)(param_1 + 0x11c) + 0x1c);
    fVar9 = *(float *)(*(int *)(param_1 + 0x11c) + 0x20);
    if ((uint)ALBW_AS_U32(fVar7) <= (uint)ALBW_AS_U32(DAT_0044e848)) {
      bVar6 = SBORROW4((int)ALBW_AS_U32(fVar7),(int)ALBW_AS_U32(DAT_0044e84c));
      iVar2 = (int)ALBW_AS_U32(fVar7) - (int)ALBW_AS_U32(DAT_0044e84c);
      bVar5 = fVar7 == DAT_0044e84c;
      if ((int)ALBW_AS_U32(fVar7) <= (int)ALBW_AS_U32(DAT_0044e84c)) {
        fVar3 = ALBW_AS_F32(((int)ALBW_AS_U32(DAT_0044e84c) + 0x3e0000));
        bVar6 = SBORROW4((int)ALBW_AS_U32(fVar9),(int)ALBW_AS_U32(fVar3));
        iVar2 = (int)ALBW_AS_U32(fVar9) - (int)ALBW_AS_U32(fVar3);
        bVar5 = fVar9 == fVar3;
      }
      if (((bVar5 || iVar2 < 0 != bVar6) && ((uint)ALBW_AS_U32(fVar9) <= (uint)ALBW_AS_U32(DAT_0044e850))) &&
         (local_30 = fVar7, local_2c = fVar9,
         iVar2 = func_004077E4(*(int *)(param_1 + 0x124),&local_30), iVar2 != 0)) {
        uVar4 = 1;
        if (*(char *)(param_1 + 0xd4) != '\0') {
          return 0;
        }
        func_002313DC(param_1 + 0xa4);
        *(undefined1 *)(param_1 + 0xd5) = 1;
        goto LAB_0044e824;
      }
    }
    if (*(char *)(param_1 + 0xd4) != '\0') {
      func_00231524(param_1 + 0xa4);
LAB_0044e824:
      *(undefined1 *)(param_1 + 0xd4) = uVar4;
      return 0;
    }
  }
  return 0;
}

