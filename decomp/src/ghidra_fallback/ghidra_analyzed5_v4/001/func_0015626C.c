#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float *DAT_001563b0;
extern float DAT_001563b4;
extern float DAT_001563b8;
extern float DAT_001563bc;
extern float DAT_001563c0;
extern float DAT_001563c4;

// USA 0015626C <- EU 00156270 (Ghidra, non-matching)
// GLOBAL DAT_001563b0 float *
// GLOBAL DAT_001563b4 float
// GLOBAL DAT_001563b8 float
// GLOBAL DAT_001563bc float
// GLOBAL DAT_001563c0 float
// GLOBAL DAT_001563c4 float

undefined4 func_0015626C(int param_1)

{
  byte bVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define local_3c (*(float *)(albw_frame + 0x4))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define fStack_20 (*(float *)(albw_frame + 0x20))
  *(undefined4 *)(param_1 + 0x91c) = 0;
  func_00115D70(&local_28,DAT_001563b0,DAT_001563b4);
  local_34 = local_28;
  fStack_30 = fStack_24;
  fStack_2c = fStack_20;
  func_00115C54(&local_28,(float *)(param_1 + 8),&local_34);
  local_40 = local_28;
  local_3c = fStack_24;
  local_38 = fStack_20;
  func_00115C70(&local_40,&local_40,(float *)(param_1 + 0x3d0));
  fVar5 = local_3c;
  fVar3 = SQRT(local_40 * local_40 + local_38 * local_38) * DAT_001563b8;
  iVar6 = (int)fVar3;
  fVar7 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = in_fpscr & 0xfffffff | (uint)(fVar7 == fVar3) << 0x1e;
  if ((!SUB41(uVar2 >> 0x1e,0)) &&
     (uVar2 = in_fpscr & 0xfffffff | (uint)(DAT_001563bc == fVar3) << 0x1e |
              (uint)(fVar3 <= DAT_001563bc) << 0x1d, bVar1 = (byte)(uVar2 >> 0x18),
     !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
    iVar6 = iVar6 + 1;
  }
  local_3c = DAT_001563bc;
  fVar7 = DAT_001563bc;
  func_00115DC8(&local_40);
  fVar3 = DAT_001563c0;
  fVar4 = (float)VectorSignedToFloat(iVar6,(byte)(uVar2 >> 0x15) & 3);
  *(float *)(param_1 + 0x3dc) = local_40 * DAT_001563c0;
  *(float *)(param_1 + 0x3e4) = local_38 * fVar3;
  *(float *)(param_1 + 0x3e0) = fVar5 / fVar4;
  *(int *)(param_1 + 0x8e4) = iVar6;
  if (iVar6 == 0) {
    *(float *)(param_1 + 0x8e8) = fVar7;
  }
  else {
    fVar5 = (float)VectorUnsignedToFloat(iVar6,(byte)(uVar2 >> 0x15) & 3);
    *(float *)(param_1 + 0x8e8) = DAT_001563c4 / fVar5;
  }
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  *(undefined2 *)(param_1 + 0x920) = 0;
  return func_004FABDC(param_1,1,0xffffffff,0);
}

