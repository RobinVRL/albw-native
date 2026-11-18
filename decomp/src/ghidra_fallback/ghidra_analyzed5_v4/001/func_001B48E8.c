#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001B546C(int param_1);
extern int func_001B55BC(int param_1,float *param_2,int param_3,float fparam_0);
extern float func_0049EF80(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_005291BC(int param_1,float *param_2,float fparam_0);
extern int func_005292FC(int param_1);
extern int func_0065B29C(undefined4 *param_1,undefined1 param_2);
extern float DAT_001b4c60;
extern float DAT_001b4c64;
extern float DAT_001b4c68;
extern int DAT_001b4c6c;
extern float DAT_001b4c70;
extern int DAT_001b4c74;
extern undefined4 DAT_001b4c78;
extern float DAT_001b4c7c;
extern float DAT_001b4c80;
extern float DAT_001b4c84;

// USA 001B48E8 <- EU 001B48E8 (Ghidra, non-matching)
// GLOBAL DAT_001b4c60 float
// GLOBAL DAT_001b4c64 float
// GLOBAL DAT_001b4c68 float
// GLOBAL DAT_001b4c6c int
// GLOBAL DAT_001b4c70 float
// GLOBAL DAT_001b4c74 int
// GLOBAL DAT_001b4c78 undefined4
// GLOBAL DAT_001b4c7c float
// GLOBAL DAT_001b4c80 float
// GLOBAL DAT_001b4c84 float

undefined4 func_001B48E8(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define fStack_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define local_54 (*(float *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c ((float *)(albw_frame + 0x34))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  puVar3 = func_005292FC(param_1);
  puVar7 = (undefined4 *)(param_1 + 0x8bc);
  if (puVar3 == (undefined4 *)0x0) {
    pfVar4 = (float *)func_00520FC0();
    iVar5 = func_005291BC(param_1,pfVar4,DAT_001b4c84);
    if (iVar5 != 0) {
      return func_0065B29C(puVar7,3);
    }
    goto LAB_001b4c48;
  }
  bVar1 = false;
  pfVar4 = (float *)func_00520FC0();
  local_70 = ALBW_AS_F32(puVar3[0xf4]);
  fStack_6c = ALBW_AS_F32(puVar3[0xf5]);
  local_68 = ALBW_AS_F32(puVar3[0xf6]);
  func_00115C70(local_3c,&local_70,(float *)(param_1 + 0x3d0));
  local_58 = *(float *)(param_1 + 0x3d0);
  local_54 = *(float *)(param_1 + 0x3d4);
  local_50 = *(float *)(param_1 + 0x3d8);
  fVar11 = local_3c[0] * local_3c[0] + local_34 * local_34;
  local_4c = local_70;
  local_48 = fStack_6c;
  local_44 = local_68;
  fVar8 = func_0049EF80(pfVar4,&local_58,&local_40);
  fVar13 = *(float *)(param_1 + 0x94c);
  fVar10 = fVar13 * fVar13;
  fVar9 = fVar10;
  if (fVar11 < fVar10) {
    fVar13 = SQRT(fVar11);
    fVar9 = fVar11;
  }
  fVar12 = fVar11;
  if (((fVar9 <= fVar8) || (local_40 <= DAT_001b4c60)) || (0x3f7fffff < (int)ALBW_AS_U32(local_40))) {
LAB_001b4a74:
    fVar9 = *(float *)(param_1 + 0x950) +
            (DAT_001b4c64 - *(float *)(param_1 + 0x950)) * DAT_001b4c68;
  }
  else {
    local_64 = local_58 + (local_4c - local_58) * local_40;
    local_60 = local_54 + (local_48 - local_54) * local_40;
    local_5c = local_50 + (local_44 - local_50) * local_40;
    fVar9 = DAT_001b4c60;
    func_00115C70(&local_64,&local_64,pfVar4);
    fVar8 = SQRT(local_64 * local_64 + local_60 * local_60 + local_5c * local_5c);
    if (fVar9 < fVar8) {
      fVar13 = fVar13 / fVar8;
      local_64 = local_64 * fVar13;
      local_5c = local_5c * fVar13;
      local_60 = local_60 * fVar13;
    }
    func_00115C54(&local_70,&local_64,pfVar4);
    if (fVar11 < fVar10) goto LAB_001b4a74;
    bVar1 = true;
    fVar9 = *(float *)(param_1 + 0x950) +
            (DAT_001b4c7c - *(float *)(param_1 + 0x950)) * DAT_001b4c80;
  }
  iVar5 = DAT_001b4c6c;
  *(float *)(param_1 + 0x950) = fVar9;
  func_001B55BC(param_1,&local_70,iVar5,*(float *)(param_1 + 0x950));
  if (bVar1) {
    func_00115C70(&local_64,(float *)(param_1 + 0x3d0),pfVar4);
    fVar9 = SQRT(local_64 * local_64 + local_5c * local_5c);
    if (fVar9 < *(float *)(param_1 + 0x94c)) {
      func_00115DC8(&local_64);
      func_00115D70(&local_64,&local_64,
                    ((*(float *)(param_1 + 0x94c) - fVar9) / *(float *)(param_1 + 0x94c)) *
                    DAT_001b4c70);
      func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_64);
    }
  }
  uVar2 = DAT_001b4c78;
  if (*(uint *)(param_1 + 0x930) < *(uint *)(param_1 + 0x934)) {
    *(uint *)(param_1 + 0x930) = *(uint *)(param_1 + 0x930) + 1;
  }
  else {
    fVar9 = *(float *)(param_1 + 0x3d0) - local_70;
    fVar8 = *(float *)(param_1 + 0x3d8) - local_68;
    if (DAT_001b4c74 < (int)ALBW_AS_U32((fVar9 * fVar9 + fVar8 * fVar8))) {
LAB_001b4c48:
      return func_0065B29C(puVar7,0);
    }
    *(undefined4 *)(param_1 + 0x934) = 0xb4;
    *(undefined4 *)(param_1 + 0x938) = uVar2;
    *(undefined4 *)(param_1 + 0x930) = 0;
  }
  if ((fVar12 < *(float *)(param_1 + 0x948)) || (*(char *)(param_1 + 0x987) == '\0')) {
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(float *)(param_1 + 0x948) = fVar12;
  }
  else {
    uVar6 = *(int *)(param_1 + 0x944) + 1;
    *(uint *)(param_1 + 0x944) = uVar6;
    if (0x96 < uVar6) {
      func_0065B29C(puVar7,3);
      *(undefined4 *)(param_1 + 0x944) = 600;
    }
  }
  return func_001B546C(param_1);
}

