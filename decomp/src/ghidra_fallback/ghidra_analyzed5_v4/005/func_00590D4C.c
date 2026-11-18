#include "ghidra_types.h"

extern float DAT_00590db4;
extern float DAT_00590db8;
extern float DAT_00590dbc;
extern uint DAT_00590dc0;

// USA 00590D4C <- EU 00590D24 (Ghidra, non-matching)
// GLOBAL DAT_00590db4 float
// GLOBAL DAT_00590db8 float
// GLOBAL DAT_00590dbc float
// GLOBAL DAT_00590dc0 uint

float func_00590D4C(float fparam_0)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = ((uint)((int)ALBW_AS_U32(fparam_0) << 1) >> 0x18) - 0x7f;
  if (0x16 < (int)uVar2) {
    return fparam_0;
  }
  if ((int)uVar2 < 0) {
    if (DAT_00590db8 < fparam_0 + DAT_00590db4) {
      if ((int)ALBW_AS_U32(fparam_0) < 0) {
        if (fparam_0 != -0.0) {
          fparam_0 = DAT_00590dbc;
        }
      }
      else {
        fparam_0 = 0.0;
      }
    }
  }
  else {
    uVar1 = DAT_00590dc0 >> (uVar2 & 0xff);
    if (((uint)ALBW_AS_U32(fparam_0) & uVar1) == 0) {
      return fparam_0;
    }
    if (DAT_00590db8 < fparam_0 + DAT_00590db4) {
      if ((int)ALBW_AS_U32(fparam_0) < 0) {
        fparam_0 = ALBW_AS_F32(((int)ALBW_AS_U32(fparam_0) + (0x800000U >> (uVar2 & 0xff))));
      }
      fparam_0 = ALBW_AS_F32(((uint)ALBW_AS_U32(fparam_0) & ~uVar1));
    }
  }
  return fparam_0;
}

