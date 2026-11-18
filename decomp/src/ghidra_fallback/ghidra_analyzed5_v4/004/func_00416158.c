#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412F58(void);
extern int func_00415838(undefined4 *param_1,int param_2);
extern int func_00415C34(int param_1,int param_2);

// USA 00416158 <- EU 00416138 (Ghidra, non-matching)

undefined4 func_00416158(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 uVar4;
  
  puVar5 = *(undefined4 **)(param_1 + 0x1c);
  piVar2 = (int *)func_00412F58();
  puVar3 = (undefined4 *)func_00412A3C(piVar2,0xf);
  puVar3[3] = piVar2[0x61];
  *(undefined1 *)(puVar3 + 1) = 0x28;
  if (*(char *)(puVar5 + 7) == '\0') {
    uVar4 = func_00415838(puVar5,(int)puVar3);
    uVar1 = (undefined1)uVar4;
  }
  else if (*(char *)(puVar5 + 7) == '\x01') {
    uVar4 = func_00415C34((int)puVar5,(int)puVar3);
    uVar1 = (undefined1)uVar4;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(puVar3 + 5) = uVar1;
  func_00412C68((int)piVar2,puVar3);
  return func_00412C8C(piVar2,1);
}

