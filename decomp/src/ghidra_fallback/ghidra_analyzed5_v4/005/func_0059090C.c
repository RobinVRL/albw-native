#include "ghidra_types.h"

extern float DAT_0059096c;
extern float DAT_00590970;
extern uint DAT_00590974;

// USA 0059090C <- EU 005908E4 (Ghidra, non-matching)
// GLOBAL DAT_0059096c float
// GLOBAL DAT_00590970 float
// GLOBAL DAT_00590974 uint

float func_0059090C(float fparam_0)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = ((uint)((int)ALBW_AS_U32(fparam_0) << 1) >> 0x18) - 0x7f;
  if (0x16 < (int)uVar2) {
    return fparam_0;
  }
  if ((int)uVar2 < 0) {
    if (DAT_00590970 < fparam_0 + DAT_0059096c) {
      bVar3 = (int)ALBW_AS_U32(fparam_0) < 0;
      if (0 < (int)ALBW_AS_U32(fparam_0)) {
        fparam_0 = 1.0;
      }
      if (bVar3) {
        fparam_0 = -0.0;
      }
    }
  }
  else {
    uVar1 = DAT_00590974 >> (uVar2 & 0xff);
    if (((uint)ALBW_AS_U32(fparam_0) & uVar1) == 0) {
      return fparam_0;
    }
    if (DAT_00590970 < fparam_0 + DAT_0059096c) {
      if (0 < (int)ALBW_AS_U32(fparam_0)) {
        fparam_0 = ALBW_AS_F32(((int)ALBW_AS_U32(fparam_0) + (0x800000U >> (uVar2 & 0xff))));
      }
      fparam_0 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_0) & ~uVar1));
    }
  }
  return fparam_0;
}

