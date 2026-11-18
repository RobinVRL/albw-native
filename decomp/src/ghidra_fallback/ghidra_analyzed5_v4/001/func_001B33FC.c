// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0053F480(int param_1);
extern int func_00556E64(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_001b3630;
extern float DAT_001b3634;
extern int DAT_001b3638;
extern int DAT_001b363c;
extern float DAT_001b3640;
extern int DAT_001b3644;
extern int *DAT_001b3648;
extern float DAT_001b364c;
extern int DAT_001b3650;
extern float DAT_001b3654;
extern float DAT_001b3658;
extern float DAT_001b365c;

// USA 001B33FC <- EU 001B33FC [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b3630 float
// GLOBAL DAT_001b3634 float
// GLOBAL DAT_001b3638 int
// GLOBAL DAT_001b363c int
// GLOBAL DAT_001b3640 float
// GLOBAL DAT_001b3644 int
// GLOBAL DAT_001b3648 int *
// GLOBAL DAT_001b364c float
// GLOBAL DAT_001b3650 int
// GLOBAL DAT_001b3654 float
// GLOBAL DAT_001b3658 float
// GLOBAL DAT_001b365c float

undefined4 func_001B33FC(int param_1)

{
  int iVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_20 ((int *)(albw_frame + 0x20))
  fVar7 = DAT_001b3630;
  *(float *)(param_1 + 0x90c) =
       *(float *)(param_1 + 0x90c) + (DAT_001b3634 - *(float *)(param_1 + 0x90c)) * DAT_001b3630;
  pfVar3 = (float *)func_00520FC0();
  iVar1 = DAT_001b3638;
  iVar5 = *(int *)(param_1 + 1000);
  func_0014FDC4(param_1,pfVar3,*(int *)(DAT_001b3638 + 0x10),*(float *)(param_1 + 0x90c),fVar7);
  if (*(int *)(param_1 + 0x904) != 0) {
    local_38 = ALBW_AS_F32((*(int *)(param_1 + 1000) - iVar5));
    iVar5 = func_0058E2B8((int *)&local_38);
    if (iVar5 < DAT_001b363c) {
      iVar5 = DAT_001b363c;
    }
    func_0051D2F4((int *)(param_1 + 0x904),0,DAT_001b363c,iVar5,DAT_001b3640);
  }
  fVar7 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar7);
  if (0x13 < *(ushort *)(DAT_001b3644 + param_1)) {
    iVar6 = *DAT_001b3648;
    iVar5 = func_0053F480(iVar6);
    if ((iVar5 != 0) && (bVar2 = func_00556E64(iVar6), !bVar2)) {
      iVar5 = func_00520FC0();
      fVar7 = *(float *)(iVar5 + 4) - *(float *)(param_1 + 0x3d4);
      if (fVar7 <= DAT_001b364c) {
        fVar7 = -fVar7;
      }
      if (((int)ALBW_AS_U32(fVar7) < 0x40000000) &&
         (fVar7 = **(float **)(iVar6 + 0x1c) - *(float *)(param_1 + 0x3d0),
         fVar8 = (*(float **)(iVar6 + 0x1c))[2] - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32((fVar7 * fVar7 + fVar8 * fVar8)) < DAT_001b3650)) {
        return func_0065B158((undefined4 *)(param_1 + 0x8bc),4);
      }
    }
  }
  if (*(int *)(param_1 + 0x8bc) < 0x1f) {
    return 0;
  }
  fVar7 = DAT_001b3654;
  iVar5 = func_00520FC0();
  fVar8 = *(float *)(iVar5 + 4) - *(float *)(param_1 + 0x3d4);
  if ((fVar7 <= fVar8) && (fVar7 = fVar8, DAT_001b3658 < fVar8)) {
    fVar7 = DAT_001b3658;
  }
  iVar5 = func_005211F4(param_1,DAT_001b365c,fVar7);
  if (iVar5 != 0) {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_2c,pfVar3,(float *)(param_1 + 0x3d0));
    local_38 = local_2c;
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    local_20[0] = func_0068C690(&local_38);
    local_20[0] = local_20[0] - *(int *)(param_1 + 1000);
    uVar4 = func_0058E2B8(local_20);
    if (uVar4 < *(uint *)(iVar1 + 8)) {
      return 0;
    }
  }
  return func_0065B158((undefined4 *)(param_1 + 0x8bc),0);
}

