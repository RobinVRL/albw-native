#include "ghidra_types.h"

extern int func_002E11AC(float *param_1,float *param_2,float param_3,float fparam_0);
extern int DAT_0034d758;

// USA 0034D74C <- EU 0034D728 (Ghidra, non-matching)
// GLOBAL DAT_0034d758 int

undefined4 func_0034D74C(int param_1,float *param_2,float param_3,float fparam_0)

{
  if (((-1 < *(short *)(DAT_0034d758 + param_1)) && (*(short *)(DAT_0034d758 + param_1) < 1)) &&
     (*(char *)(param_1 + 0x20) != '\0')) {
    return 0;
  }
  return func_002E11AC((float *)(param_1 + 0xb8),param_2,param_3,fparam_0);
}

