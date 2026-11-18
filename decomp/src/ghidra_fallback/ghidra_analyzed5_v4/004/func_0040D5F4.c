#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0040D5F4 <- EU 0040D5D4 (Ghidra, non-matching)

undefined4 func_0040D5F4(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,6);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 10;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar2[4] = uVar3;
  *(undefined1 *)((int)puVar2 + 0x15) = param_2;
  return func_00412C68((int)piVar1,puVar2);
}

