#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern float func_002900EC(int param_1,int param_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_0054C998(int param_1,int param_2);
extern float DAT_002d5c30;
extern float DAT_002d5c34;
extern int DAT_002d5c38;
extern float DAT_002d5c3c;
extern float DAT_002d5c40;
extern int DAT_002d5c44;
extern float DAT_002d5c48;

// USA 002D5ADC <- EU 002D5AB8 (Ghidra, non-matching)
// GLOBAL DAT_002d5c30 float
// GLOBAL DAT_002d5c34 float
// GLOBAL DAT_002d5c38 int
// GLOBAL DAT_002d5c3c float
// GLOBAL DAT_002d5c40 float
// GLOBAL DAT_002d5c44 int
// GLOBAL DAT_002d5c48 float

float func_002D5ADC(int param_1,float fparam_0)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c ((float *)(albw_frame + 0x4))
  uVar3 = (uint)(*(int *)(*(int *)(param_1 + 0x28) + 0x5b0) != 0x3f800000);
  uVar2 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
  *(uint *)(param_1 + 0x5c) = uVar2;
  if (uVar3 == 0) {
    fVar4 = DAT_002d5c34;
    if (((*(uint *)(*(int *)(param_1 + 0x50) + 0x328) & 2) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x50) + 0x33c) == '\t')) {
      fVar4 = DAT_002d5c30;
    }
    func_0051D2CC(*(int **)(param_1 + 0x3c),uVar2,fVar4);
  }
  else {
    **(uint **)(param_1 + 0x3c) = uVar2;
  }
  fVar5 = func_002900EC(*(int *)(param_1 + 0x2c),uVar3);
  iVar1 = DAT_002d5c44;
  fVar4 = DAT_002d5c3c;
  if (DAT_002d5c38 < (int)ALBW_AS_U32(fVar5)) {
    fVar6 = *(float *)(param_1 + 0x60) + DAT_002d5c40;
    *(float *)(param_1 + 0x60) = fVar6;
    if (iVar1 < (int)ALBW_AS_U32(fVar6)) {
      fVar6 = DAT_002d5c48;
    }
    *(float *)(param_1 + 0x60) = fVar6;
  }
  else {
    *(float *)(param_1 + 0x60) = DAT_002d5c3c;
    fVar6 = fVar4;
  }
  fVar5 = (fVar6 + fVar5) * fparam_0;
  if (uVar3 == 0) {
    func_00115154(&local_20,local_1c,uVar2);
    **(float **)(param_1 + 0x38) = fVar5 * local_20;
    *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar5 * local_1c[0];
  }
  else if (fVar4 < fVar5) {
    if (NAN(*(float *)(*(int *)(param_1 + 0x48) + 0x28)) || NAN(fVar4)) {
      **(undefined1 **)(param_1 + 0x40) = 1;
      **(float **)(param_1 + 0x38) = -fVar5;
    }
    else {
      **(undefined1 **)(param_1 + 0x40) = 0;
      **(float **)(param_1 + 0x38) = fVar5;
    }
  }
  return fVar5;
}

