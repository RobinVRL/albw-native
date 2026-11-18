#include "ghidra_types.h"

extern undefined4 *DAT_00590360;

// USA 005902C4 <- EU 0059029C (Ghidra, non-matching)
// GLOBAL DAT_00590360 undefined4 *

void * func_005902C4(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  puVar1 = DAT_00590360;
  puVar2 = (undefined4 *)*DAT_00590360;
  if (puVar2 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < (undefined4 *)DAT_00590360[1]) {
    uVar6 = 0;
    puVar3 = puVar2;
    if (param_2 != 0) {
      do {
        uVar4 = param_2 - uVar6;
        if (0x80 < uVar4) {
          uVar4 = 0x80;
        }
        uVar7 = uVar4 >> 1;
        *puVar2 = param_3;
        puVar3 = puVar2 + 2;
        puVar2[1] = uVar4 * 0x100000 - 0x100000 | param_1 + uVar6 | 0x800f0000;
        if (uVar7 < 0x80000000) {
          if (uVar7 != 0 && -1 < (int)(uVar7 * 2)) {
            puVar2 = puVar2 + 1;
            iVar5 = (int)(uVar7 * 2) >> 1;
            do {
              puVar2[1] = param_3;
              iVar5 = iVar5 + -1;
              puVar2 = puVar2 + 2;
              *puVar2 = param_3;
            } while (iVar5 != 0);
            puVar3 = puVar3 + uVar7 * 2;
          }
        }
        else {
          do {
            puVar2 = puVar3 + 1;
            *puVar3 = param_3;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 2;
            *puVar2 = param_3;
          } while (uVar7 != 0);
        }
        uVar6 = uVar6 + 0x80;
        puVar2 = puVar3;
      } while (uVar6 < param_2);
    }
    *puVar1 = puVar3;
  }
  else {
    *DAT_00590360 = (undefined4 *)DAT_00590360[1];
  }
  return (void *)param_1;
}

