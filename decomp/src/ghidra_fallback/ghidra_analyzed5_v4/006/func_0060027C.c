#include "ghidra_types.h"

extern int DAT_00600384;
extern undefined4 *DAT_00600388;

// USA 0060027C <- EU 00600254 (Ghidra, non-matching)
// GLOBAL DAT_00600384 int
// GLOBAL DAT_00600388 undefined4 *

void func_0060027C(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  puVar3 = DAT_00600388;
  iVar2 = DAT_00600384;
  iVar8 = 0;
  if (0 < param_1) {
    do {
      puVar4 = (uint *)0x0;
      if ((code *)*puVar3 != (code *)0x0) {
        puVar4 = (uint *)(*(code *)*puVar3)(0x10000,0x100,0,0x1c);
      }
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      uVar7 = puVar3[3];
      while( true ) {
        iVar5 = iVar2 + (uVar7 & 0x1f) * 4;
        puVar6 = *(uint **)(iVar5 + 0xa4);
        if (puVar6 == (uint *)0x0) break;
        if (*puVar6 != uVar7) {
          if (uVar7 < *puVar6) {
            *(uint *)(param_2 + iVar8 * 4) = uVar7;
            *puVar4 = uVar7;
            puVar4[6] = *(uint *)(iVar2 + (uVar7 & 0x1f) * 4 + 0xa4);
            goto LAB_006002f4;
          }
          puVar1 = (uint *)puVar6[6];
          while( true ) {
            if (puVar1 == (uint *)0x0) {
              puVar6[6] = (uint)puVar4;
              *puVar4 = uVar7;
              puVar4[6] = 0;
              *(uint *)(param_2 + iVar8 * 4) = uVar7;
              goto LAB_00600364;
            }
            if (*puVar1 == uVar7) break;
            if (uVar7 < *puVar1) {
              *(uint *)(param_2 + iVar8 * 4) = uVar7;
              *puVar4 = uVar7;
              puVar6[6] = (uint)puVar4;
              puVar4[6] = (uint)puVar1;
              goto LAB_00600364;
            }
            puVar6 = puVar1;
            puVar1 = (uint *)puVar1[6];
          }
        }
        uVar7 = uVar7 + 1;
      }
      *(uint *)(param_2 + iVar8 * 4) = uVar7;
      *puVar4 = uVar7;
      iVar5 = iVar2 + (uVar7 & 0x1f) * 4;
      puVar4[6] = 0;
LAB_006002f4:
      *(uint **)(iVar5 + 0xa4) = puVar4;
LAB_00600364:
      iVar8 = iVar8 + 1;
      puVar3[3] = uVar7 + 1;
    } while (iVar8 < param_1);
  }
  return;
}

