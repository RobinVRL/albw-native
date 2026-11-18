#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_004FAF00(float *param_1,undefined2 param_2,float *param_3,float fparam_0);
extern uint *DAT_00120cf0;
extern undefined4 *DAT_00120cf4;
extern undefined4 DAT_00120cf8;
extern int *DAT_00120cfc;

// USA 00120C28 <- EU 00120C28 (Ghidra, non-matching)
// GLOBAL DAT_00120cf0 uint *
// GLOBAL DAT_00120cf4 undefined4 *
// GLOBAL DAT_00120cf8 undefined4
// GLOBAL DAT_00120cfc int *

undefined4 func_00120C28(float *param_1,undefined4 param_2)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fparam_0;
  
  fparam_0 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
  if (((*DAT_00120cf0 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00120cf0), iVar1 != 0)) {
    *DAT_00120cf4 = DAT_00120cf8;
  }
  if ((param_1 == (float *)0x0) || (iVar1 = (**(code **)ALBW_PTR_BITS(*param_1))(param_1,DAT_00120cf4), iVar1 == 0)
     ) {
    param_1 = (float *)0x0;
  }
  if (param_1 != (float *)0x0) {
    pfVar2 = (float *)*DAT_00120cfc;
    if (pfVar2 == (float *)0x0) {
      return func_004FAF00(param_1,(short)DAT_00120cfc[1],(float *)0x0,fparam_0);
    }
    if (pfVar2 != param_1) {
      return func_004FAF00(param_1,(short)DAT_00120cfc[1],pfVar2 + 0xf4,fparam_0);
    }
  }
  return 0;
}

