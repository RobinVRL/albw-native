#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined1 DAT_00493348;
extern int DAT_0049334c;
extern undefined4 DAT_00493350;
extern undefined4 DAT_00493354;
extern undefined4 DAT_00493358;
extern undefined4 DAT_0049335c;
extern undefined4 DAT_00493360;

// USA 00493250 <- EU 00493228 (Ghidra, non-matching)
// GLOBAL DAT_00493348 undefined1
// GLOBAL DAT_0049334c int
// GLOBAL DAT_00493350 undefined4
// GLOBAL DAT_00493354 undefined4
// GLOBAL DAT_00493358 undefined4
// GLOBAL DAT_0049335c undefined4
// GLOBAL DAT_00493360 undefined4

void func_00493250(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(uint * *)(albw_frame + 0xc))
  local_24 = (uint *)&DAT_00493348;
  local_28 = DAT_0049334c;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  puVar2 = func_0010CE7C(param_1);
  puVar3 = puVar2 + 8;
  *puVar2 = DAT_00493350;
  puVar2[9] = puVar2 + 0xb;
  uVar1 = DAT_00493354;
  puVar2[10] = 0x20;
  *puVar3 = uVar1;
  *(undefined1 *)(puVar2[9] + 0x1f) = 0;
  *puVar3 = DAT_00493358;
  puVar5 = (uint *)puVar2[9];
  (**(code **)(local_28 + 8))(&local_28);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_24 + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_004932e0;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_004932e0:
  if ((int)puVar2[10] <= (int)uVar4) {
    uVar4 = puVar2[10] - 1;
  }
  (**(code **)(local_28 + 8))(&local_28);
  func_0010E3C4(puVar5,local_24,uVar4);
  uVar1 = DAT_0049335c;
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  *puVar3 = uVar1;
  *puVar2 = DAT_00493360;
  if (param_3 == 0) {
    puVar2[0x13] = param_2 + 0x1fU & 0xffffffe0;
    puVar2[0x14] = 0;
  }
  else {
    puVar2[0x13] = param_2;
    puVar2[0x14] = param_3;
  }
  return;
}

