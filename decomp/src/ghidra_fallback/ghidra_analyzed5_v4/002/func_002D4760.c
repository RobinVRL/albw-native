#include "ghidra_types.h"

extern int func_004CF5B0(int param_1,int param_2,int param_3,int param_4);
extern int func_00663BDC(undefined4 *param_1,undefined1 param_2);
extern float DAT_002d47e8;
extern float DAT_002d47ec;
extern float DAT_002d47f0;

// USA 002D4760 <- EU 002D473C (Ghidra, non-matching)
// GLOBAL DAT_002d47e8 float
// GLOBAL DAT_002d47ec float
// GLOBAL DAT_002d47f0 float

undefined4 func_002D4760(undefined4 *param_1,float fparam_0,float fparam_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  
  if ((uint)param_1[0xb] < (uint)param_1[0xc]) {
    uVar1 = param_1[0xb] + 1;
    param_1[0xb] = uVar1;
  }
  else {
    uVar1 = func_00663BDC(param_1,0);
  }
  uVar2 = param_1[0xc];
  if (uVar2 != 0) {
    uVar1 = param_1[0xb];
  }
  fVar3 = DAT_002d47e8;
  if ((uVar2 != 0 && uVar1 != 0) && (fVar3 = DAT_002d47ec, uVar1 < uVar2)) {
    fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * ALBW_AS_F32(param_1[0xd]);
  }
  fVar3 = DAT_002d47ec - fVar3 * DAT_002d47f0;
  uVar1 = (uint)fVar3;
  fVar4 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  if ((fVar4 != fVar3) && (DAT_002d47e8 <= fVar3)) {
    uVar1 = uVar1 + 1;
  }
  return func_004CF5B0(param_1[9],0,0,uVar1 & 0xff);
}

