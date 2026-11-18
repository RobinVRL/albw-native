#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0045072C(int param_1,int param_2);
extern float DAT_004509d4;

// USA 004509AC <- EU 00450984 (Ghidra, non-matching)
// GLOBAL DAT_004509d4 float

undefined4 func_004509AC(int param_1)

{
  float fparam_0;
  
  fparam_0 = DAT_004509d4;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x122) = 2;
  *(undefined2 *)(param_1 + 0x120) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x120),fparam_0);
  func_002317C0((undefined2 *)(param_1 + 300),fparam_0);
  return func_0045072C(param_1,-1);
}

