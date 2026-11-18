#include "ghidra_types.h"


// USA 0010EA08 <- EU 0010EA08 (Ghidra, non-matching)

uint * func_0010EA08(uint *param_1,uint *param_2,int param_3)

{
  undefined1 uVar1;
  uint *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  
  uVar6 = *param_1 & 0xff000000;
  bVar17 = SBORROW4(param_3,0x20);
  iVar5 = param_3 + -0x20;
  bVar16 = iVar5 < 0;
  do {
    if (bVar16 == bVar17) {
      uVar14 = param_2[-1];
      uVar13 = param_2[-2];
      uVar12 = param_2[-3];
      uVar11 = param_2[-4];
      uVar10 = param_2[-5];
      uVar9 = param_2[-6];
      uVar8 = param_2[-7];
      param_2 = param_2 + -8;
      uVar7 = *param_2;
      uVar15 = uVar6 | uVar14 >> 8;
      uVar6 = uVar7 << 0x18;
      *param_1 = uVar15;
      param_1[-1] = uVar14 << 0x18 | uVar13 >> 8;
      param_1[-2] = uVar13 << 0x18 | uVar12 >> 8;
      param_1[-3] = uVar12 << 0x18 | uVar11 >> 8;
      param_1[-4] = uVar11 << 0x18 | uVar10 >> 8;
      param_1[-5] = uVar10 << 0x18 | uVar9 >> 8;
      param_1[-6] = uVar9 << 0x18 | uVar8 >> 8;
      param_1[-7] = uVar8 << 0x18 | uVar7 >> 8;
      param_1 = param_1 + -8;
      bVar17 = SBORROW4(iVar5,0x20);
      iVar5 = iVar5 + -0x20;
      bVar16 = iVar5 < 0;
    }
  } while (bVar16 == bVar17);
  bVar17 = SBORROW4(iVar5 + 0x20,4);
  iVar5 = iVar5 + 0x1c;
  bVar16 = iVar5 < 0;
  do {
    if (bVar16 == bVar17) {
      param_2 = param_2 + -1;
      uVar7 = *param_2;
      *param_1 = uVar6 | uVar7 >> 8;
      uVar6 = uVar7 << 0x18;
      bVar17 = SBORROW4(iVar5,4);
      iVar5 = iVar5 + -4;
      bVar16 = iVar5 < 0;
      param_1 = param_1 + -1;
    }
  } while (bVar16 == bVar17);
  puVar3 = (undefined1 *)((int)param_2 + 1);
  uVar6 = iVar5 + 5;
  puVar2 = param_1 + 1;
  if ((uVar6 & 4) != 0) {
    uVar1 = *(undefined1 *)((int)param_2 + -1);
    *(char *)((int)param_1 + 3) = (char)*param_2;
    *(undefined1 *)((int)param_1 + 2) = uVar1;
    puVar3 = (undefined1 *)((int)param_2 + -3);
    uVar1 = *puVar3;
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)param_2 + -2);
    *(undefined1 *)param_1 = uVar1;
    puVar2 = param_1;
  }
  if ((uVar6 & 2) != 0) {
    puVar4 = puVar3 + -1;
    puVar3 = puVar3 + -2;
    uVar1 = *puVar3;
    *(undefined1 *)((int)puVar2 + -1) = *puVar4;
    puVar2 = (uint *)((int)puVar2 + -2);
    *(undefined1 *)puVar2 = uVar1;
  }
  if ((uVar6 & 1) != 0) {
    puVar2 = (uint *)((int)puVar2 + -1);
    *(undefined1 *)puVar2 = puVar3[-1];
  }
  return puVar2;
}

