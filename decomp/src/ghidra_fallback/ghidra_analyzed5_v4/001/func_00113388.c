#include "ghidra_types.h"

extern uint DAT_0011389c;
extern uint DAT_001138a0;
extern uint DAT_001138a4;
extern uint *DAT_001138a8;
extern uint DAT_001138ac;
extern uint DAT_001138b0;

// USA 00113388 <- EU 00113388 (Ghidra, non-matching)
// GLOBAL DAT_0011389c uint
// GLOBAL DAT_001138a0 uint
// GLOBAL DAT_001138a4 uint
// GLOBAL DAT_001138a8 uint *
// GLOBAL DAT_001138ac uint
// GLOBAL DAT_001138b0 uint

uint * func_00113388(int param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  uVar10 = DAT_001138a4;
  uVar9 = DAT_001138a0;
  param_2[1] = DAT_0011389c;
  param_2[3] = uVar9;
  puVar3 = param_2 + 4;
  *puVar3 = 0;
  uVar6 = 0;
  param_2[5] = uVar10;
  puVar1 = DAT_001138a8;
  param_2[6] = 0;
  param_2[7] = uVar10 + ((int)uVar9 >> 0x10);
  uVar9 = 0;
  uVar16 = *puVar1;
  param_2[8] = uVar16;
  param_2[10] = 0;
  puVar1 = param_2 + 0xc;
  uVar10 = 0;
  do {
    piVar17 = (int *)(param_1 + uVar10 * 0x70 + 0x160);
    if (*piVar17 != 0) {
      uVar4 = 0;
      uVar7 = 0;
      iVar11 = 0;
      uVar8 = 1;
      uVar9 = uVar9 + 1;
      local_78[0] = 0;
      local_78[1] = 0;
      do {
        switch(*(undefined1 *)((int)piVar17 + uVar4 + 4)) {
        case 2:
        case 6:
        case 10:
        case 0xe:
          uVar7 = uVar7 + 1 & 0xfffffffe;
          if (uVar8 < 2) {
            uVar8 = 2;
          }
          break;
        case 3:
        case 7:
        case 0xb:
        case 0xf:
          uVar7 = uVar7 + 3 & 0xfffffffc;
          if (uVar8 < 4) {
            uVar8 = 4;
          }
        }
        uVar12 = piVar17[uVar4 + 4];
        if (uVar12 == 0) break;
        uVar7 = uVar7 + uVar12;
        if (piVar17[uVar4 + 0x10] < 0) {
          local_78[(int)(uVar4 + ((uint)((int)uVar4 >> 0x1f) >> 0x1d)) >> 3] =
               local_78[(int)(uVar4 + ((uint)((int)uVar4 >> 0x1f) >> 0x1d)) >> 3] |
               (uVar12 >> 2) + 0xb << (((int)uVar4 % 8) * 4 & 0xffU);
        }
        else {
          local_78[(int)(uVar4 + ((uint)((int)uVar4 >> 0x1f) >> 0x1d)) >> 3] =
               local_78[(int)(uVar4 + ((uint)((int)uVar4 >> 0x1f) >> 0x1d)) >> 3] |
               uVar6 << (((int)uVar4 % 8) * 4 & 0xffU);
          uVar12 = ((int)uVar6 % 8) * 4;
          param_2[((int)(uVar6 + ((uint)((int)uVar6 >> 0x1f) >> 0x1d)) >> 3) + 10] =
               param_2[((int)(uVar6 + ((uint)((int)uVar6 >> 0x1f) >> 0x1d)) >> 3) + 10] |
               (uint)*(byte *)((int)piVar17 + uVar4 + 4) << (uVar12 & 0xff);
          uVar15 = uVar6 & 0xfffffff8;
          uVar6 = uVar6 + 1;
          uVar13 = *(uint *)((int)puVar3 + uVar15) & ~(0xf << (uVar12 & 0xff));
          *(uint *)((int)puVar3 + uVar15) = uVar13;
          *(uint *)((int)puVar3 + uVar15) = uVar13 | piVar17[uVar4 + 0x10] << (uVar12 & 0xff);
        }
        uVar4 = uVar4 + 1;
        iVar11 = iVar11 + 1;
      } while (uVar4 < 0xc);
      *puVar1 = *piVar17 + uVar16 * -8;
      puVar2 = puVar1 + 2;
      puVar1[1] = local_78[0];
      puVar1 = puVar1 + 3;
      *puVar2 = ((uVar7 + uVar8) - 1 & ~(uVar8 - 1)) << 0x10 | iVar11 << 0x1c | local_78[1];
    }
    uVar10 = uVar10 + 1;
    if (0xb < uVar10) {
      param_2[9] = uVar9 * 0x300000 + 0x200000 | DAT_001138ac;
      puVar2 = puVar1;
      if ((uVar9 & 1) != 0) {
        puVar2 = puVar1 + 1;
        *puVar1 = 0;
      }
      uVar9 = DAT_001138b0;
      iVar11 = 0xb;
      do {
        iVar5 = param_1 + iVar11 * 0x14;
        if (*(char *)(iVar5 + 0x6a0) != '\0') {
          *puVar2 = uVar6;
          puVar2[1] = uVar9;
          uVar10 = *(uint *)(iVar5 + 0x6ac);
          iVar14 = 0;
          if (((uVar10 & 0x7fffffff) == 0) || (iVar14 = ((uVar10 << 1) >> 0x18) - 0x40, -1 < iVar14)
             ) {
            uVar10 = iVar14 << 0x10 | (uVar10 >> 0x1f) << 0x17;
          }
          else {
            uVar10 = (uVar10 >> 0x1f) << 0x17;
          }
          uVar16 = *(uint *)(iVar5 + 0x6b0);
          iVar14 = 0;
          if (((uVar16 & 0x7fffffff) == 0) || (iVar14 = ((uVar16 << 1) >> 0x18) - 0x40, -1 < iVar14)
             ) {
            uVar16 = (uVar16 << 9) >> 0x10 | iVar14 << 0x10 | (uVar16 >> 0x1f) << 0x17;
          }
          else {
            uVar16 = (uVar16 >> 0x1f) << 0x17;
          }
          puVar2[2] = (uVar10 << 8) >> 0x18 | uVar16 << 8;
          uVar10 = *(uint *)(iVar5 + 0x6ac);
          if (((uVar10 & 0x7fffffff) == 0) || (-1 < (int)(((uVar10 << 1) >> 0x18) - 0x40))) {
            uVar10 = (uVar10 << 9) >> 0x10;
          }
          else {
            uVar10 = 0;
          }
          uVar16 = *(uint *)(iVar5 + 0x6a8);
          iVar14 = 0;
          if (((uVar16 & 0x7fffffff) == 0) || (iVar14 = ((uVar16 << 1) >> 0x18) - 0x40, -1 < iVar14)
             ) {
            uVar16 = (uVar16 << 9) >> 0x10 | iVar14 << 0x10 | (uVar16 >> 0x1f) << 0x17;
          }
          else {
            uVar16 = (uVar16 >> 0x1f) << 0x17;
          }
          puVar2[3] = (uVar16 >> 8 & 0xffff) + uVar10 * 0x10000;
          uVar10 = *(uint *)(iVar5 + 0x6a4);
          iVar14 = 0;
          if (((uVar10 & 0x7fffffff) == 0) || (iVar14 = ((uVar10 << 1) >> 0x18) - 0x40, -1 < iVar14)
             ) {
            uVar10 = (uVar10 << 9) >> 0x10 | iVar14 << 0x10 | (uVar10 >> 0x1f) << 0x17;
          }
          else {
            uVar10 = (uVar10 >> 0x1f) << 0x17;
          }
          uVar16 = *(uint *)(iVar5 + 0x6a8);
          if (((uVar16 & 0x7fffffff) == 0) || (-1 < (int)(((uVar16 << 1) >> 0x18) - 0x40))) {
            uVar16 = (uVar16 << 9) >> 0x10;
          }
          else {
            uVar16 = 0;
          }
          puVar2[4] = uVar10 & 0xffffff | uVar16 << 0x18;
          puVar2[5] = 0;
          puVar2 = puVar2 + 6;
          uVar10 = ((int)uVar6 % 8) * 4;
          puVar3[((int)uVar6 / 8) * 2] =
               puVar3[((int)uVar6 / 8) * 2] & ~(0xf << (uVar10 & 0xff)) | iVar11 << (uVar10 & 0xff);
          uVar10 = uVar6 + 0x10;
          uVar6 = uVar6 + 1;
          param_2[0xb] = param_2[0xb] | 1 << (uVar10 & 0xff);
        }
        iVar11 = iVar11 + -1;
      } while (-1 < iVar11);
      *param_2 = uVar6 - 1 | 0xa0000000;
      param_2[2] = uVar6 - 1;
      param_2[0xb] = param_2[0xb] | uVar6 * 0x10000000 + 0xf0000000;
      return puVar2;
    }
  } while( true );
}

