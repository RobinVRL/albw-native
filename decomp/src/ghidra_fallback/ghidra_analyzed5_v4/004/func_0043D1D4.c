#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0043d25c;

// USA 0043D1D4 <- EU 0043D1B4 (Ghidra, non-matching)
// GLOBAL DAT_0043d25c float

void func_0043D1D4(int param_1,float fparam_0)

{
  byte *pbVar1;
  float fparam_0_00;
  
  pbVar1 = (byte *)(param_1 + 0x176);
  fparam_0_00 = DAT_0043d25c;
  if ((*(byte *)(param_1 + 0x176) & 4) != 0) {
    func_00231448(param_1 + 200);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xca) = 4;
    *(undefined2 *)(param_1 + 200) = 0;
    fparam_0 = func_002317C0((undefined2 *)(param_1 + 200),fparam_0_00);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  if ((*(byte *)(param_1 + 0x176) & 8) != 0) {
    func_00231448(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xfa) = 2;
    *(undefined2 *)(param_1 + 0xf8) = 0;
    fparam_0 = func_002317C0((undefined2 *)(param_1 + 0xf8),fparam_0_00);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  return;
}

