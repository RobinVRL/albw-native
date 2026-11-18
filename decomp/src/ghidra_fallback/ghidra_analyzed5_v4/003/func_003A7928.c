#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_002D5350(int param_1,int param_2,int param_3,float fparam_0);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern float DAT_003a79e0;
extern int DAT_003a79e4;
extern float DAT_003a79e8;
extern float DAT_003a79ec;

// USA 003A7928 <- EU 003A7904 (Ghidra, non-matching)
// GLOBAL DAT_003a79e0 float
// GLOBAL DAT_003a79e4 int
// GLOBAL DAT_003a79e8 float
// GLOBAL DAT_003a79ec float

bool func_003A7928(int param_1,float *param_2,int param_3,float fparam_0)

{
  uint uVar1;
  float *pfVar2;
  bool bVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c ((float *)(albw_frame + 0x4))
  pfVar2 = *(float **)(param_1 + 0x30);
  uVar1 = **(uint **)(param_1 + 0x3c);
  bVar3 = false;
  if ((DAT_003a79e4 <
       (int)ALBW_AS_U32(SQRT((*pfVar2 - *param_2) * (*pfVar2 - *param_2) +
                 (pfVar2[2] - param_2[2]) * (pfVar2[2] - param_2[2])))) ||
     (bVar3 = param_3 != 0, fVar4 = DAT_003a79e8, !bVar3)) {
    fVar4 = DAT_003a79e0;
    uVar1 = func_004D80EC(pfVar2,param_2,uVar1);
  }
  func_00115154(&local_20,local_1c,uVar1);
  *(float *)(*(int *)(param_1 + 0x34) + 4) = fparam_0;
  **(float **)(param_1 + 0x38) = fVar4 * local_20;
  *(float *)(*(int *)(param_1 + 0x38) + 8) = fVar4 * local_1c[0];
  func_002D5350(param_1,0,7,fVar4 * DAT_003a79ec);
  return bVar3;
}

