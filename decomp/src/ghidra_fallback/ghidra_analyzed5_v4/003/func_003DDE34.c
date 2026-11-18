#include "ghidra_types.h"

extern int func_003DEC28(int param_1,uint param_2);
extern float DAT_003dde54;
extern float DAT_003dde58;
extern float DAT_003dde5c;
extern int DAT_003dde60;

// USA 003DDE34 <- EU 003DDE14 (Ghidra, non-matching)
// GLOBAL DAT_003dde54 float
// GLOBAL DAT_003dde58 float
// GLOBAL DAT_003dde5c float
// GLOBAL DAT_003dde60 int

undefined4 func_003DDE34(int param_1,float fparam_0)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = DAT_003dde54;
  if ((DAT_003dde54 <= fparam_0) && (fVar1 = fparam_0, 0x3f800000 < (int)ALBW_AS_U32(fparam_0))) {
    fVar1 = DAT_003dde58;
  }
  uVar2 = VectorFloatToUnsigned(fVar1 * DAT_003dde5c,3);
  *(short *)(param_1 + 0x28) = (short)uVar2;
  return func_003DEC28(DAT_003dde60,uVar2 & 0xffff);
}

