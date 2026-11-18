#include "ghidra_types.h"

extern void *func_0010E74C();
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_001787B4(int param_1,int param_2);
extern undefined DAT_0000000e;

// USA 00179664 <- EU 00179664 (Ghidra, non-matching)
// GLOBAL DAT_0000000e undefined

void func_00179664(int param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  short *psVar6;
  short *psVar7;
  ushort uVar8;
  short sVar9;
  short *psVar10;
  uint *puVar11;
  uint uVar12;
  short *psVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  float in_s0;
  
  puVar11 = *(uint **)(param_1 + 8);
  sVar9 = *(short *)(param_1 + 0x34);
  puVar5 = puVar11;
  do {
    sVar2 = (short)*puVar5;
    puVar4 = puVar5;
    if (sVar2 == 0) break;
    if (sVar2 == 0xe) {
      puVar4 = (uint *)((int)puVar5 + *(ushort *)((int)puVar5 + 6) + 8);
LAB_001796b0:
      bVar17 = puVar5 == (uint *)0x0;
      puVar5 = puVar4;
      if (bVar17) goto LAB_001796b8;
    }
    else {
      if (sVar2 == 0xf) {
        puVar4 = (uint *)((int)puVar5 + 6);
        goto LAB_001796b0;
      }
LAB_001796b8:
      puVar4 = (uint *)((int)puVar5 + 2);
      if ((short)*puVar5 == 10) {
        sVar9 = sVar9 + -1;
      }
    }
    puVar5 = puVar4;
  } while (sVar9 != 0);
  uVar15 = (int)puVar4 - (int)puVar11 & 0xffff;
  uVar16 = *(ushort *)(param_1 + 0x20) - uVar15;
  func_0010E74C(puVar11,(uint *)((int)puVar11 + uVar15),uVar16,in_s0);
  func_001164F4((undefined4 *)(*(int *)(param_1 + 8) + uVar16),uVar15);
  uVar15 = *(ushort *)(param_1 + 0x20) - uVar15;
  uVar14 = 0;
  uVar16 = uVar15 & 0xffff;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(short *)(param_1 + 0x20) = (short)uVar15;
  if ((int)(uint)*(ushort *)(param_1 + 6) < *(int *)(param_1 + 0x18)) {
    if (0x160 < uVar16) {
      uVar12 = 0;
      psVar13 = *(short **)(param_1 + 8);
      for (uVar15 = uVar16 >> 1; uVar15 != 0; uVar15 = uVar15 - 1) {
        if (*psVar13 == 10) {
          uVar12 = uVar12 + 1 & 0xffff;
        }
        psVar13 = psVar13 + 1;
      }
      if ((uint)*(ushort *)(param_1 + 0x34) << 1 <= uVar12) goto LAB_00179770;
    }
    func_001787B4(param_1,uVar16);
  }
LAB_00179770:
  psVar6 = *(short **)(param_1 + 8);
  psVar13 = psVar6;
  uVar8 = *(ushort *)(param_1 + 0x34);
  do {
    sVar9 = *psVar13;
    psVar10 = psVar13;
    if (sVar9 == 0) break;
    if (sVar9 == 0xe) {
      psVar10 = (short *)((int)psVar13 + (ushort)psVar13[3] + 8);
LAB_001797b8:
      bVar17 = psVar13 == (short *)0x0;
      psVar13 = psVar10;
      if (bVar17) goto LAB_001797c0;
    }
    else {
      if (sVar9 == 0xf) {
        psVar10 = psVar13 + 3;
        goto LAB_001797b8;
      }
LAB_001797c0:
      psVar10 = psVar13 + 1;
      if (*psVar13 == 10) {
        uVar8 = uVar8 - 1;
      }
    }
    psVar13 = psVar10;
  } while (uVar8 != 0);
  uVar8 = 0;
  *(short *)(param_1 + 0x30) = (short)((int)psVar10 - (int)psVar6);
  psVar13 = psVar6;
  do {
    while( true ) {
      sVar9 = *psVar13;
      if ((sVar9 == 0) ||
         (((sVar9 == 10 && (uVar8 = uVar8 + 1, *(ushort *)(param_1 + 0x34) <= uVar8)) ||
          (iVar3 = -(uint)(psVar13 < psVar6),
          bVar17 = ((int)psVar10 - (int)psVar6 & 0xffffU) < (uint)((int)psVar13 - (int)psVar6),
          (int)-(iVar3 + (uint)bVar17) < 0 !=
          (SBORROW4(0,iVar3) != SBORROW4((uint)(psVar13 < psVar6),(uint)bVar17))))))
      goto LAB_0017987c;
      if (sVar9 == 0xe) break;
      psVar7 = psVar13;
      if (sVar9 == 0xf) {
        psVar7 = psVar13 + 3;
        goto LAB_0017985c;
      }
LAB_00179884:
      psVar13 = psVar7 + 1;
    }
    psVar7 = (short *)((int)psVar13 + (ushort)psVar13[3] + 8);
LAB_0017985c:
    if (psVar13 == (short *)0x0) goto LAB_00179884;
    psVar1 = psVar13 + 1;
    if (*psVar1 == 1) {
      psVar13 = (short *)(uint)(ushort)psVar13[2];
    }
    bVar17 = psVar13 != (short *)&DAT_0000000e;
    psVar13 = psVar7;
  } while (*psVar1 != 1 || bVar17);
  uVar14 = 1;
LAB_0017987c:
  *(undefined1 *)(param_1 + 0x3f) = uVar14;
  return;
}

