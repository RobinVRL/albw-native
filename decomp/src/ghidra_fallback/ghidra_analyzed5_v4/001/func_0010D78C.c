#include "ghidra_types.h"

extern int func_0010CAE0(undefined4 *param_1,int *param_2);
extern int func_0010CE7C(undefined4 *param_1);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined1 DAT_0010d8d4;
extern int DAT_0010d8dc;
extern undefined4 DAT_0010d8e0;
extern undefined4 DAT_0010d8e4;
extern undefined4 DAT_0010d8e8;
extern undefined4 DAT_0010d8ec;
extern undefined4 DAT_0010d8f0;
extern undefined DAT_0010d8f4;
extern undefined4 DAT_0010d8f8;

// USA 0010D78C <- EU 0010D78C (Ghidra, non-matching)
// GLOBAL DAT_0010d8d4 undefined1
// GLOBAL DAT_0010d8dc int
// GLOBAL DAT_0010d8e0 undefined4
// GLOBAL DAT_0010d8e4 undefined4
// GLOBAL DAT_0010d8e8 undefined4
// GLOBAL DAT_0010d8ec undefined4
// GLOBAL DAT_0010d8f0 undefined4
// GLOBAL DAT_0010d8f4 undefined
// GLOBAL DAT_0010d8f8 undefined4

undefined4 * func_0010D78C(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined * *)(albw_frame + 0xc))
  iVar1 = DAT_0010d8dc;
  local_2c = (uint *)&DAT_0010d8d4;
  local_30 = DAT_0010d8dc;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  puVar3 = func_0010CE7C(param_1);
  *puVar3 = DAT_0010d8e0;
  puVar3[9] = puVar3 + 0xb;
  puVar3[10] = 0x20;
  *(undefined1 *)(puVar3[9] + 0x1f) = 0;
  uVar2 = DAT_0010d8e8;
  *(undefined1 *)puVar3[9] = 0;
  puVar3[8] = DAT_0010d8ec;
  *(undefined1 *)(puVar3 + 0x13) = 1;
  puVar7 = (uint *)puVar3[9];
  (**(code **)(local_30 + 8))(&local_30,*(code **)(local_30 + 8),uVar2);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_2c + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_0010d850;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_0010d850:
  if ((int)puVar3[10] <= (int)uVar6) {
    uVar6 = puVar3[10] - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar7,local_2c,uVar6);
  uVar2 = DAT_0010d8f0;
  *(undefined1 *)((int)puVar7 + uVar6) = 0;
  *puVar3 = uVar2;
  puVar3[0x14] = 0;
  puVar4 = (undefined4 *)func_0010CF28(0x58,param_2,4);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    local_24 = &DAT_0010d8f4;
    local_28 = iVar1;
    puVar5 = func_0010CAE0(puVar4,&local_28);
    *puVar5 = DAT_0010d8f8;
  }
  puVar3[0x14] = puVar5;
  return puVar3;
}

