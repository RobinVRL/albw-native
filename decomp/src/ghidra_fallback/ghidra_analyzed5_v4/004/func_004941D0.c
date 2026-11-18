#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_00494288;
extern undefined1 DAT_0049428c;
extern int DAT_00494294;
extern undefined4 DAT_00494298;
extern undefined4 DAT_0049429c;
extern undefined4 DAT_004942a0;

// USA 004941D0 <- EU 004941A8 (Ghidra, non-matching)
// GLOBAL DAT_00494288 undefined4
// GLOBAL DAT_0049428c undefined1
// GLOBAL DAT_00494294 int
// GLOBAL DAT_00494298 undefined4
// GLOBAL DAT_0049429c undefined4
// GLOBAL DAT_004942a0 undefined4

undefined4 * func_004941D0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  puVar3 = param_1 + 1;
  *param_1 = DAT_00494288;
  iVar1 = DAT_00494294;
  local_1c = (uint *)&DAT_0049428c;
  local_20 = DAT_00494294;
  param_1[2] = param_1 + 4;
  uVar2 = DAT_00494298;
  param_1[3] = 0x80;
  *puVar3 = uVar2;
  *(undefined1 *)(param_1[2] + 0x7f) = 0;
  *puVar3 = DAT_0049429c;
  puVar5 = (uint *)param_1[2];
  (**(code **)(iVar1 + 8))(&local_20);
  uVar4 = 0;
  do {
    if (*(char *)((int)local_1c + uVar4) == '\0') {
      if ((int)uVar4 < 0x40001) goto LAB_00494244;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_00494244:
  if ((int)param_1[3] <= (int)uVar4) {
    uVar4 = param_1[3] - 1;
  }
  (**(code **)(local_20 + 8))(&local_20);
  func_0010E3C4(puVar5,local_1c,uVar4);
  uVar2 = DAT_004942a0;
  *(undefined1 *)((int)puVar5 + uVar4) = 0;
  *puVar3 = uVar2;
  return param_1;
}

