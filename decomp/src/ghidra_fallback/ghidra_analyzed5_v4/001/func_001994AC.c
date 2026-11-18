#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_001994fc;

// USA 001994AC <- EU 001994AC (Ghidra, non-matching)
// GLOBAL DAT_001994fc float

void func_001994AC(int param_1)

{
  float fparam_0;
  
  if ((*(byte *)(param_1 + 0x79) & 2) != 0) {
    func_00231448(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x6a) = 4;
    fparam_0 = DAT_001994fc;
    *(undefined2 *)(param_1 + 0x68) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x68),fparam_0);
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xfd;
  }
  return;
}

