#include "ghidra_types.h"

extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_0065BE00(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001c6344;
extern float DAT_001c6348;
extern int DAT_001c634c;

// USA 001C62B4 <- EU 001C62B4 (Ghidra, non-matching)
// GLOBAL DAT_001c6344 int *
// GLOBAL DAT_001c6348 float
// GLOBAL DAT_001c634c int

undefined4 func_001C62B4(int param_1,int param_2)

{
  char cVar1;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\x02') {
      func_0065BE00((undefined4 *)(param_1 + 0x414),1);
    }
    else {
      if (cVar1 == '\x05') {
        func_002917A4(*DAT_001c6344,param_1 + 0x3d0,0,DAT_001c6348);
      }
      else {
        if (cVar1 != '\b') {
          return 0;
        }
        func_00291A38(*DAT_001c6344,param_1 + 0x3d0,DAT_001c6348);
      }
      *(undefined2 *)(DAT_001c634c + param_1) = 0x1e;
    }
  }
  return 0;
}

