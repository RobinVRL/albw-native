#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern float DAT_00528420;
extern undefined4 DAT_00528424;

// USA 005283C8 <- EU 005283A0 (Ghidra, non-matching)
// GLOBAL DAT_00528420 float
// GLOBAL DAT_00528424 undefined4

bool func_005283C8(int param_1,float *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c ((float *)(albw_frame + 0x14))
  #define local_14 (*(float *)(albw_frame + 0x1c))
  local_28 = DAT_00528420;
  local_24 = DAT_00528420;
  uStack_20 = DAT_00528424;
  func_004D7F70(&local_28,*(int *)(param_1 + 1000) + 0x80000000);
  func_00115C54(local_1c,(float *)(param_1 + 0x3d0),&local_28);
  return 0x3effffff <
         (int)ALBW_AS_U32(SQRT((*param_2 - local_1c[0]) * (*param_2 - local_1c[0]) +
                   (param_2[2] - local_14) * (param_2[2] - local_14)));
}

