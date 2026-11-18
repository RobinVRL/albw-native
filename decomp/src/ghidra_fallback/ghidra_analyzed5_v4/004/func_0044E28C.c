#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_004077E4(int param_1,float *param_2);
extern int func_0044E4F8(int param_1,float *param_2);
extern float func_0068C7E0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5,float fparam_6);
extern float DAT_0044e434;
extern float DAT_0044e438;
extern float DAT_0044e43c;
extern float DAT_0044e440;
extern float DAT_0044e444;
extern float DAT_0044e448;
extern float DAT_0044e44c;
extern float DAT_0044e450;
extern float DAT_0044e454;

// USA 0044E28C <- EU 0044E264 (Ghidra, non-matching)
// GLOBAL DAT_0044e434 float
// GLOBAL DAT_0044e438 float
// GLOBAL DAT_0044e43c float
// GLOBAL DAT_0044e440 float
// GLOBAL DAT_0044e444 float
// GLOBAL DAT_0044e448 float
// GLOBAL DAT_0044e44c float
// GLOBAL DAT_0044e450 float
// GLOBAL DAT_0044e454 float

void func_0044E28C(int param_1)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (bVar1 < 2) {
    return;
  }
  if (bVar1 == 10 || bVar1 == 0xb) {
    return;
  }
  if (bVar1 == 0xc) {
    return;
  }
  if (DAT_0044e434 <= *(float *)(param_1 + 0x104)) {
    fVar2 = DAT_0044e43c;
    fVar9 = DAT_0044e438;
    fVar5 = DAT_0044e434;
    fVar8 = func_0068C7E0(DAT_0044e438 - *(float *)(param_1 + 0x104),DAT_0044e434,
                          *(float *)(param_1 + 0xfc),DAT_0044e43c,DAT_0044e438,
                          *(float *)(param_1 + 0xe8),DAT_0044e43c);
    *(float *)(param_1 + 0xe0) = fVar8;
    fVar9 = func_0068C7E0(fVar9 - *(float *)(param_1 + 0x104),fVar5,*(float *)(param_1 + 0x100),
                          fVar2,fVar9,*(float *)(param_1 + 0xec),fVar2);
    fVar2 = DAT_0044e440;
    *(float *)(param_1 + 0xe4) = fVar9;
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) - fVar2;
  }
  iVar4 = *(int *)(param_1 + 0x120);
  if (iVar4 != 0) {
    local_28 = *(float *)(iVar4 + 0x1c) + DAT_0044e444 +
               (*(float *)(param_1 + 0xe0) - DAT_0044e444) * *(float *)(iVar4 + 0x34);
    local_24 = *(float *)(iVar4 + 0x20) + DAT_0044e448 +
               (*(float *)(param_1 + 0xe4) - DAT_0044e448) * *(float *)(iVar4 + 0x38);
    func_0044E4F8(param_1,&local_28);
  }
  if (*(char *)(param_1 + 0xb4) != '\x03') {
    return;
  }
  fVar2 = *(float *)(*(int *)(param_1 + 0x11c) + 0x1c);
  fVar9 = *(float *)(*(int *)(param_1 + 0x11c) + 0x20);
  if ((uint)ALBW_AS_U32(fVar2) <= (uint)ALBW_AS_U32(DAT_0044e44c)) {
    bVar7 = SBORROW4((int)ALBW_AS_U32(fVar2),(int)ALBW_AS_U32(DAT_0044e450));
    iVar4 = (int)ALBW_AS_U32(fVar2) - (int)ALBW_AS_U32(DAT_0044e450);
    bVar6 = fVar2 == DAT_0044e450;
    if ((int)ALBW_AS_U32(fVar2) <= (int)ALBW_AS_U32(DAT_0044e450)) {
      fVar5 = ALBW_AS_F32(((int)ALBW_AS_U32(DAT_0044e450) + 0x3e0000));
      bVar7 = SBORROW4((int)ALBW_AS_U32(fVar9),(int)ALBW_AS_U32(fVar5));
      iVar4 = (int)ALBW_AS_U32(fVar9) - (int)ALBW_AS_U32(fVar5);
      bVar6 = fVar9 == fVar5;
    }
    if (((bVar6 || iVar4 < 0 != bVar7) && ((uint)ALBW_AS_U32(fVar9) <= (uint)ALBW_AS_U32(DAT_0044e454))) &&
       (local_28 = fVar2, local_24 = fVar9,
       iVar4 = func_004077E4(*(int *)(param_1 + 0x124),&local_28), iVar4 != 0)) {
      if (*(char *)(param_1 + 0xd4) != '\0') {
        return;
      }
      func_002313DC(param_1 + 0xa4);
      *(undefined1 *)(param_1 + 0xd5) = 1;
      *(undefined1 *)(param_1 + 0xd4) = 1;
      uVar3 = *(uint *)(param_1 + 0x18) & 0xfffffffb;
      goto LAB_0044e3f4;
    }
  }
  if (*(char *)(param_1 + 0xd4) == '\0') {
    return;
  }
  func_00231524(param_1 + 0xa4);
  *(undefined1 *)(param_1 + 0xd4) = 0;
  if (*(char *)(param_1 + 0xd5) == '\0') {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x18) | 4;
LAB_0044e3f4:
  *(uint *)(param_1 + 0x18) = uVar3;
  return;
}

