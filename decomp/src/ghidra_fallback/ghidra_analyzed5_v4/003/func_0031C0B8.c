#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_006653E8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0031c0e4;
extern float DAT_0031c0e8;

// USA 0031C0B8 <- EU 0031C094 (Ghidra, non-matching)
// GLOBAL DAT_0031c0e4 float
// GLOBAL DAT_0031c0e8 float

undefined4 func_0031C0B8(int param_1)

{
  float fparam_0;
  
  if (*(float *)(param_1 + 0xe0) < DAT_0031c0e4) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0xca) = 9;
  fparam_0 = DAT_0031c0e8;
  *(undefined2 *)(param_1 + 200) = 2;
  func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
  return func_006653E8((undefined4 *)(param_1 + 0x50),0);
}

