#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0065E110(undefined4 *param_1,undefined1 param_2);
extern float DAT_0021d3f4;
extern float DAT_0021d3f8;
extern float DAT_0021d3fc;
extern float DAT_0021d400;
extern int DAT_0021d404;

// USA 0021D2F8 <- EU 0021D2F8 (Ghidra, non-matching)
// GLOBAL DAT_0021d3f4 float
// GLOBAL DAT_0021d3f8 float
// GLOBAL DAT_0021d3fc float
// GLOBAL DAT_0021d400 float
// GLOBAL DAT_0021d404 int

void func_0021D2F8(int param_1)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  fVar2 = DAT_0021d3fc;
  fVar3 = DAT_0021d3f4;
  fVar1 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0x8e0) * 0x40000000 -
                                     *(int *)(param_1 + 1000),(byte)(in_fpscr >> 0x15) & 3);
  *(int *)(param_1 + 0x4fc) = (int)(fVar1 * DAT_0021d3f8);
  func_00115D70(&local_24,(float *)(param_1 + 0x8e4),fVar2);
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  func_00115C54((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),&local_30);
  fVar2 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar2);
  fVar2 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
               *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
  if ((DAT_0021d400 < fVar2) && (DAT_0021d404 < (int)ALBW_AS_U32(fVar2))) {
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fVar3 / fVar2);
  }
  if (*(uint *)(param_1 + 0x8fc) < *(uint *)(param_1 + 0x900)) {
    *(uint *)(param_1 + 0x8fc) = *(uint *)(param_1 + 0x8fc) + 1;
  }
  else {
    func_0065E110((undefined4 *)(param_1 + 0x8bc),0);
  }
  return;
}

