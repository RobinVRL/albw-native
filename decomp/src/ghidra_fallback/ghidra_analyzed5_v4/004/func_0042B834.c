#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float DAT_0042b99c;
extern float DAT_0042b9a0;
extern float DAT_0042b9a4;

// USA 0042B834 <- EU 0042B814 (Ghidra, non-matching)
// GLOBAL DAT_0042b99c float
// GLOBAL DAT_0042b9a0 float
// GLOBAL DAT_0042b9a4 float

undefined4 func_0042B834(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined8 uVar8;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define afStack_44 ((float *)(albw_frame + 0x2c))
  func_00115D70(afStack_44,(float *)(param_1 + 0x58),DAT_0042b99c);
  fVar5 = *(float *)(param_2 + 0x60);
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  fVar7 = ALBW_AS_F32(uVar8);
  if (SQRT(fVar7 * fVar7 + fVar5 * fVar5) == DAT_0042b9a0) {
    fVar3 = *(float *)(param_1 + 100);
    fVar2 = DAT_0042b9a0;
  }
  else {
    fVar2 = fVar7 * *(float *)(param_1 + 100);
    fVar3 = fVar5 * *(float *)(param_1 + 100);
  }
  fVar9 = ALBW_AS_F32(((ulonglong)uVar8 >> 0x20));
  if (DAT_0042b9a0 <= fVar9) {
    fVar4 = -*(float *)(param_1 + 0x68);
  }
  else {
    fVar4 = *(float *)(param_1 + 0x68);
  }
  fVar6 = DAT_0042b9a0;
  if (DAT_0042b9a4 < fVar7) {
    fVar6 = -fVar2;
  }
  if (fVar9 <= DAT_0042b9a4) {
    fVar4 = DAT_0042b9a0;
  }
  fVar2 = DAT_0042b9a0;
  if (DAT_0042b9a4 < fVar5) {
    fVar2 = -fVar3;
  }
  fVar3 = -(fVar7 * fVar6 + fVar9 * fVar4 + fVar5 * fVar2);
  fVar7 = DAT_0042b9a0;
  func_00115D70(&local_50,(float *)(param_2 + 0x58),*(float *)(param_2 + 100));
  local_5c = local_50;
  uStack_58 = uStack_4c;
  uStack_54 = uStack_48;
  func_00115C70(&local_68,(float *)(param_1 + 4),&local_5c);
  fVar3 = fVar3 - (ALBW_AS_F32(uVar8) * local_68 + ALBW_AS_F32(((ulonglong)uVar8 >> 0x20)) * local_64 +
                  fVar5 * fStack_60);
  if (fVar3 <= fVar7) {
    uVar1 = 0;
  }
  else {
    if (param_3 != 0) {
      *(float *)(param_3 + 0x1c) = fVar3;
      *(undefined4 *)(param_3 + 4) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x60);
      *(float *)(param_3 + 0x10) = fVar6;
      *(float *)(param_3 + 0x14) = fVar4;
      *(float *)(param_3 + 0x18) = fVar2;
      func_00115C54((float *)(param_3 + 0x10),(float *)(param_3 + 0x10),(float *)(param_1 + 4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

