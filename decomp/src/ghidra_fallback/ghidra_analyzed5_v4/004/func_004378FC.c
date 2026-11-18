#include "ghidra_types.h"

extern float DAT_00437928;
extern int DAT_0043792c;

// USA 004378FC <- EU 004378DC (Ghidra, non-matching)
// GLOBAL DAT_00437928 float
// GLOBAL DAT_0043792c int

undefined4 func_004378FC(undefined4 param_1)

{
  uint in_fpscr;
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 ((undefined4 *)(albw_frame + 0x0))
  fVar1 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  if (DAT_00437928 < fVar1) {
    fVar1 = DAT_00437928;
  }
  local_10[0] = *(undefined4 *)(DAT_0043792c + 0xf4);
  local_10[1] = *(undefined4 *)(DAT_0043792c + 0xf8);
  local_10[2] = *(undefined4 *)(DAT_0043792c + 0xfc);
  local_10[3] = *(undefined4 *)(DAT_0043792c + 0x100);
  return local_10[(int)fVar1];
}

