#include "ghidra_types.h"


// USA 0010E66C <- EU 0010E66C (Ghidra, non-matching)

undefined8 func_0010E66C(uint *param_1,uint *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  uint *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  uVar7 = *param_1 & 0xffffff;
  bVar18 = SBORROW4(param_3,0x20);
  iVar6 = param_3 + -0x20;
  bVar17 = iVar6 < 0;
  if (0x1f < param_3) {
    do {
      if (bVar17 == bVar18) {
        uVar8 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        uVar13 = param_2[4];
        uVar14 = param_2[5];
        uVar15 = param_2[6];
        uVar16 = param_2[7];
        param_2 = param_2 + 8;
        uVar9 = uVar7 | uVar8 << 0x18;
        uVar7 = uVar16 >> 8;
        *param_1 = uVar9;
        param_1[1] = uVar8 >> 8 | uVar10 << 0x18;
        param_1[2] = uVar10 >> 8 | uVar11 << 0x18;
        param_1[3] = uVar11 >> 8 | uVar12 << 0x18;
        param_1[4] = uVar12 >> 8 | uVar13 << 0x18;
        param_1[5] = uVar13 >> 8 | uVar14 << 0x18;
        param_1[6] = uVar14 >> 8 | uVar15 << 0x18;
        param_1[7] = uVar15 >> 8 | uVar16 << 0x18;
        param_1 = param_1 + 8;
        bVar18 = SBORROW4(iVar6,0x20);
        iVar6 = iVar6 + -0x20;
        bVar17 = iVar6 < 0;
      }
    } while (bVar17 == bVar18);
  }
  bVar18 = SBORROW4(iVar6 + 0x20,4);
  iVar6 = iVar6 + 0x1c;
  bVar17 = iVar6 < 0;
  do {
    if (bVar17 == bVar18) {
      uVar8 = *param_2;
      *param_1 = uVar7 | uVar8 << 0x18;
      uVar7 = uVar8 >> 8;
      bVar18 = SBORROW4(iVar6,4);
      iVar6 = iVar6 + -4;
      bVar17 = iVar6 < 0;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  } while (bVar17 == bVar18);
  puVar5 = (undefined1 *)((int)param_2 + -3);
  uVar7 = iVar6 + 7;
  if ((uVar7 & 4) != 0) {
    uVar1 = *(undefined1 *)((int)param_2 + -2);
    *(undefined1 *)param_1 = *puVar5;
    *(undefined1 *)((int)param_1 + 1) = uVar1;
    puVar5 = (undefined1 *)((int)param_2 + 1);
    uVar8 = *param_2;
    puVar3 = (undefined1 *)((int)param_1 + 3);
    *(undefined1 *)((int)param_1 + 2) = *(undefined1 *)((int)param_2 + -1);
    param_1 = param_1 + 1;
    *puVar3 = (char)uVar8;
  }
  if ((uVar7 & 2) != 0) {
    puVar3 = puVar5 + 1;
    uVar1 = *puVar5;
    puVar5 = puVar5 + 2;
    uVar2 = *puVar3;
    puVar3 = (undefined1 *)((int)param_1 + 1);
    *(undefined1 *)param_1 = uVar1;
    param_1 = (uint *)((int)param_1 + 2);
    *puVar3 = uVar2;
  }
  puVar4 = param_1;
  puVar3 = puVar5;
  if ((uVar7 & 1) != 0) {
    puVar3 = puVar5 + 1;
    puVar4 = (uint *)((int)param_1 + 1);
    *(undefined1 *)param_1 = *puVar5;
  }
  return CONCAT44(puVar3,puVar4);
}

