#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00357F68(int param_1,float *param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0066645C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00358728;
extern float DAT_0035872c;
extern float DAT_00358730;
extern int DAT_00358734;
extern float DAT_00358738;

// USA 003584FC <- EU 003584D8 (Ghidra, non-matching)
// GLOBAL DAT_00358728 int *
// GLOBAL DAT_0035872c float
// GLOBAL DAT_00358730 float
// GLOBAL DAT_00358734 int
// GLOBAL DAT_00358738 float

void func_003584FC(int param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  fVar8 = *(float *)(param_1 + 0x3d0);
  uVar7 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x944) == fVar8) << 0x1e |
          (uint)(fVar8 <= *(float *)(param_1 + 0x944)) << 0x1d;
  bVar2 = (byte)(uVar7 >> 0x18);
  bVar4 = (bool)(bVar2 >> 6);
  bVar6 = (bool)(bVar2 >> 5 & 1);
  if (!bVar6 || bVar4) {
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar8 == *(float *)(param_1 + 0x950)) << 0x1e |
            (uint)(*(float *)(param_1 + 0x950) <= fVar8) << 0x1d;
    bVar2 = (byte)(uVar7 >> 0x18);
    bVar4 = (bool)(bVar2 >> 6);
    bVar6 = (bool)(bVar2 >> 5 & 1);
  }
  if (!bVar6 || bVar4) {
    fVar8 = *(float *)(param_1 + 0x3d4);
    uVar1 = uVar7 & 0xfffffff;
    uVar7 = uVar1 | (uint)(*(float *)(param_1 + 0x948) == fVar8) << 0x1e |
            (uint)(fVar8 <= *(float *)(param_1 + 0x948)) << 0x1d;
    bVar2 = (byte)(uVar7 >> 0x18);
    bVar4 = (bool)(bVar2 >> 6);
    bVar6 = (bool)(bVar2 >> 5 & 1);
    if (!bVar6 || bVar4) {
      uVar7 = uVar1 | (uint)(fVar8 == *(float *)(param_1 + 0x954)) << 0x1e |
              (uint)(*(float *)(param_1 + 0x954) <= fVar8) << 0x1d;
      bVar2 = (byte)(uVar7 >> 0x18);
      bVar4 = (bool)(bVar2 >> 6);
      bVar6 = (bool)(bVar2 >> 5 & 1);
    }
    if (!bVar6 || bVar4) {
      fVar8 = *(float *)(param_1 + 0x3d8);
      uVar1 = uVar7 & 0xfffffff;
      uVar7 = uVar1 | (uint)(*(float *)(param_1 + 0x94c) == fVar8) << 0x1e |
              (uint)(fVar8 <= *(float *)(param_1 + 0x94c)) << 0x1d;
      bVar2 = (byte)(uVar7 >> 0x18);
      if ((!(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)) &&
         (uVar1 = uVar1 | (uint)(*(float *)(param_1 + 0x958) < fVar8) << 0x1f,
         uVar7 = uVar1 | (uint)(NAN(*(float *)(param_1 + 0x958)) || NAN(fVar8)) << 0x1c,
         (byte)(uVar1 >> 0x1f) == ((byte)(uVar7 >> 0x1c) & 1))) goto LAB_00358560;
    }
  }
  func_00357F68(param_1,(float *)(param_1 + 0x3dc));
LAB_00358560:
  uVar10 = func_0058AB74(param_1);
  if (((int)uVar10 == 0) && (iVar5 = func_0058A8F0(param_1), iVar5 != 0)) {
    func_004FABDC(param_1,1,0xffffffff,0);
  }
  iVar5 = func_004904CC(*(float *)(param_1 + 0x3e0),
                        SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                             *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4)));
  piVar3 = DAT_00358728;
  bVar4 = func_0051D27C((int *)(param_1 + 0x934),-iVar5,*DAT_00358728);
  if (bVar4) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffff7ff;
  }
  else {
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x934);
  }
  if (*(char *)(param_1 + 0x969) == '\0') {
    func_00115C70(&local_28,(float *)(param_1 + 0x938),(float *)(param_1 + 0x3d0));
    iVar5 = func_004904CC(local_28,local_20);
    fVar8 = DAT_0035872c;
    fVar9 = (float)VectorSignedToFloat(iVar5 - *(int *)(param_1 + 1000),(byte)(uVar7 >> 0x15) & 3);
    fVar9 = fVar9 * DAT_0035872c;
    *(int *)(param_1 + 0x4fc) = (int)fVar9;
    func_004D80A4(&local_28,*(int *)(param_1 + 1000) + (int)fVar9,fVar8);
    local_24 = DAT_00358730;
    fVar8 = DAT_00358730;
    func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_28);
    fVar9 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                 *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
    if ((fVar8 < fVar9) && (DAT_00358734 < (int)ALBW_AS_U32(fVar9))) {
      func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00358738 / fVar9);
    }
  }
  iVar5 = func_004904CC(*(float *)(param_1 + 0x3dc),*(float *)(param_1 + 0x3e4));
  func_0051D27C((int *)(param_1 + 1000),iVar5,*piVar3);
  fVar8 = *(float *)(param_1 + 0x938) - *(float *)(param_1 + 0x3d0);
  fVar9 = *(float *)(param_1 + 0x940) - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9)) < 0x40000000) {
    *(undefined4 *)(param_1 + 0x4fc) = 0;
    *(undefined1 *)(param_1 + 0x969) = 1;
  }
  if (500 < *(int *)(param_1 + 0x8bc)) {
    func_0066645C((undefined4 *)(param_1 + 0x8bc),3);
  }
  return;
}

