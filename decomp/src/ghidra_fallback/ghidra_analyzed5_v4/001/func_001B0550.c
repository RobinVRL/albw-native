#include "ghidra_types.h"

extern int func_0014FB58(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_0065AF54(undefined4 *param_1,undefined1 param_2);
extern int DAT_001b05bc;
extern int *DAT_001b05c0;
extern float DAT_001b05c4;

// USA 001B0550 <- EU 001B0550 (Ghidra, non-matching)
// GLOBAL DAT_001b05bc int
// GLOBAL DAT_001b05c0 int *
// GLOBAL DAT_001b05c4 float

undefined4 * func_001B0550(int param_1)

{
  undefined4 *puVar1;
  
  func_0014FB58(param_1,*(float **)(*DAT_001b05c0 + 0x1c),DAT_001b05bc,DAT_001b05c4);
  puVar1 = (undefined4 *)(param_1 + 0x90c);
  if (((0x13 < *(int *)(param_1 + 0x90c)) ||
      (*(float *)(param_1 + 0x368) != *(float *)(param_1 + 0x3d0))) ||
     (*(float *)(param_1 + 0x370) != *(float *)(param_1 + 0x3d8))) {
    puVar1 = (undefined4 *)func_0065AF54(puVar1,9);
  }
  return puVar1;
}

