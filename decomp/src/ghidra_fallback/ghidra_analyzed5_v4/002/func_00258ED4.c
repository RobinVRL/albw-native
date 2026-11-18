#include "ghidra_types.h"

extern int func_0040D864(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_0040D8C0(int param_1,float fparam_0);

// USA 00258ED4 <- EU 00258EFC (Ghidra, non-matching)

undefined4 func_00258ED4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0)

{
  if (*(char *)(param_1 + 0x6a) == '\0') {
    if (*(int **)(param_1 + 0xc) != (int *)0x0) {
      func_0040D864(*(int **)(param_1 + 0xc),0,param_3,param_4);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      return func_0040D8C0(*(int *)(param_1 + 0xc),fparam_0);
    }
  }
  return 0;
}

