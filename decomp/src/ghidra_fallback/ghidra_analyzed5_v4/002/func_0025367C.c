#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00520ED8(int param_1);
extern int func_00521018(int param_1);
extern int func_0052107C(int param_1);
extern int func_0052F654(int param_1);
extern int func_0065FE3C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00253884;
extern float DAT_00253888;
extern float DAT_0025388c;
extern float DAT_00253890;
extern float DAT_00253894;
extern float DAT_00253898;
extern float DAT_0025389c;
extern undefined4 DAT_002538a0;
extern undefined4 DAT_002538a4;
extern float DAT_002538a8;

// USA 0025367C <- EU 002536A4 (Ghidra, non-matching)
// GLOBAL DAT_00253884 float
// GLOBAL DAT_00253888 float
// GLOBAL DAT_0025388c float
// GLOBAL DAT_00253890 float
// GLOBAL DAT_00253894 float
// GLOBAL DAT_00253898 float
// GLOBAL DAT_0025389c float
// GLOBAL DAT_002538a0 undefined4
// GLOBAL DAT_002538a4 undefined4
// GLOBAL DAT_002538a8 float

undefined4 func_0025367C(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  fVar7 = DAT_0025388c;
  fVar9 = DAT_00253888;
  fVar8 = DAT_00253884;
  fVar6 = (DAT_00253894 *
          ((*(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0x4b8)) - DAT_00253888)) /
          DAT_00253890 + DAT_0025388c;
  *(float *)(param_1 + 0x4b4) = fVar6;
  fVar1 = DAT_00253898;
  if ((fVar7 <= fVar6) && (fVar7 = fVar6, fVar8 < fVar6)) {
    fVar7 = fVar8;
  }
  *(float *)(param_1 + 0x4b4) = fVar7;
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - fVar1;
  fVar8 = DAT_0025389c;
  *(float *)(param_1 + 0x3dc) =
       *(float *)(param_1 + 0x3dc) + -*(float *)(param_1 + 0x3dc) * DAT_0025389c;
  *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0x3e4) + -*(float *)(param_1 + 0x3e4) * fVar8;
  pfVar5 = *(float **)(param_1 + 0x484);
  fVar8 = func_0051CF68(pfVar5 + 3,*pfVar5,pfVar5[1],pfVar5[2]);
  pfVar5[4] = fVar8;
  iVar4 = func_0052F654(*(int *)(param_1 + 0x484));
  *(int *)(param_1 + 0x458) = iVar4;
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  uVar2 = DAT_002538a0;
  if (0x19 < *(int *)(param_1 + 0x420)) {
    fVar8 = *(float *)(*(int *)(param_1 + 0x45c) + 0x58);
    *(float *)(param_1 + 0x490) = fVar9;
    *(float *)(param_1 + 0x494) = fVar9;
    *(float *)(param_1 + 0x498) = fVar9;
    local_28 = fVar9;
    local_24 = fVar9;
    local_20 = fVar9;
    func_0014EEB8(param_1,&local_28,uVar2,fVar8);
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x49c));
    bVar3 = func_00521018(param_1);
    if (bVar3) {
      bVar3 = func_0052107C(param_1);
      if (bVar3) {
        *(undefined4 *)(param_1 + 0x3e0) = DAT_002538a4;
      }
      local_28 = *(float *)(param_1 + 0x4a8);
      local_20 = *(float *)(param_1 + 0x4b0);
      local_24 = fVar9;
      func_00115DC8(&local_28);
      local_20 = local_20 * DAT_002538a8;
      *(float *)(param_1 + 0x3dc) = local_28 * DAT_002538a8;
      *(float *)(param_1 + 0x3e4) = local_20;
    }
    else {
      iVar4 = func_00520ED8(param_1);
      if ((iVar4 != 0) || (bVar3 = func_0052107C(param_1), bVar3)) {
        return func_0065FE3C((undefined4 *)(param_1 + 0x420),5);
      }
    }
  }
  return 0;
}

