#include "ghidra_types.h"

extern int func_0056D40C(uint *param_1,uint *param_2,uint param_3);

// USA 0056A35C <- EU 0056A334 (Ghidra, non-matching)

void func_0056A35C(uint *param_1,undefined1 *param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(uint *)(albw_frame + 0x8))
  local_18 = param_4;
  iVar3 = func_0056D40C(param_1,&local_18,8);
  if (iVar3 == 0) {
    *param_2 = 0x7f;
    if (param_4 == 0) {
      return;
    }
    puVar7 = param_3 + -1;
    if ((param_4 & 1) != 0) {
      *param_3 = 0;
      puVar7 = param_3;
    }
    for (uVar6 = param_4 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    }
    return;
  }
  puVar7 = (undefined1 *)((int)param_1 + local_18);
  *param_2 = *puVar7;
  uVar6 = (uint)(byte)puVar7[1];
  if (uVar6 < 3) {
    if ((int)(uVar6 - 1) < 1) goto LAB_0056a408;
  }
  else {
    uVar6 = 2;
  }
  puVar4 = puVar7 + 1;
  puVar5 = param_3 + -1;
  if ((uVar6 & 1) == 0) {
    puVar4 = puVar7 + 2;
    *param_3 = *puVar4;
    puVar5 = param_3;
  }
  uVar1 = puVar4[1];
  for (iVar3 = (int)(uVar6 - 1) >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
    uVar2 = puVar4[2];
    puVar5[1] = uVar1;
    uVar1 = puVar4[3];
    puVar5 = puVar5 + 2;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 2;
  }
LAB_0056a408:
  if ((int)(uVar6 - 1) < 0) {
    return;
  }
  param_3[uVar6 - 1] = puVar7[uVar6 + 1];
  return;
}

