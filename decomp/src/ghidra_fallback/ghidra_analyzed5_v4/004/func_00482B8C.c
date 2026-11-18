#include "ghidra_types.h"

extern float func_00483614(int param_1);
extern int func_0066EEEC(undefined4 *param_1,undefined1 param_2);
extern int DAT_00482bbc;
extern undefined4 DAT_00482bc0;
extern undefined4 DAT_00482bc4;

// USA 00482B8C <- EU 00482B64 (Ghidra, non-matching)
// GLOBAL DAT_00482bbc int
// GLOBAL DAT_00482bc0 undefined4
// GLOBAL DAT_00482bc4 undefined4

undefined4 func_00482B8C(int param_1,float fparam_0)

{
  uint in_fpscr;
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = (float)VectorUnsignedToFloat
                           ((uint)*(ushort *)(param_1 + 0xe8),(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorFloatToUnsigned(fVar1 * fparam_0,3);
  *(short *)(param_1 + 0xe8) = (short)uVar2;
  func_00483614(param_1);
  uVar2 = DAT_00482bc0;
  if (DAT_00482bbc <= (int)ALBW_AS_U32(fparam_0)) {
    uVar2 = DAT_00482bc4;
  }
  *(undefined4 *)(param_1 + 0xe0) = uVar2;
  return func_0066EEEC((undefined4 *)(param_1 + 0x74),3);
}

