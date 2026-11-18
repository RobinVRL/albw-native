#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_003A0C04(int param_1);
extern float DAT_003a09d8;

// USA 003A09BC <- EU 003A0998 (Ghidra, non-matching)
// GLOBAL DAT_003a09d8 float

undefined4 func_003A09BC(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x20);
  *(undefined2 *)(param_1 + 0x32) = 1;
  fparam_0 = DAT_003a09d8;
  *(undefined2 *)(param_1 + 0x30) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x30),fparam_0);
  func_00231340((short *)(param_1 + 0x30));
  return func_003A0C04(param_1);
}

