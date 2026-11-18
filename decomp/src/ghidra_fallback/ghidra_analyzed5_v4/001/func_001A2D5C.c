#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_003C33F0(int param_1);
extern float DAT_001a2dfc;
extern int *DAT_001a2e00;

// USA 001A2D5C <- EU 001A2D5C (Ghidra, non-matching)
// GLOBAL DAT_001a2dfc float
// GLOBAL DAT_001a2e00 int *

undefined4 func_001A2D5C(int param_1,int param_2)

{
  char cVar1;
  
  if (*(short *)(param_1 + 0x9c8) < 1) {
    func_003C33F0(param_1 + 0x8f8);
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\x05') {
      func_002917A4(*DAT_001a2e00,param_1 + 0x3d0,0,DAT_001a2dfc);
    }
    else {
      if (cVar1 != '\b') {
        if (cVar1 != '\x0e') {
          return 1;
        }
        func_00291FE0(*DAT_001a2e00,param_1 + 0x3d0,DAT_001a2dfc);
        *(undefined2 *)(param_1 + 0x9c8) = 10;
        return 1;
      }
      func_00291A38(*DAT_001a2e00,param_1 + 0x3d0,DAT_001a2dfc);
    }
    *(undefined2 *)(param_1 + 0x9c8) = 10;
  }
  return 1;
}

