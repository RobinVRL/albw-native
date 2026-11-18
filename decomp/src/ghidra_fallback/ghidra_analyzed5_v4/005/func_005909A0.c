#include "ghidra_types.h"

extern int func_00100986(undefined4 param_1);
extern float func_005919C4(uint *param_1,uint param_2,float fparam_0);
extern uint DAT_00590ab4;
extern float DAT_00590ab8;
extern float DAT_00590abc;
extern float DAT_00590ac0;
extern float DAT_00590ac4;
extern float DAT_00590ac8;
extern float DAT_00590acc;
extern float DAT_00590ad0;
extern float DAT_00590ad4;
extern float DAT_00590ad8;
extern float DAT_00590adc;
extern float DAT_00590ae0;
extern float DAT_00590ae4;
extern float DAT_00590ae8;
extern float DAT_00590aec;
extern float DAT_00590af0;

// USA 005909A0 <- EU 00590978 (Ghidra, non-matching)
// GLOBAL DAT_00590ab4 uint
// GLOBAL DAT_00590ab8 float
// GLOBAL DAT_00590abc float
// GLOBAL DAT_00590ac0 float
// GLOBAL DAT_00590ac4 float
// GLOBAL DAT_00590ac8 float
// GLOBAL DAT_00590acc float
// GLOBAL DAT_00590ad0 float
// GLOBAL DAT_00590ad4 float
// GLOBAL DAT_00590ad8 float
// GLOBAL DAT_00590adc float
// GLOBAL DAT_00590ae0 float
// GLOBAL DAT_00590ae4 float
// GLOBAL DAT_00590ae8 float
// GLOBAL DAT_00590aec float
// GLOBAL DAT_00590af0 float

float func_005909A0(float fparam_0)

{
  uint uVar1;
  uint in_r3;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_8 ((uint *)(albw_frame + 0x8))
  if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < DAT_00590ab4) {
    if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < 0x73000000) {
      local_8[0] = 0xffffffff;
    }
    else {
      local_8[0] = 0;
    }
  }
  else if ((uint)ALBW_AS_U32(ABS(fparam_0)) < (uint)ALBW_AS_U32(DAT_00590ab8)) {
    if (((uint)ALBW_AS_U32(fparam_0) & 0x80000000) == 0) {
      fVar2 = (fparam_0 * DAT_00590abc + DAT_00590ac0) - DAT_00590ac0;
    }
    else {
      fVar2 = (fparam_0 * DAT_00590abc - DAT_00590ac0) + DAT_00590ac0;
    }
    local_8[0] = (int)fVar2 & 3;
    fparam_0 = (((fparam_0 - fVar2 * DAT_00590ac4) - fVar2 * DAT_00590ac8) - fVar2 * DAT_00590acc) -
               fVar2 * DAT_00590ad0;
  }
  else {
    local_8[0] = in_r3;
    fparam_0 = func_005919C4(local_8,(uint)ALBW_AS_U32(fparam_0),fparam_0);
  }
  if ((int)local_8[0] < 0) {
    uVar1 = (int)ALBW_AS_U32(fparam_0) * 2;
    fVar2 = DAT_00590ad4;
    if (0xff000000 < uVar1) {
      fVar2 = fparam_0 + fparam_0;
    }
    if (uVar1 < 0xff000000) {
      return fVar2;
    }
    if (uVar1 != 0xff000000) {
      return fVar2;
    }
    func_00100986(1);
    return DAT_00590ad8 / DAT_00590ad8;
  }
  if ((local_8[0] & 1) == 0) {
    fVar2 = fparam_0 * fparam_0;
    fVar2 = DAT_00590ad4 + fVar2 * (DAT_00590af0 + fVar2 * (DAT_00590aec + fVar2 * DAT_00590ae8));
    if ((local_8[0] & 2) == 0) {
      return fVar2;
    }
  }
  else {
    fVar2 = fparam_0 * fparam_0;
    fVar2 = fparam_0 +
            fparam_0 * (DAT_00590ae4 + fVar2 * (DAT_00590ae0 - fVar2 * DAT_00590adc)) * fVar2;
    if ((local_8[0] & 2) != 0) {
      return fVar2;
    }
  }
  return -fVar2;
}

