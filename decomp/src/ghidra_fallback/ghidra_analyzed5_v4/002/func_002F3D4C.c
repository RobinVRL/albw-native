#include "ghidra_types.h"

extern int func_002F618C(int param_1,float fparam_0);
extern float DAT_002f3d54;

// USA 002F3D4C <- EU 002F3D28 (Ghidra, non-matching)
// GLOBAL DAT_002f3d54 float

void func_002F3D4C(int param_1,int param_2)

{
  if (param_2 == 0x21) {
    return;
  }
  func_002F618C(param_1,DAT_002f3d54);
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x84;
  return;
}

