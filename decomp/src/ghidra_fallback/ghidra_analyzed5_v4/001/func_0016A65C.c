#include "ghidra_types.h"

extern uint DAT_0016a7d4;
extern uint DAT_0016a7d8;

// USA 0016A65C <- EU 0016A65C (Ghidra, non-matching)
// GLOBAL DAT_0016a7d4 uint
// GLOBAL DAT_0016a7d8 uint

void func_0016A65C(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (0 < (int)*param_1) {
    do {
      if (uVar7 < *param_1) {
        puVar5 = (undefined4 *)(param_1[1] + uVar7 * 4);
      }
      else {
        puVar5 = (undefined4 *)param_1[1];
      }
      uVar7 = uVar7 + 1;
      *puVar5 = 0xff000000;
    } while ((int)uVar7 < (int)*param_1);
  }
  uVar7 = 0;
  if (0 < (int)param_1[2]) {
    uVar2 = DAT_0016a7d4 >> 8;
    uVar1 = DAT_0016a7d4 << 0x18;
    uVar3 = DAT_0016a7d4 >> 0x10;
    uVar4 = DAT_0016a7d4 >> 0x18;
    do {
      if (uVar7 < param_1[2]) {
        puVar6 = (uint *)(param_1[3] + uVar7 * 4);
      }
      else {
        puVar6 = (uint *)param_1[3];
      }
      uVar7 = uVar7 + 1;
      *puVar6 = uVar1 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4;
    } while ((int)uVar7 < (int)param_1[2]);
  }
  uVar7 = 0;
  if (0 < (int)param_1[4]) {
    uVar2 = DAT_0016a7d8 >> 8;
    uVar1 = DAT_0016a7d8 << 0x18;
    uVar3 = DAT_0016a7d8 >> 0x10;
    uVar4 = DAT_0016a7d8 >> 0x18;
    do {
      if (uVar7 < param_1[4]) {
        puVar6 = (uint *)(param_1[5] + uVar7 * 4);
      }
      else {
        puVar6 = (uint *)param_1[5];
      }
      uVar7 = uVar7 + 1;
      *puVar6 = uVar1 | (uVar2 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4;
    } while ((int)uVar7 < (int)param_1[4]);
  }
  puVar6 = param_1 + 6;
  uVar7 = 0;
  if (0 < (int)*puVar6) {
    do {
      if (uVar7 < *puVar6) {
        puVar5 = (undefined4 *)(param_1[7] + uVar7 * 4);
      }
      else {
        puVar5 = (undefined4 *)param_1[7];
      }
      uVar7 = uVar7 + 1;
      *puVar5 = 0xff000000;
    } while ((int)uVar7 < (int)*puVar6);
  }
  return;
}

