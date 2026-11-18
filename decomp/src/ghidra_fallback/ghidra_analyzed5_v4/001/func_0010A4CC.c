#include "ghidra_types.h"

extern int func_0010C864(undefined4 *param_1,float fparam_0);
extern float DAT_0010a56c;
extern float DAT_0010a570;

// USA 0010A4CC <- EU 0010A4CC (Ghidra, non-matching)
// GLOBAL DAT_0010a56c float
// GLOBAL DAT_0010a570 float

undefined4 func_0010A4CC(undefined4 *param_1)

{
  undefined4 *puVar1;
  float fparam_0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = param_1 + 2;
  param_1[4] = 0;
  param_1[2] = param_1 + 2;
  param_1[5] = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0xffffffff;
  param_1[8] = 0;
  param_1[10] = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb) = 0;
  *(undefined2 *)((int)param_1 + 0x2e) = 0;
  puVar1 = func_0010C864(param_1 + 0xc,DAT_0010a56c);
  fparam_0 = DAT_0010a570;
  puVar1 = func_0010C864(puVar1 + 6,DAT_0010a570);
  puVar1 = func_0010C864(puVar1 + 6,fparam_0);
  puVar1 = func_0010C864(puVar1 + 6,fparam_0);
  puVar1 = func_0010C864(puVar1 + 6,fparam_0);
  *(undefined1 *)(puVar1 + 6) = 0;
  puVar1[-0x1f] = 0x10;
  return (undefined4)param_1;
}

