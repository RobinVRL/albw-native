#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern float func_001114C0(int param_1,uint *param_2);
extern float func_00111610(int param_1,uint *param_2);
extern float func_00111764(int param_1,uint *param_2);
extern int func_001118B8(int param_1);
extern undefined8 func_001118F8(int param_1,uint *param_2);
extern undefined4 DAT_00110f98;
extern undefined4 DAT_00110f9c;

// USA 00110EE8 <- EU 00110EE8 (Ghidra, non-matching)
// PARAM param_4 Stack[0x0]:4 undefined4
// GLOBAL DAT_00110f98 undefined4
// GLOBAL DAT_00110f9c undefined4

void func_00110EE8(int param_1,undefined4 param_2,byte *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float fVar4;
  undefined8 uVar5;
  
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  func_00110D44((undefined4 *)(param_1 + 8),param_3,0x11);
  uVar2 = DAT_00110f9c;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  uVar1 = DAT_00110f98;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  fVar4 = func_00111764(param_1 + 8,(uint *)0x0);
  *(float *)(param_1 + 0x28) = fVar4;
  fVar4 = func_00111610(param_1 + 8,(uint *)0x0);
  *(float *)(param_1 + 0x2c) = fVar4;
  fVar4 = func_001114C0(param_1 + 8,(uint *)0x0);
  *(float *)(param_1 + 0x30) = fVar4;
  uVar5 = func_001118F8(param_1 + 8,(uint *)0x0);
  *(int *)(param_1 + 0x34) = (int)uVar5;
  uVar3 = func_001118B8(param_1 + 8);
  if (uVar3 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  *(undefined1 *)(param_1 + 0x24) = 1;
  return;
}

