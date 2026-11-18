#include "ghidra_types.h"

extern undefined8 func_00116428(uint *param_1,uint *param_2,uint param_3);
extern uint *DAT_005904f0;
extern int DAT_005904f4;

// USA 0059038C <- EU 00590364 (Ghidra, non-matching)
// GLOBAL DAT_005904f0 uint *
// GLOBAL DAT_005904f4 int

void func_0059038C(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  
  puVar6 = (uint *)*DAT_005904f0;
  if (puVar6 + (param_2 & 0xfffffffe) + (param_2 >> 7) * 2 + 2 < (uint *)DAT_005904f0[1]) {
    uVar10 = 0;
    if (param_2 != 0) {
      do {
        puVar7 = (uint *)(param_3 + uVar10 * 4);
        uVar1 = param_2 - uVar10;
        puVar8 = puVar7 + 1;
        if (0x80 < uVar1) {
          uVar1 = 0x80;
        }
        *puVar6 = *puVar7;
        uVar9 = uVar1 & 0xfffffffe;
        puVar6[1] = DAT_005904f4 + uVar1 * 0x100000 | param_1 | 0xf0000;
        puVar7 = puVar6;
        while (puVar6 = puVar7 + 2, (uVar1 & 0xe) != 0) {
          puVar3 = puVar8 + 1;
          *puVar6 = *puVar8;
          puVar8 = puVar8 + 2;
          puVar7[3] = *puVar3;
          uVar9 = uVar9 - 2;
          puVar7 = puVar6;
          uVar1 = uVar9;
        }
        if (uVar9 < 0x80000000) {
          iVar5 = 0;
          iVar2 = (int)((-0xf - uVar9) + ((uint)((int)(-0xf - uVar9) >> 0x1f) >> 0x1c)) >> 4;
          for (iVar11 = 0; -iVar11 != iVar2 && iVar11 <= -iVar2; iVar11 = iVar11 + 1) {
            puVar3 = puVar8 + iVar5 + -1;
            iVar4 = 8;
            puVar7 = puVar6 + iVar5 + -1;
            do {
              iVar4 = iVar4 + -1;
              puVar7[1] = puVar3[1];
              puVar3 = puVar3 + 2;
              puVar7 = puVar7 + 2;
              *puVar7 = *puVar3;
            } while (iVar4 != 0);
            iVar5 = iVar5 + 0x10;
          }
          puVar6 = puVar6 + iVar2 * -0x10;
        }
        else {
          do {
            uVar9 = uVar9 - 0x10;
            iVar2 = (int)puVar6 - (int)puVar8 >> 2;
            bVar12 = iVar2 == 0;
            iVar5 = iVar2;
            if (0 < iVar2) {
              iVar5 = 0x10 - iVar2;
              bVar12 = iVar2 == 0x10;
            }
            if (bVar12 || iVar5 < 0 != (0 < iVar2 && SBORROW4(0x10,iVar2))) {
              func_00116428(puVar6,puVar8,0x40);
              puVar8 = puVar8 + 0x10;
              puVar6 = puVar6 + 0x10;
            }
            else {
              iVar2 = 0;
              do {
                puVar3 = puVar8 + 1;
                iVar2 = iVar2 + 2;
                puVar7 = puVar6 + 1;
                *puVar6 = *puVar8;
                puVar8 = puVar8 + 2;
                puVar6 = puVar6 + 2;
                *puVar7 = *puVar3;
              } while (iVar2 < 0x10);
            }
          } while (uVar9 != 0);
        }
        uVar10 = uVar10 + 0x80;
      } while (uVar10 < param_2);
    }
    *DAT_005904f0 = (uint)puVar6;
  }
  else {
    *DAT_005904f0 = DAT_005904f0[1];
  }
  return;
}

