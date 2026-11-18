#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0048B57C(float *param_1,float *param_2,float fparam_0);
extern int func_0048B620(float *param_1,float *param_2,float *param_3);
extern float DAT_0033ece4;
extern float DAT_0033ece8;
extern float *DAT_0033ecec;
extern float DAT_0033ecf0;

// USA 0033EBEC <- EU 0033EBC8 (Ghidra, non-matching)
// GLOBAL DAT_0033ece4 float
// GLOBAL DAT_0033ece8 float
// GLOBAL DAT_0033ecec float *
// GLOBAL DAT_0033ecf0 float

void func_0033EBEC(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define fStack_4c (*(float *)(albw_frame + 0x4))
  #define fStack_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define afStack_40 ((float *)(albw_frame + 0x10))
  #define afStack_34 ((float *)(albw_frame + 0x1c))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define fStack_24 (*(float *)(albw_frame + 0x2c))
  #define local_20 (*(float *)(albw_frame + 0x30))
  #define fStack_1c (*(float *)(albw_frame + 0x34))
  func_00115C70(afStack_34,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x480));
  fVar2 = *(float *)(param_1 + 0x434) * DAT_0033ece4;
  func_00115E10(afStack_40,(float *)(param_1 + 0x48c),afStack_34);
  fVar1 = func_00115DC8(afStack_40);
  fVar3 = DAT_0033ece8;
  if (fVar1 == DAT_0033ece8) {
    local_50 = *DAT_0033ecec;
    fStack_4c = DAT_0033ecec[1];
    fStack_48 = DAT_0033ecec[2];
    local_44 = DAT_0033ecec[3];
  }
  else {
    func_0048B57C(&local_50,afStack_40,fVar2);
  }
  func_0048B620(&local_28,&local_50,(float *)(param_1 + 0x4b0));
  *(float *)(param_1 + 0x4b8) = local_20;
  *(float *)(param_1 + 0x4bc) = fStack_1c;
  *(float *)(param_1 + 0x4b0) = local_28;
  *(float *)(param_1 + 0x4b4) = fStack_24;
  fVar2 = *(float *)(param_1 + 0x4b0);
  fVar1 = SQRT(fStack_1c * fStack_1c + fVar2 * fVar2 + fStack_24 * fStack_24 + local_20 * local_20);
  if (fVar3 < fVar1) {
    fVar1 = DAT_0033ecf0 / fVar1;
    *(float *)(param_1 + 0x4bc) = fStack_1c * fVar1;
    *(float *)(param_1 + 0x4b8) = *(float *)(param_1 + 0x4b8) * fVar1;
    *(float *)(param_1 + 0x4b0) = fVar2 * fVar1;
    *(float *)(param_1 + 0x4b4) = *(float *)(param_1 + 0x4b4) * fVar1;
  }
  return;
}

