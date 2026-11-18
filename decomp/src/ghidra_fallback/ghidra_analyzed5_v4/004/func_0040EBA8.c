#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0040EBA8 <- EU 0040EB88 (Ghidra, non-matching)

undefined4 func_0040EBA8(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,7);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0x2c;
  puVar2[4] = param_1 + 0x114;
  puVar2[5] = param_2;
  puVar2[6] = ALBW_AS_U32(fparam_0);
  return func_00412C68((int)piVar1,puVar2);
}

