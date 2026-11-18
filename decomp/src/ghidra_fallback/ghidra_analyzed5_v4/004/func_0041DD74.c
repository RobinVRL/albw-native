#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0041DD74 <- EU 0041DD54 (Ghidra, non-matching)

undefined4 func_0041DD74(int param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,0xe);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 0x23;
  puVar2[4] = param_1 + 0x120;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  puVar2[5] = *param_3;
  puVar2[6] = uVar3;
  puVar2[7] = uVar4;
  puVar2[9] = param_2[1];
  puVar2[8] = *param_2;
  puVar2[10] = param_2[3];
  uVar3 = ((undefined4 *)param_2[2])[1];
  puVar2[0xb] = *(undefined4 *)param_2[2];
  puVar2[0xc] = uVar3;
  puVar2[0xd] = *param_3;
  return func_00412C68((int)piVar1,puVar2);
}

