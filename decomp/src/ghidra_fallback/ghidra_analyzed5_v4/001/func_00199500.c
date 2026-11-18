#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00199550;

// USA 00199500 <- EU 00199500 (Ghidra, non-matching)
// GLOBAL DAT_00199550 float

void func_00199500(int param_1)

{
  float fparam_0;
  
  if ((*(byte *)(param_1 + 0x79) & 2) == 0) {
    func_00231448(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x6a) = 3;
    fparam_0 = DAT_00199550;
    *(undefined2 *)(param_1 + 0x68) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x68),fparam_0);
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
  }
  return;
}

