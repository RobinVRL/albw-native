#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0043C6E4(int param_1);
extern float DAT_0043d410;

// USA 0043D370 <- EU 0043D350 (Ghidra, non-matching)
// GLOBAL DAT_0043d410 float

void func_0043D370(int param_1)

{
  byte *pbVar1;
  float fparam_0;
  
  func_0043C6E4(param_1);
  pbVar1 = (byte *)(param_1 + 0x176);
  fparam_0 = DAT_0043d410;
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x176) << 0x1d)) {
    func_00231448(param_1 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xca) = 5;
    *(undefined2 *)(param_1 + 200) = 0;
    func_002317C0((undefined2 *)(param_1 + 200),fparam_0);
    *pbVar1 = *pbVar1 | 4;
  }
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x176) << 0x1c)) {
    func_00231448(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xfa) = 3;
    *(undefined2 *)(param_1 + 0xf8) = 0;
    func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0);
    *pbVar1 = *pbVar1 | 8;
  }
  return;
}

