#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0048420c;

// USA 004841EC <- EU 004841C4 (Ghidra, non-matching)
// GLOBAL DAT_0048420c float

undefined4 func_004841EC(int param_1)

{
  float fparam_0;
  
  func_00231448(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x62) = 2;
  fparam_0 = DAT_0048420c;
  *(undefined2 *)(param_1 + 0x60) = 3;
  func_002317C0((undefined2 *)(param_1 + 0x60),fparam_0);
  func_00231448(param_1 + 0x6c);
  return func_00231524(param_1 + 0x78);
}

