#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00536CA4(undefined4 param_1,float *param_2,float *param_3,float fparam_0,float fparam_1, float fparam_2,float fparam_3);
extern float DAT_0024c53c;
extern float DAT_0024c540;

// USA 0024C3E0 <- EU 0024C3E0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// GLOBAL DAT_0024c53c float
// GLOBAL DAT_0024c540 float

float func_0024C3E0(undefined4 param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 ((float *)(albw_frame + 0x8))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c ((float *)(albw_frame + 0x14))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  fVar4 = DAT_0024c53c;
  if (*param_5 == DAT_0024c53c) {
    bVar3 = false;
    if (param_5[1] == DAT_0024c53c) {
      bVar3 = param_5[2] == DAT_0024c53c;
    }
    if (bVar3) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      *param_2 = *param_3;
      param_2[1] = fVar1;
      param_2[2] = fVar2;
      return fVar4;
    }
  }
  fVar1 = DAT_0024c53c;
  func_00115C54(param_2,param_3,param_5);
  func_00536CA4(param_1,local_38,param_3,*(float *)param_4,*(float *)(param_4 + 4),
                *(float *)(param_4 + 8),DAT_0024c540);
  func_00115C54(local_2c,param_2,local_38);
  fVar4 = local_38[0];
  if (local_38[0] <= fVar1) {
    fVar4 = -local_38[0];
  }
  if (fVar4 <= fVar1) {
    if ((fVar1 < local_30) && (*(float *)(param_4 + 8) < local_24)) {
      return local_24 - *(float *)(param_4 + 8);
    }
    if (fVar1 <= local_30) {
      return fVar1;
    }
    fVar4 = *(float *)(param_4 + 8);
    local_2c[0] = local_24;
    if (fVar4 <= local_24) {
      return fVar1;
    }
  }
  else {
    if ((fVar1 < local_38[0]) && (*(float *)param_4 < local_2c[0])) {
      return local_2c[0] - *(float *)param_4;
    }
    if (fVar1 <= local_38[0]) {
      return fVar1;
    }
    fVar4 = *(float *)param_4;
    if (fVar4 <= local_2c[0]) {
      return fVar1;
    }
  }
  return fVar4 - local_2c[0];
}

