#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0028be20;

// USA 0028BDB8 <- EU 0028BDE0 (Ghidra, non-matching)
// GLOBAL DAT_0028be20 float

undefined4 func_0028BDB8(int param_1)

{
  float fparam_0;
  
  func_00231448(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x62) = 0;
  fparam_0 = DAT_0028be20;
  *(undefined2 *)(param_1 + 0x60) = 2;
  func_002317C0((undefined2 *)(param_1 + 0x60),fparam_0);
  return func_00231340((short *)(param_1 + 0x60));
}

