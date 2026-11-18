#include "ghidra_types.h"

extern int func_0010B380(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4);
extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined1 DAT_001095d0;
extern int DAT_001095d4;
extern undefined4 DAT_001095d8;
extern undefined4 DAT_001095dc;
extern undefined4 DAT_001095e0;
extern undefined4 DAT_001095e4;
extern undefined4 DAT_001095e8;

// USA 0010949C <- EU 0010949C (Ghidra, non-matching)
// GLOBAL DAT_001095d0 undefined1
// GLOBAL DAT_001095d4 int
// GLOBAL DAT_001095d8 undefined4
// GLOBAL DAT_001095dc undefined4
// GLOBAL DAT_001095e0 undefined4
// GLOBAL DAT_001095e4 undefined4
// GLOBAL DAT_001095e8 undefined4

undefined4 * func_0010949C(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(uint * *)(albw_frame + 0x4))
  local_2c = (uint *)&DAT_001095d0;
  local_30 = DAT_001095d4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  puVar2 = func_0010CE7C(param_1);
  *puVar2 = DAT_001095d8;
  puVar2[9] = puVar2 + 0xb;
  puVar2[10] = 0x20;
  *(undefined1 *)(puVar2[9] + 0x1f) = 0;
  uVar1 = DAT_001095e0;
  *(undefined1 *)puVar2[9] = 0;
  puVar2[8] = DAT_001095e4;
  *(undefined1 *)(puVar2 + 0x13) = 1;
  puVar4 = (uint *)puVar2[9];
  (**(code **)(local_30 + 8))(&local_30,*(code **)(local_30 + 8),uVar1);
  uVar3 = 0;
  do {
    if (*(char *)((int)local_2c + uVar3) == '\0') {
      if ((int)uVar3 < 0x40001) goto LAB_00109568;
      break;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x40001);
  uVar3 = 0;
LAB_00109568:
  if ((int)puVar2[10] <= (int)uVar3) {
    uVar3 = puVar2[10] - 1;
  }
  (**(code **)(local_30 + 8))(&local_30);
  func_0010E3C4(puVar4,local_2c,uVar3);
  uVar1 = DAT_001095e8;
  *(undefined1 *)((int)puVar4 + uVar3) = 0;
  *puVar2 = uVar1;
  puVar2[0x14] = 0;
  puVar2[0x15] = 0;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  func_0010B380(puVar2 + 0x14,param_2,param_3,param_4);
  return puVar2;
}

