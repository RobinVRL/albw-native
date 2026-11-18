#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010DB90(void);
extern int func_001E5A50(uint *param_1,int *param_2,uint param_3);
extern uint DAT_004c5c48;
extern undefined *DAT_004c5c4c;
extern undefined4 DAT_004c5c50;
extern int DAT_004c5c54;

// USA 004C5B2C <- EU 004C5B04 (Ghidra, non-matching)
// GLOBAL DAT_004c5c48 uint
// GLOBAL DAT_004c5c4c undefined *
// GLOBAL DAT_004c5c50 undefined4
// GLOBAL DAT_004c5c54 int

uint * func_004C5B2C(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar1 = DAT_004c5c48;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = func_00100118(param_1 + 0x38,DAT_004c5c4c,0x2c4,uVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + -4) = 0;
    *(undefined4 *)(iVar2 + -8) = 0;
    *(int *)(iVar2 + -0x10) = iVar2;
    *(uint *)(iVar2 + -0xc) = uVar1;
  }
  iVar3 = iVar2 + 0x3db54;
  *(int *)(iVar2 + 0x3db58) = iVar3;
  *(undefined4 *)(iVar2 + 0x3db5c) = 0;
  *(undefined4 *)(iVar2 + 0x3db60) = 0xffffffff;
  *(int *)iVar3 = iVar3;
  iVar3 = iVar2 + 0x3db64;
  *(int *)(iVar2 + 0x3db68) = iVar3;
  *(undefined4 *)(iVar2 + 0x3db6c) = 0;
  *(undefined4 *)(iVar2 + 0x3db70) = 0xffffffff;
  *(int *)iVar3 = iVar3;
  iVar3 = iVar2 + 0x3db74;
  *(int *)(iVar2 + 0x3db78) = iVar3;
  *(undefined4 *)(iVar2 + 0x3db7c) = 0;
  *(undefined4 *)(iVar2 + 0x3db80) = 0xffffffff;
  *(int *)iVar3 = iVar3;
  piVar4 = (int *)func_0010DB90();
  puVar5 = func_001E5A50((uint *)(iVar2 + 0x3db84),piVar4,uVar1);
  iVar2 = DAT_004c5c54;
  puVar6 = puVar5 + -0xf6ef;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 7) = 0;
  *(undefined4 *)(iVar2 + 4 + (int)puVar6) = 0;
  *(undefined4 *)(iVar2 + (int)puVar6) = 0;
  *(undefined4 *)(iVar2 + 8 + (int)puVar6) = 0;
  *(undefined4 *)(iVar2 + 0xc + (int)puVar6) = 0;
  *(undefined4 *)(iVar2 + 0x10 + (int)puVar6) = 0;
  *(undefined4 *)(iVar2 + -0x44 + (int)puVar6) = 0x2d8;
  *(undefined4 *)(iVar2 + -0x34 + (int)puVar6) = 0x2d8;
  *(undefined4 *)(iVar2 + -0x24 + (int)puVar6) = 0x2d8;
  return puVar6;
}

