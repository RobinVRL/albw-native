#include "ghidra_types.h"

extern int func_0044E4F8(int param_1,float *param_2);
extern int func_0066CD9C(undefined4 *param_1,undefined1 param_2);
extern float func_0068C7E0(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4, float fparam_5,float fparam_6);
extern int DAT_0044d450;
extern float DAT_0044d454;
extern float DAT_0044d458;
extern float DAT_0044d45c;
extern float DAT_0044d460;
extern float DAT_0044d464;

// USA 0044D3DC <- EU 0044D3B4 (Ghidra, non-matching)
// GLOBAL DAT_0044d450 int
// GLOBAL DAT_0044d454 float
// GLOBAL DAT_0044d458 float
// GLOBAL DAT_0044d45c float
// GLOBAL DAT_0044d460 float
// GLOBAL DAT_0044d464 float

undefined4 func_0044D3DC(int param_1)

{
  uint in_fpscr;
  float fparam_0;
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  fparam_0 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb0),(byte)(in_fpscr >> 0x15) & 3
                                       );
  if ((int)ALBW_AS_U32(fparam_0) <= DAT_0044d450) {
    fVar1 = *(float *)(param_1 + 0xf0) + *(float *)(*(int *)(param_1 + 0x11c) + 0x1c);
    if (fVar1 < DAT_0044d454) {
      fVar1 = DAT_0044d454;
    }
    local_14 = func_0068C7E0(fparam_0,DAT_0044d464,*(float *)(param_1 + 0xf4),DAT_0044d460,
                             DAT_0044d45c,DAT_0044d458,*(float *)(param_1 + 0xf8));
    local_18 = fVar1;
    return func_0044E4F8(param_1,&local_18);
  }
  return func_0066CD9C((undefined4 *)(param_1 + 0xb0),0xc);
}

