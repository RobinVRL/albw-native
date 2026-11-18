#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0043d5fc;

// USA 0043D5CC <- EU 0043D5AC (Ghidra, non-matching)
// GLOBAL DAT_0043d5fc float

void func_0043D5CC(int param_1)

{
  float fparam_0;
  
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x176) << 0x1d)) {
    func_00231448(param_1 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xca) = 5;
    fparam_0 = DAT_0043d5fc;
    *(undefined2 *)(param_1 + 200) = 0;
    func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
    *(byte *)(param_1 + 0x176) = *(byte *)(param_1 + 0x176) | 4;
  }
  return;
}

