#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int *DAT_0058d214;

// USA 0058D200 <- EU 0058D1D8 (Ghidra, non-matching)
// GLOBAL DAT_0058d214 int *

undefined4 func_0058D200(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define afStack_10 ((float *)(albw_frame + 0x0))
  if (*(char *)(param_1 + 0x548) == '\0') {
    func_00115C70(afStack_10,(float *)(param_1 + 0x3d0),*(float **)(*DAT_0058d214 + 0x1c));
    uVar1 = 0x1b;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

