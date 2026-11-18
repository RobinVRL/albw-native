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

// USA 00149D90 <- EU 00149D90 (Ghidra, non-matching)
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

void func_00149D90(int param_1,int param_2)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float in_s1;
  float in_s2;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define fStack_58 (*(float *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_4c (*(float *)(albw_frame + 0x14))
  #define fStack_48 (*(float *)(albw_frame + 0x18))
  #define fStack_44 (*(float *)(albw_frame + 0x1c))
  #define fStack_40 (*(float *)(albw_frame + 0x20))
  #define fStack_3c (*(float *)(albw_frame + 0x24))
  #define fStack_38 (*(float *)(albw_frame + 0x28))
  #define fStack_34 (*(float *)(albw_frame + 0x2c))
  #define fStack_30 (*(float *)(albw_frame + 0x30))
  #define fStack_2c (*(float *)(albw_frame + 0x34))
  #define fStack_28 (*(float *)(albw_frame + 0x38))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x40))
  iVar3 = *(int *)(param_1 + 0x34);
  fStack_4c = *(float *)(param_2 + 0x1b0);
  fStack_48 = *(float *)(param_2 + 0x1b4);
  fStack_44 = *(float *)(param_2 + 0x1b8);
  fStack_40 = *(float *)(param_2 + 0x1bc);
  fStack_3c = *(float *)(param_2 + 0x1c0);
  fStack_38 = *(float *)(param_2 + 0x1c4);
  fStack_34 = fStack_4c;
  fStack_30 = fStack_48;
  fStack_2c = fStack_44;
  func_00115C70(&fStack_28,&fStack_40,&fStack_4c);
  *(float *)(iVar3 + 0x80) = fStack_28;
  *(undefined4 *)(iVar3 + 0x84) = uStack_24;
  *(undefined4 *)(iVar3 + 0x88) = uStack_20;
  fVar5 = func_00115DC8((float *)(iVar3 + 0x80));
  fVar8 = DAT_0014a070;
  puVar1 = DAT_0014a06c;
  fVar6 = DAT_0014a068;
  if (fVar5 != DAT_0014a068) {
    *(undefined1 *)(iVar3 + 0xa2) = 1;
    if (*(char *)(iVar3 + 0xa0) == '\0') {
      fStack_34 = fStack_40;
      fStack_30 = fStack_3c;
      fStack_2c = fStack_38;
      if (((puVar1[1] & 1) == 0) &&
         (iVar4 = func_00100174(DAT_0014a090), pfVar2 = DAT_0014a094, iVar4 != 0)) {
        *DAT_0014a094 = fVar6;
        pfVar2[1] = fVar8;
        pfVar2[2] = fVar6;
      }
      pfVar2 = DAT_0014a094;
      *(float *)(iVar3 + 0x74) = *DAT_0014a094;
      *(float *)(iVar3 + 0x78) = pfVar2[1];
      *(float *)(iVar3 + 0x7c) = pfVar2[2];
      func_00115DC8((float *)(iVar3 + 0x74));
      *(float *)(iVar3 + 0x94) = fVar6;
    }
    else {
      fStack_34 = func_004997A0(&fStack_4c,&fStack_40,DAT_0014a074);
      *(float *)(iVar3 + 0x9c) =
           SQRT((fStack_4c - fStack_34) * (fStack_4c - fStack_34) +
                (fStack_48 - in_s1) * (fStack_48 - in_s1) +
                (fStack_44 - in_s2) * (fStack_44 - in_s2));
      fStack_30 = in_s1;
      fStack_2c = in_s2;
      if (((*puVar1 & 1) == 0) &&
         (iVar4 = func_00100174((int *)puVar1), pfVar2 = DAT_0014a078, iVar4 != 0)) {
        *DAT_0014a078 = fVar6;
        pfVar2[1] = fVar6;
        pfVar2[2] = fVar8;
      }
      pfVar2 = DAT_0014a078;
      *(float *)(iVar3 + 0x74) = *DAT_0014a078;
      *(float *)(iVar3 + 0x78) = pfVar2[1];
      *(float *)(iVar3 + 0x7c) = pfVar2[2];
      func_00115DC8((float *)(iVar3 + 0x74));
      *(float *)(iVar3 + 0x94) = fStack_48 - fStack_30;
      fVar6 = *(float *)(param_2 + 0xe8);
      if (*(float *)(iVar3 + 0x90) != fVar6) {
        *(float *)(iVar3 + 0x90) = fVar6;
        uVar7 = VectorFloatToUnsigned(fVar6 * DAT_0014a07c * DAT_0014a080 * DAT_0014a084,3);
        fVar6 = func_00115194(uVar7);
        func_002568A8(*(int *)(iVar3 + 0x18),
                      ((*(float *)(iVar3 + 0x9c) * fVar6) / *(float *)(iVar3 + 0x94)) * DAT_0014a088
                      * DAT_0014a08c);
      }
    }
    *(float *)(iVar3 + 0x5c) = fStack_34;
    *(float *)(iVar3 + 0x60) = fStack_30;
    *(float *)(iVar3 + 100) = fStack_2c;
    func_00115C54(&fStack_58,&fStack_34,(float *)(iVar3 + 0x80));
    fStack_40 = fStack_58;
    fStack_3c = ALBW_AS_F32(uStack_54);
    fStack_38 = ALBW_AS_F32(uStack_50);
    *(float *)(iVar3 + 0x68) = fStack_58;
    *(undefined4 *)(iVar3 + 0x6c) = uStack_54;
    *(undefined4 *)(iVar3 + 0x70) = uStack_50;
    (**(code **)(*(int *)(iVar3 + 0x28) + 0x10))(iVar3 + 0x28,iVar3 + 0x2c);
    func_00409250(iVar3,(float *)(iVar3 + 0x2c));
  }
  return;
}

