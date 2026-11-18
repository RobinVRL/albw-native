#include "ghidra_types.h"

extern int func_00100986(undefined4 param_1);
extern int func_0058FBFC(uint param_1);
extern float func_005919B4(void);
extern float func_005919C4(uint *param_1,uint param_2,float fparam_0);
extern uint DAT_0059179c;
extern float DAT_005917a0;
extern float DAT_005917a4;
extern float DAT_005917a8;
extern float DAT_005917ac;
extern float DAT_005917b0;
extern float DAT_005917b4;
extern float DAT_005917b8;
extern float DAT_005917bc;
extern float DAT_005917c0;
extern float DAT_005917c4;
extern float DAT_005917c8;
extern float DAT_005917cc;
extern float DAT_005917d0;
extern float DAT_005917d4;
extern float DAT_005917d8;

// USA 0059163C <- EU 00591614 (Ghidra, non-matching)
// GLOBAL DAT_0059179c uint
// GLOBAL DAT_005917a0 float
// GLOBAL DAT_005917a4 float
// GLOBAL DAT_005917a8 float
// GLOBAL DAT_005917ac float
// GLOBAL DAT_005917b0 float
// GLOBAL DAT_005917b4 float
// GLOBAL DAT_005917b8 float
// GLOBAL DAT_005917bc float
// GLOBAL DAT_005917c0 float
// GLOBAL DAT_005917c4 float
// GLOBAL DAT_005917c8 float
// GLOBAL DAT_005917cc float
// GLOBAL DAT_005917d0 float
// GLOBAL DAT_005917d4 float
// GLOBAL DAT_005917d8 float

/* WARNING: Restarted to delay deadcode elimination for space: stack */

float func_0059163C(float fparam_0)

{
  uint uVar1;
  code *in_lr;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((uint *)(albw_frame + 0x0))
  #define local_4 (*(code * *)(albw_frame + 0xc))
  local_4 = in_lr;
  if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < DAT_0059179c) {
    if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < 0x73000000) {
      local_10[0] = 0xffffffff;
    }
    else {
      local_10[0] = 0;
    }
  }
  else if ((uint)ALBW_AS_U32(ABS(fparam_0)) < (uint)ALBW_AS_U32(DAT_005917a0)) {
    if (((uint)ALBW_AS_U32(fparam_0) & 0x80000000) == 0) {
      fVar2 = (fparam_0 * DAT_005917a4 + DAT_005917a8) - DAT_005917a8;
    }
    else {
      fVar2 = (fparam_0 * DAT_005917a4 - DAT_005917a8) + DAT_005917a8;
    }
    local_10[0] = (int)fVar2 & 3;
    fparam_0 = (((fparam_0 - fVar2 * DAT_005917ac) - fVar2 * DAT_005917b0) - fVar2 * DAT_005917b4) -
               fVar2 * DAT_005917b8;
  }
  else {
    fparam_0 = func_005919C4(local_10,(uint)ALBW_AS_U32(fparam_0),fparam_0);
  }
  if ((int)local_10[0] < 0) {
    uVar1 = (int)ALBW_AS_U32(fparam_0) * 2;
    fVar2 = fparam_0;
    if (0xff000000 < uVar1) {
      fVar2 = fparam_0 + fparam_0;
    }
    if (0xfeffffff < uVar1) {
      if (uVar1 == 0xff000000) {
        func_00100986(1);
        fVar2 = DAT_005917bc / DAT_005917bc;
                    /* WARNING: Could not recover jumptable at 0x0059171c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*local_4)();
        return fVar2;
      }
      return fVar2;
    }
    uVar1 = func_0058FBFC((uint)ALBW_AS_U32(fparam_0));
    if (uVar1 == 4) {
      func_005919B4();
    }
    return fparam_0;
  }
  fVar2 = fparam_0 * fparam_0;
  if ((local_10[0] & 1) == 0) {
    fVar2 = fparam_0 +
            fparam_0 * (DAT_005917d8 + fVar2 * (DAT_005917d4 - fVar2 * DAT_005917d0)) * fVar2;
    if ((local_10[0] & 2) == 0) {
      return fVar2;
    }
  }
  else {
    fVar2 = DAT_005917cc + fVar2 * (DAT_005917c8 + fVar2 * (DAT_005917c4 + fVar2 * DAT_005917c0));
    if ((local_10[0] & 2) == 0) {
      return fVar2;
    }
  }
  return -fVar2;
}

