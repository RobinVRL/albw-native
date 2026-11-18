#include "ghidra_types.h"

extern int func_00191EC4(float *param_1,float *param_2);
extern float *pfRam0050a4d4;

// GLOBAL UNK_0050a4d4 float *
// USA 0050A4EC <- EU 0050A4C8 (Ghidra, function missing from the decomp table)

/* WARNING: Unknown calling convention */

undefined4 func_0050A4EC(int param_1)

{
  return func_00191EC4((float *)(param_1 + 0x3d0),pfRam0050a4d4);
}

