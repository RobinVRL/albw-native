#include "ghidra_types.h"

extern int func_00100986(undefined4 param_1);
extern int func_0058FBFC(uint param_1);
extern float func_005919B4(void);
extern float func_005919C4(uint *param_1,uint param_2,float fparam_0);
extern uint DAT_0059194c;
extern float DAT_00591950;
extern float DAT_00591954;
extern float DAT_00591958;
extern float DAT_0059195c;
extern float DAT_00591960;
extern float DAT_00591964;
extern float DAT_00591968;
extern float DAT_0059196c;
extern float DAT_00591970;
extern float DAT_00591974;
extern float DAT_00591978;
extern float DAT_0059197c;
extern float DAT_00591980;
extern float DAT_00591984;
extern float DAT_00591988;

// USA 00591804 <- EU 005917DC (Ghidra, non-matching)
// GLOBAL DAT_0059194c uint
// GLOBAL DAT_00591950 float
// GLOBAL DAT_00591954 float
// GLOBAL DAT_00591958 float
// GLOBAL DAT_0059195c float
// GLOBAL DAT_00591960 float
// GLOBAL DAT_00591964 float
// GLOBAL DAT_00591968 float
// GLOBAL DAT_0059196c float
// GLOBAL DAT_00591970 float
// GLOBAL DAT_00591974 float
// GLOBAL DAT_00591978 float
// GLOBAL DAT_0059197c float
// GLOBAL DAT_00591980 float
// GLOBAL DAT_00591984 float
// GLOBAL DAT_00591988 float

/* WARNING: Restarted to delay deadcode elimination for space: stack */

float func_00591804(float fparam_0)

{
  uint uVar1;
  uint *puVar2;
  code *in_lr;
  bool bVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  #define auStack_c ((undefined1 *)(albw_frame + 0x4))
  #define local_4 (*(code * *)(albw_frame + 0xc))
  local_4 = in_lr;
  if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < DAT_0059194c) {
    if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < 0x73000000) {
      local_10 = 0xffffffff;
    }
    else {
      local_10 = 0;
    }
  }
  else if ((uint)ALBW_AS_U32(ABS(fparam_0)) < (uint)ALBW_AS_U32(DAT_00591950)) {
    if (((uint)ALBW_AS_U32(fparam_0) & 0x80000000) == 0) {
      fVar4 = (fparam_0 * DAT_00591954 + DAT_00591958) - DAT_00591958;
    }
    else {
      fVar4 = (fparam_0 * DAT_00591954 - DAT_00591958) + DAT_00591958;
    }
    local_10 = (int)fVar4 & 3;
    fparam_0 = (((fparam_0 - fVar4 * DAT_0059195c) - fVar4 * DAT_00591960) - fVar4 * DAT_00591964) -
               fVar4 * DAT_00591968;
  }
  else {
    fparam_0 = func_005919C4(&local_10,(uint)ALBW_AS_U32(fparam_0),fparam_0);
  }
  if (-1 < (int)local_10) {
    fVar4 = fparam_0 * fparam_0;
    bVar3 = (local_10 & 1) == 0;
    puVar2 = &local_10;
    if (bVar3) {
      puVar2 = (uint *)auStack_c;
    }
    fVar4 = fparam_0 +
            fparam_0 *
            (DAT_00591984 +
            fVar4 * (DAT_00591980 +
                    fVar4 * (DAT_0059197c +
                            fVar4 * (DAT_00591978 + fVar4 * (DAT_00591974 + fVar4 * DAT_00591970))))
            ) * fVar4;
    if (bVar3) {
      return fVar4;
    }
    fVar4 = DAT_00591988 / fVar4;
                    /* WARNING: Could not recover jumptable at 0x00591948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((int)puVar2 + 0xc))();
    return fVar4;
  }
  uVar1 = (int)ALBW_AS_U32(fparam_0) * 2;
  fVar4 = fparam_0;
  if (0xff000000 < uVar1) {
    fVar4 = fparam_0 + fparam_0;
  }
  if (uVar1 < 0xff000000) {
    uVar1 = func_0058FBFC((uint)ALBW_AS_U32(fparam_0));
    if (uVar1 == 4) {
      func_005919B4();
    }
    return fparam_0;
  }
  if (uVar1 != 0xff000000) {
    return fVar4;
  }
  func_00100986(1);
  fVar4 = DAT_0059196c / DAT_0059196c;
                    /* WARNING: Could not recover jumptable at 0x005918e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*local_4)();
  return fVar4;
}

