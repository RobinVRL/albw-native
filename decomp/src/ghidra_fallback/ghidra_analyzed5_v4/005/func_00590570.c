#include "ghidra_types.h"

extern int func_00100986(undefined4 param_1);
extern undefined4 func_00601AA0(float param_1);
extern float DAT_0059063c;
extern float DAT_00590640;
extern float DAT_00590644;
extern float DAT_00590648;
extern float DAT_0059064c;
extern float DAT_00590650;
extern float DAT_00590654;
extern float DAT_00590658;
extern float DAT_0059065c;
extern float DAT_00590660;
extern float DAT_00590664;
extern float DAT_00590668;
extern float DAT_0059066c;
extern float DAT_00590670;

// USA 00590570 <- EU 00590548 (Ghidra, non-matching)
// GLOBAL DAT_0059063c float
// GLOBAL DAT_00590640 float
// GLOBAL DAT_00590644 float
// GLOBAL DAT_00590648 float
// GLOBAL DAT_0059064c float
// GLOBAL DAT_00590650 float
// GLOBAL DAT_00590654 float
// GLOBAL DAT_00590658 float
// GLOBAL DAT_0059065c float
// GLOBAL DAT_00590660 float
// GLOBAL DAT_00590664 float
// GLOBAL DAT_00590668 float
// GLOBAL DAT_0059066c float
// GLOBAL DAT_00590670 float

float func_00590570(float fparam_0)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((int)ALBW_AS_U32(fparam_0) * 2 + 0x9a000000U < 0x19000001) {
    if ((uint)((int)ALBW_AS_U32(fparam_0) << 1) < 0x7e000001) {
      fVar2 = fparam_0 * fparam_0;
      fVar4 = DAT_0059065c;
      fVar3 = DAT_00590658;
    }
    else {
      fVar2 = (DAT_00590644 - ABS(fparam_0)) * DAT_00590648;
      fVar3 = DAT_0059063c;
      func_00601AA0(fVar2);
      fVar4 = fVar3;
      if (((uint)ALBW_AS_U32(fparam_0) & 0x80000000) != 0) {
        fVar1 = -fVar1;
        fVar3 = DAT_0059064c;
        fVar4 = DAT_00590650;
      }
      fparam_0 = fVar1 * DAT_00590654;
    }
    return ((fVar4 - fparam_0) -
           fparam_0 * fVar2 *
           (DAT_00590670 +
           fVar2 * (DAT_0059066c +
                   fVar2 * (DAT_00590668 + fVar2 * (DAT_00590664 + fVar2 * DAT_00590660))))) + fVar3
    ;
  }
  if ((uint)((int)ALBW_AS_U32(fparam_0) * 2) < 0x66000000) {
    return DAT_00590640;
  }
  if (0xff000000 < (uint)((int)ALBW_AS_U32(fparam_0) << 1)) {
    return fparam_0 + fparam_0;
  }
  fVar4 = DAT_0059063c;
  func_00100986(1);
  return fVar4 / fVar4;
}

