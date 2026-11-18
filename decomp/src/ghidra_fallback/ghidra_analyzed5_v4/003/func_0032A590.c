#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern undefined8 func_0058AB74(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0032a79c;
extern float DAT_0032a7a0;
extern int DAT_0032a7a4;
extern float DAT_0032a7a8;
extern float DAT_0032a7ac;
extern float DAT_0032a7b0;
extern float DAT_0032a7b4;
extern float DAT_0032a7b8;
extern float DAT_0032a7bc;
extern float DAT_0032a7c0;

// USA 0032A590 <- EU 0032A56C (Ghidra, non-matching)
// GLOBAL DAT_0032a79c int *
// GLOBAL DAT_0032a7a0 float
// GLOBAL DAT_0032a7a4 int
// GLOBAL DAT_0032a7a8 float
// GLOBAL DAT_0032a7ac float
// GLOBAL DAT_0032a7b0 float
// GLOBAL DAT_0032a7b4 float
// GLOBAL DAT_0032a7b8 float
// GLOBAL DAT_0032a7bc float
// GLOBAL DAT_0032a7c0 float

undefined4 func_0032A590(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  uVar5 = *(uint *)(param_1 + 0xa94);
  iVar3 = *(int *)(uVar5 + 0x28);
  if (iVar3 != 0) {
    uVar5 = *(uint *)(uVar5 + 0x20);
  }
  if ((iVar3 == 0 || uVar5 <= *(uint *)(param_1 + 0xc58)) ||
     (iVar3 = *(int *)(iVar3 + *(uint *)(param_1 + 0xc58) * 4), iVar3 == 0)) {
    return func_00665670((undefined4 *)(param_1 + 0xba8),6);
  }
  iVar7 = *DAT_0032a79c << 1;
  func_0014FB58(param_1,(float *)(iVar3 + 0x18),iVar7,DAT_0032a7a0);
  fVar14 = DAT_0032a7a8;
  fVar12 = *(float *)(iVar3 + 0x18) - *(float *)(param_1 + 0x3d0);
  fVar13 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x3d8);
  if (DAT_0032a7a4 <= (int)ALBW_AS_U32((fVar12 * fVar12 + fVar13 * fVar13))) {
    uVar15 = func_0058AB74(param_1);
    if ((int)uVar15 != 0xd) {
      fVar12 = DAT_0032a7ac;
      fVar14 = DAT_0032a7b4;
      if (*(char *)(param_1 + 0xc96) == '\0') {
        fVar12 = DAT_0032a7b0;
        fVar14 = DAT_0032a7b8;
      }
      fVar14 = fVar14 * DAT_0032a7bc;
      if (*(float *)(param_1 + 0xc48) < fVar14) {
        fVar12 = *(float *)(param_1 + 0xc48) + fVar12 * DAT_0032a7bc;
        *(float *)(param_1 + 0xc48) = fVar12;
        if (fVar14 < fVar12) {
          fVar12 = fVar14;
        }
        *(float *)(param_1 + 0xc48) = fVar12;
      }
    }
    local_30 = *(float *)(param_1 + 0x3d0);
    uStack_2c = *(undefined4 *)(param_1 + 0x3d4);
    uStack_28 = *(undefined4 *)(param_1 + 0x3d8);
    func_004D838C(&local_30,(float *)(param_1 + 0xc24),DAT_0032a7c0,*(float *)(param_1 + 0xc48),
                  *(float *)(param_1 + 0xc48));
    return func_00115C70((float *)(param_1 + 0x3dc),&local_30,(float *)(param_1 + 0x3d0));
  }
  iVar3 = *(int *)(param_1 + 0xc58);
  if (iVar3 == *(int *)(param_1 + 0xc70)) {
    func_00665670((undefined4 *)(param_1 + 0xba8),6);
    uVar2 = *(uint *)(param_1 + 0xc70);
    *(uint *)(param_1 + 0xc58) = uVar2;
    uVar5 = *(uint *)(param_1 + 0xa94);
    piVar1 = (int *)(uVar5 + 0x28);
    bVar9 = *piVar1 == 0;
    if (!bVar9) {
      uVar5 = *(uint *)(uVar5 + 0x20);
    }
    bVar10 = uVar5 != uVar2;
    bVar11 = uVar2 <= uVar5;
    if (!bVar9 && uVar2 < uVar5) {
      uVar2 = *(uint *)(*piVar1 + uVar2 * 4);
    }
    if ((bVar9 || bVar11) && (!bVar9 && bVar10)) goto LAB_0032a670;
  }
  else {
    if (iVar3 == 1) {
      iVar7 = 2;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0xa94) + 0x20);
    if (iVar3 != 1) {
      if (iVar3 == iVar4 + -1) {
        iVar7 = 1;
        iVar4 = iVar3;
      }
      else {
        iVar7 = iVar3 + 1;
        iVar4 = iVar3;
      }
    }
    iVar8 = *(int *)(param_1 + 0xc5c);
    *(int *)(param_1 + 0xc5c) = iVar3;
    if (iVar8 == iVar4 + -1) {
      *(int *)(param_1 + 0xc58) = iVar7;
    }
    else {
      *(int *)(param_1 + 0xc58) = iVar4 + -1;
    }
    uVar5 = *(uint *)(param_1 + 0xa94);
    uVar2 = *(uint *)(param_1 + 0xc58);
    piVar1 = (int *)(uVar5 + 0x28);
    bVar9 = *piVar1 == 0;
    if (!bVar9) {
      uVar5 = *(uint *)(uVar5 + 0x20);
    }
    bVar10 = uVar5 != uVar2;
    bVar11 = uVar2 <= uVar5;
    if (!bVar9 && uVar2 < uVar5) {
      uVar2 = *(uint *)(*piVar1 + uVar2 * 4);
    }
    if ((bVar9 || bVar11) && (!bVar9 && bVar10)) goto LAB_0032a670;
  }
  uVar2 = 0;
LAB_0032a670:
  fVar12 = *(float *)(uVar2 + 0x18);
  uVar6 = *(undefined4 *)(uVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(uVar2 + 0x20);
  *(float *)(param_1 + 0xc24) = fVar12;
  *(undefined4 *)(param_1 + 0xc28) = uVar6;
  *(float *)(param_1 + 0xc28) = *(float *)(param_1 + 0xc) + fVar14;
  return 0;
}

