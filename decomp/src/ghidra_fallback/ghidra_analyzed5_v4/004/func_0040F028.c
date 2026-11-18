#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0040F028 <- EU 0040F008 (Ghidra, non-matching)

undefined4 func_0040F028(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *(int **)(param_1 + 0x1dc0) = param_4;
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,8);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0x27;
  puVar2[4] = param_1 + 0x114;
  puVar2[5] = param_1 + 0x1dac;
  puVar2[6] = param_2;
  puVar2[7] = param_3;
  return func_00412C68((int)piVar1,puVar2);
}

