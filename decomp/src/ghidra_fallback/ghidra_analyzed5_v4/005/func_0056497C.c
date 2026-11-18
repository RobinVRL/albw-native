#include "ghidra_types.h"

extern int func_003CBE20(float fparam_0);
extern float DAT_00564a40;
extern float DAT_00564a44;
extern uint DAT_00564a48;
extern float DAT_00564a4c;

// USA 0056497C <- EU 00564954 (Ghidra, non-matching)
// GLOBAL DAT_00564a40 float
// GLOBAL DAT_00564a44 float
// GLOBAL DAT_00564a48 uint
// GLOBAL DAT_00564a4c float

uint * func_0056497C(uint *param_1,uint *param_2,float fparam_0)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar2 = DAT_00564a48;
  uVar3 = *param_1;
  if ((uVar3 & 0x80000000) == 0) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_0 == DAT_00564a44) << 0x1e;
    if (SUB41(uVar1 >> 0x1e,0)) {
      *param_2 = uVar3 & 0xffffff;
    }
    else {
      fVar4 = (float)VectorSignedToFloat((1 << ((uVar3 & 0x7f000000) >> 0x18)) + -1,
                                         (byte)(uVar1 >> 0x15) & 3);
      uVar3 = func_003CBE20(ALBW_AS_F32(param_1[2]) -
                            ((ALBW_AS_F32(param_1[2]) - ALBW_AS_F32(param_1[3])) * fparam_0 * DAT_00564a40) /
                            fVar4);
      *param_2 = uVar3;
    }
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fparam_0 == DAT_00564a44) << 0x1e;
    if (SUB41(uVar1 >> 0x1e,0)) {
      *param_2 = 0;
    }
    else {
      uVar3 = (uVar3 & 0x7f000000) >> 0x18;
      if (uVar3 == 0x18) {
        fVar4 = (fparam_0 * DAT_00564a40) / DAT_00564a4c;
      }
      else {
        fVar4 = (float)VectorSignedToFloat((1 << uVar3) + -1,(byte)(uVar1 >> 0x15) & 3);
        fVar4 = fparam_0 / fVar4;
      }
      uVar3 = func_003CBE20(fVar4);
      *param_2 = uVar3;
    }
  }
  param_2[1] = uVar2;
  return param_2 + 2;
}

