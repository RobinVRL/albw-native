#include "ghidra_types.h"

extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern int func_00412C8C(int *param_1,int param_2);
extern int func_00412F58(void);
extern int func_00416204(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5);
extern int func_004169CC(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,int param_5);

// USA 00416044 <- EU 00416024 (Ghidra, non-matching)

undefined4 func_00416044(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  puVar4 = *(undefined4 **)(param_1 + 0x44);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  uVar6 = *(uint *)(param_1 + 0x40);
  if (*(char *)((int)puVar4 + 0x55) != '\0') {
    return 0;
  }
  piVar2 = (int *)func_00412F58();
  puVar3 = (undefined4 *)func_00412A3C(piVar2,0x14);
  puVar3[3] = piVar2[0x61];
  *(undefined1 *)(puVar3 + 1) = 0x29;
  if (*(char *)(puVar4 + 7) == '\0') {
    uVar5 = func_00416204(puVar4,(int)puVar3,param_1 + 0x1c,uVar5,uVar6);
    uVar1 = (undefined1)uVar5;
  }
  else if (*(char *)(puVar4 + 7) == '\x01') {
    uVar5 = func_004169CC((int)puVar4,(int)puVar3,(undefined4 *)(param_1 + 0x1c),uVar5,uVar6);
    uVar1 = (undefined1)uVar5;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(puVar3 + 5) = uVar1;
  puVar3[4] = puVar4[4];
  func_00412C68((int)piVar2,puVar3);
  return func_00412C8C(piVar2,1);
}

