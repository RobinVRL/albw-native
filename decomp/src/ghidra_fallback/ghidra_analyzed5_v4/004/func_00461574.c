#include "ghidra_types.h"

extern undefined4 func_002316CC(int param_1,float fparam_0);
extern int DAT_004615a4;
extern undefined4 DAT_004615a8;

// USA 00461574 <- EU 0046154C (Ghidra, non-matching)
// GLOBAL DAT_004615a4 int
// GLOBAL DAT_004615a8 undefined4

undefined4 func_00461574(int *param_1,uint param_2)

{
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  if (7 < param_2) {
    return 0;
  }
  fparam_0 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  func_002316CC((int)(param_1 + 0x55),fparam_0);
  local_14 = *(undefined4 *)(DAT_004615a4 + param_2 * 4);
  local_18 = DAT_004615a8;
  return (**(code **)(*param_1 + 0x58))(param_1,&local_18);
}

