#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00188BE4(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4, float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_00660490(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_00263554;
extern float DAT_00263558;
extern undefined4 DAT_0026355c;
extern float DAT_00263560;
extern float DAT_00263564;
extern float DAT_00263568;
extern int *DAT_0026356c;

// USA 0026324C <- EU 00263274 (Ghidra, non-matching)
// GLOBAL DAT_00263554 int
// GLOBAL DAT_00263558 float
// GLOBAL DAT_0026355c undefined4
// GLOBAL DAT_00263560 float
// GLOBAL DAT_00263564 float
// GLOBAL DAT_00263568 float
// GLOBAL DAT_0026356c int *

undefined4 func_0026324C(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_a0 (*(float *)(albw_frame + 0x0))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x4))
  #define local_98 (*(float *)(albw_frame + 0x8))
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_88 (*(float *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define local_58 ((int *)(albw_frame + 0x48))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define iStack_4c (*(int *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x60))
  #define fStack_3c (*(float *)(albw_frame + 0x64))
  #define local_38 (*(float *)(albw_frame + 0x68))
  #define local_34 (*(int *)(albw_frame + 0x6c))
  #define fStack_30 (*(float *)(albw_frame + 0x70))
  puVar7 = (undefined4 *)(param_1 + 0x8bc);
  if (*(int *)(param_1 + 0x8bc) == 0x21) {
    func_001119F4(&local_88,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                  *(int *)(param_1 + 0xa40) * 0x30));
    local_98 = local_7c;
    local_94 = local_6c + DAT_00263560;
    local_90 = local_5c;
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_38,pfVar2,&local_98);
    local_50 = local_38;
    iStack_4c = local_34;
    local_48 = fStack_30;
    iVar4 = func_0068C690(&local_50);
    local_58[0] = *(int *)(param_1 + 1000) - iVar4;
    uVar5 = func_0058E2B8(local_58);
    iVar3 = iVar4;
    if (0x20000000 < uVar5) {
      iVar3 = *(int *)(param_1 + 1000) + -0x20000000;
      local_38 = ALBW_AS_F32((iVar3 - iVar4));
      uVar5 = func_0058E2B8((int *)&local_38);
      local_34 = *(int *)(param_1 + 1000) - iVar4;
      uVar6 = func_0058E2B8(&local_34);
      if (uVar6 < uVar5) {
        iVar3 = *(int *)(param_1 + 1000) + 0x20000000;
      }
    }
    fVar8 = SQRT(local_50 * local_50 + local_48 * local_48) * DAT_00263564;
    if (fVar8 < DAT_00263568) {
      fVar8 = DAT_00263568;
    }
    iVar4 = func_00588BE4(param_1);
    if (iVar4 == *DAT_0026356c) {
      func_00188BE4(&local_98,iVar3,2,*(undefined4 *)(param_1 + 0x2cc),fVar8);
    }
    else {
      func_00188BE4(&local_98,iVar3,5,*(undefined4 *)(param_1 + 0x2cc),fVar8);
    }
    *(int *)(param_1 + 0xa3c) = *(int *)(param_1 + 0xa3c) + -1;
  }
  else if ((0x21 < *(int *)(param_1 + 0x8bc)) &&
          (pfVar2 = (float *)func_00520FC0(), fVar8 = *(float *)(param_1 + 0x3d0) - *pfVar2,
          fVar9 = *(float *)(param_1 + 0x3d8) - pfVar2[2],
          (int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9)) < DAT_00263554)) {
    *(undefined1 *)(param_1 + 0xa58) = 1;
  }
  pfVar2 = (float *)func_00520FC0();
  func_00115C70(&local_a0,pfVar2,(float *)(param_1 + 0x3d0));
  local_44 = local_a0;
  uStack_40 = uStack_9c;
  fStack_3c = local_98;
  iVar3 = func_0068C690(&local_44);
  func_0051D2CC((int *)(param_1 + 1000),iVar3,DAT_00263558);
  iVar3 = func_0058A8F0(param_1);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xa58) == '\0') {
      if (0 < *(int *)(param_1 + 0xa3c)) {
        return func_00660490(puVar7,0xb);
      }
      return func_00660490(puVar7,4);
    }
    *(undefined1 *)(param_1 + 0xa48) = 1;
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_a0,pfVar2,(float *)(param_1 + 0x3d0));
    local_88 = local_a0;
    uStack_84 = uStack_9c;
    fStack_80 = local_98;
    iVar3 = func_0068C690(&local_88);
    *(int *)(param_1 + 0xa10) = iVar3;
    uVar1 = DAT_0026355c;
    *(undefined4 *)(param_1 + 0x8e8) = 0x2d;
    *(undefined4 *)(param_1 + 0x8ec) = uVar1;
    *(undefined4 *)(param_1 + 0x8e4) = 0;
    *(undefined4 *)(param_1 + 0xa24) = 3;
    *(undefined4 *)(param_1 + 0xa3c) = 0;
    func_00660490(puVar7,1);
  }
  return 0;
}

