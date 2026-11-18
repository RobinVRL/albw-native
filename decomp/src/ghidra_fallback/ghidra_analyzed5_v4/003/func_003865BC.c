#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014D994(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_00386930(int param_1);
extern int func_00386CA8(uint param_1);
extern int func_004356B4(int *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_0038678c;
extern undefined DAT_00386790;
extern float DAT_003867a0;
extern float DAT_003867a4;
extern undefined4 DAT_003867a8;
extern float DAT_003867ac;
extern int *DAT_003867b0;
extern float DAT_003867b4;
extern float DAT_003867b8;
extern float DAT_003867bc;
extern char s__RollCutEX_00386793[];
extern char s_cf_00386793[];
extern undefined4 _DAT_00386790;

// USA 003865BC <- EU 00386598 (Ghidra, non-matching)
// GLOBAL DAT_0038678c float
// GLOBAL DAT_00386790 undefined
// GLOBAL DAT_003867a0 float
// GLOBAL DAT_003867a4 float
// GLOBAL DAT_003867a8 undefined4
// GLOBAL DAT_003867ac float
// GLOBAL DAT_003867b0 int *
// GLOBAL DAT_003867b4 float
// GLOBAL DAT_003867b8 float
// GLOBAL DAT_003867bc float
// GLOBAL s_cf_00386793 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_003865BC(uint param_1)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  uVar6 = _DAT_00386790;
  *(undefined1 *)(param_1 + 0x3a) = 0xff;
  fVar9 = DAT_0038678c;
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x124) = uVar6;
  *(float *)(param_1 + 0x128) = fVar9;
  pfVar8 = (float *)(param_1 + 0x1c4);
  *(short *)(param_1 + 0xe4) = *(short *)(param_1 + 0xe4) << 2;
  iVar5 = *(int *)(param_1 + 4);
  if (*(int *)(iVar5 + 0x344) == 0) {
    *pfVar8 = 0.0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
  }
  else {
    fVar3 = *pfVar8;
    if ((fVar3 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar3) + 0x1c) == *(int *)(param_1 + 0x1c8))) {
      func_00110848((int)ALBW_AS_U32(fVar3));
    }
    func_004A1B9C((int *)&local_38,*(int *)(iVar5 + 0x344),(uint *)(s__RollCutEX_00386793 + 1));
    *pfVar8 = local_38;
    *(float *)(param_1 + 0x1c8) = local_34;
  }
  func_00386930(param_1);
  if ((0 < *(int *)(param_1 + 300)) &&
     ((sVar1 = *(short *)(param_1 + 0x13a), sVar1 == 3 || (*(int *)(param_1 + 0x10) < 0x1e)))) {
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x130) * 0x30;
    uVar6 = *(undefined4 *)(iVar5 + 0xc);
    uVar7 = *(undefined4 *)(iVar5 + 0x2c);
    puVar4 = *(undefined4 **)(param_1 + 4);
    pfVar8 = (float *)(puVar4 + 0xf5);
    if (sVar1 == 3) {
      puVar4 = puVar4 + 0xf4;
      uVar6 = *puVar4;
    }
    fVar3 = *pfVar8 + DAT_003867a0;
    if (sVar1 == 3) {
      uVar7 = puVar4[2];
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar6;
    uVar6 = DAT_003867a8;
    *(float *)(param_1 + 0x50) = fVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    fVar3 = DAT_003867a4;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0x124) * DAT_003867a4;
    *(undefined4 *)(param_1 + 0xa4) = uVar6;
    *(float *)(param_1 + 0xa8) = *(float *)(param_1 + 0x124) * fVar3;
    func_004356B4((int *)(param_1 + 0x48));
    fVar3 = DAT_003867ac;
    if (*(short *)(param_1 + 0x13a) == 3) {
      func_0014D994((float *)(param_1 + 0x124),DAT_003867bc,DAT_003867b8,DAT_003867b4);
    }
    else {
      *(float *)(param_1 + 0x128) = fVar9;
      *(float *)(param_1 + 0x124) = fVar3;
    }
    piVar2 = DAT_003867b0;
    func_004D80A4(&local_38,**(uint **)(*DAT_003867b0 + 0x24),fVar3);
    local_34 = fVar9;
    func_00115C70(&local_2c,*(float **)(*piVar2 + 0x1c),(float *)(*(int *)(param_1 + 4) + 0x3d0));
    if (local_2c * local_38 + local_28 * local_34 + fStack_24 * fStack_30 < fVar9) {
      func_00386CA8(param_1);
    }
  }
  return;
}

