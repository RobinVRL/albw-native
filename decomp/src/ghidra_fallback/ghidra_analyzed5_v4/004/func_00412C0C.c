#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);

// USA 00412C0C <- EU 00412BEC (Ghidra, non-matching)

int func_00412C0C(int *param_1,undefined1 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)func_00412BB4();
  puVar2 = (undefined4 *)func_00412A3C(piVar1,6);
  puVar2[3] = piVar1[0x61];
  *(undefined1 *)(puVar2 + 1) = 9;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar2[4] = uVar3;
  *(undefined1 *)(puVar2 + 5) = param_2;
  if ((undefined4 *)piVar1[0x5c] == (undefined4 *)0x0) {
    piVar1[0x5b] = (int)puVar2;
  }
  else {
    *(undefined4 *)piVar1[0x5c] = puVar2;
  }
  piVar1[0x5c] = (int)puVar2;
  *puVar2 = 0;
  return piVar1[0x5d];
}

