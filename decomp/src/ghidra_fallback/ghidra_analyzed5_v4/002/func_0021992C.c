#include "ghidra_types.h"

extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern undefined4 DAT_0021995c;
extern float DAT_00219960;
extern float DAT_00219964;

// USA 0021992C <- EU 0021992C (Ghidra, non-matching)
// GLOBAL DAT_0021995c undefined4
// GLOBAL DAT_00219960 float
// GLOBAL DAT_00219964 float

undefined4 func_0021992C(int param_1,undefined1 param_2,undefined1 param_3)

{
  return func_004FBA18(param_1,param_2,param_3,-1,0x1e,0,(ushort)DAT_0021995c,DAT_00219964,DAT_00219960);
}

