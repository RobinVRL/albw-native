#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float *DAT_00354374;
extern float DAT_00354378;
extern float DAT_0035437c;
extern int DAT_00354380;
extern int DAT_00354384;
extern undefined4 DAT_00354388;

// USA 00354280 <- EU 0035425C (Ghidra, non-matching)
// GLOBAL DAT_00354374 float *
// GLOBAL DAT_00354378 float
// GLOBAL DAT_0035437c float
// GLOBAL DAT_00354380 int
// GLOBAL DAT_00354384 int
// GLOBAL DAT_00354388 undefined4

void func_00354280(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  #define afStack_1c ((float *)(albw_frame + 0x14))
  func_00115C54(afStack_1c,(float *)(param_1 + 8),DAT_00354374);
  fVar2 = param_2[1];
  func_00115C70(&local_28,param_2,afStack_1c);
  local_24 = DAT_00354378;
  if (DAT_00354378 <= local_20) {
    if ((int)ALBW_AS_U32(local_28) <= DAT_00354380) goto LAB_0035433c;
    local_28 = DAT_0035437c;
  }
  else {
    if ((int)ALBW_AS_U32(SQRT(local_28 * local_28 + local_20 * local_20)) <= DAT_00354380) goto LAB_0035433c;
    fVar1 = SQRT(local_28 * local_28 + DAT_00354378 * DAT_00354378 + local_20 * local_20);
    if (DAT_00354378 < fVar1) {
      fVar1 = DAT_0035437c / fVar1;
      local_28 = local_28 * fVar1;
      local_24 = DAT_00354378 * fVar1;
      local_20 = local_20 * fVar1;
    }
  }
  func_00115C54(param_2,&local_28,afStack_1c);
  param_2[1] = fVar2;
LAB_0035433c:
  if (DAT_00354384 < (int)ALBW_AS_U32(local_20)) {
    local_20 = ALBW_AS_F32(DAT_00354388);
    func_00115C54(param_2,&local_28,afStack_1c);
    param_2[1] = fVar2;
  }
  return;
}

