#include "ghidra_types.h"

extern int func_00521018(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00206fb0;
extern undefined4 DAT_00206fb4;
extern undefined4 DAT_00206fb8;

// USA 00206E44 <- EU 00206E44 (Ghidra, non-matching)
// GLOBAL DAT_00206fb0 undefined4
// GLOBAL DAT_00206fb4 undefined4
// GLOBAL DAT_00206fb8 undefined4

undefined4 func_00206E44(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x900) + 1;
  *(int *)(param_1 + 0x900) = iVar6;
  if (*(int *)(param_1 + 0x8fc) <= iVar6) {
    *(undefined1 *)(param_1 + 0x905) = 0;
    return func_0065D4EC((undefined4 *)(param_1 + 0x8bc),3);
  }
  bVar4 = func_00521018(param_1);
  if (!bVar4) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x905) = 1;
  bVar5 = *(char *)(param_1 + 0x911) + 1;
  *(byte *)(param_1 + 0x911) = bVar5;
  if (1 < bVar5) {
    *(undefined1 *)(param_1 + 0x911) = 0;
    uVar3 = DAT_00206fb4;
    uVar2 = DAT_00206fb0;
    *(byte *)(param_1 + 0x904) = *(char *)(param_1 + 0x904) + 1U & 3;
    *(undefined4 *)(param_1 + 0x3e4) = uVar2;
    *(undefined4 *)(param_1 + 0x3dc) = uVar2;
    cVar1 = *(char *)(param_1 + 0x904);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x3e4) = uVar3;
    }
    else if (cVar1 == '\x01') {
      *(undefined4 *)(param_1 + 0x3dc) = uVar3;
    }
    else if (cVar1 == '\x02') {
      *(undefined4 *)(param_1 + 0x3e4) = DAT_00206fb8;
    }
    else if (cVar1 == '\x03') {
      *(undefined4 *)(param_1 + 0x3dc) = DAT_00206fb8;
    }
    cVar1 = *(char *)(param_1 + 0x904);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 1000) = 0;
      return 0;
    }
    if (cVar1 == '\x01') {
      iVar6 = 0x40000000;
    }
    else if (cVar1 == '\x02') {
      iVar6 = -0x80000000;
    }
    else {
      if (cVar1 != '\x03') {
        return 0;
      }
      iVar6 = -0x40000000;
    }
    goto LAB_00206fa8;
  }
  if ((uint)(int)*(char *)(param_1 + 0x904) < 4) {
    uVar7 = (int)*(char *)(param_1 + 0x904) + 2U & 3;
  }
  else {
    uVar7 = 0xffffffff;
  }
  *(char *)(param_1 + 0x904) = (char)uVar7;
  if (uVar7 == 0) {
LAB_00206f84:
    *(float *)(param_1 + 0x3e4) = -*(float *)(param_1 + 0x3e4);
  }
  else if (uVar7 == 1) {
LAB_00206f94:
    *(float *)(param_1 + 0x3dc) = -*(float *)(param_1 + 0x3dc);
  }
  else {
    if (uVar7 == 2) goto LAB_00206f84;
    if (uVar7 == 3) goto LAB_00206f94;
  }
  iVar6 = *(int *)(param_1 + 1000) + -0x80000000;
LAB_00206fa8:
  *(int *)(param_1 + 1000) = iVar6;
  return 0;
}

