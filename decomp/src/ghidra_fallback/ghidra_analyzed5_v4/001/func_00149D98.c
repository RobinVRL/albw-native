#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern float func_00115194(uint param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_002568A8(int param_1,float fparam_0);
extern int func_00409250(int param_1,float *param_2);
extern float func_004997A0(float *param_1,float *param_2,float fparam_0);
extern float DAT_0014a068;
extern uint *DAT_0014a06c;
extern float DAT_0014a070;
extern float DAT_0014a074;
extern float *DAT_0014a078;
extern float DAT_0014a07c;
extern float DAT_0014a080;
extern float DAT_0014a084;
extern float DAT_0014a088;
extern float DAT_0014a08c;
extern int *DAT_0014a090;
extern float *DAT_0014a094;

// USA 00149D98 <- EU 00149D98 (Ghidra, non-matching)
// GLOBAL DAT_0014a068 float
// GLOBAL DAT_0014a06c uint *
// GLOBAL DAT_0014a070 float
// GLOBAL DAT_0014a074 float
// GLOBAL DAT_0014a078 float *
// GLOBAL DAT_0014a07c float
// GLOBAL DAT_0014a080 float
// GLOBAL DAT_0014a084 float
// GLOBAL DAT_0014a088 float
// GLOBAL DAT_0014a08c float
// GLOBAL DAT_0014a090 int *
// GLOBAL DAT_0014a094 float *

void func_00149D98(int param_1,int param_2)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float in_s1;
  float in_s2;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(float *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define local_2c (*(float *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  local_4c = *(float *)(param_2 + 0x1b0);
  local_48 = *(float *)(param_2 + 0x1b4);
  local_44 = *(float *)(param_2 + 0x1b8);
  local_40 = *(float *)(param_2 + 0x1bc);
  local_3c = *(float *)(param_2 + 0x1c0);
  local_38 = *(float *)(param_2 + 0x1c4);
  local_34 = local_4c;
  local_30 = local_48;
  local_2c = local_44;
  func_00115C70(&local_28,&local_40,&local_4c);
  *(float *)(param_1 + 0x80) = local_28;
  *(undefined4 *)(param_1 + 0x84) = uStack_24;
  *(undefined4 *)(param_1 + 0x88) = uStack_20;
  fVar4 = func_00115DC8((float *)(param_1 + 0x80));
  fVar7 = DAT_0014a070;
  puVar1 = DAT_0014a06c;
  fVar5 = DAT_0014a068;
  if (fVar4 != DAT_0014a068) {
    *(undefined1 *)(param_1 + 0xa2) = 1;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      local_34 = local_40;
      local_30 = local_3c;
      local_2c = local_38;
      if (((puVar1[1] & 1) == 0) &&
         (iVar3 = func_00100174(DAT_0014a090), pfVar2 = DAT_0014a094, iVar3 != 0)) {
        *DAT_0014a094 = fVar5;
        pfVar2[1] = fVar7;
        pfVar2[2] = fVar5;
      }
      pfVar2 = DAT_0014a094;
      *(float *)(param_1 + 0x74) = *DAT_0014a094;
      *(float *)(param_1 + 0x78) = pfVar2[1];
      *(float *)(param_1 + 0x7c) = pfVar2[2];
      func_00115DC8((float *)(param_1 + 0x74));
      *(float *)(param_1 + 0x94) = fVar5;
    }
    else {
      local_34 = func_004997A0(&local_4c,&local_40,DAT_0014a074);
      *(float *)(param_1 + 0x9c) =
           SQRT((local_4c - local_34) * (local_4c - local_34) +
                (local_48 - in_s1) * (local_48 - in_s1) + (local_44 - in_s2) * (local_44 - in_s2));
      local_30 = in_s1;
      local_2c = in_s2;
      if (((*puVar1 & 1) == 0) &&
         (iVar3 = func_00100174((int *)puVar1), pfVar2 = DAT_0014a078, iVar3 != 0)) {
        *DAT_0014a078 = fVar5;
        pfVar2[1] = fVar5;
        pfVar2[2] = fVar7;
      }
      pfVar2 = DAT_0014a078;
      *(float *)(param_1 + 0x74) = *DAT_0014a078;
      *(float *)(param_1 + 0x78) = pfVar2[1];
      *(float *)(param_1 + 0x7c) = pfVar2[2];
      func_00115DC8((float *)(param_1 + 0x74));
      *(float *)(param_1 + 0x94) = local_48 - local_30;
      fVar5 = *(float *)(param_2 + 0xe8);
      if (*(float *)(param_1 + 0x90) != fVar5) {
        *(float *)(param_1 + 0x90) = fVar5;
        uVar6 = VectorFloatToUnsigned(fVar5 * DAT_0014a07c * DAT_0014a080 * DAT_0014a084,3);
        fVar5 = func_00115194(uVar6);
        func_002568A8(*(int *)(param_1 + 0x18),
                      ((*(float *)(param_1 + 0x9c) * fVar5) / *(float *)(param_1 + 0x94)) *
                      DAT_0014a088 * DAT_0014a08c);
      }
    }
    *(float *)(param_1 + 0x5c) = local_34;
    *(float *)(param_1 + 0x60) = local_30;
    *(float *)(param_1 + 100) = local_2c;
    func_00115C54(&local_58,&local_34,(float *)(param_1 + 0x80));
    local_40 = local_58;
    local_3c = ALBW_AS_F32(local_54);
    local_38 = ALBW_AS_F32(uStack_50);
    *(float *)(param_1 + 0x68) = local_58;
    *(undefined4 *)(param_1 + 0x6c) = local_54;
    *(undefined4 *)(param_1 + 0x70) = uStack_50;
    (**(code **)(*(int *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,param_1 + 0x2c);
    func_00409250(param_1,(float *)(param_1 + 0x2c));
  }
  return;
}

