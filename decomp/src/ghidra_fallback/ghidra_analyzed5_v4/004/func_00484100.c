#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern int func_00231524(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00484120;

// USA 00484100 <- EU 004840D8 (Ghidra, non-matching)
// GLOBAL DAT_00484120 float

undefined4 func_00484100(int param_1)

{
  float fparam_0;
  
  func_00231448(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x62) = 2;
  fparam_0 = DAT_00484120;
  *(undefined2 *)(param_1 + 0x60) = 1;
  func_002317C0((undefined2 *)(param_1 + 0x60),fparam_0);
  func_00231524(param_1 + 0x6c);
  return func_00231448(param_1 + 0x78);
}

