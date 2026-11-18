#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_002BC6B0(int param_1);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002bcd64;
extern int DAT_002bcd68;
extern int DAT_002bcd6c;
extern float DAT_002bcd70;

// USA 002BCCBC <- EU 002BCC98 (Ghidra, non-matching)
// GLOBAL DAT_002bcd64 undefined4
// GLOBAL DAT_002bcd68 int
// GLOBAL DAT_002bcd6c int
// GLOBAL DAT_002bcd70 float

undefined4 func_002BCCBC(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((float *)(albw_frame + 0x0))
  #define local_18 (*(float *)(albw_frame + 0x8))
  func_002BC6B0(param_1);
  func_00115C70(local_20,(float *)(param_1 + 0x920),(float *)(param_1 + 0x3d0));
  uVar1 = DAT_002bcd64;
  *(float *)(param_1 + 0x3dc) = local_20[0];
  *(float *)(param_1 + 0x3e4) = local_18;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  fparam_0 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) + local_18 * local_18);
  fVar2 = func_00115DC8((float *)(param_1 + 0x3dc));
  if ((int)ALBW_AS_U32(fVar2) < DAT_002bcd68) {
    return func_00662A14((undefined4 *)(param_1 + 0x8bc),5);
  }
  if ((int)ALBW_AS_U32(fparam_0) < DAT_002bcd6c) {
    return func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fparam_0);
  }
  return func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_002bcd70);
}

