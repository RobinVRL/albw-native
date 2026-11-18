#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0044d1c0;

// USA 0044D16C <- EU 0044D144 (Ghidra, non-matching)
// GLOBAL DAT_0044d1c0 float

void func_0044D16C(int param_1,int param_2)

{
  *(char *)(param_1 + 0x108) = (char)param_2;
  if (param_2 == 1) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 10;
    *(undefined2 *)(param_1 + 0x80) = 0;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 0xb;
    *(undefined2 *)(param_1 + 0x80) = 0;
  }
  else if (param_2 == 3) {
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x82) = 0xc;
    *(undefined2 *)(param_1 + 0x80) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0x80),DAT_0044d1c0);
  return;
}

