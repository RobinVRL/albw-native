#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DFB38(int param_1);
extern int func_00459280(int param_1);
extern float DAT_0045b3a8;
extern int *DAT_0045b3ac;

// USA 0045B384 <- EU 0045B35C (Ghidra, non-matching)
// GLOBAL DAT_0045b3a8 float
// GLOBAL DAT_0045b3ac int *

undefined4 func_0045B384(int param_1)

{
  float fparam_0;
  
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x11e) = 0x1b;
  fparam_0 = DAT_0045b3a8;
  *(undefined2 *)(param_1 + 0x11c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x11c),fparam_0);
  func_00459280(param_1);
  *(undefined4 *)(param_1 + 0x210) = 0xffffffff;
  return func_002DFB38(*DAT_0045b3ac);
}

